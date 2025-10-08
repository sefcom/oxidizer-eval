void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_20semantic_search_left17h4cec90c032934a57E
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 local_8a;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  int local_18;
  
  _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_18inline_search_left17h0e24405bbcb3ff67E
            (local_68,param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x220),
             *(undefined8 *)(param_1 + 0x228));
  if (local_68[0] != 1) {
    local_8a = 0x440;
    local_38 = param_1 + 0x28;
    local_18 = *(int *)(param_1 + 0xc0) + -1;
    local_20 = *(long *)(param_1 + 0xb8) + -1;
    local_30 = local_60;
    local_28 = local_58;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h6c2fb5cc23e75869E
              (&local_50,&local_38,&local_8a);
    if (CONCAT44(uStack_4c,local_50) == 0) {
      local_88 = 0;
    }
    else {
      local_78 = local_40;
      local_88 = CONCAT44(uStack_4c,local_50);
      uStack_80 = uStack_48;
      uStack_7c = uStack_44;
    }
    _ZN4core6option15Option_LT_T_GT_6map_or17h55de4ce00cf2525fE(&local_88,local_60,local_58);
  }
  return;
}