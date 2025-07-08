
  int64_t uu_tr::operation::Sequence::parse_char_repeat::hd85995b5ba07b318(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    char const* const var_60 = "[*]*]0[:alnumalphablankcntrldigi…";
    int64_t var_58 = 1;
    char const* const var_50 = "*]0[:alnumalphablankcntrldigitgr…";
    int64_t var_48 = 1;
    char const* const var_40 = "]0[:alnumalphablankcntrldigitgra…";
    int64_t var_38 = 1;
    int64_t* var_30;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::hbda65ba818a3ebf0(&var_30, &var_60, 
        arg2, arg3);
    int64_t result;
    
    if (!var_30)
    {
        int128_t var_18;
        *(arg1 + 0x18) = var_18;
        int128_t var_28;
        *(arg1 + 8) = var_28;
        result = 1;
    }
    else
    {
        uu_tr::operation::Sequence::parse_char_repeat::_$u7b$$u7b$closure$u7d$$u7d$::hb4b44df29a4e59ec(&arg1[1], &var_30);
        result = 0;
    }
    
    *arg1 = result;
    return result;
}
