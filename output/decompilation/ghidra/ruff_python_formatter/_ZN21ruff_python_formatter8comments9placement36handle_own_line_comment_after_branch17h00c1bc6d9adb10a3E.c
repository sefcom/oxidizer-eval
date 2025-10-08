void _ZN21ruff_python_formatter8comments9placement36handle_own_line_comment_after_branch17h00c1bc6d9adb10a3E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = param_6;
  local_40 = param_3;
  local_38 = param_4;
  auVar16 = (*(code *)
              PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_18last_child_in_body17h106de3f3c845d12eE_006bd958
            )(&local_40);
  uVar3 = local_48;
  if (auVar16._0_8_ == 0x5e) {
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    uVar3 = *param_2;
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
    *param_1 = uVar3;
    param_1[1] = uVar4;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)((long)param_2 + 0x44);
    uVar12 = (*(code *)
               PTR__ZN15ruff_python_ast7helpers25comment_indentation_after17h010db42c18589fa0E_006bdc50
             )(param_3,param_4,uVar1,uVar2,param_5,local_48);
    auVar10._12_4_ = 0;
    auVar10._8_4_ = uVar12;
    uVar13 = (*(code *)
               PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
             )(&local_40);
    auVar17 = (*(code *)
                PTR__ZN18ruff_python_trivia10whitespace21indentation_at_offset17hf2ddaa94b2cf2757E_006bdc58
              )(uVar13,param_5,uVar3);
    uVar14 = auVar17._8_8_;
    if (auVar17._0_8_ == 0) {
      uVar14 = 0;
    }
    if (uVar14 >> 0x20 == 0) {
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
      if (uVar12 != (uint)uVar14) {
        auVar10._0_8_ = 0x5e;
        while( true ) {
          local_58 = auVar16;
          uVar13 = (*(code *)
                     PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
                   )(local_58);
          auVar16 = (*(code *)
                      PTR__ZN18ruff_python_trivia10whitespace21indentation_at_offset17hf2ddaa94b2cf2757E_006bdc58
                    )(uVar13,param_5,local_48);
          uVar14 = auVar16._8_8_;
          if (auVar16._0_8_ == 0) {
            uVar14 = 0;
          }
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
                    (uVar14 >> 0x20 != 0,&DAT_0067cc48);
          uVar15 = (uint)uVar14;
          if ((char)((uVar15 < uVar12) - (uVar12 < uVar15)) != '\x01') break;
          auVar16 = (*(code *)
                      PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_18last_child_in_body17h106de3f3c845d12eE_006bd958
                    )(local_58);
          auVar10 = local_58;
          if (auVar16._0_8_ == 0x5e) {
            uVar11 = *(undefined *)(param_2 + 9);
LAB_00402574:
            *(undefined (*) [16])(param_1 + 1) = auVar10;
LAB_0040257c:
            *(undefined4 *)(param_1 + 3) = uVar1;
            *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
            *(undefined *)(param_1 + 4) = 0;
            *(undefined *)((long)param_1 + 0x21) = uVar11;
            *param_1 = 0x5f;
            return;
          }
        }
        if (uVar15 < uVar12 == uVar12 < uVar15) {
          uVar11 = *(undefined *)(param_2 + 9);
          *(undefined (*) [16])(param_1 + 1) = local_58;
          goto LAB_0040257c;
        }
        if (auVar10._0_8_ == 0x5e) {
          uVar3 = param_2[9];
          param_1[8] = param_2[8];
          param_1[9] = uVar3;
          uVar3 = *param_2;
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
          *param_1 = uVar3;
          param_1[1] = uVar4;
          return;
        }
        uVar11 = *(undefined *)(param_2 + 9);
        goto LAB_00402574;
      }
    }
    else {
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(1,&DAT_0067cc48);
    }
    uVar3 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    uVar3 = *param_2;
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
    *param_1 = uVar3;
    param_1[1] = uVar4;
  }
  return;
}