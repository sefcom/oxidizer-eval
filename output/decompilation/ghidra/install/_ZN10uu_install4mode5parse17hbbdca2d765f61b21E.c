ulong * _ZN10uu_install4mode5parse17hbbdca2d765f61b21E
                  (undefined param_1 [8],code *param_2,undefined8 **param_3,uint param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 extraout_RDX;
  undefined8 **extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint uVar13;
  undefined auVar14 [8];
  undefined8 **ppuVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  char cStack_9c;
  undefined auStack_88 [8];
  undefined8 uStack_80;
  undefined auStack_78 [8];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  code *local_38;
  code *local_30;
  
  auVar16._8_8_ = param_3;
  auVar16._0_8_ = param_2;
  local_30 = param_2 + (long)param_3;
  puStack_40 = (undefined8 *)0x165840;
  local_38 = param_2;
  uVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc0f81444595a2639E(&local_38);
  puStack_40 = (undefined8 *)0x165848;
  cVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hcf3b57975be3c5bbE
                    (uVar3);
  if (cVar4 == '\0') {
    uVar13 = 0;
    auStack_88 = (undefined  [8])param_2;
    uStack_80 = param_3;
    uVar6 = _ZN6uucore8features4mode12parse_levels17hfdfd6614480f40a4E(param_2,param_3);
    if (extraout_RDX_00 == param_3) {
      puStack_40 = (undefined8 *)auStack_88;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h321d1b8a0ad9fbc4E;
      ppuStack_70 = &PTR_s_invalid_mode___00203490;
      uStack_68 = (undefined *)0x2;
      uStack_50._0_4_ = 0;
      uStack_50._4_4_ = 0;
      ppuStack_60 = &puStack_40;
      uStack_58 = 1;
      uStack_54 = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8cce3636632c50d1E(param_1,&ppuStack_70);
    }
    else {
      auStack_78 = param_1;
      auVar17 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (extraout_RDX_00,param_2,param_3);
      ppuVar15 = extraout_RDX_00;
      if (auVar17._0_8_ == 0) {
LAB_00173ad8:
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209e00)
                  (auVar16._0_8_,auVar16._8_8_,ppuVar15,auVar16._8_8_,
                   &PTR_s_src_uucore_src_lib_features_mode_002034b0);
        pcVar1 = (code *)swi(3);
        puVar9 = (ulong *)(*pcVar1)();
        return puVar9;
      }
      if (auVar17._8_8_ != 0) {
LAB_00173944:
        do {
          uStack_80 = auVar17._8_8_;
          uVar2 = uStack_80;
          auStack_88 = auVar17._0_8_;
          auVar14 = auStack_88;
          _ZN6uucore8features4mode8parse_op17hff3b161de0fb3f4cE(&ppuStack_70,auStack_88);
          _auStack_88 = auVar17;
          ppuVar15 = ppuStack_60;
          iVar5 = (int)uStack_68;
          if (ppuStack_70 != (undefined **)0x8000000000000000) {
            *(undefined ***)auStack_78 = ppuStack_70;
            *(int *)((long)auStack_78 + 8) = (int)uStack_68;
            *(undefined4 *)((long)auStack_78 + 0xc) = uStack_68._4_4_;
            *(undefined8 ***)((long)auStack_78 + 0x10) = ppuStack_60;
            return (ulong *)auStack_78;
          }
          auVar18 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (ppuStack_60,auVar14,uVar2);
          lVar10 = auVar18._0_8_;
          if (lVar10 == 0) {
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209e00)
                      (auVar14,uVar2,ppuVar15,uVar2,&PTR_s_src_uucore_src_lib_features_mode_002034c8
                      );
LAB_00173aa6:
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209e00)
                      (auVar16._0_8_,auVar16._8_8_,auVar14,auVar16._8_8_,
                       &PTR_s_src_uucore_src_lib_features_mode_002034e0);
LAB_00173abf:
            (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00209d70)
                      ("internal error: entered unreachable code.../",0x28,
                       &PTR_s_src_uucore_src_lib_features_mode_002034f8);
            goto LAB_00173ad8;
          }
          uVar7 = _ZN6uucore8features4mode12parse_change17he01268495f4af78fE
                            (lVar10,auVar18._8_8_,uVar13,param_4 & 0xff);
          ppuVar15 = (undefined8 **)(ulong)uVar7;
          auVar17 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (extraout_RDX_01,lVar10,auVar18._8_8_);
          auVar14 = (undefined  [8])extraout_RDX_01;
          auVar16 = auVar18;
          if (auVar17._0_8_ == 0) goto LAB_00173aa6;
          uVar7 = uVar7 & (-(uint)(extraout_RDX_00 != (undefined8 **)0x0) | ~param_5);
          ppuVar15 = (undefined8 **)(ulong)uVar7;
          if (iVar5 == 0x2b) {
            uVar13 = uVar13 | uVar7 & uVar6;
joined_r0x00173a22:
            if (auVar17._8_8_ == 0) break;
            goto LAB_00173944;
          }
          if (iVar5 != 0x2d) {
            _auStack_88 = auVar17;
            if (iVar5 == 0x3d) {
              uVar12 = uVar13 & 0xc00;
              cStack_9c = (char)param_4;
              if (cStack_9c == '\0') {
                uVar12 = 0;
              }
              uVar13 = uVar13 & ~uVar6 | (uVar7 | uVar12) & uVar6;
              goto joined_r0x00173a22;
            }
            goto LAB_00173abf;
          }
          uVar13 = uVar13 & ~(uVar7 & uVar6);
        } while (auVar17._8_8_ != 0);
      }
      *(uint *)((long)auStack_78 + 8) = uVar13;
      *(ulong *)auStack_78 = 0x8000000000000000;
      param_1 = auStack_78;
    }
    return (ulong *)param_1;
  }
  auStack_78 = (undefined  [8])(CONCAT44(auStack_78._4_4_,param_4) & 0xffffffff000000ff);
  uStack_80 = (undefined8 **)0x173690;
  _ZN6uucore8features4mode8parse_op17hff3b161de0fb3f4cE(&ppuStack_60,param_2,param_3);
  uStack_80 = (undefined8 **)0x173698;
  iVar5 = _ZN4core6result19Result_LT_T_C_E_GT_11map_or_else17h735cab4f8b5fec11E(&ppuStack_60);
  uStack_80 = (undefined8 **)0x1736ac;
  auVar16 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (extraout_RDX,param_2,param_3);
  if (auVar16._0_8_ == 0) {
    uStack_80 = (undefined8 **)0x173814;
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209e00)
              (param_2,param_3,extraout_RDX,param_3,&PTR_s_src_uucore_src_lib_features_mode_00203460
              );
    pcVar1 = (code *)swi(3);
    puVar9 = (ulong *)(*pcVar1)();
    return puVar9;
  }
  uStack_80 = (undefined8 **)0x1736c0;
  auVar16 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h72f4decec699e663E
                      (auVar16._0_8_,auVar16._8_8_);
  if (auVar16._8_8_ == 0) {
    uVar11 = 0;
  }
  else {
    uStack_80 = (undefined8 **)0x1736d8;
    uVar8 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E
                      (auVar16._0_8_,auVar16._8_8_,8);
    if ((uVar8 & 1) != 0) {
      ppuStack_70 = (undefined **)CONCAT71(ppuStack_70._1_7_,(char)(uVar8 >> 8));
      uStack_80 = (undefined8 **)0x1736ef;
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h8f07fd0f9257c410E
                (&ppuStack_60,&ppuStack_70);
      *(undefined4 *)((long)param_1 + 0x14) = uStack_50._4_4_;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44((undefined4)uStack_50,uStack_54);
      *(undefined8 ***)param_1 = ppuStack_60;
      *(undefined4 *)((long)param_1 + 8) = uStack_58;
      return (ulong *)param_1;
    }
    uVar11 = (undefined4)(uVar8 >> 0x20);
    auStack_78._4_4_ = uVar11;
    if (uVar8 >> 0x2c != 0) {
      ppuStack_70 = (undefined **)(auStack_78 + 4);
      uStack_68 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_00209c90
      ;
      ppuStack_60 = (undefined8 **)&PTR_s_mode_is_too_large___>_7777_00203440;
      uStack_58 = 2;
      uStack_54 = 0;
      puStack_40 = (undefined8 *)0x0;
      uStack_50 = &ppuStack_70;
      uStack_48 = 1;
      uStack_80 = (undefined8 **)0x17377c;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8cce3636632c50d1E(param_1,&ppuStack_60);
      return (ulong *)param_1;
    }
  }
  if (iVar5 < 0x110000) {
    if (iVar5 == 0x2b) goto LAB_001737d9;
    if (iVar5 == 0x2d) {
      uVar11 = 0;
      goto LAB_001737d9;
    }
    if (iVar5 == 0x3d) goto LAB_001737d9;
  }
  else if (iVar5 == 0x110000) goto LAB_001737d9;
  uStack_80 = (undefined8 **)0x1737cf;
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00209d70)
            ("internal error: entered unreachable code.../",0x28,
             &PTR_s_src_uucore_src_lib_features_mode_00203478);
LAB_001737d9:
  *(undefined4 *)((long)param_1 + 8) = uVar11;
  *(ulong *)param_1 = 0x8000000000000000;
  return (ulong *)param_1;
}