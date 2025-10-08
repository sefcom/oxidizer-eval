void _ZN2rg5flags6hiargs8hostname17h842f73e1e84d80bbE
               (undefined4 *param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined **local_238;
  code *local_230;
  char *local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 *local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  char *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined *local_148;
  undefined8 local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  undefined8 local_f0;
  undefined ***local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  if (param_2 == (undefined *)0x0) {
    _ZN2rg5flags6hiargs17platform_hostname17h0858a6014f6c37dcE(param_1);
    return;
  }
  local_148 = param_2;
  local_140 = param_3;
  _ZN8grep_cli10decompress14resolve_binary17hae84bf314539e0ccE(&local_190);
  if (((ulong)local_190 & 1) != 0) {
    local_1f8 = (undefined4 *)local_178;
                    /* try { // try from 00352cd9 to 00352dbf has its CatchHandler @ 00353204 */
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      local_238 = &local_148;
      local_230 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h26569d9514a05a63E;
      local_228 = (char *)&local_208;
      local_220 = 
      PTR__ZN70__LT_grep_cli__process__CommandError_u20_as_u20_core__fmt__Display_GT_3fmt17h3f7da3a26c9a2241E_00526fe0
      ;
      local_f8 = &PTR_s_failed_to_run_command____to_get_h_004eb2a0;
      local_f0 = 2;
      local_d8 = 0;
      local_e8 = &local_238;
      local_e0 = 2;
      local_1b0 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                            (&PTR_s_crates_core_flags_hiargs_rs_004eb368);
      local_1d0 = (undefined **)0x18754f;
      uStack_1c8 = 0x11;
      uStack_1c0 = "rg::flags::hiargs";
      uStack_1b8 = (undefined4 *)0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_f8,4,&local_1d0);
    }
    _ZN2rg5flags6hiargs17platform_hostname17h0858a6014f6c37dcE(param_1);
    _ZN4core3ptr52drop_in_place_LT_grep_cli__process__CommandError_GT_17h74f24c8deb1a9af9E
              (&local_208);
    return;
  }
  local_158 = local_178;
  local_168 = (undefined4)local_188;
  uStack_164 = local_188._4_4_;
  uStack_160 = (undefined4)uStack_180;
  uStack_15c = uStack_180._4_4_;
                    /* try { // try from 00352dfc to 00352e13 has its CatchHandler @ 003531ff */
  _ZN3std7process7Command3new17hf0673b88a585bfeeE(&local_f8,&local_168);
                    /* try { // try from 00352e14 to 00352e38 has its CatchHandler @ 00353213 */
  _ZN3std7process7Command5stdin17hf2e58e20c85050ffE(&local_f8,1);
  (*(code *)PTR__ZN8grep_cli7process13CommandReader3new17h647081c4517aedcdE_00527218)
            (&local_1d0,&local_f8);
  if ((int)local_1d0 == 2) {
    local_1d8 = uStack_1b8;
    local_1e8 = (undefined4)uStack_1c8;
    uStack_1e4 = uStack_1c8._4_4_;
    uStack_1e0 = (undefined4)uStack_1c0;
    uStack_1dc = uStack_1c0._4_4_;
                    /* try { // try from 00352e5e to 00352f30 has its CatchHandler @ 003531f0 */
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      uStack_200 = 
      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_00526a90
      ;
      local_1f8 = &local_1e8;
      local_1f0 = 
      PTR__ZN70__LT_grep_cli__process__CommandError_u20_as_u20_core__fmt__Display_GT_3fmt17h3f7da3a26c9a2241E_00526fe0
      ;
      local_238 = &PTR_s_failed_to_spawn_command___004eb2c0;
      local_230 = (code *)0x2;
      local_218 = 0;
      local_228 = (char *)&local_208;
      local_220 = (undefined *)0x2;
      local_208 = (char *)&local_168;
      local_170 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                            (&PTR_s_crates_core_flags_hiargs_rs_004eb350);
      local_190 = "rg::flags::hiargs";
      local_188 = (undefined *)0x11;
      uStack_180 = "rg::flags::hiargs";
      local_178 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_238,4,&local_190);
    }
    _ZN2rg5flags6hiargs17platform_hostname17h0858a6014f6c37dcE(param_1);
                    /* try { // try from 00352f31 to 00352f8e has its CatchHandler @ 00353213 */
    _ZN4core3ptr52drop_in_place_LT_grep_cli__process__CommandError_GT_17h74f24c8deb1a9af9E
              (&local_1e8);
  }
  else {
    local_108 = local_1a0;
    uStack_104 = uStack_19c;
    uStack_100 = uStack_198;
    uStack_fc = uStack_194;
    local_118 = (undefined4)local_1b0;
    uStack_114 = local_1b0._4_4_;
    uStack_110 = uStack_1a8;
    uStack_10c = uStack_1a4;
    local_128 = (undefined4)uStack_1c0;
    uStack_124 = uStack_1c0._4_4_;
    uStack_120 = (undefined4)uStack_1b8;
    uStack_11c = uStack_1b8._4_4_;
    local_138 = (int)local_1d0;
    uStack_134 = local_1d0._4_4_;
    uStack_130 = (undefined4)uStack_1c8;
    uStack_12c = uStack_1c8._4_4_;
    _ZN3std2io14read_to_string17h6591de12ba6059d1E(&local_208,&local_138);
    local_1d8 = local_1f8;
    local_1e8 = (undefined4)local_208;
    uStack_1e4 = local_208._4_4_;
    uStack_1e0 = (undefined4)uStack_200;
    uStack_1dc = uStack_200._4_4_;
    auVar2 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hd0360e9e77a44e0fE(uStack_200);
    if (auVar2._8_8_ != 0) {
                    /* try { // try from 003530ac to 003530b8 has its CatchHandler @ 003531d2 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_1d0,auVar2._0_8_);
      *(char **)(param_1 + 4) = uStack_1c0;
      *param_1 = (int)local_1d0;
      param_1[1] = local_1d0._4_4_;
      param_1[2] = (undefined4)uStack_1c8;
      param_1[3] = uStack_1c8._4_4_;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_1e8);
                    /* try { // try from 003530d7 to 003530e3 has its CatchHandler @ 003531ff */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h79c148136f15ad8bE(&local_f8);
      goto LAB_003531b8;
    }
                    /* try { // try from 003530e9 to 003531a0 has its CatchHandler @ 003531d2 */
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      local_188 = 
      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_00526a90
      ;
      local_1d0 = &PTR_s_output_from_command____is_empty_a_004eb300;
      uStack_1c8 = 2;
      local_1b0 = 0;
      uStack_1b8 = (undefined4 *)&DAT_00000001;
      uStack_1c0 = (char *)&local_190;
      local_190 = (char *)&local_168;
      local_218 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                            (&PTR_s_crates_core_flags_hiargs_rs_004eb320);
      local_238 = (undefined **)0x18754f;
      local_230 = (code *)0x11;
      local_228 = "rg::flags::hiargs";
      local_220 = (undefined *)0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_1d0,4,&local_238);
    }
    _ZN2rg5flags6hiargs17platform_hostname17h0858a6014f6c37dcE(param_1);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_1e8);
  }
                    /* try { // try from 003531ab to 003531b7 has its CatchHandler @ 003531ff */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h79c148136f15ad8bE(&local_f8);
LAB_003531b8:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hee77a3799ccd604eE(&local_168);
  return;
}