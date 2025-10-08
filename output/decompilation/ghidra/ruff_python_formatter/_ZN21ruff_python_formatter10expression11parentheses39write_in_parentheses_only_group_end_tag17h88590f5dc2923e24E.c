void _ZN21ruff_python_formatter10expression11parentheses39write_in_parentheses_only_group_end_tag17h88590f5dc2923e24E
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined local_28 [8];
  undefined local_20;
  
  lVar1 = (**(code **)(param_2 + 0x30))();
  if (1 < *(byte *)(lVar1 + 0x20)) {
    if (*(byte *)(lVar1 + 0x20) == 2) {
      if (*(int *)(lVar1 + 0x24) == 0) {
        return;
      }
      local_20 = 9;
    }
    else {
      local_20 = 7;
    }
    local_28[0] = 10;
    (**(code **)(param_2 + 0x18))(param_1,local_28);
  }
  return;
}