long _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder25entry_with_line_separator17h043ed62ea7122b6fE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_59;
  int local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  long local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_59 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x20);
  local_30 = &local_59;
  local_18 = &DAT_0067e6a0;
  if (*(int *)(param_1 + 8) == 4) {
    local_38 = param_1;
    local_28 = param_2;
    local_20 = param_3;
    _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder25entry_with_line_separator28__u7b__u7b_closure_u7d__u7d_17h089cedb806c88fe2E
              (&local_58,&local_40);
  }
  else {
    local_54 = *(undefined8 *)(param_1 + 0xc);
    uStack_4c = (undefined4)*(undefined8 *)(param_1 + 0x14);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
    uStack_44 = *(undefined4 *)(param_1 + 0x1c);
    local_58 = *(int *)(param_1 + 8);
  }
  *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(int *)(param_1 + 8) = local_58;
  *(undefined8 *)(param_1 + 0xc) = local_54;
  *(undefined4 *)(param_1 + 0x14) = uStack_4c;
  return param_1;
}