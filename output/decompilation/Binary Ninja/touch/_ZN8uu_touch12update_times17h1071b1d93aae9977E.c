
  int64_t uu_touch::update_times::h1071b1d93aae9977(int64_t arg1, int64_t arg2, char arg3, char arg4, char arg5, int32_t arg6, int64_t arg7, int32_t arg8)

{
    char var_88;
    int64_t var_80;
    void var_58;
    char r12;
    
    if (arg5)
    {
        r12 = arg4 ^ 1;
        
        if (arg5 == 1)
        {
            uu_touch::stat::hbfae00cfffe9133b(&var_58, arg1, arg2, r12 & 1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6051b7f2787ec345(&var_88, &var_58);
            
            if (var_88 & 1)
                return var_80;
        }
        
        goto label_53a884;
    }
    
    r12 = arg4 ^ 1;
    uu_touch::stat::hbfae00cfffe9133b(&var_58, arg1, arg2, r12 & 1);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6051b7f2787ec345(&var_88, &var_58);
    int64_t rax_2;
    
    if (!(var_88 & 1))
    {
        label_53a884:
        int64_t rax_3;
        
        if (!((arg3 | r12) & 1))
            rax_3 = filetime::set_symlink_file_times::h9ccde51c46d20a81(arg1);
        else
            rax_3 = filetime::set_file_times::hdefd26471d4e860a(arg1);
        
        rax_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dcef3be84e18410(rax_3);
    }
    else
        rax_2 = var_80;
    
    return rax_2;
}
