void _ZN9alacritty7display7content17RenderableContent17renderable_cursor17hcb11f2b38d3f4bfcE
               (undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  
  lVar3 = *(long *)(param_2 + 0xe8);
  uVar7 = (ulong)(*(uint *)(param_2 + 0xc0) >> 0xd & 8);
  cVar1 = *(char *)(lVar3 + 0x200 + uVar7);
  uVar11 = (uint)CONCAT12(*(undefined *)(lVar3 + 0x203 + uVar7),
                          *(undefined2 *)(lVar3 + 0x201 + uVar7));
  uVar6 = _ZN4core6option15Option_LT_T_GT_6map_or17hc905b7bfb43bc946E
                    (*(undefined4 *)(*(long *)(param_2 + 0x78) + 0x408),
                     *(undefined4 *)(lVar3 + 0x204 + uVar7));
  uVar8 = uVar6 >> 8;
  if (((char)uVar6 != '\x02') || (cVar1 != '\x02')) {
    uVar9 = (uint)*(uint3 *)(param_3 + 0x22);
    uVar10 = (uint)*(uint3 *)(param_3 + 0x25);
    dVar12 = (double)(*(code *)PTR__ZN3vte4ansi3Rgb8contrast17h2e276bdc884afba0E_009dfdd8)
                               (uVar9,uVar10);
    uVar5 = uVar9;
    if ((cVar1 != '\0') && (uVar5 = uVar10, cVar1 != '\x01')) {
      uVar5 = uVar11;
    }
    uVar11 = uVar5;
    if (((char)uVar6 != '\0') && (uVar9 = uVar10, (uVar6 & 0xff) == 2)) {
      uVar9 = uVar8;
    }
    uVar8 = uVar9;
    if (dVar12 < DAT_001ea9f8) {
      uVar8 = (uint)*(uint3 *)(lVar3 + 0x270);
      uVar11 = (uint)*(uint3 *)(lVar3 + 0x273);
    }
  }
  uVar2 = *(ushort *)(param_3 + 0x20);
  *(undefined *)((long)param_1 + 0x1a) = *(undefined *)(param_2 + 0x118);
  *(short *)((long)param_1 + 0x14) = (short)uVar8;
  *(char *)((long)param_1 + 0x16) = (char)(uVar8 >> 0x10);
  *(short *)((long)param_1 + 0x17) = (short)uVar11;
  *(char *)((long)param_1 + 0x19) = (char)(uVar11 >> 0x10);
  *(uint *)(param_1 + 2) = 2 - (uint)((uVar2 & 0x20) == 0);
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  *param_1 = *(undefined8 *)(param_2 + 0x100);
  param_1[1] = uVar4;
  return;
}