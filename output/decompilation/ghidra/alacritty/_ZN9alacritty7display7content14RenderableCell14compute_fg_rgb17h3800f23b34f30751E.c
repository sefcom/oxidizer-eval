ulong _ZN9alacritty7display7content14RenderableCell14compute_fg_rgb17h3800f23b34f30751E
                (long param_1,ulong param_2,byte param_3)

{
  char cVar1;
  undefined2 uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  iVar6 = (int)uVar3;
  if ((char)param_2 == '\0') {
    cVar1 = *(char *)(*(long *)(param_1 + 0xe8) + 0x290);
    if ((param_3 & 0x82) < 0x80) {
      if (((param_3 & 0x82) == 0) || (cVar1 == '\0')) goto LAB_00546f6d;
      uVar2 = _ZN3vte4ansi10NamedColor9to_bright17hb283aa39f1be6f52E(uVar3);
    }
    else {
      if ((param_3 & 0x82) != 0x80) {
        if ((iVar6 == 0x100) && (*(char *)(*(long *)(param_1 + 0xe8) + 0x268) == '\0')) {
          uVar3 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                            (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf0),0x10c);
          return uVar3;
        }
        if (cVar1 != '\0') goto LAB_00546f6d;
      }
      uVar2 = _ZN3vte4ansi10NamedColor6to_dim17h924e9e6b4977e3c9E(uVar3);
    }
    uVar3 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                      (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf0),uVar2);
    return uVar3;
  }
  uVar3 = param_2 >> 8 & 0xffffff;
  bVar4 = (byte)uVar3;
  if (((uint)param_2 & 0xff) == 1) {
    uVar5 = (uint)(param_2 >> 8);
    if ((char)param_3 < '\0') {
      uVar3 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                        (iVar6 << 8 | uVar5 & 0xff);
      return uVar3;
    }
    return (ulong)(uVar5 & 0xff | iVar6 << 8);
  }
  uVar5 = (uint)uVar3;
  if (*(char *)(*(long *)(param_1 + 0xe8) + 0x290) == '\0') {
    if ((param_3 & 0x82) == 0x80) {
      if (((uint)param_2 & 0xf800) == 0x800) {
        uVar3 = (ulong)(uVar5 & 0xf) - 8;
        goto LAB_00546f6d;
      }
      if (bVar4 < 8) {
        uVar3 = (ulong)((uVar5 & 7) + 0x103);
        goto LAB_00546f6d;
      }
    }
  }
  else if ((param_3 & 0x82) == 2 && bVar4 < 8) {
    uVar3 = (ulong)(uVar5 & 7 | 8);
    goto LAB_00546f6d;
  }
  uVar3 = param_2 >> 8 & 0xff;
LAB_00546f6d:
  uVar3 = _ZN9alacritty7display7content17RenderableContent5color17h883a873f7862c055E
                    (*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf0),uVar3);
  return uVar3;
}