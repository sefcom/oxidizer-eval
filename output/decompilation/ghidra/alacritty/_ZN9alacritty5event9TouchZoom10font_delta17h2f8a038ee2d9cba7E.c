void _ZN9alacritty5event9TouchZoom10font_delta17h2f8a038ee2d9cba7E(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  
  fVar16 = (float)_ZN9alacritty5event9TouchZoom8distance17ha17fa3104e8be542E();
  lVar15 = (ulong)(param_2[6] != *(long *)(param_1 + 0x30)) * 0x40;
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((long)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar12 = param_2[4];
  uVar13 = param_2[5];
  uVar7 = *(undefined4 *)((long)param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 7);
  uVar9 = *(undefined4 *)((long)param_2 + 0x3c);
  puVar1 = (undefined4 *)(param_1 + 0x30 + lVar15);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x20 + lVar15);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  puVar1 = (undefined4 *)(param_1 + 0x10 + lVar15);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(param_1 + lVar15) = uVar10;
  ((undefined8 *)(param_1 + lVar15))[1] = uVar11;
  fVar17 = (float)_ZN9alacritty5event9TouchZoom8distance17ha17fa3104e8be542E(param_1);
  fVar16 = (fVar17 - fVar16) * _DAT_001ecb18 + *(float *)(param_1 + 0x80);
  uVar19 = _s__001e98c0 & (uint)fVar16;
  uVar14 = SUB164(_DAT_001e9c90,0);
  uVar18 = DAT_001eded0 & -(uint)NAN(fVar16);
  fVar17 = (float)(*(code *)PTR_floorf_009dfe38)();
  *(float *)(param_1 + 0x80) =
       fVar16 - fVar17 * (float)(uVar18 | ~-(uint)NAN(fVar16) & (uVar19 | uVar14));
  return;
}