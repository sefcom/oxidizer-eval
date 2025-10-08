void _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder6finish17h8ba77baf5c7e2006E
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  long local_10;
  long local_8;
  
  local_20 = *(undefined8 *)(param_2 + 0x20);
  local_10 = param_2 + 0x28;
  local_8 = param_2 + 0x2c;
  if (*(int *)(param_2 + 8) == 4) {
    local_18 = param_2;
    _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder6finish28__u7b__u7b_closure_u7d__u7d_17hc0f4d7c6cc211d36E
              (param_1,&local_20);
    return;
  }
  *param_1 = *(int *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 3) = uVar1;
  param_1[5] = *(int *)(param_2 + 0x1c);
  return;
}