void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_14clear_viewport17hc98fe91fe9268e98E(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_68 [2];
  int local_58;
  long local_50;
  long local_48;
  int local_40;
  long local_38;
  int local_30;
  
  local_40 = *(int *)(param_1 + 0x98) + -1;
  local_48 = *(long *)(param_1 + 0x90);
  local_38 = local_48 + -1;
  local_50 = param_1;
  local_30 = local_40;
  _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
            (local_68);
  iVar3 = local_58;
  while (((local_68[0] != 0 &&
          (local_58 = iVar3,
          cVar4 = _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_8is_empty17h97d2bea97497be2bE
                            (), cVar4 != '\0')) && (-1 < iVar3))) {
    _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
              (local_68);
    iVar3 = local_58;
  }
  lVar7 = (long)(local_40 + 1);
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_9scroll_up17hf31756b0f8886f88E
            (param_1,0,*(undefined4 *)(param_1 + 0x98),lVar7);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != lVar7) {
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      uVar5 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (param_1,lVar6,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977350);
      _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
                (uVar5,*(undefined4 *)(param_1 + 0x4c));
      lVar6 = lVar1;
    } while (lVar2 - lVar7 != lVar1);
  }
  return;
}