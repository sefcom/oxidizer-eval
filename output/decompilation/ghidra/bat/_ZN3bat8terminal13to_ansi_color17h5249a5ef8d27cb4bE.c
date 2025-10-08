uint _ZN3bat8terminal13to_ansi_color17h5249a5ef8d27cb4bE(ulong param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (((uint)(param_1 >> 0x18) & 0xff) == 1) {
    return 0x15;
  }
  if ((param_1 & 0xff000000) == 0) {
    if ((param_1 & 0xf8) != 0) {
      return (uVar2 & 0xff) << 8 | 0x12;
    }
    return *(uint *)("" + (ulong)(uVar2 & 7) * 4);
  }
  if (param_2 != '\0') {
    return uVar2 << 8 | 0x13;
  }
  bVar1 = _ZN12ansi_colours16ansi256_from_rgb17h4354bc3fa1bfdeccE();
  return (uint)bVar1 << 8 | 0x12;
}