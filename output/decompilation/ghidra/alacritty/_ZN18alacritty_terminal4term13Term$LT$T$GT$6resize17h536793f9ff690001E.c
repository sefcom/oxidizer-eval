void _ZN18alacritty_terminal4term13Term_LT_T_GT_6resize17h536793f9ff690001E
               (long param_1,ulong param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long *local_88;
  undefined *local_80;
  ulong *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char local_40;
  undefined7 local_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  
  lVar8 = *(long *)(param_1 + 0xb8);
  uVar2 = *(ulong *)(param_1 + 0xc0);
  local_108 = param_3;
  local_100 = param_2;
  local_90 = lVar8;
  uVar6 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (uVar2 == param_2 && lVar8 == param_3) {
    if (3 < uVar6) {
      local_f8 = &PTR_s_Term_resize_dimensions_unchange_009778e0;
      uStack_f0 = 1;
      local_e8 = (undefined8 **)0x8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977940);
      local_c0 = "alacritty_terminal::term";
      local_b8 = 0x18;
      local_b0 = "alacritty_terminal::term";
      local_a8 = 0x18;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_f8,4,&local_c0);
    }
  }
  else {
    local_98 = param_1 + 0x28;
    if (3 < uVar6) {
      local_88 = &local_108;
      local_80 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
      ;
      local_78 = &local_100;
      local_70 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
      ;
      local_f8 = &PTR_s_New_num_cols_is_009778f0;
      uStack_f0 = 2;
      uStack_d8 = 0;
      local_e8 = &local_88;
      uStack_e0 = 2;
      local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977910);
      local_c0 = "alacritty_terminal::term";
      local_b8 = 0x18;
      local_b0 = "alacritty_terminal::term";
      local_a8 = 0x18;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_f8,4,&local_c0);
      param_2 = local_100;
      param_3 = local_108;
    }
    uVar6 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 0x50)) {
      uVar6 = *(ulong *)(param_1 + 0x50) - uVar2;
    }
    uVar3 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(0,~*(uint *)(param_1 + 0x60) + (int)param_2);
    uVar3 = _ZN4core3cmp3Ord3max17h485505c56320f468E((int)param_2 - (int)uVar2,uVar3);
    iVar4 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(uVar3,uVar6 & 0xffffffff);
    *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + iVar4;
    uVar5 = *(uint *)(param_1 + 0x6dc) & 0x1000;
    _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_6resize17h2fe81c4df8ec6262E
              (local_98,uVar5 == 0,param_2,param_3);
    _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_6resize17h2fe81c4df8ec6262E
              (param_1 + 0xd8,uVar5 >> 0xc,local_100,local_108);
    lVar8 = local_90;
    if (local_90 == local_108) {
      cVar1 = *(char *)(param_1 + 0x280);
      *(undefined *)(param_1 + 0x280) = 2;
      if (cVar1 != '\x02') {
        local_48 = *(undefined8 *)(param_1 + 0x278);
        local_68 = *(undefined4 *)(param_1 + 600);
        uStack_64 = *(undefined4 *)(param_1 + 0x25c);
        uStack_60 = *(undefined4 *)(param_1 + 0x260);
        uStack_5c = *(undefined4 *)(param_1 + 0x264);
        local_58 = *(undefined4 *)(param_1 + 0x268);
        uStack_54 = *(undefined4 *)(param_1 + 0x26c);
        uStack_50 = *(undefined4 *)(param_1 + 0x270);
        uStack_4c = *(undefined4 *)(param_1 + 0x274);
        local_3f = (undefined7)*(undefined8 *)(param_1 + 0x281);
        uStack_38 = (undefined)*(undefined8 *)(param_1 + 0x288);
        uStack_37 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x288) >> 8);
        local_40 = cVar1;
        uVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(local_100,uVar2);
        _ZN18alacritty_terminal9selection9Selection6rotate17he038f04baab7ded0E
                  (&local_f8,&local_68,*(undefined8 *)(param_1 + 0xb8),
                   *(undefined8 *)(param_1 + 0xc0),0,uVar3,-iVar4);
        *(undefined8 *)(param_1 + 0x288) = local_c8;
        *(undefined8 *)(param_1 + 0x278) = uStack_d8;
        *(undefined8 *)(param_1 + 0x280) = uStack_d0;
        *(undefined8 ***)(param_1 + 0x268) = local_e8;
        *(undefined8 *)(param_1 + 0x270) = uStack_e0;
        *(undefined4 *)(param_1 + 600) = (undefined4)local_f8;
        *(undefined4 *)(param_1 + 0x25c) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 0x260) = (undefined4)uStack_f0;
        *(undefined4 *)(param_1 + 0x264) = uStack_f0._4_4_;
      }
    }
    else {
      *(undefined *)(param_1 + 0x280) = 2;
      local_f8 = *(undefined ***)(param_1 + 0x198);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17h138e0d9f2b39608fE
                (param_1 + 0x188,local_108,&local_f8);
      lVar8 = local_108;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x290);
    iVar4 = *(int *)(param_1 + 0xc0);
    uVar5 = *(uint *)(param_1 + 200);
    uVar3 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE
                      (*(undefined4 *)(param_1 + 0x298),~uVar5 + iVar4);
    uVar3 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(uVar3,-uVar5);
    *(undefined4 *)(param_1 + 0x298) = uVar3;
    uVar7 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(uVar7,*(long *)(param_1 + 0xb8) + -1);
    *(undefined8 *)(param_1 + 0x290) = uVar7;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(int *)(param_1 + 0x2a4) = iVar4;
    _ZN18alacritty_terminal4term15TermDamageState6resize17h700b97a1b27587dfE
              (param_1 + 0x1e8,lVar8,local_100);
  }
  return;
}