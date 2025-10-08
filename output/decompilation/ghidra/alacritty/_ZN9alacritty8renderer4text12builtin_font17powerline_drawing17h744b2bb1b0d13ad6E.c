void _ZN9alacritty8renderer4text12builtin_font17powerline_drawing17h744b2bb1b0d13ad6E
               (undefined8 *param_1,undefined8 param_2,double *param_3,char param_4,char param_5)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  int local_11c [5];
  undefined8 local_108;
  int local_100;
  int local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  double *local_b8;
  long local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  int local_94;
  undefined4 *local_90;
  int *local_88;
  undefined4 local_80;
  int local_7c;
  undefined local_78 [72];
  
  dVar2 = *param_3;
  dVar8 = param_3[1];
  dVar9 = dVar8;
  if (dVar8 <= DAT_001eae48) {
    dVar9 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar9) {
    dVar9 = DAT_001ea930;
  }
  iVar4 = (int)dVar9;
  if (NAN(dVar8)) {
    iVar4 = 0;
  }
  iVar7 = (int)param_5;
  iVar5 = iVar4 + iVar7;
  dVar8 = dVar2;
  if (dVar2 <= DAT_001eae48) {
    dVar8 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar8) {
    dVar8 = DAT_001ea930;
  }
  iVar3 = (int)dVar8;
  if (NAN(dVar2)) {
    iVar3 = 0;
  }
  iVar3 = param_4 + iVar3;
  lVar6 = (long)iVar3;
  local_108 = param_2;
  local_f8 = iVar3;
  local_f0 = param_1;
  local_b8 = param_3;
  local_e8 = _ZN9alacritty8renderer4text12builtin_font21calculate_stroke_size17h9b2d145c96ce3b6eE
                       (lVar6);
  _ZN9alacritty8renderer4text12builtin_font6Canvas3new17h00f2c0315425a567E
            (&local_e0,lVar6,(long)iVar5);
  local_128 = 1;
  local_124 = 1;
  local_120 = iVar4 + iVar7 + -2;
  local_94 = ((iVar5 - (iVar4 + iVar7 + 1 >> 0x1f)) + 1 >> 1) + -1;
  local_b0 = lVar6;
  if (1 < local_94 - iVar3) {
    *local_f0 = 2;
    _ZN4core3ptr68drop_in_place_LT_alacritty__renderer__text__builtin_font__Canvas_GT_17hd6f2a347f2df8e21E
              (local_e0,local_d8);
    return;
  }
  local_98 = 0;
  local_a8 = &local_128;
  local_a0 = &local_124;
  local_80 = 0;
  local_88 = &local_120;
  local_100 = iVar5;
  local_90 = local_a8;
  local_7c = local_94;
  _ZN4core4iter6traits8iterator8Iterator3zip17h464142987b10ba4dE(local_78,&local_a8,&local_90);
  _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h3a7c8faf434407c9E
            (local_11c,local_78);
  if (local_11c[0] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00566bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_001f37dc + *(int *)(&DAT_001f37dc + (ulong)((uint)local_108 - 0xe0b0) * 4)))();
    return;
  }
  if ((~(uint)local_108 & 0xe0b2) == 0) {
    _ZN9alacritty8renderer4text12builtin_font6Canvas15flip_horizontal17ha741b65efc3a4ae8E(&local_e0)
    ;
  }
  fVar1 = *(float *)(local_b8 + 2);
  iVar4 = 0x7fffffff;
  if (fVar1 <= DAT_001edecc) {
    iVar4 = (int)fVar1;
  }
  iVar5 = 0;
  if (!NAN(fVar1)) {
    iVar5 = iVar4;
  }
  *local_f0 = 0;
  local_f0[1] = local_e0 * 3;
  local_f0[2] = local_d8;
  local_f0[3] = local_d0 * 3;
  *(int *)(local_f0 + 4) = local_f8;
  *(int *)((long)local_f0 + 0x24) = local_100;
  *(int *)(local_f0 + 5) = (int)local_108;
  *(int *)((long)local_f0 + 0x2c) = local_f8;
  *(int *)(local_f0 + 6) = local_100;
  *(int *)((long)local_f0 + 0x34) = iVar5 + local_100;
  *(undefined4 *)(local_f0 + 7) = 0;
  return;
}