ulong _ZN5uu_od13parse_formats22is_format_size_decimal17h9f07da48a23fad4fE
                (int param_1,char param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  bool bVar1;
  
  bVar1 = param_1 - 0x30U < 10;
  if (bVar1 && param_2 != '\0') {
    _ZN5alloc6string6String4push17h859ae11851fd8b8eE(param_3,param_1);
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar1 && param_2 != '\0') & 0xffffffff;
}