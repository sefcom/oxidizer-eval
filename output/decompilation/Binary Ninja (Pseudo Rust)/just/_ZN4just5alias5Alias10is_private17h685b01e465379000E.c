
  fn just::alias::Alias::is_private::h685b01e465379000(arg1: *mut i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg1[4]);
    let mut var_1c: i32 = 0;
    let mut rax_1: *mut i8;
    let mut rdx_1: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_1c);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax, rdx, rax_1, 
        rdx_1) != 0
    {
        return 1;
    }
    
    just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg1, 0xf)
}
