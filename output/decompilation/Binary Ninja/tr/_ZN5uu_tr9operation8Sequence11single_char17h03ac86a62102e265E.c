
  int64_t uu_tr::operation::Sequence::single_char::h03ac86a62102e265(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_40;
    char result = _$LT$nom..bytes..Take$LT$Error$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::h31e110a1e01abcb3(&var_40, 1, arg2, arg3);
    int128_t var_38;
    int128_t var_28;
    
    if (var_40 != 1)
    {
        int64_t var_20;
        
        if (!var_20)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
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
