
  int64_t uu_tr::operation::Sequence::single_char::h93cc794f46bbaaa6(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_40;
    char result = nom::bytes::complete::take::_$u7b$$u7b$closure$u7d$$u7d$::h6d20bacba5a47d43(
        &var_40, nom::bytes::complete::take::hb83f4516c7d13b17(1), arg2, arg3);
    int128_t var_38;
    int128_t var_28;
    
    if (!var_40)
    {
        int64_t var_20;
        
        if (!var_20)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
        
        result = *var_28;
        *(arg1 + 8) = var_38;
        arg1[3] = result;
        *arg1 = 3;
    }
    else
    {
        *(arg1 + 0x10) = var_28;
        *arg1 = var_38;
    }
    return result;
}
