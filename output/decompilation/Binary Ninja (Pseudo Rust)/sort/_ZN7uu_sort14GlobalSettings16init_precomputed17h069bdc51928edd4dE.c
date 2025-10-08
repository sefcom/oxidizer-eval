
  fn uu_sort::GlobalSettings::init_precomputed::h069bdc51928edd4d(arg1: *mut c_void) -> i64

{
    let r15: *mut c_void = *arg1.byte_offset(8);
    let r14_1: *mut c_void = (*arg1.byte_offset(0x10) * 0x38).byte_offset(r15);
    let mut var_28: *mut c_void = r15;
    let var_20: *mut c_void = r14_1;
    *arg1.byte_offset(0x60) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::he9599d49993e5e80(&var_28);
    *arg1.byte_offset(0x58) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h0275dad68c5e5a70(r15, r14_1);
    *arg1.byte_offset(0x48) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1f5e890a7cbe0df4(r15, r14_1);
    let result: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h392322c9088400e9(r15, r14_1);
    *arg1.byte_offset(0x50) = result;
    result
}
