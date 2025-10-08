void _ZN21ruff_python_formatter8comments9placement24handle_key_value_comment17h4bc8bf9cece74ceeE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined uVar10;
  char cVar11;
  uint uVar12;
  ulong extraout_RDX;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined local_60 [48];
  
  puVar9 = 
  PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  ;
  local_70 = param_2[2];
  local_80 = param_2[4];
  if (local_80 != 0x5e && local_70 != 0x5e) {
    local_68 = param_2[3];
    local_78 = param_2[5];
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_70);
    uVar12 = (*(code *)puVar9)(&local_80);
    if (uVar12 < (uint)extraout_RDX) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d2a0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_60,param_3,param_4,extraout_RDX & 0xffffffff,uVar12);
    uVar10 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h74985cea8eb9b63fE(local_60);
    cVar11 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                       (uVar10,1);
    if (cVar11 != '\0') {
      uVar2 = param_2[1];
      uVar10 = *(undefined *)(param_2 + 9);
      param_1[1] = *param_2;
      param_1[2] = uVar2;
      param_1[3] = param_2[8];
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar10;
      *param_1 = 0x60;
      return;
    }
  }
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}