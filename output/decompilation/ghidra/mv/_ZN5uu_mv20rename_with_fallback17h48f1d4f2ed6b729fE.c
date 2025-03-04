long _ZN5uu_mv20rename_with_fallback17h48f1d4f2ed6b729fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long local_278 [3];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 *local_1f8;
  code *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b0;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8 [24];
  undefined local_d0 [24];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_218 = param_1;
  local_210 = param_2;
  local_208 = param_3;
  local_200 = param_4;
  lVar3 = _ZN3std2fs6rename17hd948dfb1db41879eE();
  local_1e8 = (undefined *)lVar3;
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h5e1e22b88b1aa83aE
            (&local_1e8);
  if (lVar3 == 0) {
    return 0;
  }
  _ZN3std2fs16symlink_metadata17h7febb2c461a7cc90E(&local_1e8,param_1,param_2);
  if ((int)local_1e8 == 2) {
    return uStack_1e0;
  }
  if ((local_1b0 & 0xf000) != 0x4000) {
    if ((local_1b0 & 0xf000) == 0xa000) {
      lVar3 = _ZN5uu_mv23rename_symlink_fallback17h50f184778666e82cE
                        (param_1,param_2,param_3,param_4);
    }
    else {
      cVar2 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_3,param_4);
      if ((cVar2 != '\0') &&
         (lVar3 = _ZN3std2fs11remove_file17hac48d4e29d9c97eaE(param_3,param_4), local_108 = param_3,
         local_100 = param_4, local_f8 = param_1, local_f0 = param_2, lVar3 != 0)) {
        lVar3 = _ZN5uu_mv20rename_with_fallback28__u7b__u7b_closure_u7d__u7d_17hc604898f20a204e8E
                          (&local_108,lVar3);
        return lVar3;
      }
      auVar5 = _ZN3std2fs4copy17h1bd7b955a3942b36E(param_1,param_2,param_3,param_4);
      lVar3 = auVar5._8_8_;
      if (auVar5._0_8_ == 0) {
        lVar3 = _ZN6uucore8features7fsxattr11copy_xattrs17hdfb623434415deafE(&local_218,&local_208);
      }
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = _ZN3std2fs11remove_file17hac48d4e29d9c97eaE(param_1,param_2);
    }
    if (lVar3 == 0) {
      return 0;
    }
    return lVar3;
  }
  _ZN3std2fs8metadata17h1d9ddf5324749f9aE(&local_1e8,param_3,param_4);
  iVar1 = (int)local_1e8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h1a38c79198e9333eE
            (&local_1e8);
  if ((iVar1 != 2) &&
     (lVar3 = _ZN3std2fs14remove_dir_all17heb08d5b595e80c8aE(param_3,param_4), lVar3 != 0)) {
    return lVar3;
  }
  local_220 = 0x10000;
  local_230 = 64000;
  local_228 = 0;
  _ZN8fs_extra3dir8get_size17hbbe91904dfa02d0cE(&local_1e8,param_1,param_2);
  if (local_1e8 == (undefined *)0x8000000000000000) {
    if (param_5 != 0) {
      _ZN9indicatif12progress_bar11ProgressBar3new17h3f65a405722ce42aE(&local_260,uStack_1e0);
                    /* try { // try from 001eb962 to 001eb997 has its CatchHandler @ 001ebcc3 */
      _ZN9indicatif5style13ProgressStyle13with_template17hadd9cefcdac397a1E
                (&local_1e8,"{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}",0x40)
      ;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7d26c333f6a83544E
                (&local_b8,&local_1e8,&PTR_s_src_uu_mv_src_mv_rs_00288250);
      _ZN9indicatif12progress_bar11ProgressBar10with_style17hfb345490eb32754bE
                (local_e8,&local_260,&local_b8);
      _ZN9indicatif5multi13MultiProgress3add17h9f882db003b558aeE(local_278,param_5,local_e8);
      goto LAB_001eba63;
    }
  }
  else {
    _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_u64_C_fs_extra__error__Error_GT__GT_17hff1e9b61bee0c0a4E
              (&local_1e8);
  }
  local_278[0] = 0;
