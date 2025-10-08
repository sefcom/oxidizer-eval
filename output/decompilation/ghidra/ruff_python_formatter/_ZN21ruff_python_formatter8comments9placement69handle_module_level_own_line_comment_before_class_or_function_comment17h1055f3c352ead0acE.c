void _ZN21ruff_python_formatter8comments9placement69handle_module_level_own_line_comment_before_class_or_function_comment17h1055f3c352ead0acE
               (undefined8 *param_1,undefined8 *param_2,long *param_3,undefined (*param_4) [16])

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  long extraout_RDX;
  undefined (*pauVar15) [16];
  long *plVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 unaff_R12;
  char cVar19;
  undefined8 unaff_R13;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auStack_ec [8];
  char cStack_e4;
  undefined auStack_e0 [72];
  ulong uStack_98;
  undefined auStack_90 [16];
  long lStack_80;
  long *plStack_78;
  code *pcStack_70;
  undefined8 *local_60;
  undefined (*local_58) [16];
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  undefined8 uStack_38;
  
  auVar20._8_8_ = unaff_R13;
  auVar20._0_8_ = unaff_R12;
  bVar2 = *(byte *)(param_2 + 9);
  if (bVar2 != 0) {
    lVar13 = param_2[2];
    local_40 = param_2[4];
    if (local_40 != 0x5e && lVar13 != 0x5e) {
      uVar18 = param_2[3];
      uStack_38 = param_2[5];
      if (((uint)local_40 & 0xfffffffe) == 2) {
        uVar11 = *(uint *)((long)param_2 + 0x44);
        pcStack_70 = (code *)0x402bff;
        local_60 = param_1;
        local_58 = param_4;
        local_50 = uVar18;
        local_48 = param_2;
        uVar9 = (*(code *)
                  PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
                )(&local_40);
        if (uVar9 < uVar11) {
          pcStack_70 = (code *)0x402ce5;
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d228);
        }
        else {
          pcStack_70 = (code *)0x402c10;
          auVar20 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                              (uVar11,uVar9);
          pcStack_70 = (code *)0x402c29;
          auVar21 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                              (auVar20._0_8_,auVar20._8_8_,param_3,local_58);
          if (auVar21._0_8_ != 0) {
            pcStack_70 = (code *)0x402c3d;
            iVar10 = _ZN21ruff_python_formatter8comments9placement15max_empty_lines17h787bd2fd7fcb014fE
                               (auVar21._0_8_,auVar21._8_8_);
            uVar14 = *(undefined4 *)(local_48 + 8);
            if (iVar10 != 0) {
              local_60[1] = lVar13;
              local_60[2] = local_50;
              *(undefined4 *)(local_60 + 3) = uVar14;
              *(uint *)((long)local_60 + 0x1c) = uVar11;
              *(undefined *)(local_60 + 4) = 0;
              *(byte *)((long)local_60 + 0x21) = bVar2;
              *local_60 = 0x5f;
              return;
            }
            local_60[1] = local_40;
            local_60[2] = uStack_38;
            *(undefined4 *)(local_60 + 3) = uVar14;
            *(uint *)((long)local_60 + 0x1c) = uVar11;
            *(undefined *)(local_60 + 4) = 0;
            *(byte *)((long)local_60 + 0x21) = bVar2;
            *local_60 = 0x5e;
            return;
          }
        }
        uVar12 = auVar20._8_8_;
        ppuVar17 = &PTR_DAT_0067d240;
        pcStack_70 = 
        _ZN21ruff_python_formatter8comments9placement21handle_slice_comments17h19c4e8125bfdfa93E;
        pauVar15 = local_58;
        plVar16 = param_3;
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                  (param_3,local_58,auVar20._0_8_,uVar12,&PTR_DAT_0067d240);
        uVar9 = *(uint *)pauVar15[4];
        uStack_98 = (ulong)uVar11;
        lStack_80 = lVar13;
        plStack_78 = param_3;
        pcStack_70 = (code *)(ulong)bVar2;
        auStack_90 = auVar20;
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer18BackwardsTokenizer5up_to17h10c703c3dd949d71E_006bdc70
        )(auStack_e0,uVar9,uVar18,local_60,uVar12,ppuVar17);
        _ZN4core4iter6traits8iterator8Iterator8try_fold17h84c5c22150ea5174E(auStack_ec,auStack_e0);
        cVar19 = pauVar15[4][8];
        if ((cStack_e4 == 'Z') || (cStack_e4 != '\t' || cVar19 != '\0')) {
          uVar14 = *(undefined4 *)(pauVar15[4] + 4);
          cVar8 = _ZN21ruff_python_formatter10expression10expr_slice23assign_comment_in_slice17h53141057c2112aa6E
                            (uVar9,uVar18,local_60,extraout_RDX);
          if (cVar8 == '\0') {
            plVar1 = (long *)(extraout_RDX + 8);
            lVar13 = *plVar1;
          }
          else if (cVar8 == '\x01') {
            plVar1 = (long *)(extraout_RDX + 0x10);
            lVar13 = *plVar1;
          }
          else {
            plVar1 = (long *)(extraout_RDX + 0x18);
            lVar13 = *plVar1;
          }
          if (lVar13 == 0) {
            lVar13 = 0x60;
            auVar21._8_8_ = extraout_RDX;
            auVar21._0_8_ = 0x3a;
          }
          else {
            uVar11 = (*(code *)
                       PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
                     )();
            auVar21 = (*(code *)
                        PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                      )(*plVar1);
            lVar13 = 0x5f - (ulong)(uVar9 < uVar11);
          }
        }
        else {
          auVar21 = *pauVar15;
          uVar14 = *(undefined4 *)(pauVar15[4] + 4);
          lVar13 = 0x60;
          cVar19 = '\0';
        }
        *(undefined (*) [16])(plVar16 + 1) = auVar21;
        *(uint *)(plVar16 + 3) = uVar9;
        *(undefined4 *)((long)plVar16 + 0x1c) = uVar14;
        *(undefined *)(plVar16 + 4) = 0;
        *(char *)((long)plVar16 + 0x21) = cVar19;
        *plVar16 = lVar13;
        return;
      }
    }
  }
  uVar18 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar18;
  uVar18 = *param_2;
  uVar12 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar18;
  param_1[1] = uVar12;
  return;
}