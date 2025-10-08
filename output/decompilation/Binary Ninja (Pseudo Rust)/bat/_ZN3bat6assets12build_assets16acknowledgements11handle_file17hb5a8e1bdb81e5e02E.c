
  fn bat::assets::build_assets::acknowledgements::handle_file::hb5a8e1bdb81e5e02(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: *mut i8 = *arg2.byte_offset(0x20);
    let r12: u64 = *arg2.byte_offset(0x28);
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(r15, r12, "NOTICEERROR: License is of unkno…", 6) != 0
    {
        *arg2.byte_offset(0x10);
        /* tailcall */
        return bat::assets::build_assets::acknowledgements::handle_notice::h6c212b1b9d68349d(arg1, 
            *arg2.byte_offset(8));
    }
    
    let result: i8 =
        core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(
        r15, r12, "LICENSENOTICEERROR: License is o…", 7);
    
    if result != 0
    {
        *arg2.byte_offset(0x10);
        /* tailcall */
        return bat::assets::build_assets::acknowledgements::handle_license::h76a66dfc08dd74eb(arg1, 
            *arg2.byte_offset(8));
    }
    
    *arg1.byte_offset(8) = -0x8000000000000000;
    *arg1 = 0xd;
    result
}
