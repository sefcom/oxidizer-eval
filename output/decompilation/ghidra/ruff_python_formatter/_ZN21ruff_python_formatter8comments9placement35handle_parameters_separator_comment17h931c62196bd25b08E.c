void _ZN21ruff_python_formatter8comments9placement35handle_parameters_separator_comment17h931c62196bd25b08E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

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
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  _ZN21ruff_python_formatter5other10parameters25find_parameter_separators17h04892e8d923259e9E
            (&local_48,param_4,param_5,param_3);
  local_78 = local_38;
  local_88 = local_48;
  uVar4 = local_88;
  uStack_80 = uStack_40;
  local_58 = local_24;
  local_88._0_1_ = (char)local_48;
  puVar13 = (undefined4 *)((long)&local_88 + 4);
  if ((char)local_88 == '\0') {
    puVar13 = (undefined4 *)0x0;
  }
  local_68 = local_34;
  uVar3 = local_68;
  uStack_64 = uStack_30;
  uStack_60 = uStack_2c;
  uStack_5c = uStack_28;
  local_68._0_1_ = (char)local_34;
  puVar12 = &uStack_64;
  if ((char)local_68 == '\0') {
    puVar12 = (undefined4 *)0x0;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined *)(param_2 + 9);
  local_88 = uVar4;
  local_68 = uVar3;
  cVar11 = _ZN21ruff_python_formatter5other10parameters43assign_argument_separator_comment_placement17h5db81c074307048eE
                     (puVar13,puVar12,uVar2,uVar1);
  if (cVar11 == '\x04') {
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
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + 0x44);
    uVar4 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x60;
  }
  return;
}