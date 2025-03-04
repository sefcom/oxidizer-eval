undefined  [16]
_ZN6uu_tac3tac17h3cfa8e66554e074dE
          (long param_1,long param_2,uint param_3,int param_4,undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined local_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_1b4;
  undefined local_1b0 [16];
  undefined8 local_1a0;
  undefined **local_198;
  undefined local_190 [16];
  undefined8 local_180;
  undefined **local_178 [2];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 *local_138;
  code *pcStack_130;
  undefined8 **local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_60 = param_5;
  if (param_4 == 0) {
    local_88 = (undefined8 *)0x0;
  }
  else {
    _ZN5regex5regex5bytes5Regex3new17h0f09d91ae51aad3eE(&local_210,param_5,param_6);
    if (local_210 == (undefined8 *)0x0) {
      local_120 = (undefined **)uStack_1f8;
      local_138 = (undefined8 *)0x8000000000000000;
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
      goto LAB_002a0774;
    }
    local_78 = (undefined4)local_200;
    uStack_74 = local_200._4_4_;
    uStack_70 = (undefined4)uStack_1f8;
    uStack_6c = uStack_1f8._4_4_;
    local_88 = local_210;
    uStack_80 = (undefined4)uStack_208;
    uStack_7c = uStack_208._4_4_;
  }
  local_50 = param_2 * 0x10 + param_1;
  local_140 = param_6;
  local_58 = param_1;
  puVar5 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7ad9d1140a17634cE
                     (&local_58);
  if (puVar5 != (undefined8 *)0x0) {
    local_1b4 = param_3 & 0xff;
    do {
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
                    /* try { // try from 0029ffc4 to 002a0079 has its CatchHandler @ 002a08b0 */
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2c09e257dce780d1E
                        (uVar7,uVar1,"-",1);
      if (cVar4 == '\0') {
        cVar4 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(uVar7,uVar1);
        if (cVar4 == '\0') {
          _ZN3std2fs8metadata17haf90637f419ddc57E(&local_138,uVar7,uVar1);
          if (local_138 == (undefined8 *)0x2) {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h896ad78236a10e00E
                      (2,pcStack_130);
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h3d9e818b85d2e5c6E
                      (&local_210,uVar7,uVar1);
            local_120 = (undefined **)local_200;
            pcStack_130 = (code *)local_210;
            local_128 = (undefined8 **)uStack_208;
            local_138 = (undefined8 *)0x8000000000000002;
            local_1f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
            uStack_1e8 = &
                         PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17h3e6e4f67c1f4bd6fE_003c8b70
            ;
                    /* try { // try from 002a01b3 to 002a023d has its CatchHandler @ 002a083e */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
            auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_210 = (undefined8 *)local_1d8;
            uStack_208 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9ea929f45edcb0d0E;
            uStack_1f8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4f1ed2bd277e0642E
            ;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_200 = &local_1f0;
            _local_1d8 = auVar10;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
                    /* try { // try from 002a0248 to 002a024c has its CatchHandler @ 002a08b0 */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h5aa08d1e1bf905c3E
                      (local_1f0,uStack_1e8);
          }
          else {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h896ad78236a10e00E
                      (local_138,pcStack_130);
            _ZN6uu_tac13try_mmap_path17h01ee297263e394e5E(local_190,uVar7,uVar1);
            ppuVar8 = (undefined **)local_190._8_8_;
            uVar9 = local_180;
            if (local_190._0_8_ != 0) goto LAB_0029fff9;
                    /* try { // try from 002a049e to 002a04ab has its CatchHandler @ 002a07a9 */
            _ZN3std2fs4read17hfdbc770825310844E(&local_1f0,uVar7,uVar1);
            uVar9 = local_1e0;
            ppuVar8 = uStack_1e8;
            if (local_1f0 != -0x8000000000000000) {
              local_168 = (undefined4)local_1f0;
              uStack_164 = local_1f0._4_4_;
              uStack_160 = (undefined4)uStack_1e8;
              uStack_15c = uStack_1e8._4_4_;
              local_158 = local_1e0;
              if (local_190._0_8_ != 0) {
                    /* try { // try from 002a06b1 to 002a06bd has its CatchHandler @ 002a0807 */
                _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h9c73bf5007d11635E(local_190 + 8);
              }
              goto LAB_002a041a;
            }
            local_148 = uStack_1e8;
            local_210 = (undefined8 *)0x0;
            uStack_1f8 = (code *)CONCAT71(uStack_1f8._1_7_,1);
            uStack_1d0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_138 = (undefined8 *)&DAT_001636b0;
            pcStack_130 = (code *)0x1;
            local_118 = 0;
            local_120 = (undefined **)0x1;
                    /* try { // try from 002a053f to 002a054b has its CatchHandler @ 002a07a4 */
            uStack_208 = (code *)uVar7;
            local_200 = (undefined8 *)uVar1;
            local_1d8 = (undefined  [8])&local_210;
            local_128 = (undefined8 **)local_1d8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h375669e800639459E(&local_48,&local_138);
            local_1d8._4_4_ = uStack_44;
            local_1d8._0_4_ = local_48;
            uStack_1d0 = (code *)CONCAT44(uStack_3c,uStack_40);
            local_1c8 = local_38;
                    /* try { // try from 002a0569 to 002a05af has its CatchHandler @ 002a07ae */
            _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                      (&local_210,local_1d8);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = local_148;
            local_1a0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
            local_198 = &
                        PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17h3e6e4f67c1f4bd6fE_003c8b70
            ;
                    /* try { // try from 002a05bd to 002a064c has its CatchHandler @ 002a07b3 */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
            auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_210 = (undefined8 *)local_1b0;
            uStack_208 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9ea929f45edcb0d0E;
            local_200 = &local_1a0;
            uStack_1f8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4f1ed2bd277e0642E
            ;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_1b0 = auVar10;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
                    /* try { // try from 002a065c to 002a0660 has its CatchHandler @ 002a07ae */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h5aa08d1e1bf905c3E
                      (local_1a0,local_198);
                    /* try { // try from 002a0661 to 002a066a has its CatchHandler @ 002a07a2 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2febd99232a4a33fE(local_1d8);
                    /* try { // try from 002a066b to 002a0677 has its CatchHandler @ 002a08b0 */
            _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_memmap2__Mmap_GT__GT_17hce1e60b57f82e2deE
                      (local_190);
          }
        }
        else {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h3d9e818b85d2e5c6E
                    (&local_210,uVar7,uVar1);
          local_120 = (undefined **)local_200;
          pcStack_130 = (code *)local_210;
          local_128 = (undefined8 **)uStack_208;
          local_138 = (undefined8 *)0x8000000000000001;
          local_1f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
          uStack_1e8 = &
                       PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17h3e6e4f67c1f4bd6fE_003c8b70
          ;
                    /* try { // try from 002a0084 to 002a010e has its CatchHandler @ 002a089c */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
          auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_210 = (undefined8 *)local_1d8;
          uStack_208 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9ea929f45edcb0d0E;
          uStack_1f8 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4f1ed2bd277e0642E
          ;
          local_138 = (undefined8 *)&DAT_003c8b08;
          pcStack_130 = (code *)0x3;
          local_118 = 0;
          local_128 = &local_210;
          local_120 = (undefined **)0x2;
          local_200 = &local_1f0;
          _local_1d8 = auVar10;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
                    /* try { // try from 002a0119 to 002a01a8 has its CatchHandler @ 002a08b0 */
          _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h5aa08d1e1bf905c3E
                    (local_1f0,uStack_1e8);
        }
      }
      else {
        _ZN6uu_tac14try_mmap_stdin17hfe59da374b4e6932E(&local_1f0);
        ppuVar8 = uStack_1e8;
        uVar9 = local_1e0;
        if (local_1f0 == 0) {
          local_1d8 = (undefined  [8])0x0;
          uStack_1d0 = (code *)0x1;
          local_1c8 = 0;
                    /* try { // try from 002a026d to 002a0287 has its CatchHandler @ 002a0852 */
          local_1a0 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
          auVar10 = _ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_11read_to_end17hc18c61afec27b79cE
                              (&local_1a0,local_1d8);
          if (auVar10._0_8_ == 1) {
                    /* try { // try from 002a029a to 002a02ad has its CatchHandler @ 002a0814 */
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h3d9e818b85d2e5c6E
                      (&local_210,"stdin: \n",5);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = (undefined **)auVar10._8_8_;
                    /* try { // try from 002a02d0 to 002a02d7 has its CatchHandler @ 002a0821 */
            uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
            local_1b0._8_8_ =
                 &
                 PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17h3e6e4f67c1f4bd6fE_003c8b70
            ;
            local_1b0._0_8_ = uVar7;
                    /* try { // try from 002a02e2 to 002a0375 has its CatchHandler @ 002a0823 */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
            auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_210 = (undefined8 *)local_190;
            uStack_208 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9ea929f45edcb0d0E;
            local_200 = (undefined8 *)local_1b0;
            uStack_1f8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4f1ed2bd277e0642E
            ;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_120 = (undefined **)0x2;
            local_128 = &local_210;
            local_190 = auVar10;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_138);
                    /* try { // try from 002a0380 to 002a0384 has its CatchHandler @ 002a0821 */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h5aa08d1e1bf905c3E
                      (local_1b0._0_8_,local_1b0._8_8_);
                    /* try { // try from 002a0385 to 002a038e has its CatchHandler @ 002a080f */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h6e91106de20a5c98E
                      (local_1d8);
                    /* try { // try from 002a038f to 002a03b3 has its CatchHandler @ 002a08b0 */
            _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_memmap2__Mmap_GT__GT_17hce1e60b57f82e2deE
                      (&local_1f0);
            goto LAB_0029ffa7;
          }
                    /* try { // try from 002a03d8 to 002a03e2 has its CatchHandler @ 002a0852 */
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h44dea3211d38b6c1E
                    (auVar10._0_8_,auVar10._8_8_);
          uVar9 = local_1c8;
          ppuVar8 = (undefined **)uStack_1d0;
          auVar10._8_8_ = uStack_1d0;
          auVar10._0_8_ = local_1d8;
          local_168 = local_1d8._0_4_;
          uStack_164 = local_1d8._4_4_;
          uStack_160 = (undefined4)uStack_1d0;
          uStack_15c = uStack_1d0._4_4_;
          local_158 = local_1c8;
          _local_1d8 = auVar10;
          if (local_1f0 != 0) {
                    /* try { // try from 002a0410 to 002a0419 has its CatchHandler @ 002a0807 */
            _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h9c73bf5007d11635E(&uStack_1e8);
          }
LAB_002a041a:
          bVar2 = true;
          bVar3 = false;
        }
        else {
LAB_0029fff9:
          bVar3 = true;
          bVar2 = false;
          local_178[0] = ppuVar8;
        }
        if (local_88 == (undefined8 *)0x0) {
          lVar6 = _ZN6uu_tac10buffer_tac17h5d70b4a3a838e71bE
                            (ppuVar8,uVar9,local_1b4,local_60,local_140);
        }
        else {
                    /* try { // try from 002a0432 to 002a0462 has its CatchHandler @ 002a0873 */
          lVar6 = _ZN6uu_tac16buffer_tac_regex17ha3032000df62e130E
                            (ppuVar8,uVar9,local_88,CONCAT44(uStack_7c,uStack_80),local_1b4);
        }
        if (lVar6 != 0) {
          local_138 = (undefined8 *)0x8000000000000004;
                    /* try { // try from 002a0733 to 002a073f has its CatchHandler @ 002a079d */
          pcStack_130 = (code *)lVar6;
          uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d1d49c9faffb5d7E(&local_138);
          if (bVar2) {
                    /* try { // try from 002a0748 to 002a0754 has its CatchHandler @ 002a0795 */
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h6e91106de20a5c98E
                      (&local_168);
          }
          if (bVar3) {
                    /* try { // try from 002a075a to 002a0766 has its CatchHandler @ 002a0790 */
            _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h9c73bf5007d11635E(local_178);
          }
          _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_regex__regex__bytes__Regex_GT__GT_17h8038a3a4482dc4a5E
                    (&local_88);
          goto LAB_002a0774;
        }
        if (bVar2) {
                    /* try { // try from 002a0471 to 002a047d has its CatchHandler @ 002a0839 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h6e91106de20a5c98E
                    (&local_168);
        }
        if (bVar3) {
                    /* try { // try from 002a048c to 002a0498 has its CatchHandler @ 002a0837 */
          _ZN4core3ptr34drop_in_place_LT_memmap2__Mmap_GT_17h9c73bf5007d11635E(local_178);
        }
      }
LAB_0029ffa7:
      puVar5 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7ad9d1140a17634cE
                         (&local_58);
    } while (puVar5 != (undefined8 *)0x0);
  }
  _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_regex__regex__bytes__Regex_GT__GT_17h8038a3a4482dc4a5E
            (&local_88);
  uVar7 = 0;
LAB_002a0774:
  auVar11._8_8_ =
       &PTR__ZN4core3ptr44drop_in_place_LT_uu_tac__error__TacError_GT_17h3e6e4f67c1f4bd6fE_003c8b70;
  auVar11._0_8_ = uVar7;
  return auVar11;
}