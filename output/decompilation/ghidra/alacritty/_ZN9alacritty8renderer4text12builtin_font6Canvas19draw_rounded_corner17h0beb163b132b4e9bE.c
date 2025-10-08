void _ZN9alacritty8renderer4text12builtin_font6Canvas19draw_rounded_corner17h0beb163b132b4e9bE
               (long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_60;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar6 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(uVar1,uVar2);
  puVar4 = PTR_hypotf_009e0030;
  uVar5 = (uint)param_2 & 1;
  fVar15 = (float)param_2;
  uVar9 = uVar1;
  if (uVar1 < uVar2) {
    uVar9 = uVar2;
  }
  fVar19 = (float)(lVar6 + param_2) * DAT_001ec2f4;
  uVar8 = uVar1;
  if (uVar2 < uVar1) {
    uVar8 = uVar2;
  }
  fVar16 = fVar15 * DAT_001ec2f4;
  fVar12 = ((float)uVar9 * DAT_001ec2f4 - fVar19) + fVar16;
  fVar18 = fVar12;
  fVar3 = 0.0;
  if (uVar1 < uVar2) {
    fVar18 = 0.0;
    fVar3 = fVar12;
  }
  fVar17 = fVar12 + DAT_001eb5d0;
  fVar13 = 0.0;
  if (uVar1 < uVar2) {
    fVar17 = 0.0;
    fVar13 = fVar12 + DAT_001eb5d0;
  }
  local_60 = 0.0;
  if (((uint)uVar8 & 1) != uVar5) {
    local_60 = DAT_001ec2f4;
  }
  if ((((byte)uVar2 ^ (byte)uVar1) & ((uint)uVar9 & 1) == uVar5) != 0) {
    fVar18 = fVar17;
    fVar3 = fVar13;
  }
  uVar9 = param_2 + uVar8 + 1;
  if (1 < uVar9) {
    uVar9 = uVar9 >> 1;
    fVar12 = fVar19 - fVar15;
    fVar13 = fVar12 + DAT_001ebe74;
    fVar17 = DAT_001ebe74 + fVar19;
    uVar8 = 1;
    uVar10 = 0;
    do {
      uVar7 = uVar8;
      lVar6 = 0;
      do {
        fVar11 = (float)(*(code *)puVar4)();
        fVar11 = fVar11 + local_60;
        fVar14 = 0.0;
        if (fVar13 <= fVar11) {
          if (fVar11 < fVar12) {
            fVar14 = (fVar11 + DAT_001eb5d0) - fVar12;
          }
          else {
            fVar14 = DAT_001eb5d0;
            if ((fVar17 <= fVar11) && (fVar14 = 0.0, fVar11 < fVar19)) {
              fVar14 = fVar19 - fVar11;
            }
          }
        }
        fVar11 = 0.0;
        if (0.0 <= fVar14 * DAT_001ed1e8) {
          fVar11 = fVar14 * DAT_001ed1e8;
        }
        fVar14 = DAT_001ed1e8;
        if (fVar11 <= DAT_001ed1e8) {
          fVar14 = fVar11;
        }
        _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
                  ((float)lVar6 + fVar18,fVar3 + (float)(long)uVar10,param_1,
                   ((int)fVar14 & 0xffU) * 0x10101);
        lVar6 = lVar6 + 1;
      } while (uVar9 + (uVar9 == 0) != lVar6);
      uVar8 = uVar7 + (uVar7 < uVar9);
      uVar10 = uVar7;
    } while (uVar7 < uVar9);
  }
  if (uVar1 < uVar2) {
    fVar16 = (float)uVar1 * DAT_001ec2f4 - fVar16;
    fVar19 = 0.0;
    fVar18 = fVar15;
    fVar15 = fVar3;
  }
  else {
    fVar19 = (float)uVar2 * DAT_001ec2f4 - fVar16;
    fVar16 = 0.0;
  }
  _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
            (fVar16,fVar19,fVar18,fVar15,param_1);
  return;
}