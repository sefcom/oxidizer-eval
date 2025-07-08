
  fn uu_sort::GlobalSettings::init_precomputed::h2e4e09def4bcf2a9(arg1: *mut c_void) -> i64

{
    let r15: *mut c_void = *arg1.byte_offset(8);
    let r14_1: *mut c_void = (*arg1.byte_offset(0x10) * 0x38).byte_offset(r15);
    let mut var_28: *mut c_void = r15;
    let var_20: *mut c_void = r14_1;
    *arg1.byte_offset(0x60) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfd9cbea3530c9fd0(&var_28);
    *arg1.byte_offset(0x58) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha92c83caa8027c63(r15, r14_1);
    *arg1.byte_offset(0x48) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hefb188d1a39a24e8(r15, r14_1);
    let result: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha576350b6c5181b6(r15, r14_1);
    *arg1.byte_offset(0x50) = result;
    result
}
