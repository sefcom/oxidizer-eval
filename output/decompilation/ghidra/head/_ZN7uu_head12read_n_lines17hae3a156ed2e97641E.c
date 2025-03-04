undefined8
_ZN7uu_head12read_n_lines17hae3a156ed2e97641E
          (undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined local_30 [40];
  
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_50 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  uVar1 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_50);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h11330ad61641d6f2E
            (local_30,0x4000,uVar1);
                    /* try { // try from 001b94ce to 001b94da has its CatchHandler @ 001b9504 */
  auVar2 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17h1978edcb2509def4E
                     (&local_48,local_30);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h9de5d1b0f1603542E
              (local_30);
    uVar1 = 0;
  }
  else {
    _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h9de5d1b0f1603542E
              (local_30);
  }
  return uVar1;
}