void _ZN9alacritty7display4hint24visible_regex_match_iter17h3b713c9c9910fb82E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined auVar6 [12];
  
  iVar1 = *(int *)(param_2 + 0xc0);
  uVar2 = *(uint *)(param_2 + 200);
  iVar5 = iVar1 + ~uVar2;
  uVar3 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_16line_search_left17h51103e5e6ff36c7aE
                    (param_2,-uVar2);
  auVar6 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_17line_search_right17h7ee6c3b77284b281E
                     (param_2,iVar5);
  uVar3 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(uVar3,-100 - uVar2);
  uVar4 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(auVar6._8_4_,iVar1 + ~uVar2 + 100);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = uVar3;
  param_1[2] = auVar6._0_8_;
  *(undefined4 *)(param_1 + 3) = uVar4;
  param_1[4] = param_3;
  param_1[5] = param_2;
  *(undefined2 *)(param_1 + 6) = 1;
  *(uint *)(param_1 + 7) = -uVar2;
  *(undefined *)((long)param_1 + 0x3c) = 0;
  *(undefined *)((long)param_1 + 0x44) = 0;
  *(int *)(param_1 + 8) = iVar5;
  return;
}