undefined2 _ZN9alacritty7display7content14RenderableCell8is_empty17h61aad462a89bdf85E(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((((*(float *)(param_1 + 0x18) == 0.0) && (!NAN(*(float *)(param_1 + 0x18)))) &&
      (*(int *)(param_1 + 0x1c) == 0x20)) && (uVar1 = 0, *(long *)(param_1 + 0x10) == 0)) {
    uVar1 = CONCAT11((char)(*(ushort *)(param_1 + 0x20) >> 8),
                     (*(ushort *)(param_1 + 0x20) & 0x7a08) == 0);
  }
  return uVar1;
}