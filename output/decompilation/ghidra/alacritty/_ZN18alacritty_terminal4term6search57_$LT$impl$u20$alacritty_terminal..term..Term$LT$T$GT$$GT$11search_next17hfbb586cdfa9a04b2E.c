void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_11search_next17hfbb586cdfa9a04b2E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,int param_6,undefined param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  
  auVar2 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE
                     (param_2,param_4,param_5,param_6);
  auVar1 = _ZN4core6option15Option_LT_T_GT_6filter17h5e6e15b0378eaa93E
                     (param_8,param_9,*(undefined8 *)(param_2 + 0x50));
  if (param_6 == 0) {
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_15next_match_left17h616e5d17b4241fb0E
              (param_1,param_2,param_3,auVar2._0_8_,auVar2._8_4_,param_7,auVar1);
  }
  else {
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_16next_match_right17h82c3562c445bfed2E
              ();
  }
  return;
}