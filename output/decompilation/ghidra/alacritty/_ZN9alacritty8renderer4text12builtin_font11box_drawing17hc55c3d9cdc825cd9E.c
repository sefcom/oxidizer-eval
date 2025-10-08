void _ZN9alacritty8renderer4text12builtin_font11box_drawing17hc55c3d9cdc825cd9E
               (undefined8 *param_1,uint param_2,double *param_3,char param_4,char param_5)

{
  double dVar1;
  undefined2 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  undefined2 *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined2 *puVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float extraout_XMM0_Da;
  double dVar38;
  undefined8 extraout_XMM0_Qb;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined auVar44 [16];
  undefined4 extraout_XMM0_Db;
  undefined auVar45 [16];
  undefined auVar46 [16];
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_03;
  float extraout_XMM1_Da_04;
  undefined4 extraout_XMM1_Db;
  undefined auVar47 [16];
  float extraout_XMM1_Da_00;
  float extraout_XMM1_Da_01;
  float extraout_XMM1_Da_02;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined8 extraout_XMM1_Qb;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined8 local_158;
  ulong local_148;
  undefined8 local_128;
  undefined **local_110;
  ulong local_f0;
  long local_90;
  undefined2 *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  double *local_68;
  undefined4 local_5c;
  long *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  ulong local_40;
  undefined local_38;
  undefined auVar54 [16];
  
  dVar1 = param_3[1];
  dVar38 = dVar1;
  if (dVar1 <= DAT_001eae48) {
    dVar38 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar38) {
    dVar38 = DAT_001ea930;
  }
  iVar9 = (int)dVar38;
  if (NAN(dVar1)) {
    iVar9 = 0;
  }
  uVar10 = _ZN4core3cmp3Ord3max17h485505c56320f468E(param_5 + iVar9,1);
  dVar1 = *param_3;
  dVar38 = dVar1;
  if (dVar1 <= DAT_001eae48) {
    dVar38 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar38) {
    dVar38 = DAT_001ea930;
  }
  iVar9 = (int)dVar38;
  if (NAN(dVar1)) {
    iVar9 = 0;
  }
  local_68 = param_3;
  uVar11 = _ZN4core3cmp3Ord3max17h485505c56320f468E(param_4 + iVar9,1);
  uVar23 = (ulong)(int)uVar10;
  uVar31 = (ulong)(int)uVar11;
  uVar13 = _ZN9alacritty8renderer4text12builtin_font21calculate_stroke_size17h9b2d145c96ce3b6eE
                     (uVar31);
  uVar16 = uVar13 * 2;
  uVar12 = (uint)uVar13;
  if (param_2 - 0x2571 < 3) {
    uVar31 = (ulong)(int)uVar11;
    if ((long)uVar31 < 0) {
      fVar33 = (float)((ulong)(uVar11 & 1) | uVar31 >> 1);
      fVar33 = fVar33 + fVar33;
    }
    else {
      fVar33 = (float)(int)uVar11;
    }
    if ((long)uVar23 < 0) {
      fVar34 = (float)((ulong)(uVar10 & 1) | uVar23 >> 1);
      fVar34 = fVar34 + fVar34;
    }
    else {
      fVar34 = (float)(int)uVar10;
    }
    fVar35 = *(float *)(local_68 + 2);
    iVar9 = 0x7fffffff;
    if (fVar35 <= DAT_001edecc) {
      iVar9 = (int)fVar35;
    }
    iVar21 = 0;
    if (!NAN(fVar35)) {
      iVar21 = iVar9;
    }
    _ZN9alacritty8renderer4text12builtin_font6Canvas3new17h00f2c0315425a567E
              (&local_90,uVar31,uVar23 + uVar16 + uVar16);
    fVar35 = (float)uVar13;
    if (uVar16 != 0) {
      local_68 = (double *)CONCAT44(local_68._4_4_,((fVar34 + fVar35) / fVar33) * 0.0);
      uVar13 = 0;
      local_58 = &local_90;
      if (param_2 == 0x2572) {
        do {
                    /* try { // try from 00564804 to 00564816 has its CatchHandler @ 00566a0c */
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_line17h6086c3490692115cE
                    (local_68._0_4_ + (float)uVar13 * DAT_001ec2f4 + fVar35,&local_90);
          uVar13 = uVar13 + 1;
        } while (uVar16 != uVar13);
      }
      else {
        do {
          fVar33 = (float)uVar13 * DAT_001ec2f4;
                    /* try { // try from 00564746 to 0056479b has its CatchHandler @ 00566a12 */
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_line17h6086c3490692115cE
                    ((((fVar34 + fVar35) - fVar33) - local_68._0_4_) + fVar35,&local_90);
          if (param_2 == 0x2573) {
            _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_line17h6086c3490692115cE
                      (local_68._0_4_ + fVar33 + fVar35,&local_90);
          }
          uVar13 = uVar13 + 1;
        } while (uVar16 != uVar13);
      }
    }
    *(uint *)(param_1 + 5) = param_2;
    *(uint *)((long)param_1 + 0x2c) = uVar11;
    uVar37 = (undefined4)(uVar23 + uVar16);
    *(undefined4 *)(param_1 + 6) = uVar37;
    *(uint *)((long)param_1 + 0x34) = uVar10 + iVar21 + uVar12;
    *(undefined4 *)(param_1 + 7) = 0;
    *(uint *)(param_1 + 4) = uVar11;
    *(undefined4 *)((long)param_1 + 0x24) = uVar37;
    *param_1 = 0;
    param_1[1] = local_90 * 3;
    param_1[2] = local_88;
    param_1[3] = local_80 * 3;
    return;
  }
  local_58 = &local_90;
  auVar49._0_8_ =
       _ZN9alacritty8renderer4text12builtin_font6Canvas3new17h00f2c0315425a567E
                 (local_58,uVar31,uVar23);
  puVar7 = PTR_roundf_009dfde8;
  auVar49._8_8_ = extraout_XMM0_Qb;
  lVar24 = 2;
  switch(param_2) {
  case 0x2504:
    goto switchD_0056450f_caseD_2504;
  case 0x2505:
    goto switchD_0056450f_caseD_2505;
  case 0x2506:
    goto switchD_0056450f_caseD_2506;
  case 0x2507:
    goto switchD_0056450f_caseD_2507;
  case 0x2508:
    lVar24 = 3;
    goto switchD_0056450f_caseD_2504;
  case 0x2509:
    lVar24 = 3;
    goto switchD_0056450f_caseD_2505;
  case 0x250a:
    lVar24 = 3;
    goto switchD_0056450f_caseD_2506;
  case 0x250b:
    lVar24 = 3;
    goto switchD_0056450f_caseD_2507;
  default:
    auVar44._4_12_ = auVar49._4_12_;
    if ((param_2 - 0x2574 < 0xc || param_2 - 0x250c < 0x40) || (param_2 & 0x1ffffc) == 0x2500) {
      uVar23 = 0;
      uVar12 = param_2 - 0x2500;
      switch((ulong)uVar12) {
      case 0:
      case 0x10:
      case 0x12:
      case 0x18:
      case 0x1a:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2c:
      case 0x2e:
      case 0x30:
      case 0x32:
      case 0x34:
      case 0x36:
      case 0x38:
      case 0x3a:
      case 0x3c:
      case 0x3e:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x44:
      case 0x46:
      case 0x4a:
      case 0x74:
      case 0x7c:
        uVar23 = uVar13;
        break;
      case 1:
      case 0x11:
      case 0x13:
      case 0x19:
      case 0x1b:
      case 0x25:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
      case 0x31:
      case 0x33:
      case 0x35:
      case 0x37:
      case 0x39:
      case 0x3b:
      case 0x3d:
      case 0x3f:
      case 0x43:
      case 0x45:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4b:
      case 0x78:
      case 0x7e:
        uVar23 = uVar16;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7d:
        break;
      default:
      }
      uVar31 = 0;
      if (uVar12 < 0x7f) {
        uVar31 = 0;
        switch((long)&switchD_00565209::switchdataD_001f31f0 +
               (long)(int)(&switchD_00565209::switchdataD_001f31f0)[uVar12]) {
        case 0x56520b:
          uVar31 = uVar13;
          break;
        case 0x565210:
          uVar31 = uVar16;
        }
      }
      local_148 = 0;
      switch(param_2 - 0x2502) {
      case 0:
      case 0x12:
      case 0x13:
      case 0x16:
      case 0x17:
      case 0x1a:
      case 0x1b:
      case 0x1d:
      case 0x20:
      case 0x22:
      case 0x23:
      case 0x25:
      case 0x28:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3f:
      case 0x43:
      case 0x44:
      case 0x46:
      case 0x73:
      case 0x7b:
        local_148 = uVar13;
        break;
      case 1:
      case 0x14:
      case 0x15:
      case 0x18:
      case 0x19:
      case 0x1c:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x29:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3e:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x45:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x77:
      case 0x7d:
        local_148 = uVar16;
      }
      uVar25 = 0;
      switch(param_2 - 0x2502) {
      case 0:
      case 10:
      case 0xb:
      case 0xe:
      case 0xf:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1f:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x27:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x41:
      case 0x42:
      case 0x45:
      case 0x75:
      case 0x7d:
        uVar25 = uVar13;
        break;
      case 1:
      case 0xc:
      case 0xd:
      case 0x10:
      case 0x11:
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x3f:
      case 0x40:
      case 0x43:
      case 0x44:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x79:
      case 0x7b:
        uVar25 = uVar16;
      }
      uVar13 = uVar25;
      fVar33 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                (local_78,local_148);
      fVar34 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                (local_78,uVar13);
      fVar35 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                (local_70,uVar23);
      fVar36 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                (local_70,uVar31);
      iVar9 = (int)extraout_XMM1_Da;
      if (DAT_001edecc < extraout_XMM1_Da) {
        iVar9 = 0x7fffffff;
      }
      iVar21 = 0;
      if (NAN(extraout_XMM1_Da)) {
        iVar9 = iVar21;
      }
      iVar22 = (int)extraout_XMM1_Da_00;
      if (DAT_001edecc < extraout_XMM1_Da_00) {
        iVar22 = 0x7fffffff;
      }
      if (NAN(extraout_XMM1_Da_00)) {
        iVar22 = iVar21;
      }
      _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar9,iVar22);
      iVar22 = 0x7fffffff;
      iVar9 = (int)extraout_XMM1_Da_01;
      if (DAT_001edecc < extraout_XMM1_Da_01) {
        iVar9 = iVar22;
      }
      if (NAN(extraout_XMM1_Da_01)) {
        iVar9 = iVar21;
      }
      iVar26 = (int)extraout_XMM1_Da_02;
      if (DAT_001edecc < extraout_XMM1_Da_02) {
        iVar26 = iVar22;
      }
      if (NAN(extraout_XMM1_Da_02)) {
        iVar26 = iVar21;
      }
      _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar9,iVar26);
      iVar9 = (int)fVar35;
      if (DAT_001edecc < fVar35) {
        iVar9 = iVar22;
      }
      if (NAN(fVar35)) {
        iVar9 = iVar21;
      }
      iVar26 = (int)fVar36;
      if (DAT_001edecc < fVar36) {
        iVar26 = iVar22;
      }
      if (NAN(fVar36)) {
        iVar26 = iVar21;
      }
      _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar9,iVar26);
                    /* try { // try from 00565478 to 00565564 has its CatchHandler @ 00566a14 */
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar23);
      iVar9 = (int)fVar33;
      if (DAT_001edecc < fVar33) {
        iVar9 = 0x7fffffff;
      }
      if (NAN(fVar33)) {
        iVar9 = 0;
      }
      iVar21 = (int)fVar34;
      if (DAT_001edecc < fVar34) {
        iVar21 = 0x7fffffff;
      }
      if (NAN(fVar34)) {
        iVar21 = 0;
      }
      _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar9,iVar21);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar31);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
                (&local_90,local_148);
    }
    else {
      uVar12 = param_2 - 0x2550;
      if (0x1c < uVar12) {
        if (param_2 - 0x2589 < 8 || (param_2 & 0x1ffff8) == 0x2580) break;
        if (param_2 - 0x2596 < 10) {
          uVar39 = (*(code *)PTR_roundf_009dfde8)();
          uVar40 = (*(code *)puVar7)();
          auVar54._8_4_ = (int)((ulong)uVar39 >> 0x20);
          auVar54._0_8_ = uVar39;
          auVar54._12_4_ = (int)((ulong)uVar40 >> 0x20);
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._0_4_ = (float)uVar39;
          auVar53._4_4_ = (float)uVar40;
          auVar49 = maxps(_s__001e8780,auVar53);
          uVar12 = -(uint)NAN((float)uVar40);
          uVar12 = ~uVar12 & auVar49._4_4_ | SUB164(_s__001e8780,4) & uVar12;
          local_158 = CONCAT44(uVar12,~-(uint)NAN(auVar53._0_4_) & auVar49._0_4_ |
                                      SUB164(_s__001e8780,0) & -(uint)NAN(auVar53._0_4_));
          local_128 = CONCAT44(uVar12,uVar12);
                    /* try { // try from 00565cd0 to 00565d34 has its CatchHandler @ 00566a14 */
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (0,&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (local_158,&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (0,local_128,&local_90);
        }
        else {
          if (0x3b < param_2 - 0x1fb00) {
            (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_009de0a0)
                      ("internal error: entered unreachable code",0x28,
                       &PTR_s_alacritty_src_renderer_text_buil_00983d40);
            goto LAB_005669eb;
          }
          auVar44._0_4_ = (float)local_78 * DAT_001ec2f4;
          (*(code *)PTR_roundf_009dfde8)(auVar44._0_8_);
          if ((long)uVar23 < 0) {
            fVar33 = (float)((ulong)(uVar10 & 1) | uVar23 >> 1);
            fVar33 = fVar33 + fVar33;
          }
          else {
            fVar33 = (float)(int)uVar10;
          }
          fVar34 = extraout_XMM0_Da;
          if (extraout_XMM0_Da <= DAT_001eb5d0) {
            fVar34 = DAT_001eb5d0;
          }
          local_158 = CONCAT44(extraout_XMM0_Db,fVar34);
          auVar45._4_4_ = extraout_XMM1_Db;
          auVar45._0_4_ = fVar33;
          auVar45._8_4_ = (int)extraout_XMM1_Qb;
          auVar45._12_4_ = (int)((ulong)extraout_XMM1_Qb >> 0x20);
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = fVar33 / DAT_001ed5fc;
          (*(code *)puVar7)(auVar46._0_8_);
                    /* try { // try from 00565f24 to 005669ea has its CatchHandler @ 00566a14 */
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E(&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (local_158,&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (0,&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (local_158,&local_90);
          _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
                    (0,&local_90);
        }
        goto LAB_00565a89;
      }
      uVar17 = param_2 - 0x2552;
      if ((uVar17 < 0x19) && ((0x1249249U >> (uVar17 & 0x1f) & 1) != 0)) {
        if (0x18 < param_2 - 0x2553) goto LAB_00566124;
LAB_00565602:
        if ((0x1249249U >> (param_2 - 0x2553 & 0x1f) & 1) == 0) goto LAB_00566124;
        local_f0 = local_70;
      }
      else {
        fVar33 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                  ((float)local_78 * DAT_001ec2f4,local_78,uVar13);
        iVar9 = (int)fVar33;
        if (DAT_001edecc < fVar33) {
          iVar9 = 0x7fffffff;
        }
        if (NAN(fVar33)) {
          iVar9 = 0;
        }
        _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar9 + -1,0);
        iVar9 = (int)extraout_XMM1_Da_03;
        if (DAT_001edecc < extraout_XMM1_Da_03) {
          iVar9 = 0x7fffffff;
        }
        if (NAN(extraout_XMM1_Da_03)) {
          iVar9 = 0;
        }
        _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar9 + 1,uVar11);
        if (param_2 - 0x2553 < 0x19) goto LAB_00565602;
LAB_00566124:
        local_f0 = local_70;
        fVar33 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                                  ((float)local_70 * DAT_001ec2f4,local_70,uVar13);
        iVar9 = (int)fVar33;
        if (DAT_001edecc < fVar33) {
          iVar9 = 0x7fffffff;
        }
        if (NAN(fVar33)) {
          iVar9 = 0;
        }
        _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar9 + -1,0);
        iVar9 = (int)extraout_XMM1_Da_04;
        if (DAT_001edecc < extraout_XMM1_Da_04) {
          iVar9 = 0x7fffffff;
        }
        if (NAN(extraout_XMM1_Da_04)) {
          iVar9 = 0;
        }
        _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar9 + 1,uVar23);
      }
      local_5c = _ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                           (local_78,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                (local_78,uVar13);
      local_4c = _ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                           (local_f0,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                (local_f0,uVar13);
      switch(uVar12) {
      case 0:
      case 0x1b:
        break;
      default:
        if (((2 < param_2 - 0x2555) && (2 < param_2 - 0x255b)) && (param_2 - 0x2561 < 3))
        goto switchD_00565782_caseD_1a;
        break;
      case 0x19:
        goto switchD_00566227_caseD_17;
      case 0x1a:
      case 0x1c:
switchD_00565782_caseD_1a:
      }
      switch(uVar12) {
      case 0:
      case 0x15:
      case 0x1b:
        break;
      default:
        if (((2 < uVar17) && (2 < param_2 - 0x2558)) && (param_2 - 0x255e < 3))
        goto switchD_00566227_caseD_1a;
        break;
      case 0x14:
      case 0x16:
        break;
      case 0x17:
      case 0x19:
switchD_00566227_caseD_17:
        break;
      case 0x18:
        goto LAB_00566546;
      case 0x1a:
      case 0x1c:
switchD_00566227_caseD_1a:
      }
      switch(param_2) {
      case 0x2551:
      case 0x256a:
        break;
      default:
        break;
      case 0x255d:
        break;
      case 0x2567:
      case 0x2569:
      case 0x256b:
      case 0x256c:
        break;
      case 0x2568:
      }
LAB_00566546:
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
                (&local_90,uVar13);
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
                (&local_90,uVar13);
    }
    _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
              (&local_90,uVar13);
    goto LAB_0056665c;
  case 0x254c:
    lVar24 = 1;
switchD_0056450f_caseD_2504:
    uVar16 = uVar13;
    goto switchD_0056450f_caseD_2505;
  case 0x254d:
    lVar24 = 1;
switchD_0056450f_caseD_2505:
    uVar23 = (ulong)(int)uVar11;
    lVar19 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uVar23 >> 3,1);
    uVar13 = 0;
    if ((ulong)(lVar19 * lVar24) <= uVar23) {
      uVar13 = uVar23 - lVar19 * lVar24;
    }
    if (uVar13 >> 0x20 == 0) {
      uVar13 = uVar13 & 0xffffffff;
    }
    lVar14 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                       (uVar13 / (lVar24 + 1U),1,uVar13 % (lVar24 + 1U));
    local_48 = 0;
    local_38 = 0;
    local_58 = &local_90;
    local_40 = lVar24;
    while( true ) {
      auVar49 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                          (&local_48);
      if ((auVar49 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      uVar13 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(auVar49._8_8_ * (lVar14 + lVar19),uVar23);
                    /* try { // try from 00564a48 to 00564a63 has its CatchHandler @ 00566a10 */
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
                ((float)uVar13,&local_90,uVar16);
    }
    goto LAB_0056665c;
  case 0x254e:
    lVar24 = 1;
switchD_0056450f_caseD_2506:
    uVar16 = uVar13;
    goto switchD_0056450f_caseD_2507;
  case 0x254f:
    lVar24 = 1;
switchD_0056450f_caseD_2507:
    lVar19 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uVar23 >> 3,1);
    uVar13 = 0;
    if ((ulong)(lVar19 * lVar24) <= uVar23) {
      uVar13 = uVar23 - lVar19 * lVar24;
    }
    if (uVar13 >> 0x20 == 0) {
      uVar13 = uVar13 & 0xffffffff;
    }
    lVar14 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                       (uVar13 / (lVar24 + 1U),1,uVar13 % (lVar24 + 1U));
    local_48 = 0;
    local_38 = 0;
    local_58 = &local_90;
    local_40 = lVar24;
    while( true ) {
      auVar49 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                          (&local_48);
      if ((auVar49 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(auVar49._8_8_ * (lVar14 + lVar19),uVar23);
                    /* try { // try from 00564c48 to 00564c63 has its CatchHandler @ 00566a0e */
      _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
                (&local_90,uVar16);
    }
    goto LAB_0056665c;
  case 0x256d:
  case 0x256e:
  case 0x256f:
  case 0x2570:
                    /* try { // try from 00564511 to 00564520 has its CatchHandler @ 00566a14 */
    _ZN9alacritty8renderer4text12builtin_font6Canvas19draw_rounded_corner17h0beb163b132b4e9bE
              (&local_90,uVar13);
    uVar16 = local_80;
    puVar8 = local_88;
    if ((param_2 == 0x256d) || (param_2 == 0x2570)) {
      if (1 < uVar10) {
        fVar33 = (float)local_78 * DAT_001ec2f4;
        uVar25 = 0;
        uVar13 = (long)(fVar33 - DAT_001ec664) & (long)fVar33 >> 0x3f | (long)fVar33;
        if (fVar33 < 0.0) {
          uVar13 = uVar25;
        }
        uVar30 = 0xffffffffffffffff;
        if (fVar33 <= DAT_001ec668) {
          uVar30 = uVar13;
        }
        uVar27 = (ulong)((uVar12 ^ uVar11) & 1);
        lVar19 = (long)(int)uVar11;
        uVar29 = ~uVar27;
        lVar24 = lVar19 * 3;
        local_148 = (long)local_88 + lVar24 + uVar27 * -3 + -3;
        local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983cb0;
        uVar13 = 2;
        puVar28 = local_88;
        uVar18 = 1;
        do {
          uVar15 = uVar13;
          uVar29 = uVar29 + lVar19;
          uVar13 = uVar30;
          puVar32 = puVar28;
          uVar4 = uVar25;
          uVar5 = uVar29;
          uVar6 = local_148;
          if (uVar27 != 0) {
            uVar20 = (uVar18 - 1) * lVar19;
            if (uVar16 <= uVar20) goto LAB_005669bd;
            uVar18 = uVar18 * lVar19 - 1;
            if (uVar16 <= uVar18) {
              local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983cc8;
              uVar20 = uVar18;
              goto LAB_005669bd;
            }
            uVar2 = *(undefined2 *)((long)puVar8 + uVar20 * 3);
            *(undefined *)((long)puVar8 + uVar18 * 3 + 2) =
                 *(undefined *)((long)puVar8 + uVar20 * 3 + 2);
            *(undefined2 *)((long)puVar8 + uVar18 * 3) = uVar2;
          }
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            uVar20 = uVar4;
            if ((uVar16 <= uVar4) || (uVar20 = uVar5, uVar16 <= uVar5)) {
              local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983ce0;
              goto LAB_005669bd;
            }
            _ZN4core3ptr4swap17he5bebdc076cfabf5E(puVar32,uVar6);
            puVar32 = (undefined2 *)((long)puVar32 + 3);
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 - 1;
            uVar6 = uVar6 + -3;
          }
          local_148 = local_148 + lVar24;
          uVar25 = uVar25 + lVar19;
          puVar28 = (undefined2 *)((long)puVar28 + lVar24);
          uVar13 = uVar15 + (uVar15 < uVar23);
          uVar18 = uVar15;
        } while (uVar15 < uVar23);
      }
      if (1 < param_2 - 0x256d) goto LAB_0056665c;
    }
    else if (param_2 != 0x256e) goto LAB_0056665c;
    fVar33 = (float)local_70 * DAT_001ec2f4;
    uVar13 = 0;
    if (0.0 <= fVar33) {
      uVar13 = (long)(fVar33 - DAT_001ec664) & (long)fVar33 >> 0x3f | (long)fVar33;
    }
    uVar25 = 0xffffffffffffffff;
    if (fVar33 <= DAT_001ec668) {
      uVar25 = uVar13;
    }
    if ((((uVar12 ^ uVar10) & 1) != 0) && (uVar11 != 0)) {
      lVar19 = (uVar23 - 1) * uVar31;
      lVar24 = lVar19 * 3;
      uVar20 = 0;
      puVar28 = puVar8;
      while( true ) {
        if (uVar16 == uVar20) {
          local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983d10;
          goto LAB_005669bd;
        }
        uVar13 = lVar19 + uVar20;
        if (uVar16 <= uVar13) break;
        uVar2 = *puVar28;
        *(undefined *)((long)puVar28 + lVar24 + 2) = *(undefined *)(puVar28 + 1);
        *(undefined2 *)((long)puVar28 + lVar24) = uVar2;
        uVar20 = uVar20 + 1;
        puVar28 = (undefined2 *)((long)puVar28 + 3);
        if (uVar31 == uVar20) goto LAB_00565037;
      }
      local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983d28;
      uVar20 = uVar13;
LAB_005669bd:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (uVar20,uVar16,local_110);
LAB_005669eb:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_00565037:
    local_48 = 1;
    local_38 = 0;
    local_40 = uVar25;
    auVar49 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                        (&local_48);
    lVar24 = auVar49._8_8_;
    if ((auVar49 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      if (uVar11 == 0) {
        do {
          uVar16 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                             (&local_48);
        } while ((uVar16 & 1) != 0);
      }
      else {
        local_110 = &PTR_s_alacritty_src_renderer_text_buil_00983cf8;
        do {
          lVar19 = uVar23 - (lVar24 + (ulong)((uVar12 ^ uVar10) & 1));
          uVar25 = lVar19 * uVar31;
          puVar28 = (undefined2 *)(uVar31 * 3 * lVar19 + (long)puVar8);
          uVar30 = (lVar24 + -1) * uVar31;
          puVar32 = (undefined2 *)(uVar31 * 3 * (lVar24 + -1) + (long)puVar8);
          uVar13 = uVar31;
          do {
            uVar20 = uVar30;
            if ((uVar16 <= uVar30) || (uVar20 = uVar25, uVar16 <= uVar25)) goto LAB_005669bd;
            _ZN4core3ptr4swap17he5bebdc076cfabf5E(puVar32,puVar28);
            uVar25 = uVar25 + 1;
            puVar28 = (undefined2 *)((long)puVar28 + 3);
            uVar30 = uVar30 + 1;
            puVar32 = (undefined2 *)((long)puVar32 + 3);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          auVar49 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                              (&local_48);
          lVar24 = auVar49._8_8_;
        } while ((auVar49 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
    }
    goto LAB_0056665c;
  case 0x2588:
    uVar39 = 0xffffff;
    goto LAB_00564cac;
  case 0x2591:
    uVar39 = 0x404040;
    goto LAB_00564cac;
  case 0x2592:
    uVar39 = 0x808080;
    goto LAB_00564cac;
  case 0x2593:
    uVar39 = 0xc0c0c0;
LAB_00564cac:
    _ZN9alacritty8renderer4text12builtin_font6Canvas4fill17h62e4e3cf80c1f68bE
              (local_88,local_80,uVar39);
    goto LAB_0056665c;
  case 0x2594:
  case 0x2595:
    break;
  }
  auVar47._4_4_ = 0;
  auVar47._0_4_ = uVar11;
  auVar47._8_4_ = uVar10;
  auVar47._12_4_ = 0;
  auVar50._0_4_ = (float)(SUB168(auVar47 | _s__001e9250,0) - SUB168(_s__001e9250,0));
  auVar50._4_4_ = (float)(SUB168(auVar47 | _s__001e9250,8) - SUB168(_s__001e9250,8));
  auVar50._8_8_ = 0;
  switch(param_2) {
  case 0x2580:
    goto LAB_00565a1c;
  case 0x2581:
    fVar33 = auVar50._4_4_;
    break;
  case 0x2582:
    fVar33 = auVar50._4_4_ + auVar50._4_4_;
    break;
  case 0x2583:
    fVar33 = auVar50._4_4_ * DAT_001ed5fc;
    break;
  case 0x2584:
    fVar33 = auVar50._4_4_ * DAT_001ec980;
    break;
  case 0x2585:
    fVar33 = auVar50._4_4_ * DAT_001ed06c;
    break;
  case 0x2586:
    fVar33 = auVar50._4_4_ * DAT_001ebe78;
    break;
  case 0x2587:
    fVar33 = auVar50._4_4_ * _DAT_001ed1ec;
    break;
  default:
    (*(code *)PTR_roundf_009dfde8)();
    maxps(_s__001e8780,auVar50);
    local_158 = 0;
    goto LAB_00565a89;
  case 0x2589:
    goto LAB_00565932;
  case 0x258a:
    goto LAB_00565932;
  case 0x258b:
    goto LAB_00565932;
  case 0x258c:
    goto LAB_00565932;
  case 0x258d:
    goto LAB_00565932;
  case 0x258e:
    goto LAB_00565932;
  case 0x258f:
LAB_00565932:
    (*(code *)PTR_roundf_009dfde8)();
    uVar37 = (*(code *)puVar7)();
    auVar51._4_4_ = auVar50._4_4_;
    auVar51._0_4_ = uVar37;
    auVar51._8_8_ = 0;
    maxps(_s__001e8780,auVar51);
    local_158 = 0;
    goto LAB_00565a89;
  case 0x2590:
    (*(code *)PTR_roundf_009dfde8)();
    uVar37 = (*(code *)puVar7)();
    auVar48._4_4_ = auVar50._4_4_;
    auVar48._0_4_ = uVar37;
    auVar48._8_8_ = 0;
    maxps(_s__001e8780,auVar48);
    local_158 = (ulong)(uint)((float)local_78 * DAT_001ec2f4);
    goto LAB_00565a89;
  case 0x2594:
LAB_00565a1c:
    fVar33 = auVar50._4_4_ * _s__001eb8e0;
    break;
  case 0x2595:
    (*(code *)PTR_roundf_009dfde8)();
    fVar33 = (float)(*(code *)puVar7)();
    auVar52._4_4_ = auVar50._4_4_;
    auVar52._0_4_ = fVar33;
    auVar52._8_8_ = 0;
    auVar49 = maxps(_s__001e8780,auVar52);
    local_158 = CONCAT44(auVar50._4_4_,
                         auVar50._0_4_ -
                         (float)(~-(uint)NAN(fVar33) & auVar49._0_4_ |
                                SUB164(_s__001e8780,0) & -(uint)NAN(fVar33)));
    goto LAB_00565a89;
  }
  auVar41._4_4_ = auVar50._4_4_;
  auVar41._0_4_ = auVar50._4_4_;
  auVar41._8_4_ = auVar50._4_4_;
  auVar41._12_4_ = auVar50._4_4_;
  auVar42._4_12_ = auVar41._4_12_;
  auVar42._0_4_ = auVar50._4_4_ - fVar33 * _s__001ed334;
  (*(code *)PTR_roundf_009dfde8)(auVar42._0_8_);
  uVar37 = (*(code *)puVar7)();
  auVar43._4_4_ = uVar37;
  auVar43._0_4_ = auVar50._0_4_;
  auVar43._8_8_ = 0;
  maxps(_s__001e8780,auVar43);
  local_158 = 0;
LAB_00565a89:
                    /* try { // try from 00565a95 to 00565aac has its CatchHandler @ 00566a14 */
  _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
            (local_158,&local_90);
LAB_0056665c:
  fVar33 = *(float *)(local_68 + 2);
  iVar9 = 0x7fffffff;
  if (fVar33 <= DAT_001edecc) {
    iVar9 = (int)fVar33;
  }
  iVar21 = 0;
  if (!NAN(fVar33)) {
    iVar21 = iVar9;
  }
  *(uint *)(param_1 + 5) = param_2;
  *(uint *)((long)param_1 + 0x2c) = uVar11;
  *(uint *)(param_1 + 6) = uVar10;
  *(uint *)((long)param_1 + 0x34) = iVar21 + uVar10;
  *(undefined4 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 4) = uVar11;
  *(uint *)((long)param_1 + 0x24) = uVar10;
  *param_1 = 0;
  param_1[1] = local_90 * 3;
  param_1[2] = local_88;
  param_1[3] = local_80 * 3;
  return;
}