void _ZN21ruff_python_formatter8comments9placement23handle_enclosed_comment17hadddfe291136891fE
               (ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined uVar11;
  char cVar12;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined auVar16 [16];
  ulong local_e0;
  int *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_80 [80];
  
  if (0x5a < *param_2) goto switchD_00401403_caseD_1;
  piVar13 = (int *)param_2[1];
  local_d0 = piVar13;
  local_c8 = param_5;
  local_c0 = param_6;
  switch(*param_2) {
  case 0:
    _ZN21ruff_python_formatter8comments9placement30handle_trailing_module_comment17h61c2f4e57ae7d9d7E
              (local_80,piVar13,param_2);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17hb42112387359d272E
              (param_1,local_80,param_5,param_6);
    break;
  default:
    goto switchD_00401403_caseD_1;
  case 2:
    _ZN21ruff_python_formatter8comments9placement47handle_leading_function_with_decorators_comment17hd641c7b4e7b2916eE
              ();
    return;
  case 3:
    _ZN21ruff_python_formatter8comments9placement44handle_leading_class_with_decorators_comment17hfc063ea7137b8fbeE
              ();
    return;
  case 4:
    goto LAB_0040185f;
  case 6:
  case 8:
    uVar15 = param_2[2];
    if (uVar15 != 0x5e) {
      local_e0 = param_2[3];
      uVar14 = *(undefined8 *)(piVar13 + 2);
LAB_004017c0:
      auVar16 = (*(code *)
                  PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                )(uVar14);
      cVar12 = (*(code *)
                 PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_6ptr_eq17hbc360a434919a265E_006bdc28
               )(uVar15,local_e0,auVar16._0_8_,auVar16._8_8_);
joined_r0x0040184d:
      if (cVar12 != '\0') {
LAB_0040185f:
        _ZN21ruff_python_formatter8comments9placement52handle_trailing_implicit_concatenated_string_comment17h007a50773b55868eE
                  (param_1,param_2,param_3,param_4,param_5,param_6);
        return;
      }
    }
    goto switchD_00401403_caseD_1;
  case 7:
    uVar15 = param_2[2];
    if (uVar15 != 0x5e) {
      local_e0 = param_2[3];
      uVar14 = *(undefined8 *)(piVar13 + 6);
      goto LAB_004017c0;
    }
    goto switchD_00401403_caseD_1;
  case 9:
    if (param_2[2] != 0x5e) {
      cVar12 = _ZN21ruff_python_formatter8comments9placement23handle_enclosed_comment28__u7b__u7b_closure_u7d__u7d_17h8ffbd6d6cab76935E
                         (*(undefined8 *)(piVar13 + 6),param_2[2],param_2[3]);
      goto joined_r0x0040184d;
    }
    goto switchD_00401403_caseD_1;
  case 0xd:
    _ZN21ruff_python_formatter8comments9placement19handle_with_comment17hf61c46f4c07a3c5eE();
    return;
  case 0x13:
    _ZN21ruff_python_formatter8comments9placement26handle_import_from_comment17h4ec1346c357b2bdcE();
    return;
  case 0x1b:
  case 0x2a:
    _ZN21ruff_python_formatter8comments9placement35handle_trailing_binary_like_comment17ha53b59540e29e738E
              (param_1,param_2,param_5,param_6);
    return;
  case 0x1c:
    _ZN21ruff_python_formatter8comments9placement25handle_named_expr_comment17hdecf302068a683cfE
              (param_1,param_2,param_5,param_6);
    return;
  case 0x1d:
    _ZN21ruff_python_formatter8comments9placement58handle_trailing_binary_expression_left_or_operator_comment17h7fe1a83393dd1d9cE
              ();
    return;
  case 0x1e:
    _ZN21ruff_python_formatter8comments9placement23handle_unary_op_comment17h4599e1a2dc0ed5cbE();
    return;
  case 0x1f:
    _ZN21ruff_python_formatter8comments9placement21handle_lambda_comment17h540739c62cbca78bE();
    return;
  case 0x20:
    _ZN21ruff_python_formatter8comments9placement22handle_expr_if_comment17hc4c85a359012ec53E();
    return;
  case 0x21:
    _ZN21ruff_python_formatter8comments9placement29handle_dict_unpacking_comment17h0dcd851a35bf90fbE
              (local_80,param_2,param_5,param_6);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h439afbf91d6101f4E
              (&local_d0,local_80,param_5,param_6);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17hb4697eb4470843b9E
              (param_1,&local_d0,param_5,param_6);
    break;
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x38:
  case 0x4b:
  case 0x4e:
  case 0x58:
    goto switchD_00401403_caseD_22;
  case 0x25:
    _ZN21ruff_python_formatter8comments9placement24handle_key_value_comment17h4bc8bf9cece74ceeE
              (local_80,param_2,param_5,param_6);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h439afbf91d6101f4E
              (param_1,local_80,param_5,param_6);
    break;
  case 0x26:
    cVar12 = *(char *)(piVar13 + 0xb);
    goto joined_r0x00401962;
  case 0x2b:
    _ZN21ruff_python_formatter8comments9placement19handle_call_comment17h6bdb1043c508ec69E();
    return;
  case 0x2e:
    uVar15 = param_2[7];
    if (param_2[6] == 0x59) {
      uVar11 = *(undefined *)(param_2 + 9);
      param_1[1] = 0x59;
    }
    else {
      if ((int)param_2[6] != 0x5a) goto switchD_00401403_caseD_1;
      uVar11 = *(undefined *)(param_2 + 9);
      param_1[1] = 0x5a;
    }
    param_1[2] = uVar15;
    param_1[3] = param_2[8];
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar11;
    goto LAB_0040198c;
  case 0x34:
    _ZN21ruff_python_formatter8comments9placement24handle_attribute_comment17h403873c41e2a8077E();
    return;
  case 0x35:
    if (**(int **)(piVar13 + 2) == 0x1f) {
      piVar13 = *(int **)(piVar13 + 2) + 2;
      goto LAB_00401617;
    }
    if (*(char *)(param_2 + 9) == '\0') {
      (*(code *)
        PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
      )(*(undefined8 *)piVar13);
      uVar1 = *(uint *)(param_2 + 8);
      if (extraout_EDX < uVar1) {
        (*(code *)
          PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
        )(*(undefined8 *)piVar13);
        if (uVar1 < extraout_EDX_00) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d0f0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (local_80,param_5,param_6,extraout_EDX_00,uVar1);
        uVar11 = _ZN4core4iter6traits8iterator8Iterator8try_fold17he1fe0ba4c11142afE(local_80);
        cVar12 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                           (uVar11,1);
        if (cVar12 == '\0') {
          uVar15 = param_2[9];
          param_1[8] = param_2[8];
          param_1[9] = uVar15;
          uVar15 = *param_2;
          uVar4 = param_2[1];
          uVar5 = param_2[2];
          uVar6 = param_2[3];
          uVar7 = param_2[4];
          uVar8 = param_2[5];
          uVar9 = param_2[7];
          param_1[6] = param_2[6];
          param_1[7] = uVar9;
          param_1[4] = uVar7;
          param_1[5] = uVar8;
          param_1[2] = uVar5;
          param_1[3] = uVar6;
          *param_1 = uVar15;
          param_1[1] = uVar4;
          return;
        }
        _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_d0,local_80);
        if ((char)local_c8 == 'Z') {
          uVar2 = *(undefined4 *)((long)param_2 + 0x44);
          param_1[1] = 0x35;
          param_1[2] = (ulong)piVar13;
          *(uint *)(param_1 + 3) = uVar1;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
          *(undefined2 *)(param_1 + 4) = 0;
          *param_1 = 0x60;
          return;
        }
      }
    }
    goto switchD_00401403_caseD_1;
  case 0x36:
    _ZN21ruff_python_formatter8comments9placement59handle_trailing_expression_starred_star_end_of_line_comment17h2ce8acd719e7de77E
              ();
    return;
  case 0x39:
    cVar12 = *(char *)(piVar13 + 9);
joined_r0x00401962:
    if (cVar12 != '\0') goto switchD_00401403_caseD_22;
switchD_00401403_caseD_1:
    uVar15 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar15;
    uVar15 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar9;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    *param_1 = uVar15;
    param_1[1] = uVar4;
    break;
  case 0x3a:
LAB_00401617:
    _ZN21ruff_python_formatter8comments9placement21handle_slice_comments17h19c4e8125bfdfa93E
              (param_1,param_2,piVar13,param_3,param_4,param_5,param_6);
    break;
  case 0x3d:
    if ((((param_2[2] != 0x5e) && (*(char *)(param_2 + 9) != '\0')) &&
        (*(long *)(piVar13 + 0x10) != 0)) && (param_2[4] != 0x5e)) {
      uVar15 = param_2[3];
      param_1[1] = param_2[2];
      param_1[2] = uVar15;
      param_1[3] = param_2[8];
      *(undefined2 *)(param_1 + 4) = 0x100;
      *param_1 = 0x5f;
      return;
    }
    goto switchD_00401403_caseD_22;
  case 0x41:
    bVar10 = _ZN21ruff_python_formatter7pattern22pattern_match_sequence12SequenceType12from_pattern17hd83d70a3c291045dE
                       (piVar13,param_5,param_6);
    if (1 < bVar10) {
      uVar15 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar15;
      uVar15 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar9;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      *param_1 = uVar15;
      param_1[1] = uVar4;
      return;
    }
    goto LAB_0040140c;
  case 0x42:
    _ZN21ruff_python_formatter8comments9placement36handle_bracketed_end_of_line_comment17he74cb20803a160ebE
              (local_80,param_2,param_5,param_6);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17hd0ec28159132cfe7E
              (param_1,local_80,&local_d0);
    break;
  case 0x43:
    _ZN21ruff_python_formatter8comments9placement34handle_pattern_match_class_comment17hf36f0e74ad330240E
              ();
    return;
  case 0x44:
    uVar11 = *(undefined *)(param_2 + 9);
    param_1[1] = 0x44;
    goto LAB_00401979;
  case 0x45:
    _ZN21ruff_python_formatter8comments9placement31handle_pattern_match_as_comment17h1d3128bda0017e3fE
              (param_1,param_2,param_5,param_6);
    return;
  case 0x4c:
    _ZN21ruff_python_formatter8comments9placement30handle_pattern_keyword_comment17h41c968d350787c2bE
              (param_1,param_2,piVar13[0x1b],param_5,param_6);
    return;
  case 0x4d:
    _ZN21ruff_python_formatter8comments9placement28handle_comprehension_comment17h2a47c5ef882afca3E
              ();
    return;
  case 0x4f:
    _ZN21ruff_python_formatter8comments9placement35handle_parameters_separator_comment17h931c62196bd25b08E
              (local_80,param_2,piVar13,param_5,param_6);
    _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17he7fa41dec2ce77d0E
              (param_1,local_80,&local_d0);
    break;
  case 0x50:
    _ZN21ruff_python_formatter8comments9placement24handle_parameter_comment17h4b98d1e26c5ecc8eE();
    return;
  case 0x52:
    _ZN21ruff_python_formatter8comments9placement22handle_keyword_comment17haf388a5660966b8eE();
    return;
  case 0x54:
    _ZN21ruff_python_formatter8comments9placement24handle_with_item_comment17h611b67e9426fd01cE
              (param_1,param_2,param_5,param_6);
    return;
  case 0x59:
    uVar11 = *(undefined *)(param_2 + 9);
    param_1[1] = 0x59;
    goto LAB_00401979;
  case 0x5a:
    uVar11 = *(undefined *)(param_2 + 9);
    param_1[1] = 0x5a;
LAB_00401979:
    param_1[2] = (ulong)piVar13;
    param_1[3] = param_2[8];
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar11;
LAB_0040198c:
    *param_1 = 0x60;
  }
  return;
switchD_00401403_caseD_22:
LAB_0040140c:
  _ZN21ruff_python_formatter8comments9placement36handle_bracketed_end_of_line_comment17he74cb20803a160ebE
            (param_1,param_2,param_5,param_6);
  return;
}