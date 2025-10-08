void _ZN9alacritty5input22Processor_LT_T_C_A_GT_15on_touch_motion17hf382ca82a44bfd89E
               (long param_1,long *param_2)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  dVar2 = (double)param_2[4];
  dVar3 = (double)param_2[5];
  while( true ) {
    plVar6 = *(long **)(param_1 + 0x20);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13touch_purpose17hfb6ca17d7f1966f0E
              (plVar6);
    uVar22 = *plVar6 - 4;
    if (6 < uVar22) {
      uVar22 = 3;
    }
    if (uVar22 != 5) break;
    plVar1 = plVar6 + 1;
    dVar4 = (double)plVar6[5];
    dVar5 = (double)plVar6[6];
    if (DAT_001eaf88 < (double)((ulong)(dVar2 - dVar4) & _DAT_001e7800)) {
      lVar16 = *plVar1;
      lVar17 = plVar6[2];
      lVar18 = plVar6[3];
      lVar19 = plVar6[4];
      uVar8 = *(undefined4 *)(plVar6 + 5);
      uVar9 = *(undefined4 *)((long)plVar6 + 0x2c);
      uVar10 = *(undefined4 *)(plVar6 + 6);
      uVar11 = *(undefined4 *)((long)plVar6 + 0x34);
      uVar12 = *(undefined4 *)(plVar6 + 7);
      uVar13 = *(undefined4 *)((long)plVar6 + 0x3c);
      uVar14 = *(undefined4 *)(plVar6 + 8);
      uVar15 = *(undefined4 *)((long)plVar6 + 0x44);
      _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(plVar6);
      *plVar6 = 5;
      *(undefined4 *)(plVar6 + 7) = uVar12;
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar13;
      *(undefined4 *)(plVar6 + 8) = uVar14;
      *(undefined4 *)((long)plVar6 + 0x44) = uVar15;
      *(undefined4 *)(plVar6 + 5) = uVar8;
      *(undefined4 *)((long)plVar6 + 0x2c) = uVar9;
      *(undefined4 *)(plVar6 + 6) = uVar10;
      *(undefined4 *)((long)plVar6 + 0x34) = uVar11;
      plVar6[3] = lVar18;
      plVar6[4] = lVar19;
      *plVar1 = lVar16;
      plVar6[2] = lVar17;
      _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_moved17hb35e8a462d92119aE
                (SUB84(dVar4,0),SUB84(dVar5,0),param_1);
      _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_input17h30bea7cf2096a377E(param_1,0,0);
    }
    else {
      if ((double)((ulong)(dVar3 - dVar5) & _DAT_001e7800) <= DAT_001eaf88) {
switchD_0055ab7f_caseD_4:
        return;
      }
      uVar8 = *(undefined4 *)plVar1;
      uVar9 = *(undefined4 *)((long)plVar6 + 0xc);
      uVar10 = *(undefined4 *)(plVar6 + 2);
      uVar11 = *(undefined4 *)((long)plVar6 + 0x14);
      lVar16 = plVar6[3];
      lVar17 = plVar6[4];
      lVar18 = plVar6[5];
      lVar19 = plVar6[6];
      lVar20 = plVar6[7];
      lVar21 = plVar6[8];
      _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(plVar6);
      *plVar6 = 6;
      plVar6[7] = lVar20;
      plVar6[8] = lVar21;
      plVar6[5] = lVar18;
      plVar6[6] = lVar19;
      plVar6[3] = lVar16;
      plVar6[4] = lVar17;
      *(undefined4 *)plVar1 = uVar8;
      *(undefined4 *)((long)plVar6 + 0xc) = uVar9;
      *(undefined4 *)(plVar6 + 2) = uVar10;
      *(undefined4 *)((long)plVar6 + 0x14) = uVar11;
    }
  }
  switch(*plVar6) {
  case 4:
  case 8:
  case 10:
    goto switchD_0055ab7f_caseD_4;
  case 5:
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_moved17hb35e8a462d92119aE
              (SUB84(dVar2,0),SUB84(dVar3,0),param_1);
    return;
  case 6:
    dVar2 = (double)plVar6[6];
    _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(plVar6);
    *plVar6 = 6;
    lVar16 = param_2[1];
    lVar17 = param_2[2];
    lVar18 = param_2[3];
    lVar19 = param_2[4];
    lVar20 = param_2[5];
    uVar8 = *(undefined4 *)(param_2 + 6);
    uVar9 = *(undefined4 *)((long)param_2 + 0x34);
    uVar10 = *(undefined4 *)(param_2 + 7);
    uVar11 = *(undefined4 *)((long)param_2 + 0x3c);
    plVar6[1] = *param_2;
    plVar6[2] = lVar16;
    plVar6[3] = lVar17;
    plVar6[4] = lVar18;
    plVar6[5] = lVar19;
    plVar6[6] = lVar20;
    *(undefined4 *)(plVar6 + 7) = uVar8;
    *(undefined4 *)((long)plVar6 + 0x3c) = uVar9;
    *(undefined4 *)(plVar6 + 8) = uVar10;
    *(undefined4 *)((long)plVar6 + 0x44) = uVar11;
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_15scroll_terminal17h19a40c0c4c7b1806E
              (0,SUB84(dVar3 - dVar2,0),(int)_s__001ea5d0,param_1);
    return;
  default:
    _ZN9alacritty5event9TouchZoom10font_delta17h2f8a038ee2d9cba7E(plVar6,param_2);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_16change_font_size17h4f7ab3b2a59f49d3E
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    return;
  case 9:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
}