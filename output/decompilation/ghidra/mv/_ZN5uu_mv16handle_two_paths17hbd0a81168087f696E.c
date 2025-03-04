undefined8
_ZN5uu_mv16handle_two_paths17hbd0a81168087f696E
          (undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3,
          undefined8 ****param_4,long param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined local_1a8 [12];
  undefined4 uStack_19c;
  undefined8 ***local_198;
  undefined local_190;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  undefined8 ***local_158;
  undefined local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined8 ***local_138;
  undefined8 ***pppuStack_130;
  undefined8 ***local_128;
  undefined8 ***local_120;
  undefined8 uStack_118;
  undefined8 ***local_110;
  code *local_108;
  undefined8 ***local_100;
  undefined8 ***local_f8;
  undefined8 ***local_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***local_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 ***local_c8;
  undefined local_48 [24];
  
  cVar5 = *(char *)(param_5 + 0x36);
  if ((cVar5 == '\x01') &&
     (cVar4 = _ZN6uucore8features14backup_control23source_is_target_backup17hf52468b25c2dfb23E
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),
                         *(undefined8 *)(param_5 + 0x10)), cVar4 != '\0')) {
    local_168 = (undefined8 ***)&DAT_00000001;
    local_150 = 1;
    local_1a8._0_8_ = &DAT_00000001;
    local_190 = 1;
    local_120 = &local_168;
    uStack_118 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_110 = (undefined8 ***)local_1a8;
    local_108 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_f8 = (undefined8 ***)&PTR_s_backing_up_might_destroy_source__00287de0;
    local_f0 = (undefined8 ****)0x3;
    uStack_d8 = 0;
    pppuStack_e8 = &local_120;
    local_e0 = (undefined8 ****)0x2;
    unique0x10000926 = (code *)param_1;
    local_198 = param_2;
    pppuStack_160 = param_3;
    local_158 = param_4;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE(local_48,&local_f8);
    uVar7 = _ZN3std2io5error5Error3new17h3b474d96466fa494E(0,local_48);
    goto LAB_001e92a7;
  }
  local_140 = param_4;
  _ZN3std2fs16symlink_metadata17h7febb2c461a7cc90E(&local_f8,param_1,param_2);
  iVar3 = (int)local_f8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h1a38c79198e9333eE
            (&local_f8);
  if (iVar3 == 2) {
    cVar5 = _ZN6uucore8features2fs25path_ends_with_terminator17h30fe62ab1cf88eeeE(param_1,param_2);
    if (cVar5 == '\0') {
      local_1a8._0_8_ = &DAT_00000001;
      local_190 = 1;
      unique0x10000906 = (code *)param_1;
      local_198 = param_2;
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                (&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x0;
    }
    else {
      local_1a8._0_8_ = &DAT_00000001;
      local_190 = 1;
      unique0x10000916 = (code *)param_1;
      local_198 = param_2;
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                (&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x1;
    }
    goto LAB_001e9a7f;
  }
  local_100 = param_2;
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(local_1a8,param_1,param_2);
  pppuVar1 = local_140;
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_f8,param_3,local_140);
  ppppuVar10 = (undefined8 ****)local_100;
  cVar4 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                    (local_1a8,&local_f8);
  local_148 = param_1;
  if ((cVar4 == '\0') &&
     (cVar4 = _ZN6uucore8features2fs26are_hardlinks_to_same_file17h58f3d52af664165aE
                        (param_1,ppppuVar10,param_3,pppuVar1), cVar4 == '\0')) {
    cVar4 = _ZN6uucore8features2fs45are_hardlinks_or_one_way_symlink_to_same_file17hd5db584ecbb68737E
                      (param_1,ppppuVar10,param_3,pppuVar1);
    if ((cVar5 == '\0') && (cVar4 != '\0')) {
LAB_001e9549:
      pppuVar1 = local_148;
      _ZN3std4path4Path10components17h4f3217acf0fc8653E(local_1a8,local_148,ppppuVar10);
      _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_f8,&DAT_00126091,1);
      cVar5 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                        (local_1a8,&local_f8);
      if ((cVar5 == '\0') &&
         ((cVar5 = _ZN3std4path4Path9ends_with17h69a96bb2edb5d121E(pppuVar1,ppppuVar10,"/.",2),
          cVar5 == '\0' &&
          (cVar5 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(pppuVar1,ppppuVar10), cVar5 == '\0'
          )))) {
        local_1a8._0_8_ = pppuVar1;
        stack0xfffffffffffffe60 = (code *)ppppuVar10;
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17he15fdbfc0d7582caE
                  (&local_f0,local_1a8);
        local_f8 = (undefined8 ***)0x3;
      }
      else {
        local_168 = (undefined8 ***)&DAT_00000001;
        pppuStack_160 = pppuVar1;
        local_158 = ppppuVar10;
        local_150 = 1;
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                  (&local_138,&local_168);
        local_1a8._0_8_ = &DAT_00000001;
        local_198 = local_140;
        local_190 = 1;
                    /* try { // try from 001e9609 to 001e961a has its CatchHandler @ 001e9be9 */
        unique0x100008b6 = (code *)param_3;
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                  (&local_120,local_1a8);
        local_e0 = local_128;
        local_f0 = local_138;
        pppuStack_e8 = pppuStack_130;
        uStack_d0 = (undefined4)uStack_118;
        uStack_cc = uStack_118._4_4_;
        local_c8 = local_110;
        local_f8 = (undefined8 ***)0x2;
      }
      goto LAB_001e9a7f;
    }
  }
  else if (cVar5 == '\0') goto LAB_001e9549;
  pppuVar2 = local_140;
  cVar5 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_3,local_140);
  cVar4 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(local_148,ppppuVar10);
  cVar6 = _ZN6uucore8features2fs25path_ends_with_terminator17h30fe62ab1cf88eeeE(param_3,pppuVar2);
  pppuVar1 = local_148;
  if (cVar6 == '\0') {
    if (cVar5 == '\0') goto LAB_001e966c;
  }
  else if (cVar5 == '\0') {
    if ((cVar4 == '\0' && *(char *)(param_5 + 0x30) == '\0') &&
       (*(char *)(param_5 + 0x37) != '\x02')) {
      local_1a8._0_8_ = &DAT_00000001;
      local_198 = pppuVar2;
      local_190 = 1;
      unique0x100008f6 = (code *)param_3;
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
                (&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x9;
      goto LAB_001e9a7f;
    }
LAB_001e966c:
    _ZN3std2fs8metadata17h1d9ddf5324749f9aE(&local_f8,param_3,pppuVar2);
    iVar3 = (int)local_f8;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h1a38c79198e9333eE
              (&local_f8);
    pppuVar1 = local_148;
    if ((iVar3 == 2) ||
       (cVar5 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(local_148,ppppuVar10),
       pppuVar2 = local_140, cVar5 == '\0')) {
      lVar9 = _ZN5uu_mv6rename17hfc95a4bd2fcddeecE(pppuVar1,ppppuVar10,param_3,local_140,param_5,0);
      if (lVar9 != 0) {
        uVar7 = _ZN5uu_mv16handle_two_paths28__u7b__u7b_closure_u7d__u7d_17h76cfa34b6b986a26E(lVar9)
        ;
        return uVar7;
      }
      return 0;
    }
    if (*(char *)(param_5 + 0x35) == '\0') {
      return 0;
    }
    if (*(char *)(param_5 + 0x35) != '\x02') {
      _local_1a8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      pppuStack_160 =
           (undefined8 ***)_ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE
      ;
      local_f8 = (undefined8 ***)&DAT_00287e10;
      local_f0 = (undefined8 ***)0x2;
      uStack_d8 = 0;
      local_e0 = (undefined8 ***)0x1;
      local_168 = (undefined8 ***)local_1a8;
      pppuStack_e8 = &local_168;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
      local_1a8._0_8_ = &DAT_00000001;
      local_198 = pppuVar2;
      local_190 = 1;
      pppuStack_160 =
           (undefined8 ***)
           _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_f8 = (undefined8 ***)&PTR_s_overwrite___00287e30;
      local_f0 = (undefined8 ***)0x2;
      uStack_d8 = 0;
      local_e0 = (undefined8 ***)0x1;
      unique0x100008d6 = (code *)param_3;
      local_168 = (undefined8 ***)local_1a8;
      pppuStack_e8 = &local_168;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
      local_f8 = (undefined8 ***)&PTR_s__00287e50;
      local_f0 = (undefined8 ***)&DAT_00000001;
      pppuStack_e8 = (undefined8 ***)&DAT_00000008;
      local_e0 = (undefined8 ****)0x0;
      uStack_d8 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
      local_138 = (undefined8 ***)_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
      pppuVar8 = (undefined8 ***)
                 _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                           (&local_138);
      if (pppuVar8 != (undefined8 ***)0x0) {
        local_120 = pppuVar8;
                    /* try { // try from 001e9ad1 to 001e9ba3 has its CatchHandler @ 001e9ba4 */
        _local_1a8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_168 = (undefined8 ***)local_1a8;
        pppuStack_160 =
             (undefined8 ***)
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
        local_f8 = (undefined8 ***)&DAT_00287e10;
        local_f0 = (undefined8 ***)0x2;
        uStack_d8 = 0;
        local_e0 = (undefined8 ***)0x1;
        pppuStack_e8 = &local_168;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
        local_1a8._0_8_ = &local_120;
        stack0xfffffffffffffe60 =
             _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
        ;
        local_f8 = (undefined8 ***)&DAT_00287e60;
        local_f0 = (undefined8 ***)0x2;
        uStack_d8 = 0;
        pppuStack_e8 = (undefined8 ***)local_1a8;
        local_e0 = (undefined8 ***)0x1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
        uVar7 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
                    /* catch() { ... } // from try @ 001e9ad1 with catch @ 001e9ba4 */
                    /* try { // try from 001e9ba7 to 001e9bf8 has its CatchHandler @ 001e9c01 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hbb55e5b4020a58baE(&local_120);
        uVar7 = _Unwind_Resume(uVar7);
        return uVar7;
      }
      cVar5 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
      ppppuVar10 = (undefined8 ****)local_100;
      if (cVar5 == '\0') {
        uVar7 = _ZN3std2io5error5Error3new17h0657970bda442b78E(0x27,1,0);
LAB_001e92a7:
        uVar7 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                          (uVar7);
        return uVar7;
      }
    }
    local_168 = (undefined8 ***)&DAT_00000001;
    pppuStack_160 = pppuVar1;
    local_150 = 1;
    local_158 = ppppuVar10;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
              (&local_138,&local_168);
    local_1a8._0_8_ = &DAT_00000001;
    local_198 = pppuVar2;
    local_190 = 1;
                    /* try { // try from 001e987c to 001e988d has its CatchHandler @ 001e9bb6 */
    unique0x100008e6 = (code *)param_3;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
              (&local_120,local_1a8);
    local_e0 = local_128;
    local_f0 = local_138;
    pppuStack_e8 = pppuStack_130;
    uStack_d0 = (undefined4)uStack_118;
    uStack_cc = uStack_118._4_4_;
    local_c8 = local_110;
    local_f8 = (undefined8 ***)0x6;
    goto LAB_001e9a7f;
  }
  if (*(char *)(param_5 + 0x30) == '\0') {
    cVar5 = _ZN3std4path4Path11starts_with17h893fbbf855320e98E
                      (param_3,pppuVar2,local_148,ppppuVar10);
    if (cVar5 == '\0') {
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (&local_f8,pppuVar1,ppppuVar10);
                    /* try { // try from 001e9a23 to 001e9a3a has its CatchHandler @ 001e9bc8 */
      uVar7 = _ZN5uu_mv19move_files_into_dir17hea74a81b456dd214E
                        (&local_f8,1,param_3,pppuVar2,param_5);
      _ZN4core3ptr60drop_in_place_LT__u5b_std__path__PathBuf_u3b__u20_1_u5d__GT_17hc08a4c36878649f8E
                (&local_f8);
      return uVar7;
    }
    local_138 = pppuVar1;
    pppuStack_130 = ppppuVar10;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17he15fdbfc0d7582caE
              (&local_168,&local_138);
    uStack_118 = (code *)pppuVar2;
                    /* try { // try from 001e9972 to 001e9983 has its CatchHandler @ 001e9bda */
    local_120 = param_3;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17he15fdbfc0d7582caE
              (local_1a8,&local_120);
    local_e0 = local_158;
    local_f0 = local_168;
    pppuStack_e8 = pppuStack_160;
    uStack_d0 = local_1a8._8_4_;
    uStack_cc = uStack_19c;
    local_c8 = local_198;
    local_f8 = (undefined8 ***)0x4;
  }
  else {
    cVar5 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(local_148,ppppuVar10);
    if (cVar5 != '\0') {
      uVar7 = _ZN5uu_mv6rename17hfc95a4bd2fcddeecE(pppuVar1,ppppuVar10,param_3,pppuVar2,param_5,0);
      local_f8 = pppuVar1;
      local_f0 = ppppuVar10;
      local_e0 = pppuVar2;
      pppuStack_e8 = param_3;
      uVar7 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hf9aae2064c24b4d3E
                        (uVar7,&local_f8);
      return uVar7;
    }
    local_1a8._0_8_ = &DAT_00000001;
    local_198 = pppuVar2;
    local_190 = 1;
    unique0x100008c6 = (code *)param_3;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h29e878758f75f5edE
              (&local_f0,local_1a8);
    local_f8 = (undefined8 ***)0x5;
  }
LAB_001e9a7f:
  uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0e8b01bf032e1a6aE(&local_f8);
  return uVar7;
}