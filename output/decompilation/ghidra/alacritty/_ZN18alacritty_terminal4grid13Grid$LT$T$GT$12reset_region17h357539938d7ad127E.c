void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_12reset_region17h357539938d7ad127E
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  
  local_2c = param_2;
  piVar3 = (int *)_ZN93__LT_core__ops__range__RangeTo_LT_T_GT__u20_as_u20_core__ops__range__RangeBounds_LT_T_GT__GT_9end_bound17h14c9d6fe65901d1bE
                            (&local_2c);
  iVar1 = *piVar3;
  if (0 < iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      uVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (param_1,iVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977338);
      _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE(uVar4,uVar2);
      iVar5 = iVar6;
    } while (iVar1 != iVar6);
  }
  return;
}