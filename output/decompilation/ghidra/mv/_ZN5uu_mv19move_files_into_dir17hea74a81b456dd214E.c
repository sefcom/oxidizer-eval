undefined  [16]
_ZN5uu_mv19move_files_into_dir17hea74a81b456dd214E
          (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  undefined auVar9 [16];
  undefined local_300 [24];
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined local_2d0 [16];
  undefined *local_2c0;
  code *local_2b8;
  long local_298;
  undefined **local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined **local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined **local_268;
  undefined local_258 [8];
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined **local_228;
  undefined8 uStack_220;
  undefined **local_218;
  code *local_210;
  undefined8 local_208;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined local_178 [8];
  undefined auStack_170 [16];
  code *local_160;
  undefined *local_158;
  code *local_150;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined local_88 [48];
  undefined local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_298 = param_5;
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17ha3d0a2de6b6a2a9fE(local_178);
  auVar9 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf1b80da9ba1f81f4E(local_178);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17hdc874b6797fedd23E
            (local_88,param_2,auVar9._0_8_,auVar9._8_8_);
  local_2e0 = param_3;
  local_2d8 = param_4;
                    /* try { // try from 001e9f60 to 001ea042 has its CatchHandler @ 001eabec */
  cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,param_4);
  if (cVar1 == '\0') {
    local_228 = (undefined **)0x1;
    uStack_220 = (code *)local_2e0;
    local_218 = (undefined **)local_2d8;
    local_210 = (code *)CONCAT71(local_210._1_7_,1);
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
              (local_2d0,&local_228);
    local_160 = (code *)local_2c0;
    local_178 = (undefined  [8])0x7;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0e8b01bf032e1a6aE(local_178);
    _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h3a17ce3d5c845dcbE
              (local_88);
    goto LAB_001eaae0;
  }
  _ZN3std2fs12canonicalize17hde632c5d9c152691E(local_178,local_2e0,local_2d8);
  if (local_178 == (undefined  [8])0x8000000000000000) {
    _ZN5uu_mv19move_files_into_dir28__u7b__u7b_closure_u7d__u7d_17he4f083fce89ebeffE
              (&local_198,local_2e0,local_2d8,auStack_170._0_8_);
  }
  else {
    local_188 = auStack_170._8_8_;
    local_198 = local_178._0_4_;
    uStack_194 = local_178._4_4_;
    uStack_190 = auStack_170._0_4_;
    uStack_18c = auStack_170._4_4_;
  }
  if (*(char *)(local_298 + 0x33) == '\0') {
    local_2e8 = (undefined8 ***)0x0;
LAB_001ea143:
    local_278 = (undefined **)0x0;
  }
  else {
                    /* try { // try from 001ea08a to 001ea08e has its CatchHandler @ 001eab6e */
    local_2e8 = (undefined8 **)_ZN4core3ops8function6FnOnce9call_once17hbf1b5780df2247c4E();
    if (param_2 < 2) goto LAB_001ea143;
                    /* try { // try from 001ea09e to 001ea0ab has its CatchHandler @ 001eab66 */
    _ZN9indicatif12progress_bar11ProgressBar3new17h3f65a405722ce42aE(local_2d0,param_2);
                    /* try { // try from 001ea0ac to 001ea0e1 has its CatchHandler @ 001eab10 */
    _ZN9indicatif5style13ProgressStyle13with_template17hadd9cefcdac397a1E
              (local_178,"moving {msg} {wide_bar} {pos}/{len}",0x23);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7d26c333f6a83544E
              (&local_228,local_178,&PTR_s_src_uu_mv_src_mv_rs_00288188);
                    /* try { // try from 001ea0e2 to 001ea0fc has its CatchHandler @ 001eaaf9 */
    _ZN9indicatif12progress_bar11ProgressBar10with_style17hfb345490eb32754bE
              (local_178,local_2d0,&local_228);
                    /* try { // try from 001ea0fd to 001ea117 has its CatchHandler @ 001eab66 */
    _ZN9indicatif5multi13MultiProgress3add17h9f882db003b558aeE(&local_228,&local_2e8,local_178);
    local_278 = local_228;
    uStack_270 = (undefined4)uStack_220;
    uStack_26c = uStack_220._4_4_;
    local_268 = local_218;
  }
  local_a0 = param_1 + param_2 * 0x18;
  local_a8 = param_1;
  lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h68171754d1dad8d6E
                    (&local_a8);
  if (lVar5 != 0) {
    cVar1 = *(char *)(local_298 + 0x36);
    do {
      puVar7 = *(undefined **)(lVar5 + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
      _ZN3std2fs8metadata17h1d9ddf5324749f9aE(local_178,puVar7,uVar4);
      if (local_178._0_4_ == 2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h1a38c79198e9333eE
                  (local_178);
        local_228 = (undefined **)0x1;
        local_210 = (code *)CONCAT71(local_210._1_7_,1);
        uStack_220 = (code *)puVar7;
        local_218 = (undefined **)uVar4;
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                  (local_2d0,&local_228);
        local_160 = (code *)local_2c0;
        local_178 = (undefined  [8])0x0;
        auStack_170 = local_2d0;
                    /* try { // try from 001ea249 to 001ea2ce has its CatchHandler @ 001eac3e */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
        auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_2d0._0_8_ = local_300;
        local_2d0._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
        local_2b8 = 
        _ZN60__LT_uu_mv__error__MvError_u20_as_u20_core__fmt__Display_GT_3fmt17h51bb9d950ecc6a52E;
        local_228 = (undefined **)&DAT_002880d0;
        uStack_220 = (code *)0x3;
        local_208 = 0;
        local_210 = (code *)0x2;
        local_2c0 = local_178;
        local_218 = (undefined **)local_2d0;
        local_300._0_16_ = auVar9;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_228);
                    /* try { // try from 001ea2cf to 001ea301 has its CatchHandler @ 001eac50 */
        _ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hb0f2c59e69cfedd9E(local_178);
      }
      else {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h1a38c79198e9333eE
                  (local_178);
        if (local_278 != (undefined **)0x0) {
          _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
                    (local_178,puVar7,uVar4);
                    /* try { // try from 001ea312 to 001ea329 has its CatchHandler @ 001eac1a */
          _ZN73__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__ToString_GT_9to_string17ha2cb0370e40ab073E
                    (&local_228,auStack_170._0_8_,auStack_170._8_8_);
          _ZN9indicatif12progress_bar11ProgressBar11set_message17h77492990969b1322E
                    (&local_278,&local_228);
                    /* try { // try from 001ea32a to 001ea363 has its CatchHandler @ 001eac50 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hee6ae0c580e79f89E
                    (local_178);
        }
        auVar9 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E(puVar7,uVar4);
        if (auVar9._0_8_ == 0) {
          local_228 = (undefined **)0x1;
          local_210 = (code *)CONCAT71(local_210._1_7_,1);
          uStack_220 = (code *)puVar7;
          local_218 = (undefined **)uVar4;
                    /* try { // try from 001ea52e to 001ea538 has its CatchHandler @ 001eac50 */
          _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                    (local_2d0,&local_228);
          local_160 = (code *)local_2c0;
          local_178 = (undefined  [8])0x0;
          auStack_170 = local_2d0;
                    /* try { // try from 001ea55e to 001ea5e3 has its CatchHandler @ 001eac08 */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
          auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_2d0._0_8_ = local_300;
          local_2d0._8_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
          local_2b8 = 
          _ZN60__LT_uu_mv__error__MvError_u20_as_u20_core__fmt__Display_GT_3fmt17h51bb9d950ecc6a52E;
          local_228 = (undefined **)&DAT_002880d0;
          uStack_220 = (code *)0x3;
          local_208 = 0;
          local_210 = (code *)0x2;
          local_2c0 = local_178;
          local_218 = (undefined **)local_2d0;
          local_300._0_16_ = auVar9;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_228);
                    /* try { // try from 001ea5e4 to 001ea5eb has its CatchHandler @ 001eac50 */
          _ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hb0f2c59e69cfedd9E(local_178);
        }
        else {
          _ZN3std4path4Path4join17h3b80008b40549e98E
                    (local_258,local_2e0,local_2d8,auVar9._0_8_,auVar9._8_8_);
                    /* try { // try from 001ea364 to 001ea44d has its CatchHandler @ 001eac2c */
          lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h5c44f985d977b358E
                            (local_88,local_258);
          if ((lVar6 == 0) || (cVar1 == '\x02')) {
                    /* try { // try from 001ea5f1 to 001ea659 has its CatchHandler @ 001eac2c */
            _ZN3std2fs12canonicalize17hde632c5d9c152691E(&local_240,puVar7,uVar4);
            if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) {
LAB_001ea61c:
              _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h57ad1af1f1c9aa26E
                        (&local_240);
            }
            else {
              local_c8 = local_240;
              uStack_c4 = uStack_23c;
              uStack_c0 = uStack_238;
              uStack_bc = uStack_234;
              local_b8 = local_230;
                    /* try { // try from 001ea6f7 to 001ea728 has its CatchHandler @ 001eabb9 */
              cVar2 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                                (CONCAT44(uStack_234,uStack_238),local_230,
                                 CONCAT44(uStack_18c,uStack_190),local_188);
              if (cVar2 != '\0') {
                local_98 = puVar7;
                local_90 = uVar4;
                _ZN6uucore8features2fs14normalize_path17hf9d1827f61a753a1E
                          (&local_290,local_2e0,local_2d8);
                local_40 = local_288;
                uStack_3c = uStack_284;
                uStack_38 = uStack_280;
                uStack_34 = uStack_27c;
                    /* try { // try from 001ea749 to 001ea77e has its CatchHandler @ 001eab8a */
                _ZN3std4path4Path10components17h4f3217acf0fc8653E
                          (local_178,CONCAT44(uStack_18c,uStack_190),local_188);
                local_228 = (undefined **)CONCAT71(local_228._1_7_,10);
                _ZN4core4iter6traits8iterator8Iterator4fold17h37e4f9fde7d2dd93E
                          (local_2d0,local_178,&local_228);
                _ZN4core6option15Option_LT_T_GT_11map_or_else17ha11fb6aa50fc66bfE
                          (local_300,local_2d0,local_2e0,local_2d8);
                local_178 = (undefined  [8])&local_98;
                auStack_170._0_8_ =
                     _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E
                ;
                auStack_170._8_8_ = &local_40;
                local_160 = 
                _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E
                ;
                local_150 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_228 = &PTR_s_cannot_move___00288130;
                uStack_220 = (code *)0x4;
                local_208 = 0;
                local_210 = (code *)0x3;
                local_218 = (undefined **)local_178;
                local_158 = local_300;
                    /* try { // try from 001ea80d to 001ea817 has its CatchHandler @ 001eab40 */
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE
                          (local_2d0,&local_228);
                    /* try { // try from 001ea818 to 001ea81f has its CatchHandler @ 001eab27 */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0a66651b389f0fd4E
                          (local_300);
                    /* try { // try from 001ea820 to 001ea829 has its CatchHandler @ 001eab22 */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E
                          (&local_290);
                auStack_170._8_8_ = local_2c0;
                local_160 = (code *)CONCAT44(local_160._4_4_,1);
                _local_178 = local_2d0;
                    /* try { // try from 001ea84f to 001ea856 has its CatchHandler @ 001eabb9 */
                puVar7 = (undefined *)
                         _ZN5alloc5boxed12Box_LT_T_GT_3new17hb29f62ded121125bE(local_178);
                local_300._8_8_ =
                     &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h388b54c2d67ab8c0E_00287f60
                ;
                local_300._0_8_ = puVar7;
                uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                                  (puVar7);
                    /* try { // try from 001ea870 to 001ea8fe has its CatchHandler @ 001eab76 */
                _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar3);
                auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                uStack_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
                local_218 = (undefined **)local_300;
                local_210 = 
                _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h7a0d8bad1d3a886cE
                ;
                local_178 = (undefined  [8])&DAT_002880d0;
                auStack_170._0_8_ = 3;
                local_158 = (undefined *)0x0;
                local_160 = (code *)0x2;
                local_228 = (undefined **)local_2d0;
                auStack_170._8_8_ = &local_228;
                local_2d0 = auVar9;
                _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_178);
                    /* try { // try from 001ea909 to 001ea90d has its CatchHandler @ 001eabb9 */
                _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17ha3c2118ebdfb1144E
                          (local_300._0_8_,local_300._8_8_);
                    /* try { // try from 001ea90e to 001ea91a has its CatchHandler @ 001eab61 */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(&local_c8)
                ;
                if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) {
                    /* try { // try from 001ea933 to 001ea93f has its CatchHandler @ 001eac2c */
                  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h57ad1af1f1c9aa26E
                            (&local_240);
                }
                goto LAB_001ea19c;
              }
                    /* try { // try from 001ea945 to 001ea951 has its CatchHandler @ 001eab61 */
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(&local_c8);
              if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) goto LAB_001ea61c;
            }
            pppuVar8 = (undefined8 ***)local_2e8;
            if ((undefined8 ***)local_2e8 != (undefined8 ***)0x0) {
              pppuVar8 = &local_2e8;
            }
            local_290 = (undefined **)
                        _ZN5uu_mv6rename17hfc95a4bd2fcddeecE
                                  (puVar7,uVar4,CONCAT44(uStack_24c,local_250),
                                   CONCAT44(uStack_244,uStack_248),local_298,pppuVar8);
            if (local_290 != (undefined **)0x0) {
                    /* try { // try from 001ea668 to 001ea68b has its CatchHandler @ 001eab9e */
              _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h23e5007a1b44b441E
                        (local_178,&local_290);
              if (auStack_170._8_8_ == 0) {
                    /* try { // try from 001ea96f to 001ea976 has its CatchHandler @ 001eab9e */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0a66651b389f0fd4E
                          (local_178);
                local_178 = (undefined  [8])local_290;
                    /* try { // try from 001ea984 to 001ea98e has its CatchHandler @ 001eaafb */
                _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
                    /* try { // try from 001ea98f to 001ea996 has its CatchHandler @ 001eab99 */
                _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hbb55e5b4020a58baE
                          (local_178);
              }
              else {
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0a66651b389f0fd4E
                          (local_178);
                    /* try { // try from 001ea691 to 001ea6b9 has its CatchHandler @ 001eab99 */
                puVar7 = (undefined *)
                         _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hc501c0ef7d3cfc3fE
                                   (local_290,lVar5,local_258);
                if ((undefined8 ***)local_2e8 == (undefined8 ***)0x0) {
                  local_300._0_8_ = puVar7;
                    /* try { // try from 001ea9a1 to 001eaa32 has its CatchHandler @ 001eab4f */
                  _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
                  auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                  uStack_220 = 
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
                  local_218 = (undefined **)local_300;
                  local_210 = 
                  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d9a93934d3f4680E
                  ;
                  local_178 = (undefined  [8])&DAT_002880d0;
                  auStack_170._0_8_ = 3;
                  local_158 = (undefined *)0x0;
                  local_160 = (code *)0x2;
                  local_228 = (undefined **)local_2d0;
                  auStack_170._8_8_ = &local_228;
                  local_2d0 = auVar9;
                  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_178);
                    /* try { // try from 001eaa38 to 001eaa3c has its CatchHandler @ 001eab99 */
                  _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17hd70df9f725f15388E
                            (local_300._0_8_);
                }
                else {
                  _ZN9indicatif5multi13MultiProgress7suspend17hfe9402cb2a1cce7fE(&local_2e8,puVar7);
                }
              }
            }
            if (local_278 != (undefined **)0x0) {
                    /* try { // try from 001eaa48 to 001eaa9a has its CatchHandler @ 001eac2c */
              _ZN9indicatif12progress_bar11ProgressBar3inc17he12f7743cfc9ae04E(&local_278,1);
            }
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h1e71081e8e91d8e8E
                      (local_178,local_258);
            local_218 = (undefined **)auStack_170._8_8_;
            local_228 = (undefined **)local_178;
            uStack_220 = (code *)auStack_170._0_8_;
            _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h663343a02dd1e8c9E
                      (local_88,&local_228);
                    /* try { // try from 001eaa9b to 001eaaa7 has its CatchHandler @ 001eac50 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(local_258);
          }
          else {
            local_228 = (undefined **)local_300;
            uStack_220 = 
            _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
            local_210 = 
            _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
            local_178 = (undefined  [8])&PTR_s_will_not_overwrite_just_created___00288100;
            auStack_170._0_8_ = 3;
            local_158 = (undefined *)0x0;
            local_160 = (code *)0x2;
            local_2d0._0_8_ = puVar7;
            local_2d0._8_8_ = uVar4;
            local_218 = (undefined **)local_2d0;
            auStack_170._8_8_ = &local_228;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE(local_58,local_178);
            local_160 = (code *)CONCAT44(local_160._4_4_,1);
            auStack_170._8_8_ = local_48;
            local_300._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb29f62ded121125bE(local_178);
            local_300._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h388b54c2d67ab8c0E_00287f60
            ;
            uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                              (local_300._0_8_);
                    /* try { // try from 001ea467 to 001ea4f5 has its CatchHandler @ 001eabf4 */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar3);
            local_2d0 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            uStack_220 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
            local_218 = (undefined **)local_300;
            local_210 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h7a0d8bad1d3a886cE
            ;
            local_178 = (undefined  [8])&DAT_002880d0;
            auStack_170._0_8_ = 3;
            local_158 = (undefined *)0x0;
            local_160 = (code *)0x2;
            local_228 = (undefined **)local_2d0;
            auStack_170._8_8_ = &local_228;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_178);
                    /* try { // try from 001ea500 to 001ea504 has its CatchHandler @ 001eac2c */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17ha3c2118ebdfb1144E
                      (local_300._0_8_,local_300._8_8_);
LAB_001ea19c:
                    /* try { // try from 001ea19c to 001ea223 has its CatchHandler @ 001eac50 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(local_258);
          }
        }
      }
      lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h68171754d1dad8d6E
                        (&local_a8);
    } while (lVar5 != 0);
  }
                    /* try { // try from 001eaaad to 001eaab9 has its CatchHandler @ 001eab66 */
  _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h4962931619fca08bE
            (&local_278);
                    /* try { // try from 001eaaba to 001eaac3 has its CatchHandler @ 001eab6e */
  _ZN4core3ptr80drop_in_place_LT_core__option__Option_LT_indicatif__multi__MultiProgress_GT__GT_17ha439cdb5b0953c56E
            (&local_2e8);
                    /* try { // try from 001eaac4 to 001eaad0 has its CatchHandler @ 001eabec */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(&local_198);
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h3a17ce3d5c845dcbE
            (local_88);
  uVar4 = 0;
LAB_001eaae0:
  auVar9._8_8_ = &
                 PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hb0f2c59e69cfedd9E_00287eb8
  ;
  auVar9._0_8_ = uVar4;
  return auVar9;
}