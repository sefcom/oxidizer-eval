void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_13inline_search17hb054a5764faf7b94E
               (long param_1,char param_2)

{
  int *piVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined4 local_84;
  uint local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_50;
  int local_48;
  undefined local_40 [24];
  
  piVar1 = *(int **)(param_1 + 0x70);
  if (*piVar1 == 0x110000) {
    return;
  }
  local_84 = 0;
  auVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(*piVar1,&local_84);
  lVar2 = *(long *)(param_1 + 8);
  if (param_2 == '\0') {
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_18inline_search_left17h0e24405bbcb3ff67E
              (local_80,lVar2,*(undefined8 *)(lVar2 + 0x290),*(undefined4 *)(lVar2 + 0x298),
               auVar3._0_8_,auVar3._8_8_);
    auVar4._8_4_ = local_70;
    auVar4._0_8_ = local_78;
    if (local_80[0] == 1) {
      return;
    }
    if (*(char *)((long)piVar1 + 6) == '\0') goto LAB_00555076;
    local_68 = lVar2 + 0x28;
    local_48 = *(int *)(lVar2 + 0xc0) + -1;
    local_50 = *(long *)(lVar2 + 0xb8) + -1;
    local_60 = local_78;
    local_58 = local_70;
    _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
              (local_40,&local_68);
  }
  else {
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_19inline_search_right17hbf0568499a7b63a6E
              ();
    auVar4._8_4_ = local_70;
    auVar4._0_8_ = local_78;
    if ((local_80[0] & 1) != 0) {
      return;
    }
    if (*(char *)((long)piVar1 + 6) != '\x01') goto LAB_00555076;
    local_68 = lVar2 + 0x28;
    local_48 = *(int *)(lVar2 + 0xc0) + -1;
    local_50 = *(long *)(lVar2 + 0xb8) + -1;
    local_60 = local_78;
    local_58 = local_70;
    _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
              (local_40,&local_68);
  }
  auVar4 = _ZN4core6option15Option_LT_T_GT_6map_or17h55de4ce00cf2525fE(local_40,local_78,local_70);
LAB_00555076:
  _ZN18alacritty_terminal4term13Term_LT_T_GT_15scroll_to_point17hb7f2e07c90fd62c4E
            (lVar2,auVar4._8_4_);
  *(undefined (*) [12])(lVar2 + 0x290) = auVar4;
  _ZN18alacritty_terminal4term13Term_LT_T_GT_27vi_mode_recompute_selection17hf880b3a3d59b9937E
            (lVar2);
  **(undefined **)(param_1 + 0x78) = 1;
  return;
}