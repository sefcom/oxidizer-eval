void _ZN21ruff_python_formatter8comments9placement38handle_end_of_line_comment_around_body17h2406e9ad3d283d24E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  long local_80;
  undefined8 local_78;
  undefined local_6c [8];
  char local_64;
  long local_60;
  undefined8 local_58;
  
  if (*(char *)(param_2 + 9) != '\x01') {
    if (param_2[4] != 0x5e) {
      local_78 = param_2[5];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      local_80 = param_2[4];
      cVar11 = (*(code *)
                 PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_26is_first_statement_in_body17h5fab489393000851E_006bdc40
               )(&local_80,uVar3,uVar4);
      if (cVar11 != '\0') {
        uVar1 = *(uint *)((long)param_2 + 0x44);
        uVar12 = (*(code *)
                   PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
                 )(&local_80);
        if (uVar12 < uVar1) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d108);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (&local_60,param_3,param_4,uVar1,uVar12);
        _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_6c,&local_60);
        if (local_64 == 'Z') {
          uVar2 = *(undefined4 *)(param_2 + 8);
          param_1[1] = uVar3;
          param_1[2] = uVar4;
          *(undefined4 *)(param_1 + 3) = uVar2;
          *(uint *)((long)param_1 + 0x1c) = uVar1;
          *(undefined2 *)(param_1 + 4) = 0;
          *param_1 = 0x60;
          return;
        }
      }
    }
    local_60 = param_2[2];
    if (local_60 != 0x5e) {
      local_58 = param_2[3];
      auVar13 = (*(code *)
                  PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_18last_child_in_body17h106de3f3c845d12eE_006bd958
                )(&local_60);
      if (auVar13._0_8_ != 0x5e) {
        auVar14 = _ZN4core4iter6traits8iterator8Iterator4fold17hc0deaa67c0db3dcaE
                            (auVar13._0_8_,auVar13._8_8_);
        if (auVar14._0_8_ == 0x5e) {
          auVar14 = auVar13;
        }
        *(undefined (*) [16])(param_1 + 1) = auVar14;
        param_1[3] = param_2[8];
        *(undefined2 *)(param_1 + 4) = 0;
        *param_1 = 0x5f;
        return;
      }
    }
  }
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar3 = *param_2;
  uVar4 = param_2[1];
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
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}