void _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
               (float param_1,float param_2,long param_3,undefined4 param_4)

{
  code *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if ((((0.0 <= param_1) && (0.0 <= param_2)) &&
      (param_1 <= (float)*(ulong *)(param_3 + 0x18) + DAT_001ebe74)) &&
     (param_2 <= (float)*(ulong *)(param_3 + 0x20) + DAT_001ebe74)) {
    uVar2 = (long)param_1 >> 0x3f & (long)(param_1 - DAT_001ec664) | (long)param_1;
    if (param_1 < 0.0) {
      uVar2 = 0;
    }
    if (DAT_001ec668 < param_1) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar4 = (long)param_2 >> 0x3f & (long)(param_2 - DAT_001ec664) | (long)param_2;
    if (param_2 < 0.0) {
      uVar4 = 0;
    }
    if (DAT_001ec668 < param_2) {
      uVar4 = 0xffffffffffffffff;
    }
    uVar2 = *(ulong *)(param_3 + 0x18) * uVar4 + uVar2;
    if (*(ulong *)(param_3 + 0x10) <= uVar2) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (uVar2,*(ulong *)(param_3 + 0x10),&PTR_s_alacritty_src_renderer_text_buil_00983da0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(byte *)(*(long *)(param_3 + 8) + uVar2 * 3) < (byte)param_4) {
      pbVar3 = (byte *)(*(long *)(param_3 + 8) + uVar2 * 3);
      *pbVar3 = (byte)param_4;
      *(short *)(pbVar3 + 1) = (short)((uint)param_4 >> 8);
      return;
    }
  }
  return;
}