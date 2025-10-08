void _ZN3bat6config20generate_config_file17hc481a22fd82623a6E(undefined *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined uStack_89;
  undefined8 uStack_88;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [8];
  undefined8 uStack_30;
  undefined8 local_28;
  
  _ZN3bat6config11config_file17h4b67a380f7fc9337E(local_50);
                    /* try { // try from 004acb15 to 004acb3c has its CatchHandler @ 004ace43 */
  cVar1 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00807a98)(local_48,local_40);
  if (cVar1 == '\0') {
                    /* try { // try from 004acc1e to 004acc62 has its CatchHandler @ 004ace43 */
    auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00807ab0)(local_48,local_40)
    ;
    if (auVar4._0_8_ == 0) {
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                (&local_68,local_48,local_40);
      local_70 = 
      _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha152f904fae7110eE
      ;
      local_a8 = 0x7c8600;
      uStack_a4 = 0;
      uStack_a0 = 1;
      uStack_9c = 0;
      uStack_88 = 0;
      uStack_98 = &local_78;
      uStack_90 = 1;
      uStack_89 = 0;
                    /* try { // try from 004acca4 to 004accb2 has its CatchHandler @ 004ace05 */
      local_78 = &local_68;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha6af42fd863fbfffE(local_38,0,&local_a8);
      _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h466767d2e8f86b90E(&local_68);
      uStack_a4._3_1_ = local_38[0];
      uStack_a0 = local_38._1_4_;
      uStack_9c._0_3_ = local_38._5_3_;
      uStack_9c._3_1_ = (undefined)uStack_30;
      uStack_98._0_4_ = (undefined4)((ulong)uStack_30 >> 8);
      uStack_98._4_3_ = (undefined3)((ulong)uStack_30 >> 0x28);
      uStack_98._7_1_ = (undefined)local_28;
      uStack_90 = (undefined7)((ulong)local_28 >> 8);
      *param_1 = 0xb;
      *(undefined4 *)(param_1 + 1) = local_a8;
      *(undefined4 *)(param_1 + 5) = uStack_a4;
      *(undefined4 *)(param_1 + 9) = uStack_a0;
      *(undefined4 *)(param_1 + 0xd) = uStack_9c;
      *(undefined8 *)(param_1 + 0x10) = uStack_30;
      *(undefined8 *)(param_1 + 0x18) = local_28;
      goto LAB_004acdea;
    }
    lVar3 = _ZN3std2fs14create_dir_all17h72c4bebdc9f0feffE(auVar4._0_8_,auVar4._8_8_);
    if (lVar3 == 0) {
LAB_004acd20:
                    /* try { // try from 004acd20 to 004acd73 has its CatchHandler @ 004ace43 */
      lVar3 = _ZN3std2fs5write17h4bd82eacd25dfa2cE(local_50);
      if (lVar3 == 0) {
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                  (&local_68,local_48,local_40);
        local_70 = 
        _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha152f904fae7110eE
        ;
        local_a8 = 0x7c8610;
        uStack_a4 = 0;
        uStack_a0 = 2;
        uStack_9c = 0;
        uStack_88 = 0;
        uStack_98 = &local_78;
        uStack_90 = 1;
        uStack_89 = 0;
        local_78 = &local_68;
                    /* try { // try from 004acdb5 to 004acdbd has its CatchHandler @ 004ace03 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_a8);
        _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h466767d2e8f86b90E(&local_68);
        *param_1 = 0xd;
      }
      else {
        _ZN3bat6config20generate_config_file28__u7b__u7b_closure_u7d__u7d_17hdf5ae32e43f4c068E
                  (&local_a8,local_48,local_40,lVar3);
        local_68 = CONCAT44(uStack_9c,uStack_a0);
        uStack_60 = (undefined4)uStack_98;
        uStack_5c = uStack_98._4_4_;
        *(undefined4 *)(param_1 + 0x10) = uStack_a0;
        *(undefined4 *)(param_1 + 0x14) = uStack_9c;
        *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_98;
        *(undefined4 *)(param_1 + 0x1c) = uStack_98._4_4_;
        *param_1 = 0xb;
        *(ulong *)(param_1 + 8) = CONCAT44(uStack_a4,local_a8);
      }
      goto LAB_004acdea;
    }
  }
  else {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (&local_68,local_48,local_40);
    local_70 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha152f904fae7110eE;
    local_a8 = 0x7c85d0;
    uStack_a4 = 0;
    uStack_a0 = 2;
    uStack_9c = 0;
    uStack_88 = 0;
    uStack_98 = &local_78;
    uStack_90 = 1;
    uStack_89 = 0;
    local_78 = &local_68;
                    /* try { // try from 004acb7e to 004acb86 has its CatchHandler @ 004ace24 */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_a8);
    _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h466767d2e8f86b90E(&local_68);
    local_a8 = 0x7c85f0;
    uStack_a4 = 0;
    uStack_a0 = 1;
    uStack_9c = 0;
    uStack_98._0_4_ = 8;
    uStack_98._4_4_ = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_88 = 0;
                    /* try { // try from 004acbb6 to 004acbd1 has its CatchHandler @ 004ace43 */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_a8);
    uVar2 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00807998)();
    local_a8 = (undefined4)uVar2;
    uStack_a4 = (undefined4)((ulong)uVar2 >> 0x20);
    lVar3 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_00807aa0
            )(&local_a8);
    if (lVar3 == 0) {
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 1;
      uStack_9c = 0;
      uStack_98._0_4_ = 0;
      uStack_98._4_4_ = 0;
                    /* try { // try from 004acbf1 to 004acc09 has its CatchHandler @ 004ace07 */
      local_68 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00807a28)();
      auVar4 = (*(code *)PTR__ZN3std2io5stdio5Stdin9read_line17h4f274dfaf65c22afE_00807aa8)
                         (&local_68,&local_a8);
      if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hbcac274ffcd47b99E
                           (CONCAT44(uStack_9c,uStack_a0),
                            CONCAT44(uStack_98._4_4_,(undefined4)uStack_98));
        cVar1 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                          (auVar4._0_8_,auVar4._8_8_);
        if (cVar1 != '\0') {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(&local_a8);
          goto LAB_004acd20;
        }
        *param_1 = 0xd;
      }
      else {
        *param_1 = 0;
        *(long *)(param_1 + 8) = auVar4._8_8_;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(&local_a8);
      goto LAB_004acdea;
    }
  }
  *param_1 = 0;
  *(long *)(param_1 + 8) = lVar3;
LAB_004acdea:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd0005799f5f2e1beE(local_50);
  return;
}