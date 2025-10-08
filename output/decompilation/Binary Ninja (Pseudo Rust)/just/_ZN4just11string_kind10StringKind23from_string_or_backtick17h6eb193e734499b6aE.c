
  fn just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(arg1: *mut u64, arg2: *mut i128) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    let mut result: i8;
    let mut rdx_1: i8;
    result = just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax, rdx);
    
    if result == 2
    {
        let mut var_70: ();
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, "StringKind::from_token: Expected…", 0x33);
        let mut var_78: i64 = -0x7fffffffffffffd8;
        return just::token::Token::error::h986494da066a4455(arg1, arg2, &var_78);
    }
    
    result &= 1;
    *arg1 = result;
    *arg1.byte_offset(1) = rdx_1;
    arg1[9] = 0x25;
    result
}
