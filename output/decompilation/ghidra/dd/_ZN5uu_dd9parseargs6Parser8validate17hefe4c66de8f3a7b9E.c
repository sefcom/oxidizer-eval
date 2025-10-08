ulong * _ZN5uu_dd9parseargs6Parser8validate17hefe4c66de8f3a7b9E(ulong *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  char cVar14;
  byte bVar15;
  ulong uVar16;
  undefined uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  char cVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  cVar1 = *(char *)(param_2 + 0x14);
  cVar22 = *(char *)((long)param_2 + 0xa2);
  cVar14 = *(char *)((long)param_2 + 0xa3);
  bVar2 = *(byte *)((long)param_2 + 0xa4);
  bVar15 = *(byte *)((long)param_2 + 0xa5);
  bVar3 = *(byte *)((long)param_2 + 0xa6);
  uVar4 = *(undefined *)((long)param_2 + 0xa7);
  uVar5 = *(undefined *)(param_2 + 0x15);
  uVar6 = *(undefined *)((long)param_2 + 0xa9);
  uVar9 = *(uint *)((long)param_2 + 0xaa);
  uVar25 = (ulong)uVar9;
  uVar7 = *(undefined *)((long)param_2 + 0xae);
  uVar8 = *(undefined *)((long)param_2 + 0xaf);
  if (cVar1 == '\0') {
    if (*(char *)((long)param_2 + 0xa1) == '\0') {
      if (cVar22 == '\0') {
        if (cVar14 != '\0') {
          uVar19 = 2;
          if (bVar2 != 0) goto LAB_0018cb6a;
          cVar22 = '\x03';
          goto LAB_0018ca97;
        }
        cVar14 = (bVar2 ^ 1) * '\x02';
        cVar22 = '\x03';
      }
      else if (cVar14 == '\0') {
        cVar14 = (bVar2 ^ 1) * '\x02';
        cVar22 = '\x02';
      }
      else {
        uVar19 = 2;
        if (bVar2 != 0) goto LAB_0018cb6a;
        cVar22 = '\x02';
LAB_0018ca97:
        cVar14 = '\x01';
      }
    }
    else {
      uVar19 = 1;
      if (cVar22 != '\0') goto LAB_0018cb6a;
      if (cVar14 == '\0') {
        cVar14 = (bVar2 ^ 1) * '\x02';
        cVar22 = '\x01';
      }
      else {
        cVar14 = '\x01';
        uVar19 = 2;
        cVar22 = '\x01';
        if (bVar2 != 0) goto LAB_0018cb6a;
      }
    }
  }
  else {
    uVar19 = 1;
    if (*(char *)((long)param_2 + 0xa1) != '\0' || cVar22 != '\0') goto LAB_0018cb6a;
    if (cVar14 == '\0') {
      cVar14 = (bVar2 ^ 1) * '\x02';
      cVar22 = '\0';
    }
    else {
      uVar19 = 2;
      if (bVar2 != 0) goto LAB_0018cb6a;
      cVar14 = '\x01';
      cVar22 = '\0';
    }
  }
  uVar18 = (uVar9 & 0x80000) << 5 | uVar9 >> 2 & 0x10000 | uVar9 >> 0x10 & 1 | uVar9 >> 9 & 0x100;
  uVar12 = uVar9 >> 8 & 1;
  auVar27._4_4_ = 0;
  auVar27._0_4_ = uVar12;
  auVar27._8_4_ = uVar12;
  auVar27._12_4_ = 0;
  auVar26 = psllw(ZEXT416(uVar18),7);
  auVar27 = psllw(auVar27,7);
  uVar13 = _ZN5uu_dd9parseargs10get_ctable17h3225cb694e4d92e4E(cVar22,cVar14,uVar18,cVar14);
  uVar19 = 4;
  if ((SUB161(auVar26 >> 7,0) & 1 & SUB161(auVar27 >> 0x47,0) & 1) != 0) {
LAB_0018cb6a:
    param_1[1] = uVar19;
    *param_1 = 3;
    _ZN4core3ptr45drop_in_place_LT_uu_dd__parseargs__Parser_GT_17hddf27aabfacd7e95E(param_2);
    return param_1;
  }
  if (*(int *)(param_2 + 6) == 1) {
    uVar16 = param_2[7];
    if (cVar22 == '\0') {
      cVar22 = ' ';
      lVar20 = 1;
    }
    else {
      if (cVar22 == '\x03') {
        if (bVar15 == 0) {
          lVar20 = 2 - (ulong)bVar3;
          cVar22 = bVar3 << 5;
          goto LAB_0018cc0b;
        }
        uVar19 = 3;
        if (bVar3 != 0) goto LAB_0018cb6a;
      }
      cVar22 = ' ';
      lVar20 = 0;
    }
  }
  else {
    bVar15 = bVar15 | bVar3;
    uVar16 = (ulong)bVar15;
    uVar19 = 9;
    if (bVar15 != 0) goto LAB_0018cb6a;
    lVar20 = 2;
    cVar22 = '\0';
  }
LAB_0018cc0b:
  _ZN5uu_dd9parseargs15conversion_mode17he1b2907b7b2f438dE
            (&local_50,uVar13,lVar20,uVar16,cVar1,uVar5);
  if (*param_2 == 0) {
    uVar16 = 0x200;
    uVar19 = 0x200;
    if (*(char *)(param_2 + 2) == '\0') {
      cVar1 = *(char *)(param_2 + 4);
    }
    else {
      uVar19 = param_2[3];
      cVar1 = *(char *)(param_2 + 4);
    }
    if (cVar1 != '\0') {
      uVar16 = param_2[5];
    }
  }
  else {
    uVar19 = param_2[1];
    uVar16 = uVar19;
    if (*param_2 != 0) {
      uVar17 = (undefined)*(undefined4 *)(param_2 + 0x18);
      uVar21 = param_2[9];
      iVar10 = *(int *)(param_2 + 8);
      goto joined_r0x0018cc49;
    }
  }
  uVar17 = 1;
  uVar21 = param_2[9];
  iVar10 = *(int *)(param_2 + 8);
joined_r0x0018cc49:
  uVar23 = 1;
  if ((iVar10 == 1) || (uVar23 = uVar19, *(char *)((long)param_2 + 0xbf) != '\x01')) {
    uVar21 = uVar21 * uVar23;
  }
  uVar23 = param_2[0xb];
  uVar24 = 1;
  if ((*(int *)(param_2 + 10) == 1) || (uVar24 = uVar16, *(char *)((long)param_2 + 0xcf) != '\x01'))
  {
    uVar23 = uVar23 * uVar24;
  }
  uVar24 = param_2[0xc];
  if (uVar24 == 2) {
    uVar24 = 2;
  }
  else {
    uVar25 = param_2[0xd];
    if (((uVar24 & 1) == 0) && (*(char *)((long)param_2 + 0xbe) != '\0')) {
      uVar24 = 1;
    }
  }
  param_1[4] = param_2[0x10];
  uVar11 = param_2[0xf];
  param_1[2] = param_2[0xe];
  param_1[3] = uVar11;
  param_1[7] = param_2[0x13];
  uVar11 = param_2[0x12];
  param_1[5] = param_2[0x11];
  param_1[6] = uVar11;
  uVar11 = param_2[0x17];
  param_1[8] = param_2[0x16];
  param_1[9] = uVar11;
  *(long *)((long)param_1 + 0x9d) = param_2[0x19];
  *(undefined8 *)((long)param_1 + 0x96) = *(undefined8 *)((long)param_2 + 0xc1);
  *param_1 = uVar24;
  param_1[1] = uVar25;
  param_1[0xc] = local_40;
  param_1[10] = local_50;
  param_1[0xb] = uStack_48;
  *(undefined *)(param_1 + 0xd) = uVar5;
  *(char *)((long)param_1 + 0x69) = cVar22;
  *(undefined *)((long)param_1 + 0x6a) = uVar4;
  *(undefined *)((long)param_1 + 0x6b) = uVar6;
  param_1[0xe] = uVar19;
  param_1[0xf] = uVar16;
  param_1[0x10] = uVar21;
  param_1[0x11] = uVar23;
  *(uint *)(param_1 + 0x12) = uVar9;
  *(undefined *)((long)param_1 + 0x94) = uVar7;
  *(undefined *)((long)param_1 + 0x95) = uVar8;
  *(undefined *)((long)param_1 + 0xa5) = uVar17;
  *(undefined *)((long)param_1 + 0xa6) = *(undefined *)(param_2 + 0x1a);
  return param_1;
}