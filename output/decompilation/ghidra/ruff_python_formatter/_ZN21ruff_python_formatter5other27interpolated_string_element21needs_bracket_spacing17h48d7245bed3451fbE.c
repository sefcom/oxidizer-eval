ulong _ZN21ruff_python_formatter5other27interpolated_string_element21needs_bracket_spacing17h48d7245bed3451fbE
                (int *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  
  if (((*param_1 == 0x1e) && (*(char *)(param_1 + 0xb) == '\0')) && (*(long *)(param_1 + 6) == 1)) {
    return 0;
  }
  pbVar1 = (byte *)_ZN21ruff_python_formatter10expression9left_most17h26733ef32f4505d7E
                             (param_1,*(undefined8 *)(*(long *)(param_2[2] + 0x60) + 8),
                              *(undefined8 *)(*(long *)(param_2[2] + 0x60) + 0x10),*param_2,
                              param_2[1]);
  return 0x6c0UL >> (*pbVar1 & 0x3f) & 0xffffffffffffff01;
}