
  fn uu_touch::update_times::h1071b1d93aae9977(arg1: i64, arg2: i64, arg3: i8, arg4: i8, arg5: i8, arg6: i32, arg7: i64, arg8: i32) -> i64

{
    let mut var_88: i8;
    let var_80: i64;
    let mut var_58: ();
    let mut r12: i8;
    
    if arg5 != 0
    {
        r12 = arg4 ^ 1;
        
        if arg5 == 1
        {
            uu_touch::stat::hbfae00cfffe9133b(&var_58, arg1, arg2, r12 & 1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6051b7f2787ec345(&var_88, &var_58);
            
            if (var_88 & 1) != 0
            {
                return var_80;
            }
        }
        
        goto 'label_53a884;
    }
    
    r12 = arg4 ^ 1;
    uu_touch::stat::hbfae00cfffe9133b(&var_58, arg1, arg2, r12 & 1);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6051b7f2787ec345(&var_88, &var_58);
    let mut rax_2: i64;
    
    if (var_88 & 1) == 0
    {
        'label_53a884:
        let mut rax_3: i64;
        
        if ((arg3 | r12) & 1) == 0
        {
            rax_3 = filetime::set_symlink_file_times::h9ccde51c46d20a81(arg1);
        }
        else
        {
            rax_3 = filetime::set_file_times::hdefd26471d4e860a(arg1);
        }
        
        rax_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dcef3be84e18410(rax_3);
    }
    else
    {
        rax_2 = var_80;
    }
    
    rax_2
}
