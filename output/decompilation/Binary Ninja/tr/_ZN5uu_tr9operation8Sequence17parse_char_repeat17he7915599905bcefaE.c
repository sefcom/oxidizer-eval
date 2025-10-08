
  int64_t uu_tr::operation::Sequence::parse_char_repeat::he7915599905bcefa(int64_t* arg1)

{
    char const* const var_60 = "[*]*][:alnumalphablankcntrldigit…";
    int64_t var_58 = 1;
    char const* const var_50 = "*][:alnumalphablankcntrldigitgra…";
    int64_t var_48 = 1;
    char const* const var_40 = "][:alnumalphablankcntrldigitgrap…";
    int64_t var_38 = 1;
    int64_t var_30;
    int64_t rax = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hf8608d87b682e598(&var_30, &var_60);
    
    if (var_30)
    {
        int64_t rax_1 = uu_tr::operation::Sequence::parse_char_repeat::_$u7b$$u7b$closure$u7d$$u7d$::hb4288508c93bd3c1(&arg1[1], &var_30);
        *arg1 = 0;
        return rax_1;
    }
    
    int128_t var_18;
    *(arg1 + 0x18) = var_18;
    int128_t var_28;
    *(arg1 + 8) = var_28;
    *arg1 = 1;
    return rax;
}
