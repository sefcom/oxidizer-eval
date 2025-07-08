
  fn uu_touch::update_times::h392cecc13adcf2b7(arg1: i64, arg2: i64, arg3: i32, arg4: i8, arg5: i8, arg6: *mut i128, arg7: i32, arg8: i64, arg9: i32) -> *mut i128

{
    let mut r15: u64 = arg7;
    let mut var_8c_1: i32;
    let mut var_88: i64;
    let var_80: *mut i128;
    let mut var_58: ();
    let mut rbp_1: i64;
    let mut r13_1: i32;
    
    if arg5 != 0
    {
        r13_1 = arg9;
        rbp_1 = arg8;
        
        if arg5 != 1
        {
            goto 'label_5c3216;
        }
        
        var_8c_1 = arg3;
        let mut rcx: i32;
        rcx = arg4 == 0;
        uu_touch::stat::haa73667d17037b3b(&var_58, arg1, arg2, rcx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7a727021908757a(&var_88, &var_58);
        let var_78: u64;
        r15 = var_78;
        
        if var_88 != 0
        {
            return var_80;
        }
        
        arg6 = var_80;
        goto 'label_5c320b;
    }
    
    var_8c_1 = arg3;
    let mut rcx_2: i32;
    rcx_2 = arg4 == 0;
    uu_touch::stat::haa73667d17037b3b(&var_58, arg1, arg2, rcx_2);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcdbd76867b98bd36(&var_88, &var_58);
    let mut rax_2: *mut i128;
    
    if var_88 == 0
    {
        let var_70: i64;
        rbp_1 = var_70;
        let var_68: i32;
        r13_1 = var_68;
        'label_5c320b:
        arg3 = var_8c_1;
        'label_5c3216:
        let mut rax_3: i64;
        
        if arg4 == 0 || arg3 != 0
        {
            rax_3 =
                filetime::set_file_times::hbfafa69b31a805ce(arg1, arg2, arg6, r15, rbp_1, r13_1);
        }
        else
        {
            rax_3 = filetime::set_symlink_file_times::hd7eb213bf3122499(arg1, arg2, arg6, r15, 
                rbp_1, r13_1);
        }
        
        rax_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2d49cffdd9c7d093(rax_3);
    }
    else
    {
        rax_2 = var_80;
    }
    
    rax_2
}
