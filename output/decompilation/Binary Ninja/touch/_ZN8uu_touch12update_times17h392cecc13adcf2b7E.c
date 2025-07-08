
  int128_t* uu_touch::update_times::h392cecc13adcf2b7(int64_t arg1, int64_t arg2, int32_t arg3, char arg4, char arg5, int128_t* arg6, int32_t arg7, int64_t arg8, int32_t arg9)

{
    uint64_t r15 = arg7;
    int32_t var_8c_1;
    int64_t var_88;
    int128_t* var_80;
    void var_58;
    int64_t rbp_1;
    int32_t r13_1;
    
    if (arg5)
    {
        r13_1 = arg9;
        rbp_1 = arg8;
        
        if (arg5 != 1)
            goto label_5c3216;
        
        var_8c_1 = arg3;
        int32_t rcx;
        rcx = !arg4;
        uu_touch::stat::haa73667d17037b3b(&var_58, arg1, arg2, rcx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7a727021908757a(&var_88, &var_58);
        uint64_t var_78;
        r15 = var_78;
        
        if (var_88)
            return var_80;
        
        arg6 = var_80;
        goto label_5c320b;
    }
    
    var_8c_1 = arg3;
    int32_t rcx_2;
    rcx_2 = !arg4;
    uu_touch::stat::haa73667d17037b3b(&var_58, arg1, arg2, rcx_2);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcdbd76867b98bd36(&var_88, &var_58);
    int128_t* rax_2;
    
    if (!var_88)
    {
        int64_t var_70;
        rbp_1 = var_70;
        int32_t var_68;
        r13_1 = var_68;
        label_5c320b:
        arg3 = var_8c_1;
        label_5c3216:
        int64_t rax_3;
        
        if (!arg4 || arg3)
            rax_3 =
                filetime::set_file_times::hbfafa69b31a805ce(arg1, arg2, arg6, r15, rbp_1, r13_1);
        else
            rax_3 = filetime::set_symlink_file_times::hd7eb213bf3122499(arg1, arg2, arg6, r15, 
                rbp_1, r13_1);
        
        rax_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2d49cffdd9c7d093(rax_3);
    }
    else
        rax_2 = var_80;
    
    return rax_2;
}
