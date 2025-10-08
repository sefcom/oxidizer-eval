void _ZN18alacritty_terminal4term13Term_LT_T_GT_8swap_alt17h35fdb8feb2ed81c5E(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined uVar6;
  undefined4 uVar7;
  undefined auVar8 [12];
  undefined4 uStack_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x6dd) & 0x10) == 0) {
    auVar8 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_20semantic_search_left28__u7b__u7b_closure_u7d__u7d_17hbf63da3c25834af9E
                       (*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    _ZN75__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__clone__Clone_GT_5clone17ha89e2699b0a1570aE
              (&local_48,param_1 + 0x68);
    uVar5 = local_38;
    uVar4 = uStack_3c;
    uVar3 = uStack_40;
    uVar2 = uStack_44;
    uVar1 = local_48;
    uVar7 = *(undefined4 *)(param_1 + 0x80);
    uVar6 = *(undefined *)(param_1 + 0x84);
                    /* try { // try from 00470b5c to 00470b63 has its CatchHandler @ 00470ccc */
    _ZN4core3ptr97drop_in_place_LT_alacritty_terminal__grid__Cursor_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hdbfd31c2680bb7f5E
              (param_1 + 0x108);
    *(undefined (*) [12])(param_1 + 0x108) = auVar8;
    local_50 = (undefined4)uVar5;
    uStack_4c = (undefined4)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(param_1 + 0x114) = uStack_64;
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    *(undefined4 *)(param_1 + 0x11c) = uVar2;
    *(undefined4 *)(param_1 + 0x120) = uVar3;
    *(undefined4 *)(param_1 + 0x120) = uVar3;
    *(undefined4 *)(param_1 + 0x124) = uVar4;
    *(undefined4 *)(param_1 + 0x128) = local_50;
    *(undefined4 *)(param_1 + 300) = uStack_4c;
    *(undefined4 *)(param_1 + 0x130) = uVar7;
    *(undefined *)(param_1 + 0x134) = uVar6;
    auVar8 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_20semantic_search_left28__u7b__u7b_closure_u7d__u7d_17hbf63da3c25834af9E
                       (*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    _ZN75__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_core__clone__Clone_GT_5clone17ha89e2699b0a1570aE
              (&local_48,param_1 + 0x68);
    uVar7 = *(undefined4 *)(param_1 + 0x80);
    uVar6 = *(undefined *)(param_1 + 0x84);
                    /* try { // try from 00470be5 to 00470bec has its CatchHandler @ 00470ca4 */
    _ZN4core3ptr97drop_in_place_LT_alacritty_terminal__grid__Cursor_LT_alacritty_terminal__term__cell__Cell_GT__GT_17hdbfd31c2680bb7f5E
              (param_1 + 0x88);
    *(undefined (*) [12])(param_1 + 0x88) = auVar8;
    local_50 = (undefined4)local_38;
    uStack_4c = (undefined4)((ulong)local_38 >> 0x20);
    *(undefined4 *)(param_1 + 0x94) = uStack_64;
    *(undefined4 *)(param_1 + 0x98) = local_48;
    *(undefined4 *)(param_1 + 0x9c) = uStack_44;
    *(undefined4 *)(param_1 + 0xa0) = uStack_40;
    *(undefined4 *)(param_1 + 0xa0) = uStack_40;
    *(undefined4 *)(param_1 + 0xa4) = uStack_3c;
    *(undefined4 *)(param_1 + 0xa8) = local_50;
    *(undefined4 *)(param_1 + 0xac) = uStack_4c;
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    *(undefined *)(param_1 + 0xb4) = uVar6;
    _ZN18alacritty_terminal4grid13Grid_LT_T_GT_12reset_region17h3f908732bc647e2dE(param_1 + 0xd8);
  }
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE
            (param_1 + 0x1b8,param_1 + 0x1d0);
  if (*(long *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined *)(*(long *)(param_1 + 0x1c0) + -1 + *(long *)(param_1 + 0x1c8));
  }
  uVar7 = (*(code *)
            PTR__ZN106__LT_alacritty_terminal__term__TermMode_u20_as_u20_core__convert__From_LT_vte__ansi__KeyboardModes_GT__GT_4from17h0c201033fe81af1bE_009de5a0
          )(uVar6);
  _ZN18alacritty_terminal4term13Term_LT_T_GT_17set_keyboard_mode17hfafc66273a9bb82dE
            (param_1,uVar7,0);
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h837dfdb8c289e852E(param_1 + 0x28,param_1 + 0xd8)
  ;
  *(byte *)(param_1 + 0x6dd) = *(byte *)(param_1 + 0x6dd) ^ 0x10;
  *(undefined *)(param_1 + 0x280) = 2;
  *(undefined *)(param_1 + 0x210) = 1;
  return;
}