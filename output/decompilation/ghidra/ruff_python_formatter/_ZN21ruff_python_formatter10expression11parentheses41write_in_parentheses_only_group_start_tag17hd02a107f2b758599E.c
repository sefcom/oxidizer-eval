void _ZN21ruff_python_formatter10expression11parentheses41write_in_parentheses_only_group_start_tag17hd02a107f2b758599E
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined local_28 [8];
  undefined local_20;
  int local_1c;
  undefined local_18;
  undefined local_14;
  
  lVar1 = (**(code **)(param_2 + 0x30))();
  if (1 < *(byte *)(lVar1 + 0x20)) {
    if (*(byte *)(lVar1 + 0x20) == 2) {
      local_1c = *(int *)(lVar1 + 0x24);
      if (local_1c == 0) {
        return;
      }
      local_20 = 8;
      local_18 = 1;
      local_14 = 0;
    }
    else {
      local_20 = 6;
      local_1c = 0;
      local_18 = 0;
    }
    local_28[0] = 10;
    (**(code **)(param_2 + 0x18))(param_1,local_28);
  }
  return;
}