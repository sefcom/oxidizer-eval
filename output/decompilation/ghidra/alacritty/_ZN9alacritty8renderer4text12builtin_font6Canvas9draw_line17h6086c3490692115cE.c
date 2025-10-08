void _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_line17h6086c3490692115cE
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar15 = (float)((uint)(param_3 - param_1) & _DAT_001e90d0);
  fVar16 = (float)(_DAT_001e90d0 & (uint)param_2);
  if (fVar15 <= fVar16) {
    fVar14 = 0.0;
    fVar8 = param_3;
    fVar11 = param_3;
    fVar10 = fVar14;
    if (param_2 < 0.0) goto LAB_00567512;
  }
  else {
    bVar1 = param_3 < param_1;
    fVar14 = param_1;
    fVar8 = param_2;
    fVar11 = param_2;
    fVar10 = param_1;
    param_1 = 0.0;
    param_2 = param_3;
    if (bVar1) goto LAB_00567512;
  }
  fVar11 = param_1;
  fVar10 = param_2;
  param_1 = fVar8;
  param_2 = fVar14;
LAB_00567512:
  fVar14 = DAT_001eb5d0;
  if (_DAT_001ec2fc < (float)(_DAT_001e90d0 & (uint)(fVar10 - param_2))) {
    fVar14 = (param_1 - fVar11) / (fVar10 - param_2);
  }
  fVar7 = (float)(*(code *)PTR_roundf_009dfde8)(param_2);
  puVar3 = PTR_truncf_009e0028;
  fVar11 = fVar11 + (fVar7 - param_2) * fVar14;
  param_2 = param_2 + DAT_001ec2f4;
  fVar8 = (float)(*(code *)PTR_truncf_009e0028)();
  fVar12 = (fVar8 - param_2) + DAT_001eb5d0;
  fVar8 = (float)(*(code *)puVar3)(fVar11);
  fVar13 = (DAT_001eb5d0 - (fVar11 - fVar8)) * fVar12 * DAT_001ed1e8;
  fVar9 = 0.0;
  if (0.0 <= fVar13) {
    fVar9 = fVar13;
  }
  fVar13 = DAT_001ed1e8;
  if (fVar9 <= DAT_001ed1e8) {
    fVar13 = fVar9;
  }
  fVar12 = (fVar11 - fVar8) * fVar12 * DAT_001ed1e8;
  fVar9 = 0.0;
  if (0.0 <= fVar12) {
    fVar9 = fVar12;
  }
  fVar12 = DAT_001ed1e8;
  if (fVar9 <= DAT_001ed1e8) {
    fVar12 = fVar9;
  }
  iVar5 = ((int)fVar13 & 0xffU) * 0x10101;
  if (fVar15 <= fVar16) {
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar7,fVar8,param_4,iVar5);
    fVar9 = fVar7;
  }
  else {
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar8,fVar7,param_4,iVar5);
    fVar9 = fVar8;
    fVar8 = fVar7;
  }
  _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
            (fVar9 + DAT_001eb5d0,fVar8,param_4,((int)fVar12 & 0xffU) * 0x10101);
  fVar9 = (float)(*(code *)PTR_roundf_009dfde8)(fVar10);
  param_1 = param_1 + (fVar9 - fVar10) * fVar14;
  fVar10 = fVar10 + DAT_001ec2f4;
  fVar8 = (float)(*(code *)puVar3)();
  fVar10 = fVar10 - fVar8;
  fVar12 = (float)(*(code *)puVar3)(param_1);
  param_1 = param_1 - fVar12;
  fVar13 = (DAT_001eb5d0 - param_1) * fVar10 * DAT_001ed1e8;
  fVar8 = 0.0;
  if (0.0 <= fVar13) {
    fVar8 = fVar13;
  }
  fVar13 = DAT_001ed1e8;
  if (fVar8 <= DAT_001ed1e8) {
    fVar13 = fVar8;
  }
  fVar10 = param_1 * fVar10 * DAT_001ed1e8;
  fVar8 = 0.0;
  if (0.0 <= fVar10) {
    fVar8 = fVar10;
  }
  fVar10 = DAT_001ed1e8;
  if (fVar8 <= DAT_001ed1e8) {
    fVar10 = fVar8;
  }
  iVar6 = ((int)fVar13 & 0xffU) * 0x10101;
  iVar4 = ((int)fVar10 & 0xffU) * 0x10101;
  iVar5 = (int)fVar7;
  if (DAT_001edecc < fVar7) {
    iVar5 = 0x7fffffff;
  }
  if (NAN(fVar7)) {
    iVar5 = 0;
  }
  iVar2 = (int)fVar9;
  if (DAT_001edecc < fVar9) {
    iVar2 = 0x7fffffff;
  }
  if (NAN(fVar9)) {
    iVar2 = 0;
  }
  iVar5 = iVar5 + 1;
  fVar11 = fVar11 + fVar14;
  fVar8 = fVar12 + DAT_001eb5d0;
  if (fVar15 <= fVar16) {
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar9,param_4,iVar6);
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar9,fVar8,param_4,iVar4);
    if (iVar5 < iVar2) {
      do {
        fVar16 = (float)(*(code *)puVar3)();
        fVar8 = (DAT_001eb5d0 - (fVar11 - fVar16)) * DAT_001ed1e8;
        fVar15 = 0.0;
        if (0.0 <= fVar8) {
          fVar15 = fVar8;
        }
        fVar8 = DAT_001ed1e8;
        if (fVar15 <= DAT_001ed1e8) {
          fVar8 = fVar15;
        }
        fVar10 = (fVar11 - fVar16) * DAT_001ed1e8;
        fVar15 = 0.0;
        if (0.0 <= fVar10) {
          fVar15 = fVar10;
        }
        fVar10 = DAT_001ed1e8;
        if (fVar15 <= DAT_001ed1e8) {
          fVar10 = fVar15;
        }
        _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
                  ((float)iVar5,fVar16,param_4,((int)fVar8 & 0xffU) * 0x10101);
        _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
                  ((float)iVar5,fVar16 + DAT_001eb5d0,param_4,((int)fVar10 & 0xffU) * 0x10101);
        fVar11 = fVar11 + fVar14;
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  else {
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar12,fVar9,param_4,iVar6);
    _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
              (fVar8,fVar9,param_4,iVar4);
    if (iVar5 < iVar2) {
      do {
        fVar16 = (float)(*(code *)puVar3)();
        fVar8 = (DAT_001eb5d0 - (fVar11 - fVar16)) * DAT_001ed1e8;
        fVar15 = 0.0;
        if (0.0 <= fVar8) {
          fVar15 = fVar8;
        }
        fVar8 = DAT_001ed1e8;
        if (fVar15 <= DAT_001ed1e8) {
          fVar8 = fVar15;
        }
        fVar10 = (fVar11 - fVar16) * DAT_001ed1e8;
        fVar15 = 0.0;
        if (0.0 <= fVar10) {
          fVar15 = fVar10;
        }
        fVar10 = DAT_001ed1e8;
        if (fVar15 <= DAT_001ed1e8) {
          fVar10 = fVar15;
        }
        _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
                  (param_4,((int)fVar8 & 0xffU) * 0x10101);
        _ZN9alacritty8renderer4text12builtin_font6Canvas9put_pixel17hf97502058679cb24E
                  (fVar16 + DAT_001eb5d0,(float)iVar5,param_4,((int)fVar10 & 0xffU) * 0x10101);
        fVar11 = fVar11 + fVar14;
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return;
}