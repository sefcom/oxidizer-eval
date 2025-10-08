long _ZN5uu_mv19rename_dir_fallback17h020a561b2c304e40E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long local_248 [3];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 *local_1e8;
  code *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 **local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 **local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined local_f0 [24];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  _ZN3std2fs8metadata17h12bb7891128f5212E(&local_1a0,param_3,param_4);
  iVar1 = (int)local_1a0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
            (&local_1a0);
  if ((iVar1 == 2) ||
     (lVar2 = _ZN3std2fs14remove_dir_all17h4dafc3aa331c121dE(param_3,param_4), lVar2 == 0)) {
    local_200 = 64000;
    local_1f0 = 0x10000;
    local_1f8 = 0;
    _ZN8fs_extra3dir8get_size17hd67999eb2328e755E(&local_1a0,param_1,param_2);
    _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_u64_C_fs_extra__error__Error_GT__GT_17heb9e2e8befbfc09dE
              (&local_1a0);
    local_248[0] = 0;
                    /* try { // try from 0018d9c2 to 0018da26 has its CatchHandler @ 0018dc02 */
    _ZN6uucore8features7fsxattr15retrieve_xattrs17h91101786feeb0ab4E(&local_1a0,param_1,param_2);
    if (local_1a0 == (undefined *)0x0) {
      _ZN5uu_mv19rename_dir_fallback28__u7b__u7b_closure_u7d__u7d_17h7404bb051f47ff39E
                (&local_1d8,uStack_198);
    }
    else {
      local_1b8 = local_180;
      uStack_1b0 = uStack_178;
      local_1c8 = local_190;
      uStack_1c0 = uStack_188;
      local_1d8 = (int)local_1a0;
      uStack_1d4 = local_1a0._4_4_;
      uStack_1d0 = (undefined4)uStack_198;
      uStack_1cc = uStack_198._4_4_;
    }
    if (local_248[0] == 0) {
      _ZN8fs_extra3dir8move_dir17h2b0d405202f70d94E
                (&local_230,param_1,param_2,param_3,param_4,&local_200);
    }
    else {
                    /* try { // try from 0018da2f to 0018da6f has its CatchHandler @ 0018dbf0 */
      _ZN8fs_extra3dir22move_dir_with_progress17h2fbb281b0a0058fcE
                (&local_230,param_1,param_2,param_3,param_4,&local_200,local_248);
    }
                    /* try { // try from 0018da70 to 0018da8c has its CatchHandler @ 0018dbda */
    lVar2 = _ZN6uucore8features7fsxattr12apply_xattrs17h3c4d8e00e28b6930E
                      (param_3,param_4,&local_1d8);
    if (lVar2 == 0) {
      if (CONCAT44(uStack_22c,local_230) == -0x8000000000000000) {
        lVar2 = 0;
      }
      else {
        local_c8 = local_220;
        uStack_c4 = uStack_21c;
        uStack_c0 = uStack_218;
        uStack_bc = uStack_214;
        local_b8 = local_210;
        uStack_b4 = uStack_20c;
        uStack_b0 = uStack_208;
        uStack_ac = uStack_204;
        local_d8 = local_230;
        uStack_d4 = uStack_22c;
        uStack_d0 = uStack_228;
        uStack_cc = uStack_224;
        if (CONCAT44(uStack_214,uStack_218) == -0x7fffffffffffffff) {
                    /* try { // try from 0018dae6 to 0018db82 has its CatchHandler @ 0018dbb4 */
          lVar2 = (*(code *)PTR__ZN3std2io5error5Error3new17h31653b416e5e1c98E_0024a9e8)
                            (1,"Permission denied",0x11);
        }
        else {
          local_1e8 = &local_d8;
          local_1e0 = 
          _ZN59__LT_fs_extra__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17hf6ebd0cbf729a667E;
          local_1a0 = &DAT_0011fc00;
          uStack_198 = 1;
          local_180 = 0;
          local_190 = &local_1e8;
          uStack_188 = 1;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_f0,&local_1a0);
          lVar2 = (*(code *)PTR__ZN3std2io5error5Error3new17ha2b5f63706640a17E_0024ab18)
                            (0x28,local_f0);
        }
                    /* try { // try from 0018db86 to 0018db92 has its CatchHandler @ 0018dbb2 */
        _ZN4core3ptr43drop_in_place_LT_fs_extra__error__Error_GT_17hd77cbc2a5fc6718aE(&local_d8);
      }
    }
    else {
                    /* try { // try from 0018da95 to 0018da9e has its CatchHandler @ 0018dbd8 */
      _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_u64_C_fs_extra__error__Error_GT__GT_17heb9e2e8befbfc09dE
                (&local_230);
    }
    _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h1e5753e0444693daE
              (local_248);
  }
  return lVar2;
}