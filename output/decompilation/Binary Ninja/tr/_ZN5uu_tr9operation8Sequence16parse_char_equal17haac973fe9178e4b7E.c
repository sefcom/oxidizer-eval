
  void* uu_tr::operation::Sequence::parse_char_equal::haac973fe9178e4b7(int64_t* arg1)

{
    char const* const var_48 = "[==]";
    int64_t var_40 = 2;
    char const* const var_80 = "=]";
    int64_t var_78 = 2;
    char var_70 = 1;
    char const* const var_68 = "=]";
    int64_t var_60 = 2;
    char const* const var_58 = "=]";
    int64_t var_50 = 2;
    int32_t var_38;
    char rax;
    char rcx_1;
    int64_t rdx_2;
    rax = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hcf9673a6bf1f796a(&var_38, &var_80);
    int128_t var_30;
    
    if (var_38 != 1)
    {
        void* rax_1 = uu_tr::operation::Sequence::parse_char_equal::_$u7b$$u7b$closure$u7d$$u7d$::h14160559fe962602(&arg1[1], &var_30, rdx_2, rcx_1, rax);
        *arg1 = 0;
        return rax_1;
    }
    
    int128_t zmm0 = var_30;
    int128_t var_20;
    *(arg1 + 0x18) = var_20;
    *(arg1 + 8) = zmm0;
    *arg1 = 1;
    return rax;
}
