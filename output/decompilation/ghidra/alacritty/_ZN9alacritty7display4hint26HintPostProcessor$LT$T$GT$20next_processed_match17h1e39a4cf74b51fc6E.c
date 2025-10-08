void _ZN9alacritty7display4hint26HintPostProcessor_LT_T_GT_20next_processed_match17h1e39a4cf74b51fc6E
               (undefined (*param_1) [12],undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined auVar6 [12];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char local_60;
  undefined7 uStack_5f;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined7 uStack_37;
  
  uVar2 = *(undefined8 *)(param_1[3] + 4);
  _ZN9alacritty7display4hint26HintPostProcessor_LT_T_GT_20hint_post_processing17h91382b8c2efba66cE
            (&local_80,uVar2,param_2);
  if (local_60 == '\x02') {
    uVar3 = *(undefined8 *)(param_1[1] + 4);
    uVar1 = *(undefined4 *)param_1[2];
    uVar4 = *(undefined8 *)(param_1[2] + 8);
    do {
      auVar6 = _ZN18alacritty_terminal5index5Point3add17h870632f29f948f48E
                         (*param_2,*(undefined4 *)(param_2 + 1),uVar2,1,1);
      *param_1 = auVar6;
      cVar5 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                        (auVar6._0_8_,auVar6._8_4_,uVar3,uVar1);
      if ('\0' < cVar5) {
        return;
      }
      _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_18regex_search_right17hdca176f2ea14268cE
                (&local_58,uVar2,uVar4,auVar6._0_8_,auVar6._8_4_,uVar3,uVar1);
      if (local_38 == '\x02') {
        return;
      }
      param_2[4] = CONCAT71(uStack_37,local_38);
      *(undefined4 *)(param_2 + 2) = local_48;
      *(undefined4 *)((long)param_2 + 0x14) = uStack_44;
      *(undefined4 *)(param_2 + 3) = uStack_40;
      *(undefined4 *)((long)param_2 + 0x1c) = uStack_3c;
      *(undefined4 *)param_2 = local_58;
      *(undefined4 *)((long)param_2 + 4) = uStack_54;
      *(undefined4 *)(param_2 + 1) = uStack_50;
      *(undefined4 *)((long)param_2 + 0xc) = uStack_4c;
      _ZN9alacritty7display4hint26HintPostProcessor_LT_T_GT_20hint_post_processing17h91382b8c2efba66cE
                (&local_80,uVar2,param_2);
    } while (local_60 == '\x02');
  }
  auVar6 = _ZN18alacritty_terminal5index5Point3add17h870632f29f948f48E(local_70,uStack_68,uVar2,1,1)
  ;
  *param_1 = auVar6;
  *(undefined8 *)param_1[4] = local_80;
  *(undefined8 *)(param_1[4] + 8) = uStack_78;
  *(undefined8 *)(param_1[5] + 4) = local_70;
  *(ulong *)param_1[6] = CONCAT44(uStack_64,uStack_68);
  *(ulong *)(param_1[6] + 8) = CONCAT71(uStack_5f,local_60);
  return;
}