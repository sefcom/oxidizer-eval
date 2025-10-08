
  fn uu_test::parser::Parser::expect::h104d0740cf1283ee(arg1: *mut i64) -> i64

{
    let mut var_78: i64;
    let rsi: *mut c_void;
    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_78, rsi);
    let r15: i64 = var_78;
    let var_70: i64;
    let var_68: i64;
    let var_60: u64;
    
    if r15 == 3 &&
        _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(
        var_68, var_60, ")(uutils coreutils) 0.0.30Check …", 1) != 0
    {
        *arg1 = 7;
        /* tailcall */
        return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
            var_70, var_68);
    }
    
    let mut var_50: i64 = 0;
    let var_48: *const i8 = ")(uutils coreutils) 0.0.30Check …";
    let var_40: i64 = 1;
    let var_38: i8 = 1;
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_30, 
        &var_50);
    let var_20: i64;
    arg1[3] = var_20;
    *arg1.byte_offset(8) = var_30;
    *arg1 = 1;
    
    if r15 != 3
    {
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_78);
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_70, var_68)
}
