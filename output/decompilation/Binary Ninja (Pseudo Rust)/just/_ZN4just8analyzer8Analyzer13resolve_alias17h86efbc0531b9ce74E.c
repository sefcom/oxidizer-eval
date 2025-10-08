
  fn just::analyzer::Analyzer::resolve_alias::h86efbc0531b9ce74(arg1: *mut i128, arg2: *mut *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let mut rbp: i64;
    rbp = 1;
    let rax: *mut c_void =
        just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(arg4[1], arg4[2], arg2, arg3);
    
    if rax != 0
    {
        /* tailcall */
        return just::alias::Alias$LT$just..namepath..Namepath$GT$::resolve::h619856284a1e2d72(arg1, 
            arg4, rax);
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx_3: i64;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&arg4[3]);
    let var_68: *mut c_void = rax_2;
    let var_60: i64 = rdx_3;
    let var_80: i128 = *arg4;
    let var_70: i64 = arg4[2];
    let mut var_88: i64 = -0x7fffffffffffffc1;
    let mut var_d8: i128;
    just::token::Token::error::h986494da066a4455(&var_d8, &arg4[3], &var_88);
    let var_98: i128;
    arg1[4] = var_98;
    let zmm0_2: i128 = var_d8;
    let var_a8: i128;
    arg1[3] = var_a8;
    let var_b8: i128;
    arg1[2] = var_b8;
    let var_c8: i128;
    arg1[1] = var_c8;
    *arg1 = zmm0_2;
    arg1[6] = 0x25;
    /* tailcall */
    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(&arg4[0xc])
}
