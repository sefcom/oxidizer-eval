
  fn fd::hyperlink::encode::h797a98853329df30(arg1: *mut i64, arg2: i8, arg3: i64) -> i64

{
    let mut var_41: i8 = arg2;
    let mut rcx: i8 = arg2 - 0x30;
    let rsi: u32 = arg2;
    
    if rcx >= 0xa && (arg2 & 0xdf) - 0x41 > 0x19
    {
        let rax_1: u64 = rsi - 0x2d;
        
        if rax_1 <= 0x32
        {
            rcx = 7;
        }
        
        if (rax_1 > 0x32 || !TEST_BITQ(0x4000000002007, rax_1)) && rsi != 0x7e
        {
            let mut var_40: *mut i8 = &var_41;
            let var_38: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i8$GT$::fmt::hc03941a1f9bbbf93;
            let mut var_30: *mut *mut [i8; 0x2] = &data_8024e0;
            let var_28: i64 = 1;
            let var_10: *mut c_void = &data_47b3b8;
            let var_8: i64 = 1;
            let var_20: *mut *mut i8 = &var_40;
            let var_18: i64 = 1;
            return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(*arg1, arg1[1], &var_30);
        }
    }
    
    /* tailcall */
    _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_char::h5f5747e99125facc(arg1, 
        rsi, arg3, rcx)
}
