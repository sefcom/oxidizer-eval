undefined  [16] _ZN10uu_install8standard17h1ae3025b0f01e4c2E(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 ***local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 ***pppuStack_218;
  undefined8 ***local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 ***local_1f0;
  undefined8 local_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 ***local_1c8;
  undefined local_1c0;
  undefined local_1b0 [16];
  undefined local_1a0 [8];
  long local_198;
  ulong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  undefined8 ***local_158;
  undefined8 uStack_150;
  long local_d8;
  undefined8 ***local_d0;
  undefined *local_c8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  char local_68 [56];
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
              (&local_220,"missing file operand",0x14);
    uStack_178 = (undefined8 ****)local_210;
    local_188 = (undefined8 ****)local_220;
    uStack_180 = (undefined8 ****)pppuStack_218;
    pppuStack_170 = (undefined8 ***)CONCAT44(pppuStack_170._4_4_,1);
    uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hae126c8da24cfb03E(&local_188);
    auVar16._8_8_ =
         &
         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h963a91366d76c3d6E_00202388
    ;
    auVar16._0_8_ = uVar10;
    goto LAB_00167f1b;
  }
  bVar1 = *(byte *)(param_2 + 0x66);
  if ((bVar1 & 2 < uVar2) == 0) {
    lVar12 = *(long *)(param_2 + 0x30);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
              (&local_188,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    local_238 = uStack_178;
    local_248 = (undefined4)local_188;
    uStack_244 = local_188._4_4_;
    uStack_240 = (undefined4)uStack_180;
    uStack_23c = uStack_180._4_4_;
                    /* try { // try from 001677c0 to 001677cc has its CatchHandler @ 00168016 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h325c3cb57b76267aE
              (local_1a0,*(long *)(param_1 + 8),*(long *)(param_1 + 8) + uVar2 * 0x18);
    pppuVar7 = local_238;
    auVar4._8_8_ = local_1b0._8_8_;
    auVar4._0_8_ = local_1b0._0_8_;
    if (*(char *)(param_2 + 0x65) != '\0') {
      if (lVar12 == -0x8000000000000000) {
        local_1b0 = auVar4;
        if (local_190 < 2) {
          uVar10 = CONCAT44(uStack_23c,uStack_240);
                    /* try { // try from 001677f6 to 00167844 has its CatchHandler @ 00168054 */
          cVar9 = _ZN10uu_install27is_potential_directory_path17h7ceb262fd8e27effE(uVar10,local_238)
          ;
          if (cVar9 == '\0') {
            auVar14 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00209c18)
                                (uVar10,pppuVar7);
            if (auVar14._0_8_ != 0) goto LAB_0016782d;
          }
        }
        goto LAB_00167c5f;
      }
      auVar14._4_4_ = uStack_23c;
      auVar14._0_4_ = uStack_240;
      auVar14._8_8_ = local_238;
