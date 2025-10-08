
  fn bat::theme::choose_theme_opt::h88fce64e24cbc439(arg1: *mut i64, arg2: i8, arg3: *mut i64) -> i64

{
    let mut var_68: i128;
    let mut var_58: i64;
    let mut var_48: i64;
    
    if arg2 != 2
    {
        let mut var_30: i64;
        bat::theme::choose_theme::h83cf2693913a544f(&var_30, arg3, arg2);
        var_48 = -0x8000000000000000;
        
        if var_30 == -0x7fffffffffffffff
        {
            goto 'label_8443a2;
        }
        
        let var_20: i64;
        var_58 = var_20;
        var_68 = var_30;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_48);
    }
    else
    {
        core::ptr::drop_in_place$LT$bat..theme..choose_theme_opt..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2795e7945647c31e(arg3);
        var_48 = -0x8000000000000000;
        'label_8443a2:
        let var_38: i64;
        var_58 = var_38;
        var_68 = var_48;
        let var_40: i64;
        *var_68[8] = var_40;
    }
    arg1[2] = var_58;
    *arg1 = var_68;
    let result: i64 = *var_68[8];
    arg1[1] = result;
    arg1[3] = arg2;
    result
}
