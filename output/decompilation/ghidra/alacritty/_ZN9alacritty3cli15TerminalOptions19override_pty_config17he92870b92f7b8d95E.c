void _ZN9alacritty3cli15TerminalOptions19override_pty_config17he92870b92f7b8d95E
               (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 uVar6;
  long **pplVar7;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  code *local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_70 = param_1 + 0x18;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_009dfd18)(uVar6,uVar1);
  if (cVar2 == '\0') {
    lVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar3 != 0) {
      local_68 = &local_70;
      local_60 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17ha08e32d10b62624aE;
      local_a0 = &PTR_s_Invalid_working_directory__00981630;
      uStack_98 = (long **)&DAT_00000001;
      local_80 = 0;
      local_90 = &local_68;
      local_88 = (undefined8 **)&DAT_00000001;
      local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_cli_rs_00981640);
      local_58 = "alacritty::cli";
      local_50 = 0xe;
      local_48 = "alacritty::cli";
      local_40 = 0xe;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_a0,1,&local_58);
    }
  }
  else {
    _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
              (&local_a0,uVar6,uVar1);
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
              (param_2 + 6);
    param_2[8] = local_90;
    *(undefined4 *)(param_2 + 6) = (undefined4)local_a0;
    *(undefined4 *)((long)param_2 + 0x34) = local_a0._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_98;
    *(undefined4 *)((long)param_2 + 0x3c) = uStack_98._4_4_;
  }
  _ZN9alacritty3cli15TerminalOptions7command17ha3af24ef4be7c6daE
            (&local_a0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((long **)local_a0 == (long **)0x8000000000000001) {
    _ZN4core3ptr86drop_in_place_LT_core__option__Option_LT_alacritty__config__ui_config__Program_GT__GT_17h7098f8152c7e215aE
              (&local_a0);
  }
  else {
    if (local_a0 == (undefined **)&DAT_8000000000000000) {
      local_a8 = 8;
      local_b0 = (long **)0x0;
      pplVar4 = local_88;
      pplVar5 = uStack_98;
      uVar6 = 0;
      pplVar7 = local_90;
    }
    else {
      local_a8 = local_80;
      local_b0 = local_88;
      pplVar4 = local_90;
      pplVar5 = (long **)local_a0;
      uVar6 = local_78;
      pplVar7 = uStack_98;
    }
    _ZN4core3ptr79drop_in_place_LT_core__option__Option_LT_alacritty_terminal__tty__Shell_GT__GT_17h95abd02b7d4cd22cE
              (param_2);
    *param_2 = pplVar5;
    param_2[1] = pplVar7;
    param_2[2] = pplVar4;
    param_2[3] = local_b0;
    param_2[4] = local_a8;
    param_2[5] = uVar6;
  }
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) | *(byte *)(param_1 + 0x30);
  return;
}