void _ZN18alacritty_terminal4term13Term_LT_T_GT_20scroll_down_relative17h02564c13a28371ceE
               (long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined local_c0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined local_b9;
  undefined8 local_b8;
  int *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
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
  
  local_f4 = param_2;
  local_f0 = param_3;
  uVar5 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (4 < uVar5) {
    local_b0 = &local_f4;
    local_a8 = 
    PTR__ZN70__LT_alacritty_terminal__index__Line_u20_as_u20_core__fmt__Display_GT_3fmt17h8bdccc96f374cf92E_009de570
    ;
    local_a0 = &local_f0;
    local_98 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
    ;
    local_e8 = &PTR_DAT_009778a8;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_b0;
    uStack_d0 = 2;
    local_70 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009778c8);
    local_90 = "alacritty_terminal::term";
    local_88 = 0x18;
    local_80 = "alacritty_terminal::term";
    local_78 = 0x18;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_e8,5,&local_90);
    param_3 = local_f0;
    param_2 = local_f4;
  }
  iVar2 = *(int *)(param_1 + 0x2a4);
  auVar7 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                     (param_3,(long)(iVar2 - *(int *)(param_1 + 0x2a0)));
  uVar6 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                    (auVar7._0_8_,(long)(iVar2 - param_2),auVar7._8_8_,iVar2 - param_2);
  cVar1 = *(char *)(param_1 + 0x280);
  *(undefined *)(param_1 + 0x280) = 2;
  local_f0 = uVar6;
  if (cVar1 == '\x02') {
    local_c0 = 2;
  }
  else {
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
    _ZN18alacritty_terminal9selection9Selection6rotate17he038f04baab7ded0E
              (&local_e8,&local_68,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
               param_2,iVar2,-(int)uVar6);
  }
  *(undefined8 *)(param_1 + 0x288) = local_b8;
  *(undefined8 *)(param_1 + 0x278) = local_c8;
  *(undefined *)(param_1 + 0x280) = local_c0;
  *(undefined4 *)(param_1 + 0x281) = local_bf;
  *(undefined2 *)(param_1 + 0x285) = local_bb;
  *(undefined *)(param_1 + 0x287) = local_b9;
  *(undefined4 *)(param_1 + 0x268) = (undefined4)local_d8;
  *(undefined4 *)(param_1 + 0x26c) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)uStack_d0;
  *(undefined4 *)(param_1 + 0x274) = uStack_d0._4_4_;
  *(undefined4 *)(param_1 + 600) = (undefined4)local_e8;
  *(undefined4 *)(param_1 + 0x25c) = local_e8._4_4_;
  *(undefined4 *)(param_1 + 0x260) = (undefined4)uStack_e0;
  *(undefined4 *)(param_1 + 0x264) = uStack_e0._4_4_;
  iVar3 = *(int *)(param_1 + 0x298);
  if (param_2 <= iVar3 && iVar3 < iVar2) {
    uVar4 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(iVar3 + (int)uVar6,iVar2 + -1);
    *(undefined4 *)(param_1 + 0x298) = uVar4;
  }
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11scroll_down17hcd50b72e74cc8cd9E
            (param_1 + 0x28,param_2,iVar2,uVar6);
  *(undefined *)(param_1 + 0x210) = 1;
  return;
}