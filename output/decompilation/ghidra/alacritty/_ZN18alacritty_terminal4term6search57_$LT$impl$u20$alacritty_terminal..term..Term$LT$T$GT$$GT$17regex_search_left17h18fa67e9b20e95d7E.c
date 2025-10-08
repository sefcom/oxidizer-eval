void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_17regex_search_left17h18fa67e9b20e95d7E
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined uVar3;
  uint local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  
  _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_12regex_search17ha6facf63bfe45bdcE
            (local_48,param_2,param_4,param_5,param_6,param_7,param_3);
  uVar2 = local_38;
  uVar1 = local_40;
  if (local_48[0] == 1) {
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_12regex_search17ha6facf63bfe45bdcE
              (local_48,param_2,local_40,local_38,param_4,param_5,param_3 + 0x440);
    if ((local_48[0] & 1) != 0) {
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
      param_1[2] = local_40;
      *(undefined4 *)(param_1 + 3) = local_38;
      uVar3 = 0;
      goto LAB_00472096;
    }
  }
  uVar3 = 2;
LAB_00472096:
  *(undefined *)(param_1 + 4) = uVar3;
  return;
}