long _ZN5uu_wc11print_stats17hc5ca112509d551a7E
               (long param_1,undefined8 *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined **local_130;
  undefined8 local_128;
  char ***local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  long local_f8;
  undefined8 *local_f0;
  undefined **local_e8;
  char **local_e0;
  code *local_d8;
  long *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_a0;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_88;
  undefined local_80;
  undefined8 local_78;
  undefined local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  char ***local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  local_100 = param_4;
  local_f8 = param_3;
  local_b0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ffa48)();
  local_150 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001ffcf0)(&local_b0);
  local_a8 = param_2[2];
  local_a0 = *(undefined *)(param_1 + 0x1b);
  local_98 = param_2[3];
  local_80 = *(undefined *)(param_1 + 0x18);
  local_90 = *(undefined *)(param_1 + 0x19);
  local_78 = *param_2;
  local_88 = param_2[1];
  local_70 = *(undefined *)(param_1 + 0x1c);
  local_68 = param_2[4];
  local_b0 = CONCAT71(local_b0._1_7_,*(undefined *)(param_1 + 0x1a));
  local_148 = (char *)0x1;
  local_140 = 0;
  local_e8 = &local_60;
  local_f0 = &local_b0;
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17hb5039a33fc84877eE
                    (&local_f0);
  if (lVar3 != 0) {
    if (0xffff < param_5) {
      local_138 = lVar3 + 8;
      local_130 = &PTR_DAT_001f9348;
      local_128 = 1;
      local_120 = (char ***)0x8;
      local_118 = 0;
      uStack_110 = 0;
                    /* try { // try from 0016a5af to 0016a5c0 has its CatchHandler @ 0016a5dc */
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_001ff948)
                (&local_130,&PTR_s_src_uu_wc_src_wc_rs_001f9368);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    do {
      local_138 = lVar3 + 8;
      local_e0 = &local_148;
      local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
      local_d0 = &local_138;
      local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2d159e5c1bc14acaE;
      local_c0 = 0;
      local_b8 = (undefined2)param_5;
      local_60 = &DAT_0011a470;
      local_58 = 2;
      local_40 = &DAT_0011a5b0;
      local_38 = 2;
      local_48 = 3;
      local_50 = &local_e0;
                    /* try { // try from 0016a45d to 0016a467 has its CatchHandler @ 0016a5da */
      lVar3 = _ZN3std2io5Write9write_fmt17h441ee91dd5daaf10E(&local_150,&local_60);
      if (lVar3 != 0) goto LAB_0016a561;
      local_148 = " ";
      local_140 = 1;
      lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17hb5039a33fc84877eE
                        (&local_f0);
    } while (lVar3 != 0);
  }
  lVar2 = local_f8;
  if (local_f8 != 0) {
    local_e0 = &local_148;
    local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
    local_130 = (undefined **)&DAT_001187e0;
    local_128 = 1;
    uStack_110 = 0;
    local_120 = &local_e0;
    local_118 = 1;
                    /* try { // try from 0016a4e8 to 0016a4f6 has its CatchHandler @ 0016a5dc */
    lVar3 = _ZN3std2io5Write9write_fmt17h441ee91dd5daaf10E(&local_150,&local_130);
    if (lVar3 != 0) goto LAB_0016a561;
                    /* try { // try from 0016a4fc to 0016a50e has its CatchHandler @ 0016a5c3 */
    lVar3 = (*(code *)
              PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001ffc10
            )(&local_150,lVar2,local_100);
    _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17hb3c9186f2dd9bd85E
              (0x8000000000000000,lVar2);
    if (lVar3 != 0) goto LAB_0016a561;
  }
  local_130 = &PTR_s__001f9358;
  local_128 = 1;
  local_120 = (char ***)&DAT_00000008;
  local_118 = 0;
  uStack_110 = 0;
                    /* try { // try from 0016a54f to 0016a55d has its CatchHandler @ 0016a5dc */
  lVar3 = _ZN3std2io5Write9write_fmt17h441ee91dd5daaf10E(&local_150,&local_130);
LAB_0016a561:
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h5259c003b4f186dfE(local_150);
  return lVar3;
}