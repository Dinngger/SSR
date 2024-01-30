#ifndef __GRAPH_L0_H__
#define __GRAPH_L0_H__

#include <adf.h>
#include "para_L0.h"
#include <stdio.h>
using namespace adf;


template <int COL_OFFSET, int ROW_OFFSET>
class simpleGraph_k1_B6_L0: public graph {
  private:
    kernel mm[L0_NUM_KERNEL];

  public:
    port<input> in0[L0_NUM_KERNEL],in1[L0_NUM_KERNEL];
    port<output> out;
    
    simpleGraph_k1_B6_L0() {
      
      for (int i=0; i<L0_NUM_KERNEL;i++){
        if(i==0){
          mm[i] = kernel::create(mm1_kernel0_L0);
          source(mm[i]) = "mm1_kernel0_L0.cc";
        }
        else if(i==L0_NUM_KERNEL-1){
          mm[i] = kernel::create(mm1_kernel2_L0);
          source(mm[i]) = "mm1_kernel2_L0.cc";
        }
        
        else{
          mm[i] = kernel::create(mm1_kernel1_L0);
          source(mm[i]) = "mm1_kernel1_L0.cc";
        }
        
        runtime<ratio>(mm[i]) = 1;
        if ((ROW_OFFSET%2)==0){
          adf::location<kernel>(mm[i]) = adf::tile(COL_OFFSET+i,ROW_OFFSET);
        }
        else{
          adf::location<kernel>(mm[i]) = adf::tile(COL_OFFSET-i,ROW_OFFSET);
        }
      }

      for (int i=0; i<L0_NUM_KERNEL;i++){
        if ((ROW_OFFSET%2)==0){
          location<buffer>(mm[i].in[0]) =
          { address(COL_OFFSET+i, ROW_OFFSET+1, 0x0000), 
            address(COL_OFFSET+i, ROW_OFFSET+1, 0x2000)};
          location<buffer>(mm[i].in[1]) =
          { address(COL_OFFSET+i, ROW_OFFSET, 0x4000), 
            address(COL_OFFSET+i, ROW_OFFSET, 0x6000)};
          location<stack>(mm[i]) = address(COL_OFFSET+i, ROW_OFFSET, 0x7000);
        }
        else{
          location<buffer>(mm[i].in[0]) =
          { address(COL_OFFSET-i, ROW_OFFSET-1, 0x0000), 
            address(COL_OFFSET-i, ROW_OFFSET-1, 0x2000)};
          location<buffer>(mm[i].in[1]) =
          { address(COL_OFFSET-i, ROW_OFFSET, 0x4000), 
            address(COL_OFFSET-i, ROW_OFFSET, 0x6000)};
          location<stack>(mm[i]) = address(COL_OFFSET-i, ROW_OFFSET, 0x7000);
        }
      }


      for (int i=0; i<L0_NUM_KERNEL;i++){
        connect<window<L0_h1*L0_w1>>(in0[i], mm[i].in[0]);
        connect<window<L0_w1*L0_w2>>(in1[i], mm[i].in[1]);
      }

      for (int i=0; i<L0_NUM_KERNEL;i++){
        if(i==L0_NUM_KERNEL-1){
          connect<stream>(mm[i].out[0], out);
        }
        else{
          connect<cascade>(mm[i].out[0], mm[i+1].in[2]);
        }
      }
      

    };
    
};

#endif /**********__GRAPH_H__**********/