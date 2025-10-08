uint _ZN21ruff_python_formatter10expression22is_expression_huggable17h5ffd1dce1549d9d3E
               (uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  while ((ulong)uVar1 == 0x1b) {
    param_1 = *(uint **)(param_1 + 2);
    uVar1 = *param_1;
  }
  if ((0x197fff83fU >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
    param_2 = 0;
  }
  return param_2 & 0xffffff01;
}