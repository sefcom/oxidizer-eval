
  uint64_t bat::theme::ThemePreference::new::ha1f58e1d849174ea(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t r12 = -0x7fffffffffffffff;
    void var_38;
    core::ops::function::FnOnce::call_once::h246b62f212dea9ab(&var_38, arg2, arg3);
    int64_t var_30;
    uint64_t var_28;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, &data_480130[0x28], 4))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "auto:alwaysauto:systemlightMonok…", 0xb))
            arg1[1] = 1;
        else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "auto:systemlightMonokai Extended…", 0xb))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, &data_481fb0[0x1c], 4))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "lightMonokai Extended LightTheme…", 5))
                    return bat::theme::ThemeName::new::hd040bb7840011c00(arg1, &var_38);
                
                r12 = -0x7ffffffffffffffc;
            }
            else
                r12 = -0x7ffffffffffffffd;
        }
        else
            arg1[1] = 2;
    }
    else
        arg1[1] = 0;
    
    *arg1 = r12;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_38);
}
