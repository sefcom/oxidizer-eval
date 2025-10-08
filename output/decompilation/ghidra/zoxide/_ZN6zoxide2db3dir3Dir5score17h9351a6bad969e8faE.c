double _ZN6zoxide2db3dir3Dir5score17h9351a6bad969e8faE(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 <= param_3) {
    uVar1 = param_3 - param_2;
  }
  if (uVar1 < 0xe10) {
    return param_1 * DAT_00118ef0;
  }
  if (uVar1 < 0x15180) {
    return param_1 * _DAT_00118ef8;
  }
  return param_1 * *(double *)(&DAT_00118cd0 + (ulong)(uVar1 < 0x93a80) * 8);
}