LAB_0016782d:
      local_230 = auVar14._8_8_;
      local_228 = auVar14._0_8_;
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00209c28)
                (&local_188);
      ppppuVar8 = uStack_178;
      ppppuVar11 = uStack_180;
      local_220 = (undefined **)((ulong)local_220._4_4_ << 0x20);
      local_d8 = lVar12;
      uVar10 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2f,&local_220);
                    /* try { // try from 00167874 to 00167881 has its CatchHandler @ 00168004 */
      cVar9 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h2c8134897838899fE
                        (ppppuVar11,ppppuVar8,uVar10);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hee1da1bf1377c72aE
                (&local_188);
      lVar12 = local_d8;
      auVar15._8_8_ = local_230;
      auVar15._0_8_ = local_228;
      if (cVar9 != '\0') {
                    /* try { // try from 001678b2 to 00167921 has its CatchHandler @ 00168054 */
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002098c0)
                  (&local_188,local_228,local_230);
        if (((ulong)local_188 & 1) != 0) {
          ppuVar13 = &PTR_s_src_uu_install_src_install_rs_00202420;
          goto LAB_00167fae;
        }
        auVar15 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hdbf734c8efac5f42E
                            (uStack_180,uStack_178);
      }
      local_1b0 = auVar15;
      _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_188,auVar15._0_8_);
      ppppuVar11 = local_188;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
                (&local_188);
      if ((int)ppppuVar11 == 2) {
        if (*(char *)(param_2 + 0x61) != '\0') {
          local_1f0 = (undefined8 ****)0x0;
          local_1e8 = 1;
          pppuStack_1e0 = (undefined8 ****)0x0;
                    /* try { // try from 00167957 to 00167974 has its CatchHandler @ 00167fe8 */
          (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00209af8)
                    (&local_a8,local_1b0._0_8_,local_1b0._8_8_);
          puVar6 = 
          PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h73ed8dd6f02f5cb4E_00209c30
          ;
          puVar5 = PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20;
          local_158 = local_78;
          uStack_150 = uStack_70;
          local_168 = local_88;
          pppuStack_160 = pppuStack_80;
          uStack_178 = (undefined8 ****)local_98;
          pppuStack_170 = pppuStack_90;
          local_188 = (undefined8 ****)CONCAT44(uStack_a4,local_a8);
          uStack_180 = (undefined8 ****)CONCAT44(uStack_9c,uStack_a0);
          while( true ) {
                    /* try { // try from 001679e0 to 00167a9a has its CatchHandler @ 0016803b */
            (*(code *)puVar6)(local_68,&local_188);
            if (local_68[0] == '\n') break;
            uVar10 = _ZN3std4path9Component9as_os_str17hf9025a90ab753f63E(local_68);
            _ZN3std4path7PathBuf4push17h2d55bb206594316eE(&local_1f0,uVar10);
            cVar9 = (*(code *)puVar5)(local_1e8,pppuStack_1e0);
            if (cVar9 == '\0') {
              local_1d8 = (undefined8 ***)&DAT_00000001;
              uStack_1d0 = (undefined4)local_1e8;
              uStack_1cc = local_1e8._4_4_;
              local_1c8 = pppuStack_1e0;
              local_1c0 = 1;
              local_d0 = &local_1d8;
              local_c8 = 
              PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
              ;
              local_220 = &PTR_s_install__creating_directory_00202348;
              pppuStack_218 = (undefined8 ****)0x2;
              local_200 = 0;
              local_210 = &local_d0;
              local_208 = 1;
              (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_220);
            }
          }
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_1f0);
          lVar12 = local_d8;
        }
                    /* try { // try from 00167bc7 to 00167bdb has its CatchHandler @ 00168054 */
        ppppuVar11 = (undefined8 ****)
                     _ZN3std2fs14create_dir_all17hd557ad1207496242E(local_1b0._0_8_,local_1b0._8_8_)
        ;
        local_1f0 = ppppuVar11;
        if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* try { // try from 00167c4c to 00167e74 has its CatchHandler @ 00168054 */
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb3cb1d78c02156cfE
                    (&local_1f0);
          goto LAB_00167c56;
        }
                    /* try { // try from 00167bf1 to 00167c0b has its CatchHandler @ 00167fec */
        local_1d8 = ppppuVar11;
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
                  (&local_220,local_1b0._0_8_,local_1b0._8_8_);
        local_168 = local_210;
        uStack_178 = (undefined8 ****)local_220;
        pppuStack_170 = pppuStack_218;
        local_188 = (undefined8 ****)0x2;
                    /* try { // try from 00167c3a to 00167c46 has its CatchHandler @ 00167fea */
        uStack_180 = ppppuVar11;
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
      }
      else {
LAB_00167c56:
        if (lVar12 == -0x8000000000000000) goto LAB_00167c5f;
        _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_188,local_228,local_230);
        ppppuVar11 = local_188;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
                  (&local_188);
        if ((int)ppppuVar11 != 2) {
          cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)
                            (local_228,local_230);
          if (cVar9 != '\0') goto LAB_00167c5f;
        }
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
                  (&local_220,local_228,local_230);
        pppuStack_170 = local_210;
        uStack_180 = (undefined8 ****)local_220;
        uStack_178 = (undefined8 ****)pppuStack_218;
        local_188 = (undefined8 ****)0xe;
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
      }
      goto LAB_00167efa;
    }
