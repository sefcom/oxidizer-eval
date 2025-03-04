undefined8 *
_ZN9uu_mktemp4exec17h4964a5bb0e6c4200E(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  char param_9;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_9 == '\0') {
    _ZN9uu_mktemp14make_temp_file17hfdb13d12b9e8c76aE(&local_68,param_2,param_3);
  }
  else {
    _ZN9uu_mktemp13make_temp_dir17h59267eff7d377883E(&local_68,param_2,param_3);
  }
  if (local_68 != -0x8000000000000000) {
    local_50 = local_68;
    local_48 = local_60;
    local_40 = local_58;
                    /* try { // try from 001c0979 to 001c09b0 has its CatchHandler @ 001c09f1 */
    lVar1 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E();
    if (lVar1 == 0) {
      ppuVar3 = &PTR_s_src_uu_mktemp_src_mktemp_rs_00236b60;
    }
    else {
      _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                (&local_68,lVar1);
      if (local_68 == 0) {
        _ZN3std4path4Path4join17hac25b276bfec4f36E(&local_38,param_2,param_3,local_60,local_58);
        param_1[2] = local_28;
        *(undefined4 *)param_1 = local_38;
        *(undefined4 *)((long)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = uStack_30;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_50);
        return param_1;
      }
      ppuVar3 = &PTR_s_src_uu_mktemp_src_mktemp_rs_00236b78;
    }
                    /* try { // try from 001c09eb to 001c09f0 has its CatchHandler @ 001c09f1 */
    uVar2 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(ppuVar3);
                    /* catch() { ... } // from try @ 001c0979 with catch @ 001c09f1
                       catch() { ... } // from try @ 001c09eb with catch @ 001c09f1 */
                    /* try { // try from 001c09f4 to 001c09fd has its CatchHandler @ 001c0a06 */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_50);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar2);
  }
  param_1[1] = local_60;
  param_1[2] = local_58;
  *param_1 = 0x8000000000000000;
  return param_1;
}