
  int64_t just::attribute::Attribute::new::h574660488f231a8b(char* arg1, int128_t* arg2, int64_t* arg3)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    char rax_1 = _$LT$just..attribute..AttributeDiscriminant$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hb7ff9f0a02277291(rax, rdx);
    
    if (rax_1 != 0x14)
    {
        arg3[2];
        /* jump -> jump_table_46a348[rax_1] + &jump_table_46a348 */
    }
    
    void* rax_2;
    int64_t rdx_1;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    void* var_f8 = rax_2;
    int64_t var_f0 = rdx_1;
    int64_t var_100 = -0x7fffffffffffffc0;
    char var_178;
    int64_t rsi_2;
    int64_t rdi_4;
    int64_t r8;
    int64_t r9;
    rsi_2 = just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
    char rax_3 = var_178;
    int64_t var_138;
    *(arg1 + 0x40) = var_138;
    int128_t var_147;
    *(arg1 + 0x31) = var_147;
    int128_t var_157;
    *(arg1 + 0x21) = var_157;
    int128_t var_167;
    *(arg1 + 0x11) = var_167;
    int128_t var_177;
    *(arg1 + 1) = var_177;
    char var_130;
    uint64_t rcx_1 = var_130;
    int32_t var_12c;
    *(arg1 + 0x4c) = var_12c;
    int32_t var_12f;
    uint64_t rdx_4 = var_12f;
    *(arg1 + 0x49) = rdx_4;
    *arg1 = rax_3;
    arg1[0x48] = rcx_1;
    /* tailcall */
    return sub_657c29(arg3, rdi_4, rsi_2, rdx_4, rcx_1, r8, r9);
}
