void _ZN18alacritty_terminal4term13Term_LT_T_GT_8wrapline17ha57be38105826762E(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((*(byte *)(param_1 + 0x6dc) & 0x80) == 0) {
    return;
  }
  uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (4 < uVar1) {
    local_50 = &PTR_s_Wrapping_input_00977958;
    local_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977968);
    local_78 = "alacritty_terminal::term";
    local_70 = 0x18;
    local_68 = "alacritty_terminal::term";
    local_60 = 0x18;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_50,5,&local_78);
  }
  lVar2 = _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11cursor_cell17h4172fc1fd56d763cE
                    (param_1 + 0x28);
  *(byte *)(lVar2 + 0x14) = *(byte *)(lVar2 + 0x14) | 0x10;
  iVar3 = *(int *)(param_1 + 0x60) + 1;
  if (iVar3 < *(int *)(param_1 + 0x2a4)) {
    uVar4 = *(undefined8 *)(param_1 + 0x1f0);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    _ZN18alacritty_terminal4term15TermDamageState11damage_line17h741c479e22cc411bE
              (uVar4,uVar5,(long)*(int *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x60) = iVar3;
  }
  else {
    _ZN78__LT_alacritty_terminal__term__Term_LT_T_GT__u20_as_u20_vte__ansi__Handler_GT_8linefeed17h4f75324882217937E
              (param_1);
    iVar3 = *(int *)(param_1 + 0x60);
    uVar4 = *(undefined8 *)(param_1 + 0x1f0);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x84) = 0;
  _ZN18alacritty_terminal4term15TermDamageState11damage_line17h741c479e22cc411bE
            (uVar4,uVar5,(long)iVar3,0,0);
  return;
}