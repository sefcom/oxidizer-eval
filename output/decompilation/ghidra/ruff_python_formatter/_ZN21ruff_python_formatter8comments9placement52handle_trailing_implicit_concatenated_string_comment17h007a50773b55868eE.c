void _ZN21ruff_python_formatter8comments9placement52handle_trailing_implicit_concatenated_string_comment17h007a50773b55868eE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  char cVar14;
  undefined uVar15;
  ulong uVar16;
  undefined auVar17 [16];
  undefined local_90 [16];
  long local_80;
  undefined local_78 [24];
  undefined local_60 [48];
  
  if (((*(char *)(param_2 + 9) != '\0') || (param_2[2] == 0x5e)) ||
     (local_90 = _ZN21ruff_python_formatter8comments9placement52handle_trailing_implicit_concatenated_string_comment28__u7b__u7b_closure_u7d__u7d_17h01c9fceb56ac1f89E
                           (param_2[2],param_2[3]), local_90._0_8_ == 4)) {
    uVar5 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar5;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = param_2[4];
    uVar10 = param_2[5];
    uVar11 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar11;
    param_1[4] = uVar9;
    param_1[5] = uVar10;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    return;
  }
  (*(code *)PTR__ZN15ruff_python_ast10expression10StringLike5parts17hda13f2934d2ef180E_006bdc88)
            (local_78,local_90);
  puVar12 = 
  PTR__ZN121__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h133d1760b6021cb4E_006bd738
  ;
  auVar17 = (*(code *)
              PTR__ZN121__LT_ruff_python_ast__expression__StringLikePartIter_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h133d1760b6021cb4E_006bd738
            )(local_78);
  local_80 = auVar17._8_8_;
  uVar16 = auVar17._0_8_;
  auVar17 = (*(code *)puVar12)(local_78);
  lVar13 = local_80;
  if (auVar17._0_8_ != 4 && uVar16 != 4) {
    if (*(uint *)(local_80 + 0x10 + (ulong)(1 < uVar16) * 8) <
        *(uint *)(auVar17._8_8_ + 0x14 + (ulong)(1 < auVar17._0_8_) * 8)) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d3f0);
LAB_00404825:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d408);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar14 = (*(code *)
               PTR__ZN65__LT_str_u20_as_u20_ruff_source_file__line_ranges__LineRanges_GT_19contains_line_break17hf0570f0be9a9b684E_006bdc68
             )(param_5,param_6);
    if (cVar14 != '\0') {
      cVar14 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                         (*(undefined8 *)(&DAT_00188bc0 + local_90._0_8_ * 8),local_90._8_8_,param_3
                          ,param_4,param_5,param_6);
      if (cVar14 != '\0') {
        uVar1 = *(uint *)(lVar13 + 0x14 + (ulong)(1 < uVar16) * 8);
        uVar2 = *(uint *)(param_2 + 8);
        if (uVar2 < uVar1) goto LAB_00404825;
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (local_60,param_5,param_6,uVar1,uVar2);
        uVar15 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h9502309d37834e02E(local_60);
        cVar14 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                           (uVar15,1);
        if (cVar14 == '\0') {
          uVar3 = *(undefined4 *)((long)param_2 + 0x44);
          param_1[1] = *(undefined8 *)("[" + uVar16 * 8);
          param_1[2] = lVar13;
          *(uint *)(param_1 + 3) = uVar2;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
          *(undefined2 *)(param_1 + 4) = 0;
          *param_1 = 0x5f;
          return;
        }
      }
    }
  }
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar11;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  return;
}