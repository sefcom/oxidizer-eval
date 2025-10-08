void _ZN21ruff_python_formatter8comments9placement28handle_comprehension_comment17h2a47c5ef882afca3E
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined uVar12;
  uint uVar13;
  code *pcVar14;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint local_48 [3];
  uint local_3c [3];
  
  cVar1 = *(char *)(param_2 + 9);
  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)((long)param_2 + 0x44);
  uVar13 = (*(code *)
             PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
           )(param_3 + 0x18);
  puVar11 = 
  PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  ;
  if (uVar3 < uVar13) {
    if (cVar1 == '\0') {
      param_1[1] = 0x4d;
      param_1[2] = param_3;
      *(uint *)(param_1 + 3) = uVar2;
      *(uint *)((long)param_1 + 0x1c) = uVar3;
LAB_00404370:
      *(undefined2 *)(param_1 + 4) = 0;
      *param_1 = 0x60;
      return;
    }
  }
  else {
    (*(code *)
      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
    )(param_3 + 0x18);
    lVar16 = param_3 + 0x68;
    uVar13 = (*(code *)puVar11)(lVar16);
    if (uVar13 < (uint)extraout_RDX) goto LAB_004045ed;
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80)
              (local_3c,extraout_RDX & 0xffffffff,uVar13,0x47,param_4,param_5);
    if (uVar2 < local_3c[0]) {
      if (cVar1 != '\0') {
        param_1[1] = 0x4d;
        param_1[2] = param_3;
        *(uint *)(param_1 + 3) = uVar2;
        *(uint *)((long)param_1 + 0x1c) = uVar3;
        *(undefined2 *)(param_1 + 4) = 0x100;
        *param_1 = 0x60;
        return;
      }
    }
    else {
      uVar13 = (*(code *)
                 PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
               )(lVar16);
      if (uVar2 < uVar13) {
        if (cVar1 == '\0') {
          param_1[1] = 0x4d;
          param_1[2] = param_3;
          *(uint *)(param_1 + 3) = uVar2;
          *(uint *)((long)param_1 + 0x1c) = uVar3;
          goto LAB_00404370;
        }
      }
      else {
        (*(code *)
          PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
        )(lVar16);
        lVar16 = *(long *)(param_3 + 0x10);
        if (lVar16 != 0) {
          uVar17 = extraout_RDX_00 & 0xffffffff;
          lVar15 = *(long *)(param_3 + 8);
          if (cVar1 == '\0') {
            lVar16 = lVar16 * 0x50;
            pcVar14 = (code *)
                      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
            ;
            do {
              uVar13 = (*pcVar14)(lVar15);
              if (uVar13 < (uint)uVar17) goto LAB_004045d4;
              (*(code *)
                PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80
              )(local_48,uVar17,uVar13,0x45,param_4,param_5);
              pcVar14 = (code *)
                        PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
              ;
              if ((local_48[0] < uVar2) &&
                 (uVar13 = (*(code *)
                             PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
                           )(lVar15), uVar2 < uVar13)) {
                uVar12 = 0;
                goto LAB_0040456e;
              }
              (*pcVar14)(lVar15);
              uVar17 = extraout_RDX_02 & 0xffffffff;
              lVar15 = lVar15 + 0x50;
              lVar16 = lVar16 + -0x50;
            } while (lVar16 != 0);
          }
          else {
            lVar16 = lVar16 * 0x50;
            pcVar14 = (code *)
                      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
            ;
            do {
              uVar13 = (*pcVar14)(lVar15);
              if (uVar13 < (uint)uVar17) goto LAB_004045d4;
              (*(code *)
                PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80
              )(local_48,uVar17,uVar13,0x45,param_4,param_5);
              pcVar14 = (code *)
                        PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
              ;
              if (((uint)uVar17 < uVar2) && (uVar2 < local_48[0])) {
                uVar12 = 1;
LAB_0040456e:
                param_1[1] = 0x4d;
                param_1[2] = param_3;
                *(uint *)(param_1 + 3) = uVar2;
                *(uint *)((long)param_1 + 0x1c) = uVar3;
                *(undefined *)(param_1 + 4) = 0;
                *(undefined *)((long)param_1 + 0x21) = uVar12;
                *param_1 = 0x60;
                return;
              }
              (*(code *)
                PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
              )(lVar15);
              uVar17 = extraout_RDX_01 & 0xffffffff;
              lVar15 = lVar15 + 0x50;
              lVar16 = lVar16 + -0x50;
            } while (lVar16 != 0);
          }
        }
      }
    }
  }
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
LAB_004045d4:
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d3d8);
LAB_004045ed:
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d3c0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}