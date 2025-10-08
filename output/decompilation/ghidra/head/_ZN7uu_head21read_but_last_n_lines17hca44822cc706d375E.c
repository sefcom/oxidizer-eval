undefined  [16]
_ZN7uu_head21read_but_last_n_lines17hca44822cc706d375E
          (undefined8 param_1,long param_2,undefined param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001fe700)();
  local_30 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001fe8d8)(&local_20);
  if (param_2 == 0) {
    auVar4 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17hb3883f8d729b9349E
                       (&local_28,&local_30);
    uVar2 = auVar4._8_8_;
    if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_001674e4;
  }
  else {
                    /* try { // try from 00167485 to 001674da has its CatchHandler @ 001674fd */
    auVar4 = _ZN7uu_head4take20copy_all_but_n_lines17h428c48894653b2edE
                       (param_1,&local_30,param_2,param_3);
    uVar2 = auVar4._8_8_;
    if (((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
       (uVar2 = (*(code *)
                  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_001fe798
                )(&local_30), uVar2 == 0)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar4._8_8_;
      auVar4 = auVar1 << 0x40;
      goto LAB_001674e4;
    }
  }
  uVar3 = _ZN7uu_head20wrap_in_stdout_error17hab33c9ac82738ceaE(uVar2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = 1;
LAB_001674e4:
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hecf63a5426e74aa1E(local_30);
  return auVar4;
}