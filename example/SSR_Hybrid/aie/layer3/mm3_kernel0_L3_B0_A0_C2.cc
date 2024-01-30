#include <adf.h>
#include <stdio.h>
#include "para_L3.h"
#include "parameter_L3_B0_A0_C2.h"

void mm3_kernel0_L3_B0_A0_C2(input_window_int8* __restrict matA, 
		output_stream_acc48* __restrict matC){
    
    v32int8 *restrict matB = (v32int8 *)matB_LUT0;

	v64int8 chess_storage(xa) buf_matA0=undef_v64int8(); //
	v64int8 chess_storage(xb) buf_matA1=undef_v64int8(); //
			
	v32int8 chess_storage(wc0) buf_matB0=undef_v32int8(); // 
	v32int8 chess_storage(wc1) buf_matB1=undef_v32int8(); // 

    for (int seq=0;seq<L3_bound_seq;seq++)
	    chess_prepare_for_pipelining
	    chess_loop_range(L3_bound_seq,)
    {// SEQ/4
        
        for (int oc=0;oc<L3_bound_oc;oc++)
	    chess_prepare_for_pipelining
	    chess_loop_range(L3_bound_oc,)
        { //OC/4
            v8acc48 acc0=null_v8acc48();
            v8acc48 acc1=null_v8acc48();

            buf_matA0=upd_w(buf_matA0,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;

	        buf_matA0=upd_w(buf_matA0,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);

            //K iteration 0
            acc0=mac8(acc0,buf_matA0,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA0,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;


            //K iteration 1
            acc0=mac8(acc0,buf_matA1,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA0=upd_w(buf_matA0,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA1,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210);
            buf_matA0=upd_w(buf_matA0,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;
            //K iteration 2
            acc0=mac8(acc0,buf_matA0,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA0,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;


            //K iteration 3
            acc0=mac8(acc0,buf_matA1,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA0=upd_w(buf_matA0,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA1,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210);
            buf_matA0=upd_w(buf_matA0,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;
            //K iteration 4
            acc0=mac8(acc0,buf_matA0,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA0,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210); 
            buf_matA1=upd_w(buf_matA1,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;


            //K iteration 5
            acc0=mac8(acc0,buf_matA1,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210); 
            buf_matA0=upd_w(buf_matA0,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA1,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210);
            buf_matA0=upd_w(buf_matA0,1,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;
            
            //K iteration 6
            acc0=mac8(acc0,buf_matA0,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210);
            buf_matA1=upd_w(buf_matA1,0,window_read_v32(matA));
	        window_incr(matA,L3_jumpA0);
	        buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA0,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210);
            buf_matA1=upd_w(buf_matA1,1,window_read_v32(matA));
	        window_decr(matA,L3_jumpA2);
	        buf_matB0=*matB;
            matB +=L3_jumpB0/32;


            //K iteration 7
            acc0=mac8(acc0,buf_matA1,0,0x0000,8,0x3120,buf_matB0,0,0x8800,2,0x3210);
	        writeincr_v8(matC,acc0);
            buf_matB1=*matB;
            matB +=L3_jumpB0/32;

            acc1=mac8(acc1,buf_matA1,0,0x0000,8,0x3120,buf_matB1,0,0x8800,2,0x3210);
            writeincr_v8(matC,acc1);
        }
        window_incr(matA,L3_jumpA1);
        matB -=L3_jumpB3/32;
    }
}