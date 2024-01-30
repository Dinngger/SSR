#ifndef __GRAPH_L3_B6_A0_C3_H__
#define __GRAPH_L3_B6_A0_C3_H__

#include <adf.h>
#include "para_L3.h"
#include <stdio.h>
using namespace adf;


template <int COL_OFFSET, int ROW_OFFSET>
class simpleGraph_k3_L3_B6_A0_C3: public graph {
  public:
    kernel mm[L3_NUM_KERNEL];
    port<input> in[L3_NUM_KERNEL];
    port<output> out;
    
    simpleGraph_k3_L3_B6_A0_C3() {
      
      mm[0] = kernel::create(mm3_kernel0_L3_B0_A0_C3);
      source(mm[0]) = "mm3_kernel0_L3_B0_A0_C3.cc";
      mm[1] = kernel::create(mm3_kernel1_L3_B1_A0_C3);
      source(mm[1]) = "mm3_kernel1_L3_B1_A0_C3.cc";
      mm[2] = kernel::create(mm3_kernel1_L3_B2_A0_C3);
      source(mm[2]) = "mm3_kernel1_L3_B2_A0_C3.cc";
      mm[3] = kernel::create(mm3_kernel1_L3_B3_A0_C3);
      source(mm[3]) = "mm3_kernel1_L3_B3_A0_C3.cc";
      mm[4] = kernel::create(mm3_kernel1_L3_B4_A0_C3);
      source(mm[4]) = "mm3_kernel1_L3_B4_A0_C3.cc";
      mm[5] = kernel::create(mm3_kernel2_L3_B5_A0_C3);
      source(mm[5]) = "mm3_kernel2_L3_B5_A0_C3.cc";

      for (int i=0; i<L3_NUM_KERNEL;i++){
        runtime<ratio>(mm[i]) = 0.9;
        if ((ROW_OFFSET%2)==0){
          adf::location<kernel>(mm[i]) = adf::tile(COL_OFFSET+i,ROW_OFFSET);
        }
        else{
          adf::location<kernel>(mm[i]) = adf::tile(COL_OFFSET-i,ROW_OFFSET);
        }
      }

      for (int i=0; i<L3_NUM_KERNEL;i++){
        if ((ROW_OFFSET%2)==0){
          location<buffer>(mm[i].in[0]) =
          { address(COL_OFFSET+i, ROW_OFFSET+1, 0x4000), 
            address(COL_OFFSET+i, ROW_OFFSET+1, 0x6000)};
          location<stack>(mm[i]) = address(COL_OFFSET+i, ROW_OFFSET, 0x0000);
          if(i==L3_NUM_KERNEL-1){
            location<buffer>(mm[i].out[0]) =
            { address(COL_OFFSET+i-1, ROW_OFFSET, 0x5000), 
              address(COL_OFFSET+i-1, ROW_OFFSET, 0x7000)};
          }
        }
        else{
          location<buffer>(mm[i].in[0]) =
          { address(COL_OFFSET-i, ROW_OFFSET-1, 0x4000), 
            address(COL_OFFSET-i, ROW_OFFSET-1, 0x6000)};
          location<stack>(mm[i]) = address(COL_OFFSET-i, ROW_OFFSET, 0x0000);
          if(i==L3_NUM_KERNEL-1){
            location<buffer>(mm[i].out[0]) =
            { address(COL_OFFSET-i+1, ROW_OFFSET, 0x5000), 
              address(COL_OFFSET-i+1, ROW_OFFSET, 0x7000)};
          }
        }
      }


      for (int i=0; i<L3_NUM_KERNEL;i++){
        connect<window<L3_KH*L3_KW*L3_SEQ>>(in[i], mm[i].in[0]);
      }

      for (int i=0; i<L3_NUM_KERNEL;i++){
        if(i==L3_NUM_KERNEL-1){
          connect<window<L3_OC*L3_SEQ>>(mm[i].out[0], out);
        }
        else{
          connect<cascade>(mm[i].out[0], mm[i+1].in[1]);
        }
      }
      

    };
    
};

#endif /**********__GRAPH_H__**********/