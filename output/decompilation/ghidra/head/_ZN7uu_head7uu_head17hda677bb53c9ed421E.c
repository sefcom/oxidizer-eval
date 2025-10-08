undefined  [16] _ZN7uu_head7uu_head17hda677bb53c9ed421E(long param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  int __fd;
  long lVar11;
  code *unaff_R15;
  undefined auVar12 [16];
  undefined auVar13 [16];
  int local_d4;
  int *local_d0;
  undefined8 *local_c8;
  code *local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined local_a8 [16];
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined local_40 [16];
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18) + lVar9 * 0x18;
    cVar3 = *(char *)(param_1 + 0x2a);
    bVar8 = (*(byte *)(param_1 + 0x28) ^ 1) & lVar9 != 1;
    bVar2 = *(byte *)(param_1 + 0x29);
    bVar5 = true;
    local_d0 = &local_d4;
    lVar9 = *(long *)(param_1 + 0x18);
    unaff_R15 = (code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001fe8f0;
    local_78 = param_1;
    do {
      lVar11 = lVar9 + 0x18;
      lVar6 = lVar11;
      if (cVar3 == '\0') {
        while( true ) {
          lVar11 = lVar6;
          uVar10 = *(undefined8 *)(lVar9 + 8);
          pcVar4 = *(code **)(lVar9 + 0x10);
          cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf89d8b6cb7931351E
                            (uVar10,pcVar4,"-",1);
          unaff_R15 = (code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001fe8f0;
          if (cVar7 != '\0') break;
          local_60 = uVar10;
          local_58 = pcVar4;
          _ZN3std2fs4File4open17had2dc7ba2303a5e6E(&local_50,uVar10,pcVar4);
          unaff_R15 = (code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001fe8f0;
          if (local_50 != 1) {
            local_d4 = local_4c;
            if (bVar8 != 0 || (bVar2 & 1) != 0) {
              if (!bVar5) {
                local_a8._0_8_ = &PTR_s__001f79d0;
                local_a8._8_8_ = 1;
                local_98 = (undefined8 **)0x8;
                local_90 = 0;
                uStack_88 = 0;
                    /* try { // try from 00167cf9 to 00167d60 has its CatchHandler @ 00167df4 */
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe900)(local_a8);
              }
              local_c8 = &local_60;
              local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he50def4c4ab764c8E;
              local_a8._0_8_ = &PTR_DAT_001f7d88;
              local_a8._8_8_ = 2;
              uStack_88 = 0;
              local_98 = &local_c8;
              local_90 = 1;
              (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe900)(local_a8);
            }
            auVar12 = _ZN7uu_head9head_file17hb04afafcea474c83E(&local_d4,local_78);
            if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              local_68 = 0;
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h04c18d7ad09ce3caE(local_d4);
              goto LAB_00167d77;
            }
                    /* try { // try from 00167dd9 to 00167de1 has its CatchHandler @ 00167dee */
            auVar12 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001fe908
                      )(auVar12._8_8_);
            __fd = local_d4;
            goto LAB_00167dbc;
          }
          local_70 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hc23ff01e4da35d28E
                               (local_48,local_60,local_58);
                    /* try { // try from 00167b09 to 00167b92 has its CatchHandler @ 00167e33 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001fe8f8)(1);
          auVar12 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fe6b0)();
          local_c8 = (undefined8 *)local_40;
          local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he50def4c4ab764c8E;
          local_b8 = &local_70;
          local_b0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h56fc0ec6d62ee034E
          ;
          local_a8._0_8_ = &DAT_001f7d58;
          local_a8._8_8_ = 3;
          uStack_88 = 0;
          local_98 = &local_c8;
          local_90 = 2;
          local_40 = auVar12;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fe6b8)(local_a8);
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h701d8b6bf603c728E
                    (local_70);
          lVar6 = lVar11 + 0x18;
          lVar9 = lVar11;
          unaff_R15 = pcVar4;
          if (lVar11 == lVar1) goto LAB_00167d97;
        }
      }
      if (bVar8 != 0 || (bVar2 & 1) != 0) {
        if (!bVar5) {
          local_a8._0_8_ = &PTR_s__001f79d0;
          local_a8._8_8_ = 1;
          local_98 = (undefined8 **)0x8;
          local_90 = 0;
          uStack_88 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe900)(local_a8);
        }
        local_a8._0_8_ = &PTR_s___>_standard_input_<___:_<___err_001f7d48;
        local_a8._8_8_ = 1;
        local_98 = (undefined8 **)&DAT_00000008;
        local_90 = 0;
        uStack_88 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe900)(local_a8);
      }
      (*unaff_R15)();
      local_c8 = (undefined8 *)((ulong)local_c8 & 0xffffffff00000000);
                    /* try { // try from 00167c2c to 00167c36 has its CatchHandler @ 00167e12 */
      auVar12 = (*(code *)
                  PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_001fe8e0
                )(&local_c8);
      local_a8 = auVar12;
      if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        auVar13 = _ZN7uu_head9head_file17hb04afafcea474c83E(&local_c8,local_78);
        lVar9 = auVar13._8_8_;
        if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          auVar12 = (*(code *)
                      PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_001fe7e8
                    )(&local_c8,0,auVar12._8_8_ + lVar9);
          goto LAB_00167c8a;
        }
LAB_00167d9f:
                    /* try { // try from 00167d9f to 00167da7 has its CatchHandler @ 00167df2 */
        auVar12 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001fe908
                  )(lVar9);
                    /* try { // try from 00167da8 to 00167db7 has its CatchHandler @ 00167df0 */
        _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
                  (local_a8);
        __fd = (int)local_c8;
LAB_00167dbc:
        unaff_R15 = auVar12._8_8_;
        uVar10 = auVar12._0_8_;
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h04c18d7ad09ce3caE(__fd);
        goto LAB_00167dc1;
      }
                    /* try { // try from 00167c48 to 00167c89 has its CatchHandler @ 00167df9 */
      auVar12 = _ZN7uu_head9head_file17hb04afafcea474c83E(&local_c8,local_78);
LAB_00167c8a:
      lVar9 = auVar12._8_8_;
      if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00167d9f;
                    /* try { // try from 00167c92 to 00167c99 has its CatchHandler @ 00167e12 */
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
                (local_a8);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h04c18d7ad09ce3caE((int)local_c8);
      local_68 = 0;
LAB_00167d77:
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hd58954f55c2f1209E
                (&local_68);
      bVar5 = false;
      lVar9 = lVar11;
    } while (lVar11 != lVar1);
LAB_00167d97:
    uVar10 = 0;
  }
LAB_00167dc1:
  auVar12._8_8_ = unaff_R15;
  auVar12._0_8_ = uVar10;
  return auVar12;
}