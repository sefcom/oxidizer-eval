void _ZN9alacritty8renderer4text12builtin_font6Canvas15flip_horizontal17ha741b65efc3a4ae8E
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (uVar2 = *(ulong *)(param_1 + 0x18), 1 < uVar2)) {
    lVar9 = *(long *)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar15 = uVar2 - 1;
    lVar5 = uVar2 * 3;
    lVar10 = lVar9 + lVar5 + -3;
    uVar13 = 0;
    lVar6 = 0;
    do {
      lVar6 = lVar6 + 1;
      uVar7 = uVar2 >> 1;
      lVar8 = lVar9;
      lVar11 = lVar10;
      uVar12 = uVar13;
      uVar14 = uVar15;
      do {
        if (uVar3 <= uVar12) {
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                    (uVar12,uVar3,&PTR_s_alacritty_src_renderer_text_buil_00983d70);
LAB_00567113:
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                    (uVar14,uVar3,&PTR_s_alacritty_src_renderer_text_buil_00983d70);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar3 <= uVar14) goto LAB_00567113;
        _ZN4core3ptr4swap17he5bebdc076cfabf5E(lVar8,lVar11);
        uVar14 = uVar14 - 1;
        lVar11 = lVar11 + -3;
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar15 = uVar15 + uVar2;
      lVar10 = lVar10 + lVar5;
      uVar13 = uVar13 + uVar2;
      lVar9 = lVar9 + lVar5;
    } while (lVar6 != lVar1);
  }
  return;
}