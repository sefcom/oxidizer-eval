
  fn uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg1: i64, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut var_48: i32 = 0;
    let mut rbx_1: i32;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(arg1, arg2, 
        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_48), 1) == 0
    {
        rbx_1 = 0;
    }
    else
    {
        __builtin_memcpy(&var_48, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let var_28_1: i64 = 0;
        rbx_1 = bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h0c7161c8c911041f(arg3, &var_48);
        core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_48);
    }
    
    rbx_1
}
