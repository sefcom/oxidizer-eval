void _ZN21ruff_python_formatter8comments9placement19handle_call_comment17h6bdb1043c508ec69E
               (undefined8 *param_1,undefined8 *param_2)

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
  char cVar10;
  long local_30;
  undefined8 local_28;
  
  if ((*(char *)(param_2 + 9) == '\x01') && (local_30 = param_2[2], local_30 != 0x5e)) {
    local_28 = param_2[3];
    if (param_2[4] != 0x5e) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar2 = *(undefined4 *)((long)param_2 + 0x44);
      cVar10 = _ZN21ruff_python_formatter8comments9placement19handle_call_comment28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17hd7e0ed6b45e73cb8E
                         (&local_30,uVar1,uVar2,param_2[4],param_2[5]);
      if (cVar10 != '\0') {
        uVar3 = param_2[1];
        param_1[1] = *param_2;
        param_1[2] = uVar3;
        *(undefined4 *)(param_1 + 3) = uVar1;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
        *(undefined2 *)(param_1 + 4) = 0x100;
        *param_1 = 0x60;
        return;
      }
    }
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
  return;
}