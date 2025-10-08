undefined  [16] _ZN7uu_head12read_n_bytes17haa0958494279c1b2E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined local_28 [24];
  
  _ZN3std2io4Read4take17h95e91396132b409cE(local_28,param_1,param_2);
  local_30 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001fe700)();
  local_38 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001fe8d8)(&local_30);
                    /* try { // try from 00167294 to 001672c0 has its CatchHandler @ 001672e6 */
  auVar4 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17h179d046fa51992bfE
                     (local_28,&local_38);
  lVar2 = auVar4._8_8_;
  lVar1 = lVar2;
  if (((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
     (lVar1 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_001fe798
              )(&local_38), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = _ZN7uu_head20wrap_in_stdout_error17hab33c9ac82738ceaE(lVar1);
    uVar3 = 1;
  }
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hecf63a5426e74aa1E(local_38);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}