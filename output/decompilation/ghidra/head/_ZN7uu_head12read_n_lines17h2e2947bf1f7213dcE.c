undefined  [16]
_ZN7uu_head12read_n_lines17h2e2947bf1f7213dcE
          (undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40;
  undefined local_38 [40];
  
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_58 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001fe700)();
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001fe8d8)(&local_58);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h13859eb057f4970aE
            (local_38,uVar1);
                    /* try { // try from 00167338 to 00167367 has its CatchHandler @ 0016738e */
  auVar4 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17h5f0a084e30ba61b4E
                     (&local_50,local_38);
  lVar3 = auVar4._8_8_;
  lVar2 = lVar3;
  if (((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
     (lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h941209f5da736020E
                        (local_38), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    lVar3 = _ZN7uu_head20wrap_in_stdout_error17hab33c9ac82738ceaE(lVar2);
    uVar1 = 1;
  }
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17he01ca7daab2526caE
            (local_38);
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}