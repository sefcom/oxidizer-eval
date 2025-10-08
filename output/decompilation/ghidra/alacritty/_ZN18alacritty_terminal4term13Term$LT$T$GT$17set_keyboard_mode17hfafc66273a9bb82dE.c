void _ZN18alacritty_terminal4term13Term_LT_T_GT_17set_keyboard_mode17hfafc66273a9bb82dE
               (long param_1,uint param_2,char param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint local_84;
  uint *local_80;
  code *local_78;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_1 + 0x6dc);
  uVar3 = uVar1 & 0xff83ffff;
  *(uint *)(param_1 + 0x6dc) = uVar3;
  if (param_3 != '\0') {
    uVar1 = uVar1 & 0x7c0000;
    if (param_3 == '\x01') {
      param_2 = param_2 | uVar1;
    }
    else {
      param_2 = ~param_2 & uVar1;
    }
  }
  local_84 = param_2;
  uVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (4 < uVar2) {
    local_80 = &local_84;
    local_78 = 
    _ZN71__LT_alacritty_terminal__term__TermMode_u20_as_u20_core__fmt__Debug_GT_3fmt17h3716b30d7ccc6686E
    ;
    local_48 = &PTR_s_Setting_keyboard_mode_to_00977848;
    local_40 = 1;
    local_28 = 0;
    local_38 = &local_80;
    local_30 = 1;
    local_50 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977858);
    local_70 = "alacritty_terminal::term";
    local_68 = 0x18;
    local_60 = "alacritty_terminal::term";
    local_58 = 0x18;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_48,5,&local_70);
    param_2 = local_84;
  }
  *(uint *)(param_1 + 0x6dc) = param_2 | uVar3;
  return;
}