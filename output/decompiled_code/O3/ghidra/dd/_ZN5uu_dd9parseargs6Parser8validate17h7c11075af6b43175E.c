void __rustcall uu_dd::parseargs::Parser::validate(ulong *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char cVar20;
  char cVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined auVar22 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  
  cVar1 = *(char *)(param_2 + 0x14);
  cVar20 = *(char *)((long)param_2 + 0xa2);
  cVar23 = *(char *)((long)param_2 + 0xa3);
  cVar24 = *(char *)((long)param_2 + 0xa4);
  cVar2 = *(char *)((long)param_2 + 0xa5);
  cVar21 = *(char *)((long)param_2 + 0xa6);
  uVar3 = *(undefined *)((long)param_2 + 0xa7);
  uVar4 = *(undefined *)(param_2 + 0x15);
  uVar5 = *(undefined *)((long)param_2 + 0xa9);
  uVar8 = *(undefined4 *)((long)param_2 + 0xaa);
  uVar6 = *(undefined *)((long)param_2 + 0xae);
  uVar7 = *(undefined *)((long)param_2 + 0xaf);
  if (cVar1 == '\0') {
    if (*(char *)((long)param_2 + 0xa1) == '\0') {
      if (cVar20 == '\0') {
        if (cVar23 != '\0') {
          uVar16 = 2;
          if (cVar24 != '\0') goto LAB_001d2e80;
          cVar20 = '\x03';
          goto LAB_001d2db6;
        }
        cVar23 = (cVar24 == '\0') * '\x02';
        cVar20 = '\x03';
      }
      else if (cVar23 == '\0') {
        cVar23 = (cVar24 == '\0') * '\x02';
        cVar20 = '\x02';
      }
      else {
        uVar16 = 2;
        if (cVar24 != '\0') goto LAB_001d2e80;
        cVar20 = '\x02';
LAB_001d2db6:
        cVar23 = '\x01';
      }
    }
    else {
      uVar16 = 1;
      if (cVar20 != '\0') goto LAB_001d2e80;
      if (cVar23 == '\0') {
        cVar23 = (cVar24 == '\0') * '\x02';
        cVar20 = '\x01';
      }
      else {
        uVar16 = 2;
        if (cVar24 != '\0') goto LAB_001d2e80;
        cVar23 = '\x01';
        cVar20 = '\x01';
      }
    }
  }
  else {
    uVar16 = 1;
    if (cVar20 != '\0' || *(char *)((long)param_2 + 0xa1) != '\0') goto LAB_001d2e80;
    if (cVar23 == '\0') {
      cVar23 = (cVar24 == '\0') * '\x02';
      cVar20 = '\0';
    }
    else {
      uVar16 = 2;
      if (cVar24 != '\0') goto LAB_001d2e80;
      cVar23 = '\x01';
      cVar20 = '\0';
    }
  }
  uVar13 = get_ctable(cVar20,cVar23);
  cVar25 = (char)((uint)uVar8 >> 0x18);
  auVar22[7] = cVar25;
  auVar22[6] = cVar25;
  cVar24 = (char)((uint)uVar8 >> 0x10);
  auVar22[5] = cVar24;
  auVar22[4] = cVar24;
  cVar23 = (char)((uint)uVar8 >> 8);
  auVar22[3] = cVar23;
  auVar22[2] = cVar23;
  auVar22[0] = (char)uVar8;
  auVar22[1] = auVar22[0];
  auVar22._8_8_ = 0;
  auVar26[0] = -(auVar22[0] == '\0');
  auVar26[1] = -(auVar22[0] == '\0');
  auVar26[2] = -(cVar23 == '\0');
  auVar26[3] = -(cVar23 == '\0');
  auVar26[4] = -(cVar24 == '\0');
  auVar26[5] = -(cVar24 == '\0');
  auVar26[6] = -(cVar25 == '\0');
  auVar26[7] = -(cVar25 == '\0');
  auVar26[8] = 0xff;
  auVar26[9] = 0xff;
  auVar26[10] = 0xff;
  auVar26[0xb] = 0xff;
  auVar26[0xc] = 0xff;
  auVar26[0xd] = 0xff;
  auVar26[0xe] = 0xff;
  auVar26[0xf] = 0xff;
  auVar22 = pshuflw(auVar22,auVar26,0x55);
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  auVar27 = auVar27 ^ (auVar22 | auVar26);
  uVar14 = (ulong)auVar27._4_2_;
  uVar16 = 4;
  if ((auVar27 & (undefined  [16])0x100000000) == (undefined  [16])0x0) {
    if (param_2[6] == 0) {
      uVar16 = 9;
      if (cVar21 != '\0' || cVar2 != '\0') goto LAB_001d2e80;
      cVar20 = '\x02';
      cVar21 = '\0';
    }
    else {
      uVar14 = param_2[7];
      if (cVar20 == '\0') {
        cVar21 = ' ';
        cVar20 = '\x01';
      }
      else {
        if (cVar20 == '\x03') {
          if (cVar2 == '\0') {
            cVar20 = (cVar21 == '\0') + '\x01';
            cVar21 = cVar21 << 5;
            goto LAB_001d2f46;
          }
          uVar16 = 3;
          if (cVar21 != '\0') goto LAB_001d2e80;
        }
        cVar21 = ' ';
        cVar20 = '\0';
      }
    }
LAB_001d2f46:
    conversion_mode(&local_48,uVar13,cVar20,uVar14,cVar1,uVar4);
    if (*param_2 == 0) {
      uVar14 = 0x200;
      uVar16 = 0x200;
      if (param_2[2] != 0) {
        uVar16 = param_2[3];
      }
      if (param_2[4] != 0) {
        uVar14 = param_2[5];
      }
    }
    else {
      uVar16 = param_2[1];
      uVar14 = uVar16;
    }
    uVar15 = 1;
    if (*param_2 != 0) {
      uVar15 = (undefined)*(undefined4 *)(param_2 + 0x18);
    }
    uVar17 = uVar16;
    if (*(char *)((long)param_2 + 0xbf) != '\0') {
      uVar17 = 1;
    }
    if (param_2[8] != 0) {
      uVar17 = 1;
    }
    lVar9 = param_2[9];
    uVar18 = uVar14;
    if (*(char *)((long)param_2 + 0xcf) != '\0') {
      uVar18 = 1;
    }
    if (param_2[10] != 0) {
      uVar18 = 1;
    }
    lVar10 = param_2[0xb];
    uVar19 = param_2[0xc];
    uVar11 = param_2[0xd];
    if (uVar19 == 0) {
      uVar19 = (ulong)*(byte *)((long)param_2 + 0xbe);
    }
    else if ((int)uVar19 == 1) {
      uVar19 = 1;
    }
    param_1[4] = param_2[0x10];
    uVar12 = param_2[0xf];
    param_1[2] = param_2[0xe];
    param_1[3] = uVar12;
    param_1[7] = param_2[0x13];
    uVar12 = param_2[0x12];
    param_1[5] = param_2[0x11];
    param_1[6] = uVar12;
    uVar12 = param_2[0x17];
    param_1[8] = param_2[0x16];
    param_1[9] = uVar12;
    *(undefined8 *)((long)param_1 + 0x96) = *(undefined8 *)((long)param_2 + 0xc1);
    *(long *)((long)param_1 + 0x9d) = param_2[0x19];
    param_1[0xc] = local_38;
    param_1[10] = local_48;
    param_1[0xb] = uStack_40;
    *param_1 = uVar19;
    param_1[1] = uVar11;
    *(undefined *)(param_1 + 0xd) = uVar4;
    *(char *)((long)param_1 + 0x69) = cVar21;
    *(undefined *)((long)param_1 + 0x6a) = uVar3;
    *(undefined *)((long)param_1 + 0x6b) = uVar5;
    param_1[0xe] = uVar16;
    param_1[0xf] = uVar14;
    param_1[0x10] = uVar17 * lVar9;
    param_1[0x11] = uVar18 * lVar10;
    *(undefined4 *)(param_1 + 0x12) = uVar8;
    *(undefined *)((long)param_1 + 0x94) = uVar6;
    *(undefined *)((long)param_1 + 0x95) = uVar7;
    *(undefined *)((long)param_1 + 0xa5) = uVar15;
    *(undefined *)((long)param_1 + 0xa6) = *(undefined *)(param_2 + 0x1a);
    return;
  }
LAB_001d2e80:
  param_1[1] = uVar16;
  *param_1 = 3;
  core::ptr::drop_in_place<uu_dd::parseargs::Parser>(param_2);
  return;
}