undefined  [16] _ZN8uu_split5split17h3b6295d78012e56bE(long *param_1)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 **ppuVar5;
  char cVar6;
  undefined8 uVar8;
  undefined uVar7;
  undefined **ppuVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 local_230;
  undefined8 *local_228;
  code *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined **local_180;
  ulong local_178;
  ulong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined local_e8 [56];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined local_68 [24];
  undefined local_50 [24];
  undefined local_38 [24];
  
  lVar10 = param_1[0xf];
  lVar1 = param_1[0x10];
  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                    (lVar10,lVar1,"-",1);
  if (cVar6 == '\0') {
    _ZN3std2fs4File4open17hf05dc8e7da5fafe3E(&local_218,lVar10,lVar1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h36db9552504a57ebE
              (&local_180,&local_218,param_1);
    auVar11._8_8_ = local_178;
    auVar11._0_8_ = local_180;
    if (local_180 != (undefined **)0x0) {
      return auVar11;
    }
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8fc4b41669740c9dE(local_178 & 0xffffffff);
    ppuVar9 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hc63c21dac960bcdfE_002485f8;
  }
  else {
    uVar8 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h84649541c58f7536E(uVar8);
    ppuVar9 = (undefined **)&DAT_00248650;
  }
  lVar10 = 0x2000;
  if (*param_1 != 0) {
    lVar10 = param_1[1];
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h03cd61f44017daf8E
            (local_e8,lVar10,uVar8,ppuVar9);
  lVar10 = param_1[3];
  switch(param_1[2]) {
  case 6:
                    /* try { // try from 001ce0e9 to 001ce0f8 has its CatchHandler @ 001ce878 */
    _ZN8uu_split15LineChunkWriter3new17hd30d9397c46ea980E(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce1a4 to 001ce1b8 has its CatchHandler @ 001ce800 */
      auVar11 = _ZN3std2io4copy12generic_copy17ha0a65a54dc3a7f4dE(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = ppuVar5;
        auVar12 = auVar3 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce21e to 001ce25d has its CatchHandler @ 001ce840 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(&local_b0,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_ac,local_b0);
          uStack_210 = CONCAT44(uStack_a4,uStack_a8);
          local_208 = (undefined8 **)local_a0;
          uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(&local_218);
          auVar12._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00248438
          ;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce6fe to 001ce726 has its CatchHandler @ 001ce840 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E
                    (local_68,"input/output error",&local_218);
          auVar12 = _ZN6uucore4mods5error8UIoError3new17h810f822078081064E(uVar7,local_68);
        }
                    /* try { // try from 001ce72d to 001ce734 has its CatchHandler @ 001ce7e4 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(uVar8);
      }
                    /* try { // try from 001ce735 to 001ce741 has its CatchHandler @ 001ce878 */
      _ZN4core3ptr46drop_in_place_LT_uu_split__LineChunkWriter_GT_17h5c34f624ee7dbadfE(&local_180);
    }
    break;
  case 7:
    _ZN8uu_split15ByteChunkWriter3new17hf26f4f49e0f52e08E(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce4e0 to 001ce4f4 has its CatchHandler @ 001ce7ee */
      auVar11 = _ZN3std2io4copy12generic_copy17h1d61d7a77a7df7abE(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = ppuVar5;
        auVar12 = auVar4 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce55a to 001ce599 has its CatchHandler @ 001ce824 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(&local_98,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_94,local_98);
          uStack_210 = CONCAT44(uStack_8c,uStack_90);
          local_208 = (undefined8 **)local_88;
          uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(&local_218);
          auVar12._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00248438
          ;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce779 to 001ce7a1 has its CatchHandler @ 001ce824 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E
                    (local_50,"input/output error",&local_218);
          auVar12 = _ZN6uucore4mods5error8UIoError3new17h810f822078081064E(uVar7,local_50);
        }
                    /* try { // try from 001ce7a8 to 001ce7af has its CatchHandler @ 001ce7df */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(uVar8);
      }
                    /* try { // try from 001ce7b0 to 001ce7bc has its CatchHandler @ 001ce878 */
      _ZN4core3ptr46drop_in_place_LT_uu_split__ByteChunkWriter_GT_17hf5186553e96e8c40E(&local_180);
    }
    break;
  case 8:
                    /* try { // try from 001ce272 to 001ce281 has its CatchHandler @ 001ce878 */
    _ZN8uu_split20LineBytesChunkWriter3new17hd36f889c86b72df9E(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce32d to 001ce341 has its CatchHandler @ 001ce812 */
      auVar11 = _ZN3std2io4copy12generic_copy17hc68a87374d72d271E(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ppuVar5;
        auVar12 = auVar2 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce3a7 to 001ce3e6 has its CatchHandler @ 001ce85c */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(&local_80,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_7c,local_80);
          uStack_210 = CONCAT44(uStack_74,uStack_78);
          local_208 = (undefined8 **)local_70;
          uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(&local_218);
          auVar12._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00248438
          ;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce680 to 001ce6a8 has its CatchHandler @ 001ce85c */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E
                    (local_38,"input/output error",&local_218);
          auVar12 = _ZN6uucore4mods5error8UIoError3new17h810f822078081064E(uVar7,local_38);
        }
                    /* try { // try from 001ce6af to 001ce6b6 has its CatchHandler @ 001ce7e9 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(uVar8);
      }
                    /* try { // try from 001ce6b7 to 001ce6c3 has its CatchHandler @ 001ce878 */
      _ZN4core3ptr51drop_in_place_LT_uu_split__LineBytesChunkWriter_GT_17h03f2545fa069a94cE
                (&local_180);
    }
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x001ce409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar11 = (*(code *)(&DAT_0012100c + *(int *)(&DAT_0012100c + param_1[2] * 4)))();
    return auVar11;
  }
  _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h0757c489e3131c13E
            (local_e8);
  return auVar12;
}