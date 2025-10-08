void _ZN18alacritty_terminal9selection9Selection14range_semantic17h4a75215fc3ee45a7E
               (undefined (*param_1) [12],undefined8 param_2,ulong param_3,int param_4,ulong param_5
               ,int param_6)

{
  ulong uVar1;
  int iVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  byte local_48 [8];
  ulong local_40;
  int local_38;
  
  if ((param_3 == param_5 && param_4 == param_6) &&
     (_ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_14bracket_search17h6feec58954ead82fE
                (local_48,param_2,param_3,param_4), (local_48[0] & 1) != 0)) {
    uVar1 = local_40;
    iVar2 = local_38;
    if ((param_4 <= local_38) && (param_3 <= local_40 || local_38 != param_4)) {
      uVar1 = param_3;
      param_3 = local_40;
      iVar2 = param_4;
      param_4 = local_38;
    }
    *(ulong *)*param_1 = uVar1;
    *(int *)(*param_1 + 8) = iVar2;
    *(ulong *)(param_1[1] + 4) = param_3;
  }
  else {
    auVar3 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_20semantic_search_left17h4cec90c032934a57E
                       (param_2,param_3,param_4);
    auVar4 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_21semantic_search_right17h18d14e89e94ed13aE
                       (param_2,param_5,param_6);
    param_4 = auVar4._8_4_;
    *param_1 = auVar3;
    *(long *)(param_1[1] + 4) = auVar4._0_8_;
  }
  *(int *)param_1[2] = param_4;
  param_1[2][8] = 0;
  return;
}