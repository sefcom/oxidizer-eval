
  int64_t just::analyzer::Analyzer::resolve_alias::h86efbc0531b9ce74(int128_t* arg1, void** arg2, void* arg3, int64_t* arg4)

{
    int64_t rbp;
    rbp = 1;
    void* rax =
        just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(arg4[1], arg4[2], arg2, arg3);
    
    if (rax)
        /* tailcall */
        return just::alias::Alias$LT$just..namepath..Namepath$GT$::resolve::h619856284a1e2d72(arg1, 
            arg4, rax);
    
    void* rax_2;
    int64_t rdx_3;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&arg4[3]);
    void* var_68 = rax_2;
    int64_t var_60 = rdx_3;
    int128_t var_80 = *arg4;
    int64_t var_70 = arg4[2];
    int64_t var_88 = -0x7fffffffffffffc1;
    int128_t var_d8;
    just::token::Token::error::h986494da066a4455(&var_d8, &arg4[3], &var_88);
    int128_t var_98;
    arg1[4] = var_98;
    int128_t zmm0_2 = var_d8;
    int128_t var_a8;
    arg1[3] = var_a8;
    int128_t var_b8;
    arg1[2] = var_b8;
    int128_t var_c8;
    arg1[1] = var_c8;
    *arg1 = zmm0_2;
    arg1[6] = 0x25;
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(
        &arg4[0xc]);
}
