
  fn just::line::Line::is_continuation::h5ed80636f0322bb6(arg1: *mut c_void, arg2: i64) -> i64

{
    if arg2 != 0
    {
        let rsi: i64 = arg2 << 7;
        
        if *arg1.byte_offset(rsi).byte_offset(-0x80) == 0x12
        {
            let rax: i64;
            let mut var_18: i64 = rax;
            let mut rax_1: *mut c_void;
            let mut rdx: i64;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(arg1.byte_offset(rsi).
                byte_offset(-0x78));
            *var_18[4] = 0;
            let mut rax_2: *mut i8;
            let mut rdx_1: u64;
            rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5c, &*var_18[4]);
            return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7edf1f62087d1f75(rax_1, 
                rdx, rax_2, rdx_1);
        }
    }
    
    0
}
