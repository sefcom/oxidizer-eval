undefined  [16]
_ZN21ruff_python_formatter8verbatim11Indentation11trim_indent17h4ed1435bb0f1173fE
          (uint param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar6;
  undefined8 *puVar7;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  undefined4 extraout_EDX_00;
  undefined8 *extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar9;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  byte bVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [12];
  undefined2 uStack_134;
  undefined uStack_132;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  byte bStack_118;
  undefined2 uStack_117;
  undefined uStack_115;
  uint uStack_110;
  undefined8 uStack_10c;
  byte bStack_104;
  undefined2 uStack_103;
  undefined uStack_101;
  ulong uStack_100;
  uint *puStack_f8;
  int *piStack_f0;
  undefined *puStack_e8;
  undefined4 *puStack_e0;
  undefined *puStack_d8;
  int *piStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  uint uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  uint uStack_8c;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long *plStack_68;
  code *pcStack_60;
  int local_4c;
  long local_48;
  long local_40;
  ulong local_38;
  undefined8 uVar5;
  undefined8 uVar8;
  
  uVar9 = (ulong)param_1;
  pcStack_60 = (code *)0x42b82f;
  local_4c = _ZN56__LT__RF_T_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h21ba564204b53270E
                       (param_2);
  pcStack_60 = (code *)0x42b83e;
  auVar15 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                      (local_4c,extraout_RDX & 0xffffffff);
  uVar8 = auVar15._8_8_;
  uVar5 = auVar15._0_8_;
  pcStack_60 = (code *)0x42b855;
  auVar15 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (uVar5,uVar8,param_3,param_4);
  lVar6 = auVar15._0_8_;
  if (lVar6 == 0) {
    pcStack_60 = (code *)0x42b8e7;
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
              (param_3,param_4,uVar5,uVar8,&PTR_s_crates_ruff_python_formatter_src_0067fa98);
  }
  else {
    local_40 = auVar15._8_8_ + lVar6;
    local_48 = lVar6;
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      param_4 = &local_48;
      local_38 = uVar9;
      while( true ) {
        local_38 = local_38 - 1;
        pcStack_60 = (code *)0x42b89d;
        auVar17 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(param_4);
        if ((auVar17 & (undefined  [12])0x1) == (undefined  [12])0x0) break;
        if (((auVar17._8_4_ != 0x20) && (auVar17._8_4_ != 9)) || (iVar4 = iVar4 + 1, local_38 == 0))
        break;
      }
    }
    uVar14 = iVar4 + local_4c;
    uVar9 = (ulong)uVar14;
    if (uVar14 <= (uint)extraout_RDX) {
      auVar15._4_4_ = 0;
      auVar15._0_4_ = uVar14;
      auVar15._8_8_ = extraout_RDX & 0xffffffff;
      return auVar15;
    }
  }
  pcVar12 = "assertion failed: start.raw <= end.raw";
  puVar11 = (undefined4 *)0x26;
  pcStack_60 = 
  _ZN159__LT_ruff_python_formatter__verbatim__FormatVerbatimStatementRange_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hedec0059cabf53e0E
  ;
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,
             &PTR_s_crates_ruff_python_formatter_src_0067fab0);
  uVar13 = *extraout_RDX_00;
  lStack_a8 = extraout_RDX_00[1];
  pcVar3 = *(code **)(lStack_a8 + 0x30);
  puStack_f8 = (uint *)pcVar12;
  uStack_88 = extraout_RDX & 0xffffffff;
  uStack_80 = param_3;
  uStack_78 = uVar5;
  uStack_70 = uVar9;
  plStack_68 = param_4;
  pcStack_60 = (code *)uVar8;
  lVar6 = (*pcVar3)(uVar13);
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  auVar15 = (*(code *)PTR__ZN18ruff_python_parser6Tokens8in_range17heae93b5800670a2cE_006be1a8)
                      (*(undefined8 *)(lVar6 + 0x18),uVar1,uVar2);
  lStack_c0 = auVar15._0_8_;
  lStack_b8 = lStack_c0 + auVar15._8_8_ * 0xc;
  uStack_b0 = uVar1;
  uStack_ac = uVar2;
  (*(code *)
    PTR__ZN108__LT_ruff_python_formatter__verbatim__LogicalLinesIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7190bb93cf3261bfE_006be1b0
  )(&uStack_110,&lStack_c0);
  bVar10 = bStack_104;
  uVar9 = extraout_RDX_01;
  if (uStack_110 != 5) {
    uVar1 = puVar11[2];
    uStack_134 = uStack_103;
    uStack_132 = uStack_101;
    if (uStack_110 != 4) {
LAB_0042bc3d:
      *(undefined *)((long)puStack_f8 + 0xf) = uStack_132;
      *(undefined2 *)((long)puStack_f8 + 0xd) = uStack_134;
      *puStack_f8 = uStack_110;
      *(undefined8 *)(puStack_f8 + 1) = uStack_10c;
      *(byte *)(puStack_f8 + 3) = bVar10;
      *(ulong *)(puStack_f8 + 4) = uStack_100;
      goto LAB_0042bc86;
    }
    uStack_120 = uStack_10c;
    bStack_118 = bStack_104;
    uStack_115 = uStack_101;
    uStack_117 = uStack_103;
    puVar7 = (undefined8 *)(*pcVar3)(uVar13);
    iVar4 = _ZN21ruff_python_formatter8verbatim11Indentation11trim_indent17h4ed1435bb0f1173fE
                      (uVar1,&uStack_120,*puVar7,puVar7[1]);
    if (iVar4 == (int)extraout_RDX_02) {
      if ((bVar10 & 1) != 0) {
        lVar6 = lStack_a8;
LAB_0042bad3:
        piStack_f0 = (int *)CONCAT62(piStack_f0._2_6_,0x201);
        (**(code **)(lVar6 + 0x18))(uVar13,&piStack_f0);
      }
    }
    else {
      iStack_130 = iVar4;
      uStack_128 = _ZN21ruff_python_formatter8verbatim13verbatim_text17heeec4ed9639d83abE
                             (iVar4,extraout_RDX_02 & 0xffffffff);
      piStack_f0 = &iStack_130;
      puStack_e8 = &DAT_0067fac8;
      puStack_e0 = &uStack_128;
      puStack_d8 = &DAT_0067e210;
      piStack_d0 = &iStack_12c;
      puStack_c8 = &DAT_0067fac8;
      iStack_12c = (int)extraout_RDX_02;
      uStack_124 = extraout_EDX;
      _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
                (&uStack_a0,extraout_RDX_00,&piStack_f0,3);
      if (uStack_a0 != 4) {
LAB_0042bc69:
        uStack_100 = (ulong)uStack_a0;
        puStack_f8[5] = uStack_8c;
        *(undefined8 *)(puStack_f8 + 1) = uStack_9c;
        *(undefined8 *)(puStack_f8 + 3) = uStack_94;
        *puStack_f8 = uStack_a0;
        goto LAB_0042bc86;
      }
      if ((bVar10 & 1) != 0) {
        uVar13 = *extraout_RDX_00;
        lVar6 = extraout_RDX_00[1];
        goto LAB_0042bad3;
      }
    }
    (*(code *)
      PTR__ZN108__LT_ruff_python_formatter__verbatim__LogicalLinesIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7190bb93cf3261bfE_006be1b0
    )(&uStack_110,&lStack_c0);
    uVar9 = extraout_RDX_03;
    bVar10 = bStack_104;
    uStack_134 = uStack_103;
    uStack_132 = uStack_101;
    while (uStack_110 != 5) {
      if (uStack_110 != 4) goto LAB_0042bc3d;
      bStack_104 = bVar10;
      uStack_103 = uStack_134;
      uStack_101 = uStack_132;
      puVar7 = (undefined8 *)(**(code **)(extraout_RDX_00[1] + 0x30))(*extraout_RDX_00);
      iVar4 = _ZN21ruff_python_formatter8verbatim11Indentation11trim_indent17h4ed1435bb0f1173fE
                        (uVar1,&uStack_120,*puVar7,puVar7[1]);
      if (iVar4 == (int)extraout_RDX_05) {
        if ((bVar10 & 1) != 0) {
          piStack_f0 = (int *)CONCAT62(piStack_f0._2_6_,0x301);
LAB_0042bb00:
          (**(code **)(extraout_RDX_00[1] + 0x18))(*extraout_RDX_00,&piStack_f0);
        }
      }
      else {
        iStack_130 = iVar4;
        uStack_128 = _ZN21ruff_python_formatter8verbatim13verbatim_text17heeec4ed9639d83abE
                               (iVar4,extraout_RDX_05 & 0xffffffff);
        piStack_f0 = &iStack_130;
        puStack_e8 = &DAT_0067fac8;
        puStack_e0 = &uStack_128;
        puStack_d8 = &DAT_0067e210;
        piStack_d0 = &iStack_12c;
        puStack_c8 = &DAT_0067fac8;
        iStack_12c = (int)extraout_RDX_05;
        uStack_124 = extraout_EDX_00;
        _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
                  (&uStack_a0,extraout_RDX_00,&piStack_f0,3);
        if (uStack_a0 != 4) goto LAB_0042bc69;
        if ((bVar10 & 1) != 0) {
          piStack_f0 = (int *)CONCAT62(piStack_f0._2_6_,0x201);
          goto LAB_0042bb00;
        }
      }
      (*(code *)
        PTR__ZN108__LT_ruff_python_formatter__verbatim__LogicalLinesIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7190bb93cf3261bfE_006be1b0
      )(&uStack_110,&lStack_c0);
      uVar9 = extraout_RDX_04;
      bVar10 = bStack_104;
      uStack_134 = uStack_103;
      uStack_132 = uStack_101;
    }
  }
  *puStack_f8 = 4;
  uStack_100 = uVar9;
LAB_0042bc86:
  auVar16._8_8_ = uStack_100;
  auVar16._0_8_ = puStack_f8;
  return auVar16;
}