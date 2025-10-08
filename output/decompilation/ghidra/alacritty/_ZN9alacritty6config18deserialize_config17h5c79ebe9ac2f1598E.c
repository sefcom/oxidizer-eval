void _ZN9alacritty6config18deserialize_config17h5c79ebe9ac2f1598E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  undefined auVar6 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 **local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 **ppuStack_128;
  undefined8 **local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 **local_d8;
  undefined8 **ppuStack_d0;
  undefined8 **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 **local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  
  local_78 = param_2;
  local_70 = param_3;
  _ZN3std2fs14read_to_string17h99a142b6408e88d3E(&local_140);
  ppuVar2 = local_130;
  ppuVar1 = uStack_138;
  lVar5 = -(long)local_140;
  local_158 = local_140;
  uStack_150 = uStack_138;
  local_148 = local_130;
  local_140 = (undefined8 **)((ulong)local_140 & 0xffffffff00000000);
  auVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                     (0xfeff,&local_140,extraout_RDX,lVar5);
                    /* try { // try from 00543325 to 005434cc has its CatchHandler @ 0054367d */
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h44e6b8f4b9615064E
                    (ppuVar1,ppuVar2,auVar6._0_8_,auVar6._8_8_);
  if (cVar3 != '\0') {
    _ZN5alloc6string6String9split_off17hb414f7fc7cd130c9E(&local_140,&local_158,3);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_158);
    local_148 = local_130;
    local_158 = local_140;
    uStack_150 = uStack_138;
  }
  auVar6 = (*(code *)PTR__ZN3std4path4Path9extension17h0018158968ea260fE_009dfd78)(param_2,param_3);
  if (auVar6._0_8_ == 0) {
    auVar6 = ZEXT816(1);
  }
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                    (auVar6._0_8_,auVar6._8_8_,&DAT_001ed608,4);
  if (((cVar3 != '\0') ||
      (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                         (auVar6._0_8_,auVar6._8_8_,&DAT_00201d60,3), cVar3 != '\0')) &&
     (ppuVar2 = local_148, ppuVar1 = uStack_150,
     _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17he66bed476250953dE(uStack_150,local_148),
     extraout_RDX_00 != 0)) {
    uVar4 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (1 < uVar4) {
      local_68 = &local_78;
      local_60 = (undefined8 **)
                 _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
      local_140 = (undefined8 **)&PTR_DAT_00981e68;
      uStack_138 = (undefined8 **)0x2;
      local_120 = (undefined8 **)0x0;
      local_130 = &local_68;
      ppuStack_128 = (undefined8 **)&DAT_00000001;
      local_c8 = (undefined8 **)
                 (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_DAT_00981e88);
      local_e8 = (undefined8 **)&DAT_00201da1;
      uStack_e0 = (undefined8 **)0x11;
      local_d8 = (undefined8 **)&DAT_00201da1;
      ppuStack_d0 = (undefined8 **)0x11;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_140,2,&local_e8);
    }
    local_68 = (undefined8 *)0x8000000000000000;
    local_60 = ppuVar1;
    local_58 = ppuVar2;
    _ZN10serde_yaml2de12Deserializer2de17h64ea0f102abe5b7eE(&local_140,&local_68);
    if (local_140 == (undefined8 **)0x8000000000000007) {
      *param_1 = 6;
      param_1[1] = uStack_138;
      goto LAB_0054364e;
    }
    local_a8 = local_100;
    local_b8 = local_110;
    uStack_b4 = uStack_10c;
    uStack_b0 = uStack_108;
    uStack_ac = uStack_104;
    local_c8 = local_120;
    uStack_c0 = uStack_118;
    uStack_bc = uStack_114;
    local_d8 = local_130;
    ppuStack_d0 = ppuStack_128;
    local_e8 = local_140;
    uStack_e0 = uStack_138;
                    /* try { // try from 0054352e to 0054354a has its CatchHandler @ 00543668 */
    _ZN9alacritty6config16prune_yaml_nulls17h5299bbbffe0ec2b5E(&local_e8,param_4);
    _ZN4toml3ser9to_string17h904b6bc7c841546eE(&local_140,&local_e8);
    local_98 = (undefined4)uStack_138;
    uStack_94 = uStack_138._4_4_;
    uStack_90 = (undefined4)local_130;
    uStack_8c = local_130._4_4_;
    local_88 = ppuStack_128;
    if ((int)local_140 == 1) {
      param_1[3] = ppuStack_128;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_138;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_138._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_130;
      *(undefined4 *)((long)param_1 + 0x14) = local_130._4_4_;
      *param_1 = 5;
                    /* try { // try from 0054358d to 005435da has its CatchHandler @ 0054367d */
      _ZN4core3ptr45drop_in_place_LT_serde_yaml__value__Value_GT_17h9fe2f02f8bf51b64E(&local_e8);
      goto LAB_0054364e;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_158);
    local_148 = local_88;
    local_158 = (undefined8 **)CONCAT44(uStack_94,local_98);
    uStack_150 = (undefined8 **)CONCAT44(uStack_8c,uStack_90);
    _ZN4core3ptr45drop_in_place_LT_serde_yaml__value__Value_GT_17h9fe2f02f8bf51b64E(&local_e8);
  }
  _ZN4toml2de8from_str17hb249a18d92861147E(&local_140,uStack_150,local_148);
  local_e8 = uStack_138;
  ppuVar1 = local_e8;
  uStack_e0 = local_130;
  ppuVar2 = uStack_e0;
  local_d8 = ppuStack_128;
  ppuStack_d0 = local_120;
  local_e8._0_4_ = SUB84(uStack_138,0);
  local_e8._4_4_ = (undefined4)((ulong)uStack_138 >> 0x20);
  uStack_e0._0_4_ = SUB84(local_130,0);
  uStack_e0._4_4_ = (undefined4)((ulong)local_130 >> 0x20);
  local_e8 = ppuVar1;
  uStack_e0 = ppuVar2;
  if (local_140 == (undefined8 **)0x2) {
    param_1[3] = ppuStack_128;
    param_1[4] = local_120;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_e8;
    *(undefined4 *)((long)param_1 + 0xc) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_e0._4_4_;
    *param_1 = 7;
  }
  else {
    param_1[9] = local_f8;
    param_1[10] = uStack_f0;
    param_1[7] = CONCAT44(uStack_104,uStack_108);
    param_1[8] = local_100;
    param_1[5] = CONCAT44(uStack_114,uStack_118);
    param_1[6] = CONCAT44(uStack_10c,local_110);
    param_1[3] = ppuStack_128;
    param_1[4] = local_120;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_e8;
    *(undefined4 *)((long)param_1 + 0xc) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_e0._4_4_;
    *param_1 = local_140;
  }
LAB_0054364e:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_158);
  return;
}