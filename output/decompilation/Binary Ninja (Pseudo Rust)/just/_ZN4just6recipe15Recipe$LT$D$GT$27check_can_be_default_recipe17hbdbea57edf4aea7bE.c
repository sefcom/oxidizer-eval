
  fn just::recipe::Recipe$LT$D$GT$::check_can_be_default_recipe::hbdbea57edf4aea7b(arg1: *mut i8, arg2: *mut c_void) -> *mut c_void

{
    let rdi: *mut i32 = *arg2.byte_offset(0x50);
    let mut result: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(rdi, (*arg2.byte_offset(0x58) * 0xd0).byte_offset(rdi));
    
    if result == 0
    {
        result = 0x38;
    }
    else
    {
        let result_1: *mut c_void = result;
        let mut rdx_1: i64;
        result = just::token::Token::lexeme::h66587cdf67f63270(arg2.byte_offset(0x90));
        *arg1.byte_offset(8) = result_1;
        *arg1.byte_offset(0x10) = result;
        *arg1.byte_offset(0x18) = rdx_1;
        result = 0xf;
    }
    
    *arg1 = result;
    result
}
