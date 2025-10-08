void _ZN9alacritty7migrate10move_value17ha75dcc59eab66952E
               (undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  bool bVar12;
  undefined auVar13 [16];
  long local_320;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined **local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined local_190 [176];
  undefined local_e0 [176];
  
  uVar4 = *param_2 - 8;
  uVar8 = 1;
  if (uVar4 < 4) {
    uVar8 = uVar4;
  }
  if (uVar8 == 2) {
    plVar11 = param_2 + 1;
    ppuVar5 = &
              PTR__ZN4core3ptr44drop_in_place_LT_toml_edit__table__Table_GT_17h4c63c98de4362ea0E_00983620
    ;
  }
  else {
    if ((uVar8 != 1) || (0xfffffffffffffff9 < uVar4)) {
      local_240 = &PTR_s_Moving_from_unsupported_TOML_str_00983540;
      local_238 = 1;
      local_230 = 8;
      local_228 = 0;
      uStack_220 = 0;
      uVar6 = (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
                        (&local_240,&PTR_s_alacritty_src_migrate_mod_rs_009836e0);
                    /* catch() { ... } // from try @ 00560607 with catch @ 005607f8 */
                    /* catch() { ... } // from try @ 005605af with catch @ 005607fa */
      if (local_2a0 != -0x7ffffffffffffffc) {
        _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE(&local_2a0);
        _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE(&local_270);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar6);
    }
    ppuVar5 = &
              PTR__ZN4core3ptr57drop_in_place_LT_toml_edit__inline_table__InlineTable_GT_17h5950196db8360756E_00983560
    ;
    plVar11 = param_2;
  }
  auVar13 = (*(code *)ppuVar5[0xd])(plVar11,*param_3,param_3[1]);
  piVar9 = auVar13._8_8_;
  if (auVar13._0_8_ == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    if (*piVar9 == 10) {
      *(undefined *)(piVar9 + 0x2a) = 1;
    }
    _ZN9alacritty7migrate10move_value28__u7b__u7b_closure_u7d__u7d_17hec025e6fa515b142E
              (&local_2a0,auVar13._0_8_);
    puVar3 = PTR_memcpy_009de0b0;
    (*(code *)PTR_memcpy_009de0b0)(local_190,piVar9,0xb0);
    piVar9[0] = 8;
    piVar9[1] = 0;
    (*(code *)puVar3)(piVar9 + 2,&local_240,0xa8);
    local_318 = param_4 + 0x20;
    local_310 = 0;
    local_320 = param_4;
    auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h013b43a415d12e5fE
                        (&local_320);
    puVar3 = PTR__ZN9toml_edit4item4Item9or_insert17hed790d3213bb5c8eE_009dffa8;
    if (auVar13._8_8_ != 0) {
      do {
        puVar10 = auVar13._8_8_;
        uVar4 = *param_2 - 8;
        uVar8 = 1;
        if (uVar4 < 4) {
          uVar8 = uVar4;
        }
        if (uVar8 == 1) {
          ppuVar5 = &
                    PTR__ZN4core3ptr57drop_in_place_LT_toml_edit__inline_table__InlineTable_GT_17h5950196db8360756E_00983560
          ;
          plVar11 = param_2;
          if (0xfffffffffffffff9 < uVar4) goto LAB_00560768;
        }
        else {
          if (uVar8 != 2) {
LAB_00560768:
            local_240 = &PTR_s_Moving_into_unsupported_TOML_str_00983550;
            local_238 = 1;
            local_230 = 8;
            local_228 = 0;
            uStack_220 = 0;
                    /* try { // try from 0056079a to 005607ae has its CatchHandler @ 005607ff */
            (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
                      (&local_240,&PTR_s_alacritty_src_migrate_mod_rs_009836f8);
            goto LAB_005607af;
          }
          ppuVar5 = &
                    PTR__ZN4core3ptr44drop_in_place_LT_toml_edit__table__Table_GT_17h4c63c98de4362ea0E_00983620
          ;
          plVar11 = param_2 + 1;
        }
        if (auVar13._0_8_ == 1) {
          uVar6 = *puVar10;
          uVar1 = puVar10[1];
          (*(code *)PTR_memcpy_009de0b0)(&local_240,local_190,0xb0);
                    /* try { // try from 00560607 to 0056062a has its CatchHandler @ 005607f8 */
          (*(code *)ppuVar5[0xf])(local_e0,plVar11,uVar6,uVar1,&local_240);
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_toml_edit__item__Item_GT__GT_17h96144d7d1d680041E
                    (local_e0);
          bVar12 = local_2a0 != -0x7ffffffffffffffc;
          if (bVar12) {
            local_2e8 = local_280;
            uStack_2e4 = uStack_27c;
            uStack_2e0 = uStack_278;
            uStack_2dc = uStack_274;
            local_2f8 = local_290;
            uStack_2f4 = uStack_28c;
            uStack_2f0 = uStack_288;
            uStack_2ec = uStack_284;
            local_308 = local_2a0;
            uStack_300 = uStack_298;
            local_2d8 = local_270;
            uStack_2d4 = uStack_26c;
            uStack_2d0 = uStack_268;
            uStack_2cc = uStack_264;
            local_2c8 = local_260;
            uStack_2c0 = uStack_258;
            local_2b8 = local_250;
            uStack_2b4 = uStack_24c;
            uStack_2b0 = uStack_248;
            uStack_2ac = uStack_244;
                    /* try { // try from 005606a7 to 00560765 has its CatchHandler @ 00560846 */
            lVar7 = (*(code *)ppuVar5[0x17])(plVar11,*puVar10,puVar10[1]);
            if (lVar7 == 0) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                        (&PTR_s_alacritty_src_migrate_mod_rs_00983728);
LAB_005607af:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE
                      (lVar7 + 0x30);
            *(undefined4 *)(lVar7 + 0x50) = local_2e8;
            *(undefined4 *)(lVar7 + 0x54) = uStack_2e4;
            *(undefined4 *)(lVar7 + 0x58) = uStack_2e0;
            *(undefined4 *)(lVar7 + 0x5c) = uStack_2dc;
            *(undefined4 *)(lVar7 + 0x40) = local_2f8;
            *(undefined4 *)(lVar7 + 0x44) = uStack_2f4;
            *(undefined4 *)(lVar7 + 0x48) = uStack_2f0;
            *(undefined4 *)(lVar7 + 0x4c) = uStack_2ec;
            *(undefined4 *)(lVar7 + 0x30) = (undefined4)local_308;
            *(undefined4 *)(lVar7 + 0x34) = local_308._4_4_;
            *(undefined4 *)(lVar7 + 0x38) = (undefined4)uStack_300;
            *(undefined4 *)(lVar7 + 0x3c) = uStack_300._4_4_;
            _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE
                      (lVar7 + 0x60);
            *(ulong *)(lVar7 + 0x80) = CONCAT44(uStack_2b4,local_2b8);
            *(ulong *)(lVar7 + 0x88) = CONCAT44(uStack_2ac,uStack_2b0);
            *(undefined8 *)(lVar7 + 0x70) = local_2c8;
            *(undefined8 *)(lVar7 + 0x78) = uStack_2c0;
            *(undefined4 *)(lVar7 + 0x60) = local_2d8;
            *(undefined4 *)(lVar7 + 100) = uStack_2d4;
            *(undefined4 *)(lVar7 + 0x68) = uStack_2d0;
            *(undefined4 *)(lVar7 + 0x6c) = uStack_2cc;
          }
          *param_1 = 0x8000000000000000;
          if (bVar12) {
            return;
          }
          goto LAB_0056071f;
        }
                    /* try { // try from 0056056a to 00560588 has its CatchHandler @ 00560801 */
        uVar6 = _ZN9toml_edit5index87__LT_impl_u20_core__ops__index__IndexMut_LT_I_GT__u20_for_u20_toml_edit__item__Item_GT_9index_mut17h8dd559c352e0eb4aE
                          (param_2,puVar10);
        (*(code *)PTR__ZN9toml_edit4item5table17hd1abaff1c38d3b6aE_009dffb0)(&local_240);
        param_2 = (long *)(*(code *)puVar3)(uVar6,&local_240);
        auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h013b43a415d12e5fE
                            (&local_320);
      } while (auVar13._8_8_ != 0);
    }
    *param_1 = 0x8000000000000000;
                    /* try { // try from 005605af to 005605bb has its CatchHandler @ 005607fa */
    _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17hf5a3277b0f9450bcE(local_190);
LAB_0056071f:
    if (local_2a0 != -0x7ffffffffffffffc) {
      _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE(&local_2a0);
      _ZN4core3ptr43drop_in_place_LT_toml_edit__repr__Decor_GT_17hb42f26b80888f4bbE(&local_270);
    }
  }
  return;
}