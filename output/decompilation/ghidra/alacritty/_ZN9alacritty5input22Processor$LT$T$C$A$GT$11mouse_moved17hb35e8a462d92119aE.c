void _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_moved17hb35e8a462d92119aE
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulong extraout_RDX;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined auVar16 [12];
  undefined local_58 [16];
  float local_48;
  float local_44;
  
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_58);
  uVar9 = _ZN3dpi101__LT_impl_u20_core__convert__From_LT_dpi__PhysicalPosition_LT_P_GT__GT__u20_for_u20__LP_X_C_X_RP__GT_4from17he5767627880a021bE
                    (param_1,param_2);
  lVar3 = *(long *)(param_3 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  cVar1 = *(char *)(lVar3 + 0x34);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  bVar14 = *(char *)(lVar3 + 0x36) == '\0';
  lVar4 = *(long *)(param_3 + 8);
  cVar7 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_18selection_is_empty17h06e87f25781b0a34E
                    (lVar4);
  if ((bVar14 || cVar1 == '\0') && (cVar7 == '\0')) {
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_26update_selection_scrolling17haef1ad53b13a7ec5E
              (uVar12,*(undefined8 *)(param_3 + 0x60),extraout_RDX & 0xffffffff);
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar4);
  uVar5 = *(undefined8 *)(lVar4 + 200);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  auVar16 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                      (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),local_58,uVar5);
  iVar11 = (int)local_48;
  if (DAT_001edecc < local_48) {
    iVar11 = 0x7fffffff;
  }
  if (NAN(local_48)) {
    iVar11 = 0;
  }
  iVar10 = _ZN4core3cmp3Ord5clamp17heae1d66c53e20e24E(uVar9,iVar11 + -1);
  iVar11 = (int)local_44;
  if (DAT_001edecc < local_44) {
    iVar11 = 0x7fffffff;
  }
  lVar13 = (long)iVar10;
  if (NAN(local_44)) {
    iVar11 = 0;
  }
  iVar11 = _ZN4core3cmp3Ord5clamp17heae1d66c53e20e24E(extraout_RDX & 0xffffffff,iVar11 + -1);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(long *)(lVar3 + 0x20) = lVar13;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(long *)(lVar3 + 0x28) = (long)iVar11;
  cVar7 = _ZN9alacritty7display8SizeInfo14contains_point17h0a9ac37fde68bbb4E
                    (local_58,lVar13,(long)iVar11);
  cVar8 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_9cell_side17h8083590e79163558E(uVar12,lVar13);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  auVar15 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                      (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),local_58,uVar5);
  if (((auVar16 == auVar15._0_12_) &&
      (_ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                 (lVar3), *(char *)(lVar3 + 0x37) == cVar8)) &&
     (_ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (lVar3), cVar7 == *(char *)(lVar3 + 0x3a))) {
    return;
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(char *)(lVar3 + 0x3a) = cVar7;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(char *)(lVar3 + 0x37) = cVar8;
  cVar7 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_12cursor_state17hd11ac0475868ceffE(param_3);
  lVar13 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                     (uVar12);
  if (cVar7 != *(char *)(lVar13 + 0xf5)) {
    *(char *)(lVar13 + 0xf5) = cVar7;
    _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
              (*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 0x28),cVar7);
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(undefined *)(lVar3 + 0x39) = 1;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(undefined *)(lVar3 + 0x38) = 1;
  if ((bVar14 || cVar1 == '\0') &&
     ((pbVar6 = *(byte **)(param_3 + 0x28),
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
                (pbVar6), (*pbVar6 & 4) != 0 ||
      (cVar7 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                         (lVar4), cVar7 == '\0')))) {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_16update_selection17h5d37a5395dd5d55eE
              (param_3,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,cVar8);
    return;
  }
  if (auVar16 != auVar15._0_12_) {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
              (lVar4);
    uVar2 = *(uint *)(lVar4 + 0x6dc);
    if ((uVar2 & 0x2040) != 0) {
      if (cVar1 == '\0') {
        uVar12 = 0x20;
      }
      else {
        _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                  (lVar3);
        if (*(char *)(lVar3 + 0x35) == '\0') {
          uVar12 = 0x21;
        }
        else {
          _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                    (lVar3);
          if (*(char *)(lVar3 + 0x36) == '\0') {
            uVar12 = 0x22;
          }
          else {
            _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
                      (lVar4);
            if ((uVar2 & 0x40) == 0) {
              return;
            }
            uVar12 = 0x23;
          }
        }
      }
      _ZN9alacritty5input22Processor_LT_T_C_A_GT_12mouse_report17hed04f95cad75d625E
                (param_3,uVar12,0);
      return;
    }
  }
  return;
}