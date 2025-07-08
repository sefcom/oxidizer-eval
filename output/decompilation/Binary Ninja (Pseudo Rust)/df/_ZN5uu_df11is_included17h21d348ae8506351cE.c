
  fn uu_df::is_included::h21d348ae8506351c(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    if (*arg1.byte_offset(0x90) != 0 && *arg2.byte_offset(0x50) != 0)
        || (*arg1.byte_offset(0x91) != 0 && *arg2.byte_offset(0x51) == 0)
    {
        return 0;
    }
    
    if *arg2.byte_offset(0x30) != -0x8000000000000000 &&
        _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(
        arg1.byte_offset(0x30), *arg2.byte_offset(0x38), *arg2.byte_offset(0x40)) != 0
    {
        return 0;
    }
    
    if *arg2.byte_offset(0x18) == -0x8000000000000000
    {
        return 1;
    }
    
    /* tailcall */
    _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(
        arg1.byte_offset(0x30), *arg2.byte_offset(0x20), *arg2.byte_offset(0x28))
}
