void _ZN9alacritty8renderer4text12builtin_font21calculate_stroke_size17h9b2d145c96ce3b6eE
               (ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = (float)(*(code *)PTR_roundf_009dfde8)((float)param_1 * _s__001ed334);
  uVar1 = 0;
  if (0.0 <= fVar3) {
    uVar1 = (long)(fVar3 - DAT_001ec664) & (long)fVar3 >> 0x3f | (long)fVar3;
  }
  uVar2 = 0xffffffffffffffff;
  if (fVar3 <= DAT_001ec668) {
    uVar2 = uVar1;
  }
  _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uVar2,1);
  return;
}