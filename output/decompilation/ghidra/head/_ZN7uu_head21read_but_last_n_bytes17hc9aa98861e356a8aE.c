undefined  [16]
_ZN7uu_head21read_but_last_n_bytes17hc9aa98861e356a8aE(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001fe700)();
  local_20 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001fe8d8)(&local_18);
                    /* try { // try from 001673d8 to 0016740b has its CatchHandler @ 00167432 */
  auVar4 = _ZN7uu_head4take20copy_all_but_n_bytes17h91484b8a539ab948E(param_1,&local_20,param_2);
  lVar2 = auVar4._8_8_;
  lVar1 = lVar2;
  if (((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
     (lVar1 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_001fe798
              )(&local_20), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = _ZN7uu_head20wrap_in_stdout_error17hab33c9ac82738ceaE(lVar1);
    uVar3 = 1;
  }
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hecf63a5426e74aa1E(local_20);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}