LAB_00167c5f:
    if (1 < local_190) {
      uVar10 = _ZN10uu_install19copy_files_into_dir17h5c95c64ab3c0a1beE
                         (local_198,local_190,CONCAT44(uStack_23c,uStack_240),local_238,param_2);
      auVar16._8_8_ =
           &
           PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
      ;
      auVar16._0_8_ = uVar10;
LAB_00167c91:
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hfe8a0e72f8f4f348E
                (local_1a0);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_248);
      goto LAB_00167f1b;
    }
    if (local_190 != 1) {
      ppuVar13 = &PTR_s_src_uu_install_src_install_rs_00202438;
LAB_00167fae:
                    /* try { // try from 00167fae to 00167fb3 has its CatchHandler @ 00168054 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)(ppuVar13);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)
                      (*(undefined8 *)(local_198 + 8),*(undefined8 *)(local_198 + 0x10));
    pppuVar7 = local_238;
    if (cVar9 == '\0') {
      uVar10 = CONCAT44(uStack_23c,uStack_240);
      if (bVar1 != 0) {
        _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_188,uVar10,local_238);
        ppppuVar11 = local_188;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
                  (&local_188);
        if ((int)ppppuVar11 != 2) {
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                    (&local_188,uVar10,pppuVar7);
          local_1c8 = uStack_178;
          local_1d8 = local_188;
          uStack_1d0 = (undefined4)uStack_180;
          uStack_1cc = uStack_180._4_4_;
                    /* try { // try from 00167e9d to 00167ea6 has its CatchHandler @ 00167fd6 */
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                    (&local_220,*(undefined8 *)(local_198 + 8),*(undefined8 *)(local_198 + 0x10));
          local_158 = local_210;
          local_168 = (undefined8 ***)local_220;
          pppuStack_160 = pppuStack_218;
          uStack_180 = (undefined8 ****)local_1d8;
          uStack_178 = (undefined8 ****)CONCAT44(uStack_1cc,uStack_1d0);
          pppuStack_170 = local_1c8;
          local_188 = (undefined8 ****)&DAT_0000000f;
                    /* try { // try from 00167eed to 00167ef9 has its CatchHandler @ 00168054 */
          uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
          goto LAB_00167efa;
        }
      }
      cVar9 = _ZN10uu_install27is_potential_directory_path17h7ceb262fd8e27effE(uVar10,pppuVar7);
      if (cVar9 == '\0') {
        cVar9 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00209c40)
                          (uVar10,pppuVar7);
        if (cVar9 == '\0') {
          cVar9 = _ZN10uu_install16is_new_file_path17h9334458914048442E(uVar10,pppuVar7);
          if (cVar9 == '\0') {
            pppuStack_170 = local_238;
            uStack_180 = (undefined8 ****)CONCAT44(uStack_244,local_248);
            uStack_178 = (undefined8 ****)CONCAT44(uStack_23c,uStack_240);
            local_188 = (undefined8 ****)&DAT_00000005;
                    /* try { // try from 00167f61 to 00167f6d has its CatchHandler @ 00167fb6 */
            uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
            _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hfe8a0e72f8f4f348E
                      (local_1a0);
            goto LAB_00167f14;
          }
        }
        auVar16 = _ZN10uu_install4copy17h306162d3f0e5e6d2E
                            (*(undefined8 *)(local_198 + 8),*(undefined8 *)(local_198 + 0x10),uVar10
                             ,pppuVar7,param_2);
        goto LAB_00167c91;
      }
      uVar10 = _ZN10uu_install19copy_files_into_dir17h5c95c64ab3c0a1beE
                         (local_198,1,uVar10,pppuVar7,param_2);
    }
    else {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                (&local_220,*(undefined8 *)(local_198 + 8),*(undefined8 *)(local_198 + 0x10));
      pppuStack_170 = local_210;
      uStack_180 = (undefined8 ****)local_220;
      uStack_178 = (undefined8 ****)pppuStack_218;
      local_188 = (undefined8 ****)&DAT_0000000d;
      uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
    }
LAB_00167efa:
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hfe8a0e72f8f4f348E
              (local_1a0);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_248);
  }
  else {
                    /* try { // try from 00167641 to 0016764e has its CatchHandler @ 0016807e */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00209938
    )(&local_1d8,*(long *)(param_1 + 8) + 0x30);
                    /* try { // try from 0016764f to 00167665 has its CatchHandler @ 0016801b */
    (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00209ba0)
              (&local_220,"{} [OPTION]... [FILE]...",0x18);
    pppuStack_170 = local_1c8;
    uStack_178 = (undefined8 ****)CONCAT44(uStack_1cc,uStack_1d0);
    uStack_180 = (undefined8 ****)local_1d8;
    local_168 = (undefined8 ***)local_220;
    pppuStack_160 = pppuStack_218;
    local_158 = local_210;
    local_188 = (undefined8 ****)0x11;
                    /* try { // try from 001676ac to 00167799 has its CatchHandler @ 0016807e */
    uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_188);
  }
LAB_00167f14:
  auVar16._8_8_ =
       &PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
  ;
  auVar16._0_8_ = uVar10;
LAB_00167f1b:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2a0498192df60b94E
            (param_1);
  return auVar16;
}