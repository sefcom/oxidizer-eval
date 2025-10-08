void _ZN9alacritty7migrate14migrate_config17heae155b6e6f7f60cE
               (undefined8 *param_1,long param_2,undefined *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined *local_228;
  undefined8 local_220;
  undefined local_218 [8];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0 [21];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined local_118 [176];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_228 = param_3;
  local_220 = param_4;
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_009de418)
            (local_218,param_3,param_4);
                    /* try { // try from 0055f8a5 to 0055faea has its CatchHandler @ 0055fc73 */
  _ZN4core3str21__LT_impl_u20_str_GT_11rsplit_once17h78fdb160c70e74d6E
            (&local_200,local_210,local_208);
  ppuVar2 = uStack_1f8;
  ppuVar1 = local_200;
  if (local_200 == (undefined **)0x0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (&local_138,"missing file extension",0x16);
    param_1[3] = local_128;
    uVar5 = (undefined4)local_138;
    uVar6 = local_138._4_4_;
    uVar7 = (undefined4)uStack_130;
    uVar8 = uStack_130._4_4_;
  }
  else {
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                      (uStack_1f0,local_1e8,&DAT_00201d60,3);
    if (cVar4 == '\0') {
      if (*(char *)(param_2 + 0x1a) != '\0') {
        if (*(char *)(param_2 + 0x18) != '\0') {
          local_138 = &local_228;
          uStack_130 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
          local_200 = &PTR_s_Ignoring_TOML_file_since____skip_00983370;
          uStack_1f8 = (undefined **)0x2;
          local_1e0[0] = 0;
          uStack_1f0 = (code *)&local_138;
          local_1e8 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_200);
          param_4 = local_220;
          param_3 = local_228;
        }
        param_1[1] = param_3;
        param_1[2] = param_4;
        param_1[3] = 0x8000000000000000;
        *param_1 = 0;
        goto LAB_0055f97e;
      }
      _ZN3std2fs14read_to_string17h99a142b6408e88d3E(&local_138,param_3,param_4);
      local_68 = (undefined4)local_138;
      uStack_64 = local_138._4_4_;
      uStack_60 = (undefined4)uStack_130;
      uStack_5c = uStack_130._4_4_;
      local_58 = local_128;
      _ZN9alacritty7migrate12migrate_toml17h20014181f4101fc3E(&local_200,&local_68);
      ppuVar1 = local_200;
      local_248 = (undefined4)uStack_1f8;
      uStack_244 = uStack_1f8._4_4_;
      uStack_240 = (undefined4)uStack_1f0;
      uStack_23c = uStack_1f0._4_4_;
      local_238 = local_1e8;
      if (local_200 != (undefined **)&DAT_0000000c) {
        (*(code *)PTR_memcpy_009de0b0)(local_118,local_1e0,0xa8);
        uStack_130 = (code *)CONCAT44(uStack_244,local_248);
        local_128 = CONCAT44(uStack_23c,uStack_240);
        local_120 = local_238;
        local_138 = ppuVar1;
                    /* try { // try from 0055fb57 to 0055fb9c has its CatchHandler @ 0055fc5b */
        _ZN9alacritty7migrate15migrate_imports17h8e2e1e348fec4079E
                  (&local_200,param_2,param_3,param_4,&local_138,param_5);
        if (local_200 == (undefined **)&DAT_8000000000000000) {
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hfd01effef2c7df3fE
                    (&local_200,&local_138);
                    /* try { // try from 0055fbb2 to 0055fbc5 has its CatchHandler @ 0055fc4c */
          _ZN9alacritty7migrate13write_results17h4d557a56fed75701E
                    (&local_248,*(undefined4 *)(param_2 + 0x18),*(undefined *)(param_2 + 0x1b),
                     param_3,param_4,uStack_1f8,uStack_1f0);
          if (CONCAT44(uStack_244,local_248) == -0x8000000000000000) {
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_200)
            ;
            param_1[1] = param_3;
            param_1[2] = param_4;
            param_1[3] = 0x8000000000000000;
            *param_1 = 0;
                    /* try { // try from 0055fbea to 0055fc46 has its CatchHandler @ 0055fc73 */
            _ZN4core3ptr53drop_in_place_LT_toml_edit__document__DocumentMut_GT_17h9bb944d092de2eb6E
                      (&local_138);
            goto LAB_0055f97e;
          }
          param_1[3] = local_238;
          *(undefined4 *)(param_1 + 1) = local_248;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_244;
          *(undefined4 *)(param_1 + 2) = uStack_240;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_23c;
          *param_1 = 1;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_200);
        }
        else {
          param_1[3] = uStack_1f0;
          *(int *)(param_1 + 1) = (int)local_200;
          *(undefined4 *)((long)param_1 + 0xc) = local_200._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1f8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_1f8._4_4_;
          *param_1 = 1;
        }
        _ZN4core3ptr53drop_in_place_LT_toml_edit__document__DocumentMut_GT_17h9bb944d092de2eb6E
                  (&local_138);
        goto LAB_0055f97e;
      }
      param_1[3] = local_1e8;
      uVar5 = (undefined4)uStack_1f8;
      uVar6 = uStack_1f8._4_4_;
      uVar7 = (undefined4)uStack_1f0;
      uVar8 = uStack_1f0._4_4_;
    }
    else {
      _ZN9alacritty7migrate4yaml7migrate17h7955a864104fb60dE
                (&local_200,param_2,param_3,param_4,param_5,ppuVar1,ppuVar2);
      local_138 = uStack_1f8;
      ppuVar1 = local_138;
      uStack_130 = uStack_1f0;
      pcVar3 = uStack_130;
      local_128 = local_1e8;
      local_138._0_4_ = SUB84(uStack_1f8,0);
      local_138._4_4_ = (undefined4)((ulong)uStack_1f8 >> 0x20);
      uStack_130._0_4_ = SUB84(uStack_1f0,0);
      uStack_130._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
      local_138 = ppuVar1;
      uStack_130 = pcVar3;
      if ((int)local_200 != 1) {
        param_1[5] = local_1e8;
        *(undefined4 *)(param_1 + 3) = (undefined4)local_138;
        *(undefined4 *)((long)param_1 + 0x1c) = local_138._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_130;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_130._4_4_;
        param_1[1] = param_3;
        param_1[2] = param_4;
        *param_1 = 0;
        goto LAB_0055f97e;
      }
      param_1[3] = local_1e8;
      uVar5 = (undefined4)local_138;
      uVar6 = local_138._4_4_;
      uVar7 = (undefined4)uStack_130;
      uVar8 = uStack_130._4_4_;
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((long)param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 2) = uVar7;
  *(undefined4 *)((long)param_1 + 0x14) = uVar8;
  *param_1 = 1;
LAB_0055f97e:
  _ZN4core3ptr37drop_in_place_LT_crossfont__Style_GT_17h2b47363f07595d0eE(local_218);
  return;
}