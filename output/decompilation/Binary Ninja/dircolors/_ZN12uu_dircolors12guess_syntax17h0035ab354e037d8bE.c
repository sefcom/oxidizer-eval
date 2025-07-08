
  uint64_t uu_dircolors::guess_syntax::h0035ab354e037d8b()

{
    int64_t var_30;
    std::env::var::hf348904178e4c0b9(&var_30, "SHELLcshLS_COLORS='setenv LS_COL…");
    int64_t rbx;
    rbx = 3;
    int64_t var_18;
    
    if (!var_30 && var_18)
    {
        int64_t var_20;
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_20, var_18);
        char rax_3;
        char rax_4;
        
        if (rax_2)
        {
            rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(rax_2, rdx_1, "cshLS_COLORS='setenv LS_COLORS '…", 3);
            
            if (!rax_3)
                rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(rax_2, rdx_1, &data_416d44[0x34], 4);
        }
        
        if (!rax_2 || (!rax_3 && !rax_4))
            rbx = 0;
        else
            rbx = 1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hc131f7e15152f287(&var_30);
    return rbx;
}
