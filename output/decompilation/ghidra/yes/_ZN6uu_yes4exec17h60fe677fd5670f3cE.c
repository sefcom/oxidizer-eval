ulong _ZN6uu_yes4exec17h60fe677fd5670f3cE(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001de270)();
  uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001de2c8)(&local_28);
  local_30 = uVar3;
                    /* try { // try from 0015142f to 00151434 has its CatchHandler @ 0015148d */
  uVar2 = (*(code *)PTR__ZN6uucore8features7signals18enable_pipe_errors17he7938a115a9dd81bE_001de2d0
          )();
  puVar1 = 
  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001de2d8
  ;
  if (uVar2 == 0x86) {
    do {
                    /* try { // try from 00151450 to 0015145b has its CatchHandler @ 00151492 */
      uVar4 = (*(code *)puVar1)(&local_30,param_1,param_2);
      uVar3 = local_30;
    } while (uVar4 == 0);
  }
  else {
    uVar4 = (ulong)uVar2 << 0x20 | 2;
  }
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hacba85391fa2ffb8E(uVar3);
  return uVar4;
}