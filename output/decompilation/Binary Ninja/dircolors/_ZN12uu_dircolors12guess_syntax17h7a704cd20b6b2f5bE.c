
  uint64_t uu_dircolors::guess_syntax::h7a704cd20b6b2f5b()

{
    char var_30;
    std::env::var::h75e6160dc4112e51(&var_30);
    int64_t rbx;
    rbx = 3;
    int64_t var_18;
    
    if (!(var_30 & 1) && var_18)
    {
        int64_t var_20;
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::file_name::h6d40d88bf3fb287a(var_20, var_18);
        char rax_2;
        char rax_3;
        
        if (rax_1)
        {
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(rax_1, rdx_1, "cshsetenv LS_COLORS 'LS_COLORS='…", 3);
            
            if (!rax_2)
                rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(rax_1, rdx_1, &data_41a428[0x38], 4);
        }
        
        if (!rax_1 || (!rax_2 && !rax_3))
            rbx = 0;
        else
            rbx = 1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h43618cece7496e48(&var_30);
    return rbx;
}
