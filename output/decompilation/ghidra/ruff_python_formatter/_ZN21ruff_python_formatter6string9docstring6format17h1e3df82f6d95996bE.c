int * _ZN21ruff_python_formatter6string9docstring6format17h1e3df82f6d95996bE
                (int *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined extraout_DL;
  undefined extraout_DL_00;
  uint uVar11;
  ulong uVar12;
  undefined8 unaff_RBX;
  uint uVar13;
  long lVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar15;
  bool bVar16;
  int iVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  byte local_20e;
  byte local_20d;
  uint local_20c;
  ulong local_208;
  uint local_1fc;
  ulong local_1f8;
  ulong local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
  int local_150;
  undefined local_14c;
  undefined local_14b;
  undefined8 *local_148;
  int *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = param_2[1];
  lVar2 = param_2[2];
  cVar4 = _ZN21ruff_python_formatter6string9docstring26contains_unescaped_newline17h725af0d29cbc1dc9E
                    (lVar7,lVar2);
  if (cVar4 != '\0') {
    local_5c = CONCAT13((byte)*(undefined4 *)(param_2 + 4),
                        CONCAT12((byte)*(undefined4 *)(param_2 + 4) >> 1,(undefined2)local_5c)) &
               0x101ffff;
    local_70 = 0x42878d;
    uVar5 = _ZN94__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_ruff_python_ast__nodes__StringFlags_GT_6prefix17h570c712810ae8a23E
                      ();
    uStack_58._0_2_ = CONCAT11(extraout_DL_00,uVar5);
    uStack_50 = &uStack_58;
    local_48 = &DAT_0067e180;
    uStack_40 = (long)&local_5c + 2;
    uStack_38 = &DAT_0067e1a0;
    local_70 = 0x4287d8;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&stack0xffffffffffffffd0,param_3,&uStack_50,2);
    iVar17 = (int)unaff_RBX;
    if (iVar17 == 4) {
      local_70 = 0x428844;
      _ZN88__LT_ruff_formatter__builders__Text_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hbf64ef42de3b23a6E
                (&uStack_50,param_2[1],param_2[2],*param_3,param_3[1]);
      if ((int)uStack_50 == 4) {
        local_70 = 0x42885c;
        (*(code *)
          PTR__ZN141__LT_ruff_python_formatter__string__StringQuotes_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17h1952ff085d74be3bE_006bdf38
        )(param_1,(long)&local_5c + 2,param_3);
        return param_1;
      }
      *(long *)(param_1 + 4) = uStack_40;
      iVar17 = (int)uStack_50;
    }
    else {
      *(undefined8 *)(param_1 + 4) = unaff_R13;
      uStack_50._4_4_ = (int)((ulong)unaff_RBX >> 0x20);
      local_48._0_4_ = (int)unaff_R12;
      local_48._4_4_ = (int)((ulong)unaff_R12 >> 0x20);
    }
    *param_1 = iVar17;
    param_1[1] = uStack_50._4_4_;
    param_1[2] = (int)local_48;
    param_1[3] = local_48._4_4_;
    return param_1;
  }
  local_1e8 = *param_2;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&uStack_98,10,lVar7,lVar2);
  uStack_a8 = 0;
  uStack_68 = 1;
  local_c0 = 0;
  bVar1 = *(byte *)(param_2 + 4);
  local_20d = bVar1 & 1;
  local_20e = bVar1 >> 1 & 1;
  uVar13 = (uint)bVar1;
  local_a0 = lVar2;
  uVar5 = _ZN94__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_ruff_python_ast__nodes__StringFlags_GT_6prefix17h570c712810ae8a23E
                    (uVar13);
  local_128._0_2_ = CONCAT11(extraout_DL,uVar5);
  local_1e0 = (byte *)&local_128;
  uStack_1d8 = &DAT_0067e180;
  uStack_1d0 = &local_20e;
  puStack_1c8 = &DAT_0067e1a0;
  _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
            (&local_60,param_3,&local_1e0,2);
  piVar8 = (int *)(ulong)local_60;
  if (local_60 != 4) {
    param_1[5] = uStack_50._4_4_;
    local_1e0._4_4_ = local_5c;
    uStack_1d8._0_4_ = uStack_58;
    uStack_1d8._4_4_ = iStack_54;
    uStack_1d0._0_4_ = (int)uStack_50;
    goto LAB_00422b3c;
  }
  local_1f8 = (ulong)*(uint *)(param_2 + 3);
  auVar18._4_4_ = uStack_b4;
  auVar18._0_4_ = uStack_b8;
  auVar18._12_4_ = uStack_ac;
  auVar18._8_4_ = local_b0;
  uVar12 = local_c0 & 1;
  local_c0 = 0;
  local_20c = uVar13;
  if (uVar12 == 0) {
    auVar18 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h3fa9a8e3da590a31E(&uStack_a8);
  }
  local_1f0 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  if (lVar6 == 0) {
    local_1f0 = 0;
  }
  lVar14 = 1;
  if (lVar6 != 0) {
    lVar14 = lVar6;
  }
  auVar18 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc1c5622f93930984E(lVar14);
  local_208 = auVar18._8_8_;
  local_138 = auVar18._0_8_;
  auVar18 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E
                      (local_138,local_208);
  uVar12 = auVar18._8_8_;
  local_1fc = (uint)local_20d;
  local_1e0 = (byte *)((ulong)local_1e0 & 0xffffffff00000000);
  auVar19 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                      ((local_1fc ^ 1) * 5 + 0x22,&local_1e0);
  local_130 = auVar18._0_8_;
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (auVar18._0_8_,uVar12,auVar19._0_8_,auVar19._8_8_);
  if (cVar4 != '\0') {
    local_1e0 = (byte *)((ulong)local_1e0 & 0xffffffffffffff00);
    (**(code **)(param_3[1] + 0x18))(*param_3,&local_1e0);
  }
  uVar3 = local_208;
  uVar13 = local_20c;
  if (local_208 == 0) {
LAB_0042287b:
    uVar12 = local_1f0;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
              (local_1f0 >> 0x20 != 0,&DAT_0067cc48);
    auVar18 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (uVar12,lVar7,lVar2);
    if (auVar18._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (lVar7,lVar2,uVar12,lVar2,&PTR_s_crates_ruff_python_formatter_src_0067f0a8);
LAB_00422b98:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067cc60);
LAB_00422bb1:
      uVar9 = (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                        ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067f090);
                    /* catch() { ... } // from try @ 00422a08 with catch @ 00422bca */
      _ZN4core3ptr83drop_in_place_LT_ruff_python_formatter__string__docstring__DocstringLinePrinter_GT_17h2092d66feb0950f8E
                (&local_1e0);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
    lVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hc9d68bd4861bf742E
                      (auVar18._0_8_,auVar18._8_8_);
    uVar12 = local_208;
    if (lVar6 != 0) {
      local_1e0 = (byte *)CONCAT62(local_1e0._2_6_,0x201);
      (**(code **)(param_3[1] + 0x18))(*param_3,&local_1e0);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
      _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17hb52b76b0821f95e3E
                (&local_1e0,&local_c0);
      _ZN4core4iter6traits8iterator8Iterator6reduce17h0542e7524a210e1eE(&local_128,&local_1e0);
      local_168 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      local_170 = 0;
      if (iStack_120 != 5) {
        local_168 = local_118;
        uStack_164 = uStack_114;
        uStack_160 = uStack_110;
        uStack_15c = uStack_10c;
        local_170 = iStack_120;
      }
      local_14c = local_1e8 == -0x8000000000000000;
      local_150 = (int)local_1f8 + 1 + (int)local_1f0;
      local_1e0 = (byte *)0x0;
      uStack_1d8 = (undefined *)0x8;
      uStack_1d0 = (byte *)0x0;
      puStack_1c8 = (undefined *)0x0;
      local_16c = uStack_11c;
      local_14b = (undefined)local_1fc;
      local_1c0 = 0x8000000000000003;
      uStack_d0 = CONCAT62(uStack_66,uStack_68);
      local_d8 = local_70;
      local_e8 = local_80;
      uStack_e0 = uStack_78;
      local_f8 = local_90;
      uStack_f4 = uStack_8c;
      uStack_f0 = uStack_88;
      uStack_ec = uStack_84;
      local_108 = (undefined4)local_a0;
      uStack_104 = local_a0._4_4_;
      uStack_100 = uStack_98;
      uStack_fc = uStack_94;
      local_118 = local_b0;
      uStack_114 = uStack_ac;
      uStack_110 = (undefined4)uStack_a8;
      uStack_10c = uStack_a8._4_4_;
      local_128 = (undefined4)local_c0;
      uStack_124 = local_c0._4_4_;
      iStack_120 = uStack_b8;
      uStack_11c = uStack_b4;
                    /* try { // try from 00422a08 to 00422a21 has its CatchHandler @ 00422bca */
      local_158 = param_3;
      _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter8add_iter17h462e49ccaf522bd7E
                (&local_48,&local_1e0,&local_128);
      uVar13 = local_20c;
      if ((int)local_48 == 4) {
        _ZN4core3ptr83drop_in_place_LT_ruff_python_formatter__string__docstring__DocstringLinePrinter_GT_17h2092d66feb0950f8E
                  (&local_1e0);
        auVar18 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h53bd7ada7db36fa7E
                            (lVar7,lVar2);
        lVar7 = (**(code **)(param_3[1] + 0x30))(*param_3);
        cVar4 = _ZN21ruff_python_formatter6string9docstring21needs_chaperone_space17h0757348e78c1bc42E
                          (uVar13,auVar18._0_8_,auVar18._8_8_,*(undefined *)(lVar7 + 0x3a));
        if (cVar4 != '\0') {
          local_1e0 = (byte *)((ulong)local_1e0 & 0xffffffffffffff00);
          (**(code **)(param_3[1] + 0x18))(*param_3,&local_1e0);
        }
        local_1e0 = &local_20e;
        uStack_1d8 = &DAT_0067e1a0;
        piVar8 = (int *)_ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
                                  (param_1,param_3,&local_1e0,1);
        return piVar8;
      }
      param_1[5] = uStack_38._4_4_;
      param_1[1] = local_48._4_4_;
      param_1[2] = (int)uStack_40;
      param_1[3] = uStack_40._4_4_;
      param_1[4] = (int)uStack_38;
      *param_1 = (int)local_48;
      piVar8 = (int *)_ZN4core3ptr83drop_in_place_LT_ruff_python_formatter__string__docstring__DocstringLinePrinter_GT_17h2092d66feb0950f8E
                                (&local_1e0);
      return piVar8;
    }
    bVar16 = local_208 == 0;
    lVar7 = (**(code **)(param_3[1] + 0x30))(*param_3);
    cVar4 = _ZN21ruff_python_formatter6string9docstring21needs_chaperone_space17h0757348e78c1bc42E
                      (uVar13,local_138,uVar12,*(undefined *)(lVar7 + 0x3a));
    if ((lVar2 != 0 && bVar16) || (cVar4 != '\0')) {
      local_1e0 = (byte *)((ulong)local_1e0 & 0xffffffffffffff00);
      (**(code **)(param_3[1] + 0x18))(*param_3,&local_1e0);
    }
    (*(code *)
      PTR__ZN141__LT_ruff_python_formatter__string__StringQuotes_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17h1952ff085d74be3bE_006bdf38
    )(&local_1e0,&local_20e,param_3);
    piVar8 = (int *)((ulong)local_1e0 & 0xffffffff);
    if ((int)local_1e0 == 4) {
      *param_1 = 4;
      return piVar8;
    }
  }
  else {
    bVar16 = local_208 >> 0x20 != 0;
    local_148 = param_3;
    local_140 = param_1;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(bVar16,&DAT_0067cc48);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
              (uVar12 >> 0x20 != 0,&DAT_0067cc48);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(bVar16,&DAT_0067cc48);
    param_1 = local_140;
    param_3 = local_148;
    uVar13 = local_20c;
    uVar15 = (uint)uVar3;
    uVar11 = (uint)local_1f8;
    if (CARRY4(uVar15,uVar11)) goto LAB_00422b98;
    uVar10 = (uVar15 - auVar18._8_4_) + uVar11;
    if (uVar15 + uVar11 < uVar10) goto LAB_00422bb1;
    if (local_1e8 == -0x8000000000000000) {
      local_128 = uVar10;
      uStack_124 = uVar15 + uVar11;
      _ZN106__LT_ruff_formatter__builders__SourceTextSliceBuilder_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hc7c589b7f57e065dE
                (&local_1e0,&local_128,local_148);
    }
    else {
      _ZN88__LT_ruff_formatter__builders__Text_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hbf64ef42de3b23a6E
                (&local_1e0,local_130,uVar12,*local_148,local_148[1]);
    }
    piVar8 = (int *)((ulong)local_1e0 & 0xffffffff);
    if ((int)local_1e0 == 4) goto LAB_0042287b;
  }
  param_1[5] = uStack_1d0._4_4_;
LAB_00422b3c:
  param_1[1] = local_1e0._4_4_;
  param_1[2] = (int)uStack_1d8;
  param_1[3] = uStack_1d8._4_4_;
  param_1[4] = (int)uStack_1d0;
  *param_1 = (int)piVar8;
  return piVar8;
}