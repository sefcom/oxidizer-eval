void _ZN9alacritty5input22Processor_LT_T_C_A_GT_15scroll_terminal17h19a40c0c4c7b1806E
               (undefined8 param_1,double param_2,double param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  long local_c8;
  double local_98;
  undefined local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float local_40;
  float local_3c;
  
  uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
  local_68 = (undefined4)param_1;
  uVar1 = param_4[6];
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (&local_58,uVar1);
  dVar4 = (double)local_40;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (&local_58,uVar1);
  dVar5 = (double)local_3c;
  lVar11 = param_4[1];
  cVar8 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                    (lVar11);
  if (cVar8 == '\0') {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
              (lVar11);
    if (((~*(uint *)(lVar11 + 0x6dc) & 0x9000) == 0) &&
       (pbVar2 = (byte *)param_4[5],
       _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
                 (pbVar2), (*pbVar2 & 4) == 0)) {
      dVar16 = (double)CONCAT44(uStack_64,local_68);
      local_c8 = param_4[3];
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      dVar15 = *(double *)(local_c8 + 0x10) + param_3 * dVar16;
      dVar16 = *(double *)(local_c8 + 0x18) + param_3 * param_2;
      dVar6 = (double)CONCAT44(uStack_64,local_68);
      *(double *)(local_c8 + 0x10) = dVar15;
      *(double *)(local_c8 + 0x18) = dVar16;
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      dVar16 = (double)((ulong)(dVar16 / dVar5) & _DAT_001e7800);
      uVar10 = (long)(dVar16 - DAT_001ea6a0) & (long)dVar16 >> 0x3f | (long)dVar16;
      if (dVar16 < _DAT_001ea6a8) {
        uVar10 = 0;
      }
      if (DAT_001e9f78 < dVar16) {
        uVar10 = 0xffffffffffffffff;
      }
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      dVar16 = (double)((ulong)(dVar15 / dVar4) & _DAT_001e7800);
      uVar9 = (long)(dVar16 - DAT_001ea6a0) & (long)dVar16 >> 0x3f | (long)dVar16;
      if (dVar16 < _DAT_001ea6a8) {
        uVar9 = 0;
      }
      if (DAT_001e9f78 < dVar16) {
        uVar9 = 0xffffffffffffffff;
      }
      local_80 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                           ((uVar9 + uVar10) * 3,1,1,&PTR_DAT_00982df0);
      local_70 = 0;
      lVar11 = uVar10 + 1;
      while (lVar11 = lVar11 + -1, lVar11 != 0) {
                    /* try { // try from 0055a3f9 to 0055a42d has its CatchHandler @ 0055a605 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE(local_80,0x1b,&PTR_DAT_00982e50);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE(local_80,0x4f,&PTR_DAT_00982e68);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                  (local_80,'B' - (0.0 < param_2),&PTR_DAT_00982e80);
      }
      lVar11 = uVar9 + 1;
      while (lVar11 = lVar11 + -1, lVar11 != 0) {
                    /* try { // try from 0055a555 to 0055a585 has its CatchHandler @ 0055a603 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE(local_80,0x1b,&PTR_DAT_00982e08);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE(local_80,0x4f,&PTR_DAT_00982e20);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                  (local_80,(0.0 < dVar6) + 'C',&PTR_DAT_00982e38);
      }
      local_48 = local_70;
      local_58 = local_80._0_4_;
      uStack_54 = local_80._4_4_;
      uStack_50 = local_80._8_4_;
      uStack_4c = local_80._12_4_;
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
                (*param_4,&local_58);
    }
    else {
      local_c8 = param_4[3];
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      dVar16 = param_2 * param_3 + *(double *)(local_c8 + 0x18);
      *(double *)(local_c8 + 0x18) = dVar16;
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (local_c8);
      dVar16 = dVar16 / dVar5;
      dVar6 = dVar16;
      if (dVar16 <= DAT_001eae48) {
        dVar6 = DAT_001eae48;
      }
      if (DAT_001ea930 <= dVar6) {
        dVar6 = DAT_001ea930;
      }
      iVar12 = 0;
      if (!NAN(dVar16)) {
        iVar12 = (int)dVar6;
      }
      if (iVar12 != 0) {
        _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6scroll17h2700179c7835b4fbE
                  (param_4,0);
      }
    }
  }
  else {
    local_c8 = param_4[3];
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (local_c8);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (local_c8);
    local_98 = (double)CONCAT44(uStack_64,local_68) + *(double *)(local_c8 + 0x10);
    dVar16 = param_2 + *(double *)(local_c8 + 0x18);
    *(double *)(local_c8 + 0x10) = local_98;
    *(double *)(local_c8 + 0x18) = dVar16;
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (local_c8);
    dVar16 = (double)((ulong)(dVar16 / dVar5) & _DAT_001e7800);
    uVar13 = SUB84(dVar16,0);
    uVar14 = (undefined4)((ulong)dVar16 >> 0x20);
    if (dVar16 <= DAT_001eae48) {
      uVar13 = SUB84(DAT_001eae48,0);
      uVar14 = (undefined4)((ulong)DAT_001eae48 >> 0x20);
    }
    if (DAT_001ea930 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar13 = SUB84(DAT_001ea930,0);
      uVar14 = (undefined4)((ulong)DAT_001ea930 >> 0x20);
    }
    iVar12 = (int)(double)CONCAT44(uVar14,uVar13);
    if (NAN(dVar16)) {
      iVar12 = 0;
    }
    if (0 < iVar12) {
      do {
        _ZN9alacritty5input22Processor_LT_T_C_A_GT_12mouse_report17hed04f95cad75d625E
                  (param_4,0.0 < param_2 ^ 0x41,0);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      local_98 = *(double *)(local_c8 + 0x10);
    }
    bVar3 = _DAT_001ea6a8 < (double)CONCAT44(uStack_64,local_68);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (local_c8);
    dVar16 = (double)((ulong)(local_98 / dVar4) & _DAT_001e7800);
    uVar13 = SUB84(dVar16,0);
    uVar14 = (undefined4)((ulong)dVar16 >> 0x20);
    if (dVar16 <= DAT_001eae48) {
      uVar13 = SUB84(DAT_001eae48,0);
      uVar14 = (undefined4)((ulong)DAT_001eae48 >> 0x20);
    }
    if (DAT_001ea930 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar13 = SUB84(DAT_001ea930,0);
      uVar14 = (undefined4)((ulong)DAT_001ea930 >> 0x20);
    }
    iVar12 = (int)(double)CONCAT44(uVar14,uVar13);
    if (NAN(dVar16)) {
      iVar12 = 0;
    }
    if (0 < iVar12) {
      do {
        _ZN9alacritty5input22Processor_LT_T_C_A_GT_12mouse_report17hed04f95cad75d625E
                  (param_4,bVar3 ^ 0x43,0);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (local_c8);
  puVar7 = PTR_fmod_009dff00;
  uVar1 = (*(code *)PTR_fmod_009dff00)((int)*(undefined8 *)(local_c8 + 0x10),dVar4);
  *(undefined8 *)(local_c8 + 0x10) = uVar1;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (local_c8);
  uVar1 = (*(code *)puVar7)((int)*(undefined8 *)(local_c8 + 0x18),dVar5);
  *(undefined8 *)(local_c8 + 0x18) = uVar1;
  return;
}