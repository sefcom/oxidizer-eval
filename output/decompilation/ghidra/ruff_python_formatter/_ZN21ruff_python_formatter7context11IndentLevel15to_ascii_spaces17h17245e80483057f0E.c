undefined2
_ZN21ruff_python_formatter7context11IndentLevel15to_ascii_spaces17h17245e80483057f0E
          (short param_1,byte param_2)

{
  ushort uVar1;
  
  uVar1 = param_1 - 1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  if ((short)((uint)param_2 * (uint)uVar1 >> 0x10) == 0) {
    return (short)((uint)param_2 * (uint)uVar1);
  }
  return 0xffff;
}