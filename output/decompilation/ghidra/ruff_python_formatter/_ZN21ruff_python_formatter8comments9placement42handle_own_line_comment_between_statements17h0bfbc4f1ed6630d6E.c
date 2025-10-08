void _ZN21ruff_python_formatter8comments9placement42handle_own_line_comment_between_statements17h0bfbc4f1ed6630d6E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined auVar15 [16];
  undefined auVar16 [16];
  long local_40;
  undefined8 uStack_38;
  
  auVar15._8_8_ = unaff_R13;
  auVar15._0_8_ = unaff_R12;
  lVar4 = param_2[2];
  if ((lVar4 != 0x5e) && (local_40 = param_2[4], local_40 != 0x5e)) {
    uVar5 = param_2[3];
    uStack_38 = param_2[5];
    if ((lVar4 - 2U < 0x19 && local_40 - 2U < 0x19) &&
       (cVar1 = *(char *)(param_2 + 9), cVar1 != '\0')) {
      uVar2 = *(uint *)((long)param_2 + 0x44);
      uVar13 = (*(code *)
                 PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
               )(&local_40);
      if (uVar13 < uVar2) {
        (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                  ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d138);
      }
      else {
        auVar15 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                            (uVar2,uVar13);
        auVar16 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (auVar15._0_8_,auVar15._8_8_,param_3,param_4);
        if (auVar16._0_8_ != 0) {
          iVar14 = _ZN21ruff_python_formatter8comments9placement15max_empty_lines17h787bd2fd7fcb014fE
                             (auVar16._0_8_,auVar16._8_8_);
          uVar3 = *(undefined4 *)(param_2 + 8);
          if (iVar14 != 0) {
            param_1[1] = lVar4;
            param_1[2] = uVar5;
            *(undefined4 *)(param_1 + 3) = uVar3;
            *(uint *)((long)param_1 + 0x1c) = uVar2;
            *(undefined *)(param_1 + 4) = 0;
            *(char *)((long)param_1 + 0x21) = cVar1;
            *param_1 = 0x5f;
            return;
          }
          param_1[1] = local_40;
          param_1[2] = uStack_38;
          *(undefined4 *)(param_1 + 3) = uVar3;
          *(uint *)((long)param_1 + 0x1c) = uVar2;
          *(undefined *)(param_1 + 4) = 0;
          *(char *)((long)param_1 + 0x21) = cVar1;
          *param_1 = 0x5e;
          return;
        }
      }
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (param_3,param_4,auVar15._0_8_,auVar15._8_8_,&PTR_DAT_0067d150);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar12;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  *param_1 = uVar5;
  param_1[1] = uVar7;
  return;
}