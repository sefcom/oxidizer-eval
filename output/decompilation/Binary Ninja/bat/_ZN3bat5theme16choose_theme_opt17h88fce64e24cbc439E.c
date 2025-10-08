
  int64_t bat::theme::choose_theme_opt::h88fce64e24cbc439(int64_t* arg1, char arg2, int64_t* arg3)

{
    int128_t var_68;
    int64_t var_58;
    int64_t var_48;
    
    if (arg2 != 2)
    {
        int64_t var_30;
        bat::theme::choose_theme::h83cf2693913a544f(&var_30, arg3, arg2);
        var_48 = -0x8000000000000000;
        
        if (var_30 == -0x7fffffffffffffff)
            goto label_8443a2;
        
        int64_t var_20;
        var_58 = var_20;
        var_68 = var_30;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_48);
    }
    else
    {
        core::ptr::drop_in_place$LT$bat..theme..choose_theme_opt..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2795e7945647c31e(arg3);
        var_48 = -0x8000000000000000;
        label_8443a2:
        int64_t var_38;
        var_58 = var_38;
        var_68 = var_48;
        int64_t var_40;
        *var_68[8] = var_40;
    }
    arg1[2] = var_58;
    *arg1 = var_68;
    int64_t result = *var_68[8];
    arg1[1] = result;
    arg1[3] = arg2;
    return result;
}
