void _ZN21ruff_python_formatter8comments9placement40handle_own_line_comment_between_branches17h2e114d08ca69ba0eE
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined auVar16 [16];
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_2[4];
  if (local_40 != 0x5e) {
    local_38 = param_2[5];
    uVar4 = *param_2;
    uVar5 = param_2[1];
    local_50 = param_3;
    local_48 = param_4;
    cVar11 = (*(code *)
               PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_36is_first_statement_in_alternate_body17hd90b606c1959148fE_006bdc48
             )(&local_40);
    if (cVar11 != '\0') {
      uVar2 = *(undefined4 *)(param_2 + 8);
      uVar3 = *(undefined4 *)((long)param_2 + 0x44);
      uVar12 = (*(code *)
                 PTR__ZN15ruff_python_ast7helpers25comment_indentation_after17h010db42c18589fa0E_006bdc50
               )(param_3,param_4,uVar2,uVar3,param_5,param_6);
      uVar13 = (*(code *)
                 PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
               )(&local_50);
      auVar16 = (*(code *)
                  PTR__ZN18ruff_python_trivia10whitespace21indentation_at_offset17hf2ddaa94b2cf2757E_006bdc58
                )(uVar13,param_5,param_6);
      uVar15 = auVar16._8_8_;
      if (auVar16._0_8_ == 0) {
        uVar15 = 0;
      }
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
                (uVar15 >> 0x20 != 0,&DAT_0067cc48);
      uVar14 = (uint)uVar15;
      if (uVar14 < uVar12 == uVar12 < uVar14) {
        if ((local_50 != 0x3c) && ((int)local_50 != 0x57)) {
          uVar1 = *(undefined *)(param_2 + 9);
          param_1[1] = local_50;
          param_1[2] = local_48;
          *(undefined4 *)(param_1 + 3) = uVar2;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
          *(undefined *)(param_1 + 4) = 0;
          *(undefined *)((long)param_1 + 0x21) = uVar1;
          *param_1 = 0x5f;
          return;
        }
      }
      else {
        if ((char)((uVar14 < uVar12) - (uVar12 < uVar14)) == '\x01') goto LAB_0040224a;
        if ((local_40 == 0x3c) || ((int)local_40 == 0x57)) {
          uVar1 = *(undefined *)(param_2 + 9);
          param_1[1] = local_40;
          param_1[2] = local_38;
          *(undefined4 *)(param_1 + 3) = uVar2;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
          *(undefined *)(param_1 + 4) = 0;
          *(undefined *)((long)param_1 + 0x21) = uVar1;
          *param_1 = 0x5e;
          return;
        }
      }
      uVar1 = *(undefined *)(param_2 + 9);
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x60;
      return;
    }
  }
LAB_0040224a:
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
}