LAB_001eba63:
                    /* try { // try from 001eba63 to 001eba75 has its CatchHandler @ 001ebcf6 */
  _ZN6uucore8features7fsxattr15retrieve_xattrs17h93bd4c6665c83aa3E(&local_1e8,param_1,param_2);
  if (local_1e8 == (undefined *)0x0) {
                    /* try { // try from 001ebaf5 to 001ebb01 has its CatchHandler @ 001ebcf6 */
    _ZN5uu_mv20rename_with_fallback28__u7b__u7b_closure_u7d__u7d_17h82d99eba55661758E
              (&local_138,uStack_1e0);
  }
  else {
    uStack_110 = CONCAT44(uStack_1bc,uStack_1c0);
    local_118 = local_1c8;
    local_128 = local_1d8;
    uStack_120 = uStack_1d0;
    local_138 = (int)local_1e8;
    uStack_134 = local_1e8._4_4_;
    uStack_130 = (undefined4)uStack_1e0;
    uStack_12c = uStack_1e0._4_4_;
  }
  if (local_278[0] == 0) {
    _ZN8fs_extra3dir8move_dir17h895849f132645a29E
              (&local_260,param_1,param_2,param_3,param_4,&local_230);
  }
  else {
                    /* try { // try from 001ebb0a to 001ebb4a has its CatchHandler @ 001ebce4 */
    _ZN8fs_extra3dir22move_dir_with_progress17hc90f1a00a6c1a6faE
              (&local_260,param_1,param_2,param_3,param_4,&local_230,local_278);
  }
  local_1c8 = local_118;
  uStack_1c0 = (undefined4)uStack_110;
  uStack_1bc = uStack_110._4_4_;
  local_1d8 = local_128;
  uStack_1d0 = uStack_120;
  local_1e8 = (undefined *)CONCAT44(uStack_134,local_138);
  uStack_1e0 = CONCAT44(uStack_12c,uStack_130);
                    /* try { // try from 001ebb7b to 001ebb95 has its CatchHandler @ 001ebcfb */
  uVar4 = _ZN6uucore8features7fsxattr12apply_xattrs17h5a1614cc87ee2729E(param_3,param_4,&local_1e8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h925beb8dbedc658cE(uVar4);
  if (CONCAT44(uStack_25c,local_260) == -0x8000000000000000) {
                    /* try { // try from 001ebb9d to 001ebba6 has its CatchHandler @ 001ebcc1 */
    _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_u64_C_fs_extra__error__Error_GT__GT_17hff1e9b61bee0c0a4E
              (&local_260);
    _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h4962931619fca08bE
              (local_278);
    return 0;
  }
  local_a8 = local_250;
  uStack_a4 = uStack_24c;
  uStack_a0 = uStack_248;
  uStack_9c = uStack_244;
  local_98 = local_240;
  uStack_94 = uStack_23c;
  uStack_90 = uStack_238;
  uStack_8c = uStack_234;
  local_b8 = local_260;
  uStack_b4 = uStack_25c;
  uStack_b0 = uStack_258;
  uStack_ac = uStack_254;
  if (CONCAT44(uStack_244,uStack_248) == -0x7fffffffffffffff) {
                    /* try { // try from 001ebbfc to 001ebc9f has its CatchHandler @ 001ebcd2 */
    lVar3 = _ZN3std2io5error5Error3new17h0657970bda442b78E
                      (1,
                       "Permission deniedinter-device move failed: \'\' to \'\'; unable to remove target: NoSuchFileCannotStatNotADirectorySelfTargetSubdirectoryDirectoryToNonDirectoryNonDirectoryToDirectoryNotADirectoryTargetNotADirectoryFailedToAccessNotADirectory"
                       ,0x11);
  }
  else {
    local_1f8 = &local_b8;
    local_1f0 = 
    _ZN59__LT_fs_extra__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17hd11c1069b969729bE;
    local_1e8 = &DAT_0011c350;
    uStack_1e0 = 1;
    local_1c8 = 0;
    local_1d8 = &local_1f8;
    uStack_1d0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE(local_d0,&local_1e8);
    lVar3 = _ZN3std2io5error5Error3new17h3b474d96466fa494E(0x27,local_d0);
  }
                    /* try { // try from 001ebca3 to 001ebcaf has its CatchHandler @ 001ebcbf */
  _ZN4core3ptr43drop_in_place_LT_fs_extra__error__Error_GT_17hd05771686690bc86E(&local_b8);
  _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h4962931619fca08bE
            (local_278);
  return lVar3;
}