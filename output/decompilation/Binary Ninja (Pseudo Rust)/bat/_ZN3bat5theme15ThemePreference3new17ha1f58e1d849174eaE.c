
  fn bat::theme::ThemePreference::new::ha1f58e1d849174ea(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let mut r12: i64 = -0x7fffffffffffffff;
    let mut var_38: ();
    core::ops::function::FnOnce::call_once::h246b62f212dea9ab(&var_38, arg2, arg3);
    let var_30: i64;
    let var_28: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, &data_480130[0x28], 4) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "auto:alwaysauto:systemlightMonok…", 0xb) != 0
        {
            arg1[1] = 1;
        }
        else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "auto:systemlightMonokai Extended…", 0xb) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, &data_481fb0[0x1c], 4) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(var_30, var_28, "lightMonokai Extended LightTheme…", 5) == 0
                {
                    return bat::theme::ThemeName::new::hd040bb7840011c00(arg1, &var_38);
                }
                
                r12 = -0x7ffffffffffffffc;
            }
            else
            {
                r12 = -0x7ffffffffffffffd;
            }
        }
        else
        {
            arg1[1] = 2;
        }
    }
    else
    {
        arg1[1] = 0;
    }
    
    *arg1 = r12;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_38)
}
