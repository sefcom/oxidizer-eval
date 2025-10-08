void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_10goto_match17h27bd0aa40a0316cfE
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined auVar11 [12];
  undefined8 local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  char local_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e8 [30];
  undefined local_f8 [200];
  
  pcVar3 = *(char **)(param_1 + 0x68);
  auVar10[0] = -(*pcVar3 == DAT_001e8640);
  auVar10[1] = -(pcVar3[1] == UNK_001e8641);
  auVar10[2] = -(pcVar3[2] == UNK_001e8642);
  auVar10[3] = -(pcVar3[3] == UNK_001e8643);
  auVar10[4] = -(pcVar3[4] == UNK_001e8644);
  auVar10[5] = -(pcVar3[5] == UNK_001e8645);
  auVar10[6] = -(pcVar3[6] == UNK_001e8646);
  auVar10[7] = -(pcVar3[7] == UNK_001e8647);
  auVar10[8] = -(pcVar3[8] == UNK_001e8648);
  auVar10[9] = -(pcVar3[9] == UNK_001e8649);
  auVar10[10] = -(pcVar3[10] == UNK_001e864a);
  auVar10[0xb] = -(pcVar3[0xb] == UNK_001e864b);
  auVar10[0xc] = -(pcVar3[0xc] == UNK_001e864c);
  auVar10[0xd] = -(pcVar3[0xd] == UNK_001e864d);
  auVar10[0xe] = -(pcVar3[0xe] == UNK_001e864e);
  auVar10[0xf] = -(pcVar3[0xf] == UNK_001e864f);
  if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf)
      != 0xffff) {
    lVar9 = *(long *)(param_1 + 8);
    auVar10 = _ZN4core6option15Option_LT_T_GT_6filter17hd079b52a2910e85bE
                        (param_2,*(undefined8 *)(lVar9 + 0x50));
    cVar5 = pcVar3[0x116c];
    auVar11 = _ZN18alacritty_terminal5index5Point10grid_clamp17hd0d1827dd0c9d684E
                        (*(undefined8 *)(pcVar3 + 0x1130),*(undefined4 *)(pcVar3 + 0x1138),lVar9,1);
    _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_11search_next17hfbb586cdfa9a04b2E
              (&local_210,lVar9,pcVar3,auVar11._0_8_,auVar11._8_4_,cVar5,0,auVar10);
    uVar4 = uStack_208;
    uVar8 = local_210;
    if (local_1f0 == '\x02') {
      if (auVar10._0_8_ == 1) {
        lVar9 = *(long *)(param_1 + 0x30) + 800;
        uVar6 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(lVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        cVar5 = _ZN9alacritty9scheduler9Scheduler9scheduled17hb59bdd10155a35fcE(uVar8,uVar6);
        if (cVar5 == '\0') {
          local_1e8[0] = 0x8000000000000009;
                    /* try { // try from 00554a93 to 00554a9a has its CatchHandler @ 00554bb2 */
          uVar7 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(lVar9);
          _ZN9alacritty5event5Event3new17h74b0126f9adfc99eE(local_f8,local_1e8,uVar7);
          _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
                    (uVar8,local_f8,0,500000000,0,uVar6,1);
        }
        pcVar3[0x1160] = '\x02';
      }
      else {
        _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_18search_reset_state17h60fb25255eb6c066E
                  (param_1);
      }
    }
    else {
      iVar1 = *(int *)(lVar9 + 200);
      uVar2 = *(uint *)(lVar9 + 0x6dc);
      _ZN18alacritty_terminal4term13Term_LT_T_GT_15scroll_to_point17hb7f2e07c90fd62c4E
                (lVar9,uStack_208);
      if ((uVar2 & 0x10000) != 0) {
        *(undefined8 *)(lVar9 + 0x290) = uVar8;
        *(undefined4 *)(lVar9 + 0x298) = uVar4;
        _ZN18alacritty_terminal4term13Term_LT_T_GT_27vi_mode_recompute_selection17hf880b3a3d59b9937E
                  (lVar9);
      }
      *(ulong *)(pcVar3 + 0x1160) = CONCAT71(uStack_1ef,local_1f0);
      *(undefined4 *)(pcVar3 + 0x1150) = local_200;
      *(undefined4 *)(pcVar3 + 0x1154) = uStack_1fc;
      *(undefined4 *)(pcVar3 + 0x1158) = uStack_1f8;
      *(undefined4 *)(pcVar3 + 0x115c) = uStack_1f4;
      *(undefined8 *)(pcVar3 + 0x1140) = local_210;
      *(ulong *)(pcVar3 + 0x1148) = CONCAT44(uStack_204,uStack_208);
      *(int *)(pcVar3 + 0x1168) = *(int *)(pcVar3 + 0x1168) + (iVar1 - *(int *)(lVar9 + 200));
      uVar8 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE
                        (*(long *)(param_1 + 0x30) + 800);
      _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE
                (local_1e8,*(undefined8 *)(param_1 + 0x60),uVar8,1);
      _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
                (local_1e8);
    }
    **(undefined **)(param_1 + 0x78) = 1;
  }
  return;
}