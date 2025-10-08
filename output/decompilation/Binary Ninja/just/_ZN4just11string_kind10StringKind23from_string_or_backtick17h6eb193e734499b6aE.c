
  int64_t just::string_kind::StringKind::from_string_or_backtick::h6eb193e734499b6a(uint64_t* arg1, int128_t* arg2)

{
    void* rax;
    int64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    char result;
    char rdx_1;
    result = just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax, rdx);
    
    if (result == 2)
    {
        void var_70;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, "StringKind::from_token: Expected…", 0x33);
        int64_t var_78 = -0x7fffffffffffffd8;
        return just::token::Token::error::h986494da066a4455(arg1, arg2, &var_78);
    }
    
    result &= 1;
    *arg1 = result;
    *(arg1 + 1) = rdx_1;
    arg1[9] = 0x25;
    return result;
}
