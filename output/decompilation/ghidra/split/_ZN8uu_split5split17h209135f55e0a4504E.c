undefined  [16] _ZN8uu_split5split17h209135f55e0a4504E(char *param_1)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 **local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined local_150 [56];
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined local_50 [24];
  undefined local_38 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                    (uVar3,uVar5,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h02f17a72580f2f54E(&local_1e8,uVar3,uVar5);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6b1f230d170ba916E
              (&local_118,&local_1e8,uVar3,uVar5);
    auVar7._8_8_ = local_110;
    auVar7._0_8_ = local_118;
    if (local_118 != (undefined **)0x0) {
      return auVar7;
    }
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd30cfe1806b276bfE(local_110 & 0xffffffff);
    ppuVar4 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha5fa7a96942ad614E_0020b138;
    cVar1 = *param_1;
  }
  else {
    uVar3 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_002120f0)();
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5ce760ee52166daeE(uVar3);
    ppuVar4 = (undefined **)&DAT_0020b190;
    cVar1 = *param_1;
  }
  uVar5 = 0x2000;
  if (cVar1 != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 8);
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h7841365b65bbc550E
            (local_150,uVar5,uVar3,ppuVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  switch(*(long *)(param_1 + 0x10)) {
  case 6:
                    /* try { // try from 00172338 to 00172347 has its CatchHandler @ 001728cf */
    _ZN8uu_split15LineChunkWriter3new17h03e22f79622b14baE(&local_1e8,uVar3,param_1);
    ppuVar4 = (undefined **)local_1d8;
    local_90 = local_160;
    uStack_88 = uStack_158;
    local_a0 = local_170;
    uStack_98 = uStack_168;
    local_b0 = local_180;
    uStack_a8 = uStack_178;
    local_c0 = local_190;
    uStack_b8 = uStack_188;
    local_d0 = local_1a0;
    uStack_cc = uStack_19c;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    local_e0 = local_1b0;
    uStack_dc = uStack_1ac;
    uStack_d8 = uStack_1a8;
    uStack_d4 = uStack_1a4;
    local_f0 = local_1c0;
    uStack_ec = uStack_1bc;
    uStack_e8 = uStack_1b8;
    uStack_e4 = uStack_1b4;
    local_100 = (undefined4)local_1d0;
    uStack_fc = local_1d0._4_4_;
    uStack_f8 = (undefined4)uStack_1c8;
    uStack_f4 = uStack_1c8._4_4_;
    local_118 = local_1e8;
    local_110 = uStack_1e0;
    local_108 = (undefined **)local_1d8;
                    /* try { // try from 001723ec to 00172400 has its CatchHandler @ 001728bd */
    auVar7 = _ZN3std2io4copy12generic_copy17h13be53caca5b2128E
                       (local_150,&local_118,extraout_RDX,-(long)local_1e8);
    if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar3 = 0;
    }
    else {
      local_200 = auVar7._8_8_;
      cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(auVar7._8_8_);
      if (cVar1 == '(') {
        local_1f8 = &local_200;
        local_1f0 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00211e50
        ;
        local_1e8 = (undefined **)&DAT_0011adf0;
        uStack_1e0 = 1;
        uStack_1c8 = 0;
        local_1d8 = &local_1f8;
        local_1d0 = 1;
                    /* try { // try from 00172465 to 001724a4 has its CatchHandler @ 0017289c */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(&local_80,0,&local_1e8);
        local_1d0 = CONCAT44(local_1d0._4_4_,1);
        local_1e8 = (undefined **)CONCAT44(uStack_7c,local_80);
        uStack_1e0 = CONCAT44(uStack_74,uStack_78);
        local_1d8 = (undefined8 **)local_70;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he26860fb58d4a888E(&local_1e8);
        ppuVar4 = &
                  PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h69a8f36dceb4e008E_0020ab40
        ;
      }
      else {
        uVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_200);
        local_1e8 = &PTR_s_input_output_error_0020b128;
        uStack_1e0 = 1;
        local_1d8 = (undefined8 **)0x8;
        local_1d0 = 0;
        uStack_1c8 = 0;
                    /* try { // try from 001727bd to 001727e5 has its CatchHandler @ 0017289c */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E
                  (local_50,"input/output error",&local_1e8);
        uVar3 = _ZN6uucore4mods5error8UIoError3new17h4a7a47cd871cd6ccE(uVar2,local_50);
        ppuVar4 = &
                  PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hfbbe6fdeca9d730dE_0020a4f8
        ;
      }
                    /* try { // try from 001727f0 to 001727f9 has its CatchHandler @ 001728bd */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2c8dec07427c60f4E(&local_200);
    }
                    /* try { // try from 001727fa to 00172806 has its CatchHandler @ 001728cf */
    auVar6._8_8_ = ppuVar4;
    auVar6._0_8_ = uVar3;
    _ZN4core3ptr46drop_in_place_LT_uu_split__ByteChunkWriter_GT_17hd0195ba6414a1d99E(&local_118);
    break;
  case 7:
    _ZN8uu_split15ByteChunkWriter3new17ha12e0ca5c6566437E(&local_1e8,uVar3,param_1);
    ppuVar4 = (undefined **)local_1d8;
    local_90 = local_160;
    uStack_88 = uStack_158;
    local_a0 = local_170;
    uStack_98 = uStack_168;
    local_b0 = local_180;
    uStack_a8 = uStack_178;
    local_c0 = local_190;
    uStack_b8 = uStack_188;
    local_d0 = local_1a0;
    uStack_cc = uStack_19c;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    local_e0 = local_1b0;
    uStack_dc = uStack_1ac;
    uStack_d8 = uStack_1a8;
    uStack_d4 = uStack_1a4;
    local_f0 = local_1c0;
    uStack_ec = uStack_1bc;
    uStack_e8 = uStack_1b8;
    uStack_e4 = uStack_1b4;
    local_100 = (undefined4)local_1d0;
    uStack_fc = local_1d0._4_4_;
    uStack_f8 = (undefined4)uStack_1c8;
    uStack_f4 = uStack_1c8._4_4_;
    local_118 = local_1e8;
    local_110 = uStack_1e0;
    local_108 = (undefined **)local_1d8;
                    /* try { // try from 00172627 to 0017263b has its CatchHandler @ 001728ab */
    auVar7 = _ZN3std2io4copy12generic_copy17h2baac93843e4b4ffE
                       (local_150,&local_118,extraout_RDX_00,-(long)local_1e8);
    if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar3 = 0;
    }
    else {
      local_200 = auVar7._8_8_;
      cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(auVar7._8_8_);
      if (cVar1 == '(') {
        local_1f8 = &local_200;
        local_1f0 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00211e50
        ;
        local_1e8 = (undefined **)&DAT_0011adf0;
        uStack_1e0 = 1;
        uStack_1c8 = 0;
        local_1d8 = &local_1f8;
        local_1d0 = 1;
                    /* try { // try from 001726a0 to 001726df has its CatchHandler @ 0017288d */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(&local_68,0,&local_1e8);
        local_1d0 = CONCAT44(local_1d0._4_4_,1);
        local_1e8 = (undefined **)CONCAT44(uStack_64,local_68);
        uStack_1e0 = CONCAT44(uStack_5c,uStack_60);
        local_1d8 = (undefined8 **)local_58;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he26860fb58d4a888E(&local_1e8);
        ppuVar4 = &
                  PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h69a8f36dceb4e008E_0020ab40
        ;
      }
      else {
        uVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_200);
        local_1e8 = &PTR_s_input_output_error_0020b128;
        uStack_1e0 = 1;
        local_1d8 = (undefined8 **)0x8;
        local_1d0 = 0;
        uStack_1c8 = 0;
                    /* try { // try from 0017283e to 00172866 has its CatchHandler @ 0017288d */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E
                  (local_38,"input/output error",&local_1e8);
        uVar3 = _ZN6uucore4mods5error8UIoError3new17h4a7a47cd871cd6ccE(uVar2,local_38);
        ppuVar4 = &
                  PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hfbbe6fdeca9d730dE_0020a4f8
        ;
      }
                    /* try { // try from 00172871 to 0017287a has its CatchHandler @ 001728ab */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2c8dec07427c60f4E(&local_200);
    }
                    /* try { // try from 0017287b to 00172887 has its CatchHandler @ 001728cf */
    auVar6._8_8_ = ppuVar4;
    auVar6._0_8_ = uVar3;
    _ZN4core3ptr46drop_in_place_LT_uu_split__ByteChunkWriter_GT_17hd0195ba6414a1d99E(&local_118);
    break;
  case 8:
                    /* try { // try from 00172515 to 00172527 has its CatchHandler @ 001728cf */
    auVar6 = _ZN8uu_split10line_bytes17hc9b041c7d10080a3E(param_1,local_150,uVar3);
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x0017255e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)((long)&UINT_0011bbf8 +
                       (long)(int)(&UINT_0011bbf8)[*(long *)(param_1 + 0x10)]))();
    return auVar7;
  }
  _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h8812bdb7621dd1adE
            (local_150);
  return auVar6;
}