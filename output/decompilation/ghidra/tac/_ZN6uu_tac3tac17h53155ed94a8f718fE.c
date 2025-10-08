undefined  [16]
_ZN6uu_tac3tac17h53155ed94a8f718fE
          (undefined8 *param_1,long param_2,undefined4 param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined auVar5 [8];
  code *pcVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined auVar13 [16];
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  code *pcStack_1a0;
  undefined local_198 [16];
  undefined *local_188;
  undefined local_180 [8];
  undefined **ppuStack_178;
  undefined *local_170;
  undefined4 local_164;
  long local_160;
  undefined **local_158;
  long local_150;
  undefined **local_148;
  long local_140;
  undefined **local_138;
  undefined *local_130;
  undefined **local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined **ppuStack_100;
  code *local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_164 = param_3;
  if (param_4 == 0) {
    local_58 = (undefined8 *)0x0;
    ppuVar4 = ppuStack_178;
    auVar5 = local_180;
    uVar11 = local_198._8_8_;
    lVar9 = local_198._0_8_;
  }
  else {
    (*(code *)PTR__ZN5regex5regex5bytes5Regex3new17h4d38d31a13e212fdE_003620f8)
              (&local_1b8,param_5,param_6);
    local_58 = local_1b8;
    uStack_4c = uStack_1b0._4_4_;
    uStack_50 = (undefined4)uStack_1b0;
    ppuVar4 = ppuStack_178;
    auVar5 = local_180;
    uVar11 = local_198._8_8_;
    lVar9 = local_198._0_8_;
    if (local_1b8 == (undefined8 *)0x0) {
      local_f0 = (undefined **)pcStack_1a0;
      local_108 = (undefined8 *)0x8000000000000000;
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
      goto LAB_00213123;
    }
  }
  local_118 = param_5;
  local_110 = param_6;
  if (param_2 != 0) {
    ppuStack_178 = ppuVar4;
    local_180 = auVar5;
    local_198._8_8_ = uVar11;
    local_198._0_8_ = lVar9;
    puVar12 = param_1 + param_2 * 2;
    puVar10 = param_1 + 2;
    do {
      while( true ) {
        puVar8 = puVar10;
        uVar11 = *param_1;
        uVar1 = param_1[1];
        cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hab8282a0c369e8dbE
                          (uVar11,uVar1);
        param_1 = puVar8;
        if (cVar7 != '\0') break;
                    /* try { // try from 00212be0 to 00212c36 has its CatchHandler @ 002132c7 */
        cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00362118)(uVar11,uVar1);
        if (cVar7 == '\0') {
          _ZN3std2fs8metadata17h977e770cf0475bd2E(&local_108,uVar11,uVar1);
          if (local_108 == (undefined8 *)0x2) {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h87d9e5201f238624E
                      (2,ppuStack_100);
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hebdd75b9ead1e834E
                      (&local_1b8,uVar11,uVar1);
            local_f0 = (undefined **)local_1a8;
            ppuStack_100 = (undefined **)local_1b8;
            local_f8 = uStack_1b0;
            local_108 = (undefined8 *)0x8000000000000002;
            lVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
            local_198._8_8_ =
                 &
                 PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17hb000e5233d7257aeE_00333b90
            ;
            local_198._0_8_ = lVar9;
                    /* try { // try from 00212d77 to 00212e03 has its CatchHandler @ 00213265 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00362110)(1);
            auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00361ee0)();
            local_1b8 = (undefined8 *)local_180;
            uStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hec198cae7a81ca5eE;
            local_1a8 = (long *)local_198;
            pcStack_1a0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hae86aa71df6110f8E
            ;
            local_108 = (undefined8 *)&DAT_00333b40;
            ppuStack_100 = (undefined **)0x3;
            local_e8 = 0;
            local_f0 = (undefined **)0x2;
            local_f8 = (code *)&local_1b8;
            _local_180 = auVar13;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00361ee8)(&local_108);
                    /* try { // try from 00212e0e to 00212e50 has its CatchHandler @ 002132c7 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1e65bce94a748903E
                      (local_198._0_8_,local_198._8_8_);
          }
          else {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h87d9e5201f238624E
                      (local_108,ppuStack_100);
            _ZN6uu_tac13try_mmap_path17h5a76dff90b159c96E(&local_108,uVar11,uVar1);
            if ((int)local_108 == 1) goto LAB_00213003;
            _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_memmap2__Mmap_GT__GT_17h2c73f4b2e023142dE
                      (&local_108);
            _ZN3std2fs4read17h7a6d15f52b675d8cE(&local_140,uVar11,uVar1);
            ppuVar4 = local_138;
            if (local_140 != -0x8000000000000000) {
              bVar2 = true;
              bVar3 = false;
              local_160 = local_140;
              local_158 = local_138;
              pcVar6 = (code *)local_130;
              goto joined_r0x0021306c;
            }
            local_1b8 = (undefined8 *)0x0;
            pcStack_1a0 = (code *)CONCAT71(pcStack_1a0._1_7_,1);
            local_198._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00362120
            ;
            local_108 = (undefined8 *)&DAT_00151860;
            ppuStack_100 = (undefined **)0x1;
            local_e8 = 0;
            local_f0 = (undefined **)0x1;
                    /* try { // try from 00212edc to 00212ee8 has its CatchHandler @ 00213232 */
            uStack_1b0 = (code *)uVar11;
            local_1a8 = (long *)uVar1;
            local_198._0_8_ = &local_1b8;
            local_f8 = (code *)local_198;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hdb7bb3d97b3e4765E(local_180,&local_108);
            local_188 = local_170;
            local_198 = _local_180;
                    /* try { // try from 00212efd to 00212f08 has its CatchHandler @ 00213223 */
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00362128
            )(&local_1b8,local_198);
            local_f8 = (code *)local_1a8;
            local_108 = local_1b8;
            ppuStack_100 = (undefined **)uStack_1b0;
            local_f0 = ppuVar4;
                    /* try { // try from 00212f2a to 00212f31 has its CatchHandler @ 00213242 */
            local_150 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
            local_148 = &
                        PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17hb000e5233d7257aeE_00333b90
            ;
                    /* try { // try from 00212f43 to 00212fcc has its CatchHandler @ 00213247 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00362110)(1);
            auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00361ee0)();
            local_1b8 = (undefined8 *)local_180;
            uStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hec198cae7a81ca5eE;
            local_1a8 = &local_150;
            pcStack_1a0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hae86aa71df6110f8E
            ;
            local_108 = (undefined8 *)&DAT_00333b40;
            ppuStack_100 = (undefined **)0x3;
            local_e8 = 0;
            local_f0 = (undefined **)0x2;
            local_f8 = (code *)&local_1b8;
            _local_180 = auVar13;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00361ee8)(&local_108);
                    /* try { // try from 00212fd7 to 00212fdb has its CatchHandler @ 00213242 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1e65bce94a748903E
                      (local_150,local_148);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h249ab6a2cb081814E(local_198);
          }
        }
        else {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hebdd75b9ead1e834E
                    (&local_1b8,uVar11,uVar1);
          local_f0 = (undefined **)local_1a8;
          ppuStack_100 = (undefined **)local_1b8;
          local_f8 = uStack_1b0;
          local_108 = (undefined8 *)0x8000000000000001;
          lVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
          local_198._8_8_ =
               &
               PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17hb000e5233d7257aeE_00333b90
          ;
          local_198._0_8_ = lVar9;
                    /* try { // try from 00212c48 to 00212cd4 has its CatchHandler @ 00213286 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00362110)(1);
          auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00361ee0)();
          local_1b8 = (undefined8 *)local_180;
          uStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hec198cae7a81ca5eE;
          local_1a8 = (long *)local_198;
          pcStack_1a0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hae86aa71df6110f8E
          ;
          local_108 = (undefined8 *)&DAT_00333b40;
          ppuStack_100 = (undefined **)0x3;
          local_e8 = 0;
          local_f0 = (undefined **)0x2;
          local_f8 = (code *)&local_1b8;
          _local_180 = auVar13;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00361ee8)(&local_108);
                    /* try { // try from 00212cdf to 00212d65 has its CatchHandler @ 002132c7 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1e65bce94a748903E
                    (local_198._0_8_,local_198._8_8_);
        }
        puVar10 = puVar8 + 2;
joined_r0x0021310e:
        if (puVar8 == puVar12) goto LAB_00213114;
      }
                    /* try { // try from 00212a6f to 00212a8c has its CatchHandler @ 002132c7 */
      _ZN6uu_tac14try_mmap_stdin17h0be38b2086ba8d6aE(&local_108);
      if ((int)local_108 == 1) {
LAB_00213003:
        bVar3 = true;
        bVar2 = false;
        ppuVar4 = ppuStack_100;
        pcVar6 = local_f8;
        local_128 = ppuStack_100;
        local_120 = local_f8;
joined_r0x0021306c:
        if (local_58 == (undefined8 *)0x0) {
          lVar9 = _ZN6uu_tac10buffer_tac17hf0c4fec0ee1a5c50E
                            (ppuVar4,pcVar6,(undefined)local_164,local_118,local_110);
        }
        else {
                    /* try { // try from 00213076 to 002130d6 has its CatchHandler @ 002131f1 */
          lVar9 = _ZN6uu_tac16buffer_tac_regex17hd38e8f998c56a138E
                            (ppuVar4,pcVar6,local_58,CONCAT44(uStack_4c,uStack_50),
                             (undefined)local_164);
        }
        if (lVar9 == 0) {
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17ha68f9a356af3219dE
                    (0);
          if (bVar2) {
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h2c72cf2befd5329dE
                      (local_160,local_158);
          }
          if (bVar3) {
                    /* try { // try from 002130f0 to 002130fc has its CatchHandler @ 002131ec */
            _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h0d402d1e5054a59dE(&local_128);
          }
          puVar10 = puVar8 + (ulong)(puVar8 != puVar12) * 2;
          goto joined_r0x0021310e;
        }
        local_108 = (undefined8 *)0x8000000000000004;
                    /* try { // try from 00213195 to 002131a1 has its CatchHandler @ 002131e5 */
        ppuStack_100 = (undefined **)lVar9;
        uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
        if (bVar2) {
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h2c72cf2befd5329dE
                    (local_160,local_158);
        }
        if (bVar3) {
                    /* try { // try from 002131be to 002131ca has its CatchHandler @ 002131e0 */
          _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h0d402d1e5054a59dE(&local_128);
        }
        _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_regex__regex__bytes__Regex_GT__GT_17h079d4eb58debb0ffE
                  (&local_58);
        goto LAB_00213123;
      }
      _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_memmap2__Mmap_GT__GT_17h2c73f4b2e023142dE
                (&local_108);
      local_180 = (undefined  [8])0x0;
      ppuStack_178 = (undefined **)0x1;
      local_170 = (undefined *)0x0;
                    /* try { // try from 00212aa8 to 00212ac2 has its CatchHandler @ 0021329c */
      local_150 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00362100)();
      auVar13 = (*(code *)
                  PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_11read_to_end17h3553e0b49d623411E_00362108
                )(&local_150,local_180);
      if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 00213038 to 00213042 has its CatchHandler @ 002131e7 */
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd261040404132a2bE
                  (auVar13._0_8_,auVar13._8_8_);
        bVar2 = true;
        bVar3 = false;
        local_160 = (long)local_180;
        local_158 = ppuStack_178;
        ppuVar4 = ppuStack_178;
        pcVar6 = (code *)local_170;
        goto joined_r0x0021306c;
      }
                    /* try { // try from 00212ad1 to 00212ae4 has its CatchHandler @ 00213279 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hebdd75b9ead1e834E
                (&local_1b8,"stdin: \n",5);
      local_f8 = (code *)local_1a8;
      local_108 = local_1b8;
      ppuStack_100 = (undefined **)uStack_1b0;
      local_f0 = (undefined **)auVar13._8_8_;
                    /* try { // try from 00212b06 to 00212b0d has its CatchHandler @ 0021329a */
      local_140 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha672082e776b9639E(&local_108);
      local_138 = &
                  PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17hb000e5233d7257aeE_00333b90
      ;
                    /* try { // try from 00212b22 to 00212bab has its CatchHandler @ 002132a1 */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00362110)(1);
      auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00361ee0)();
      local_1b8 = (undefined8 *)local_198;
      uStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hec198cae7a81ca5eE;
      local_1a8 = &local_140;
      pcStack_1a0 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hae86aa71df6110f8E
      ;
      local_108 = (undefined8 *)&DAT_00333b40;
      ppuStack_100 = (undefined **)0x3;
      local_e8 = 0;
      local_f0 = (undefined **)0x2;
      local_f8 = (code *)&local_1b8;
      local_198 = auVar13;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00361ee8)(&local_108);
                    /* try { // try from 00212bb9 to 00212bbd has its CatchHandler @ 0021329a */
      _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1e65bce94a748903E
                (local_140,local_138);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h2c72cf2befd5329dE
                (local_180,ppuStack_178);
      puVar10 = puVar8 + 2;
    } while (puVar8 != puVar12);
  }
LAB_00213114:
  _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_regex__regex__bytes__Regex_GT__GT_17h079d4eb58debb0ffE
            (&local_58);
  uVar11 = 0;
LAB_00213123:
  auVar13._8_8_ =
       &PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17hb000e5233d7257aeE_00333b90;
  auVar13._0_8_ = uVar11;
  return auVar13;
}