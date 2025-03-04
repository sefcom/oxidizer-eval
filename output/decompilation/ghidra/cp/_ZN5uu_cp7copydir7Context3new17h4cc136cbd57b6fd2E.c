void _ZN5uu_cp7copydir7Context3new17h4cc136cbd57b6fd2E
               (long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_128;
  long lStack_120;
  long local_118;
  long local_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e0;
  long local_d8;
  long lStack_d0;
  
  _ZN3std3env11current_dir17h8e5fbaefdf378c8cE(&local_e0);
  if (local_e0 == -0x8000000000000000) {
    param_1[1] = local_d8;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_128 = local_e0;
    lStack_120 = local_d8;
    local_118 = lStack_d0;
                    /* try { // try from 0020db33 to 0020db42 has its CatchHandler @ 0020dc6c */
    _ZN3std4path4Path4join17hb28666e9f3e91503E(&local_110,local_d8,lStack_d0,param_2,param_3);
                    /* try { // try from 0020db43 to 0020dc06 has its CatchHandler @ 0020dc71 */
    _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_e0,param_4,param_5);
    if (local_e0 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                (2,local_d8);
    }
    else {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                (local_e0,local_d8);
      _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                (&local_e0,param_2,param_3);
      if (local_e0 != 0) {
                    /* try { // try from 0020dc5f to 0020dc6b has its CatchHandler @ 0020dc71 */
        uVar3 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                          (&PTR_s_src_uu_cp_src_copydir_rs_002b6288);
                    /* catch() { ... } // from try @ 0020db33 with catch @ 0020dc6c */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_128);
        _Unwind_Resume(uVar3);
        return;
      }
      cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h706a83e6dc488ee6E
                        (local_d8,lStack_d0,"/.",2);
      if (cVar1 == '\0') {
        lVar2 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(local_108,lStack_100);
        lVar4 = -0x8000000000000000;
        if (lVar2 != 0) {
          _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(&local_e0,lVar2);
          local_f8 = local_d8;
          uStack_f0 = lStack_d0;
          lVar4 = local_e0;
        }
        param_1[2] = local_118;
        *param_1 = local_128;
        param_1[1] = lStack_120;
        param_1[3] = lVar4;
        *(undefined4 *)(param_1 + 4) = (undefined4)local_f8;
        *(undefined4 *)((long)param_1 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_f0._4_4_;
        param_1[6] = param_4;
        param_1[7] = param_5;
        param_1[8] = param_2;
        param_1[9] = param_3;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_110);
        return;
      }
    }
    param_1[2] = local_118;
    *param_1 = local_128;
    param_1[1] = lStack_120;
    param_1[3] = local_110;
    param_1[4] = local_108;
    param_1[5] = lStack_100;
    param_1[6] = param_4;
    param_1[7] = param_5;
    param_1[8] = param_2;
    param_1[9] = param_3;
  }
  return;
}