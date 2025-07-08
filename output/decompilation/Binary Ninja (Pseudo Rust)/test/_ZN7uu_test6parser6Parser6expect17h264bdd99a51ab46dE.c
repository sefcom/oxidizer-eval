
  fn uu_test::parser::Parser::expect::h264bdd99a51ab46d(arg1: *mut i64) -> i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_70: i32;
    let rsi: *mut c_void;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_70, rsi);
    let mut var_68: i128;
    let mut var_48: i64;
    
    if var_70 != 3
    {
        'label_4aed72:
        var_48 = 0;
        let var_40_1: *const i8 = ")";
        let var_38_1: i64 = 1;
        let var_30_1: i8 = 1;
        rbp = 1;
        let mut var_28: i128;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_28, 
            &var_48);
        let var_18: i64;
        arg1[3] = var_18;
        *arg1.byte_offset(8) = var_28;
        *arg1 = 1;
        
        if var_70 == 3
        {
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                &var_68);
        }
    }
    else
    {
        rbp = 1;
        let var_60: i64;
        let var_58: u64;
        
        if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(var_60, var_58) == 0
        {
            goto 'label_4aed72;
        }
        
        let var_38: u64 = var_58;
        var_48 = var_68;
        *arg1 = 7;
        let result: i64 =
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
        
        if var_70 == 3
        {
            return result;
        }
    }
    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_70)
}
