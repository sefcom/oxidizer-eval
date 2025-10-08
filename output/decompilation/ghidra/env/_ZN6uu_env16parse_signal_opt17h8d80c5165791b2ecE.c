undefined  [16]
_ZN6uu_env16parse_signal_opt17h8d80c5165791b2ecE
          (undefined **param_1,long param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char cVar3;
  long lVar4;
  undefined **unaff_RBX;
  undefined auVar5 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  long **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_c8 [16];
  undefined8 local_b8;
  undefined **local_b0;
  undefined local_a8 [16];
  undefined local_98;
  undefined local_90 [16];
  undefined8 local_80;
  undefined ***local_78;
  undefined *local_70;
  undefined local_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  
  if (param_3 == (undefined **)0x0) {
    lVar4 = 0;
  }
  else {
    local_e8 = (long **)((ulong)local_e8 & 0xffffffffffffff00);
    local_f8 = (undefined *)param_2;
    uStack_f0 = param_3;
    _ZN4core4iter6traits8iterator8Iterator7collect17ha7d46288ae5d93f1E(local_90,&local_f8);
                    /* try { // try from 0017249d to 001724b2 has its CatchHandler @ 001726d9 */
    local_c8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha433c616156e1495E
                         (local_80,8,0x10,&PTR_DAT_00210910);
    local_b8 = 0;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2eb1c9b2d0261f35E
              (&local_f8,local_90);
    auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9944e073377af52E
                       (&local_f8);
    if (auVar5._0_8_ != 0) {
      do {
        if (auVar5._8_8_ != 0) {
                    /* try { // try from 00172512 to 0017251f has its CatchHandler @ 001726e8 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6ca0b45f5c80c114E
                    (local_c8,auVar5._0_8_,auVar5._8_8_,&PTR_DAT_00210940);
        }
        auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9944e073377af52E
                           (&local_f8);
      } while (auVar5._0_8_ != 0);
    }
                    /* try { // try from 00172522 to 00172529 has its CatchHandler @ 001726d4 */
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17hfa054853d4deaf86E
              (&local_f8);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2eb1c9b2d0261f35E
              (local_68,local_c8);
    auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9944e073377af52E
                       (local_68);
    puVar1 = PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00219130;
    if (auVar5._0_8_ == 0) {
      unaff_RBX = param_1;
      lVar4 = 0;
    }
    else {
      do {
                    /* try { // try from 0017258c to 001725e7 has its CatchHandler @ 0017270a */
        (*(code *)puVar1)(&local_f8,auVar5._0_8_,auVar5._8_8_);
        if ((int)local_f8 == 1) {
          local_b0 = (undefined **)0x1;
          local_98 = 1;
          local_78 = &local_b0;
          local_70 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
          ;
          local_f8 = &DAT_00210868;
          uStack_f0 = (undefined **)0x2;
          local_d8 = 0;
          local_e8 = (long **)&local_78;
          local_e0 = 1;
                    /* try { // try from 0017265f to 00172697 has its CatchHandler @ 001726d2 */
          local_a8 = auVar5;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(&local_48,&local_f8);
          local_e0 = CONCAT44(local_e0._4_4_,1);
          local_f8 = (undefined *)CONCAT44(uStack_44,local_48);
          uStack_f0 = (undefined **)CONCAT44(uStack_3c,uStack_40);
          local_e8 = (long **)local_38;
          lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(&local_f8);
          unaff_RBX = &
                      PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
          ;
          goto LAB_001726ad;
        }
        _ZN6uu_env18parse_signal_value17hb33c53ad79b226c6E(&local_f8,uStack_f0,local_e8);
        ppuVar2 = uStack_f0;
        unaff_RBX = uStack_f0;
        lVar4 = (long)local_f8;
        if (local_f8 != (undefined *)0x0) goto LAB_001726ad;
        local_b0 = uStack_f0;
        cVar3 = _ZN57__LT_usize_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5183ddd93362b17dE
                          (&local_b0,param_1[0xd],param_1[0xe]);
        if (cVar3 == '\0') {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heafd982e1e9d61d6E(param_1 + 0xc,ppuVar2);
        }
        auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9944e073377af52E
                           (local_68);
      } while (auVar5._0_8_ != 0);
      unaff_RBX = param_1;
      lVar4 = 0;
    }
LAB_001726ad:
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17hfa054853d4deaf86E
              (local_68);
  }
  auVar5._8_8_ = unaff_RBX;
  auVar5._0_8_ = lVar4;
  return auVar5;
}