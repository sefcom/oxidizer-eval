
  fn uu_dircolors::guess_syntax::h0035ab354e037d8b() -> u64

{
    let mut var_30: i64;
    std::env::var::hf348904178e4c0b9(&var_30, "SHELLcshLS_COLORS='setenv LS_COL…");
    let mut rbx: i64;
    rbx = 3;
    let var_18: i64;
    
    if var_30 == 0 && var_18 != 0
    {
        let var_20: i64;
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_20, var_18);
        let mut rax_3: i8;
        let mut rax_4: i8;
        
        if rax_2 != 0
        {
            rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(rax_2, rdx_1, "cshLS_COLORS='setenv LS_COLORS '…", 3);
            
            if rax_3 == 0
            {
                rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4d9a6183eb8da898(rax_2, rdx_1, &data_416d44[0x34], 4);
            }
        }
        
        if rax_2 == 0 || (rax_3 == 0 && rax_4 == 0)
        {
            rbx = 0;
        }
        else
        {
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hc131f7e15152f287(&var_30);
    rbx
}
