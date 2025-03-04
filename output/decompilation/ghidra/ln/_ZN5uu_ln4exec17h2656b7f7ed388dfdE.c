undefined8 _ZN5uu_ln4exec17h2656b7f7ed388dfdE(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
    if (*(char *)(param_3 + 0x33) != '\0') {
      if (param_2 == 1) {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbf396db49ef6ba51E
                  (local_50,param_1);
        local_38 = 0x8000000000000003;
      }
      else {
        if (param_2 < 3) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                      ("assertion failed: !files.is_empty(): ",0x23,
                       &PTR_s_src_uu_ln_src_ln_rs_0022cf50);
          }
          goto LAB_001b99ea;
        }
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbf396db49ef6ba51E
                  (local_50,param_1 + 0x30);
        local_38 = 0x8000000000000004;
      }
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf17afba5cd7396c5E(local_50);
      return uVar2;
    }
    lVar3 = param_2 - 1;
    if (lVar3 == 0) {
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(local_50,".",1);
                    /* try { // try from 001b990e to 001b991d has its CatchHandler @ 001b9a1b */
      uVar2 = _ZN5uu_ln17link_files_in_dir17h0d7f4d99648ce3c4E(param_1,1,local_48,local_40,param_3);
    }
    else {
      if (param_2 == 0) {
        uVar2 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                          (&PTR_s_src_uu_ln_src_ln_rs_0022ce78);
                    /* catch() { ... } // from try @ 001b990e with catch @ 001b9a1b */
                    /* try { // try from 001b9a1e to 001b9a45 has its CatchHandler @ 001b9a4e */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(local_50);
        uVar2 = _Unwind_Resume(uVar2);
        return uVar2;
      }
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E
                (local_50,*(undefined8 *)(param_1 + 8 + lVar3 * 0x18),
                 *(undefined8 *)(param_1 + 0x10 + lVar3 * 0x18));
                    /* try { // try from 001b998a to 001b99bc has its CatchHandler @ 001b9a2a */
      if ((param_2 < 3) &&
         (cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(local_48,local_40), cVar1 == '\0')) {
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(local_50);
LAB_001b99ea:
        uVar2 = _ZN5uu_ln4link17h8c92ebae2dccde8fE
                          (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                           *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_3);
        return uVar2;
      }
      auVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hee0d4964d376204fE
                         (lVar3,param_1,param_2);
      uVar2 = _ZN5uu_ln17link_files_in_dir17h0d7f4d99648ce3c4E
                        (auVar4._0_8_,auVar4._8_8_,local_48,local_40,param_3);
    }
  }
  else {
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E
              (local_50,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 001b98ba to 001b98c7 has its CatchHandler @ 001b9a39 */
    uVar2 = _ZN5uu_ln17link_files_in_dir17h0d7f4d99648ce3c4E
                      (param_1,param_2,local_48,local_40,param_3);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(local_50);
  return uVar2;
}