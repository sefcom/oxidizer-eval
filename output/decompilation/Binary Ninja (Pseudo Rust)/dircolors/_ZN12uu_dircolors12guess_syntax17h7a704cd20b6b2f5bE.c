
  fn uu_dircolors::guess_syntax::h7a704cd20b6b2f5b() -> u64

{
    let mut var_30: i8;
    std::env::var::h75e6160dc4112e51(&var_30);
    let mut rbx: i64;
    rbx = 3;
    let var_18: i64;
    
    if (var_30 & 1) == 0 && var_18 != 0
    {
        let var_20: i64;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = std::path::Path::file_name::h6d40d88bf3fb287a(var_20, var_18);
        let mut rax_2: i8;
        let mut rax_3: i8;
        
        if rax_1 != 0
        {
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(rax_1, rdx_1, "cshsetenv LS_COLORS 'LS_COLORS='…", 3);
            
            if rax_2 == 0
            {
                rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(rax_1, rdx_1, &data_41a428[0x38], 4);
            }
        }
        
        if rax_1 == 0 || (rax_2 == 0 && rax_3 == 0)
        {
            rbx = 0;
        }
        else
        {
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h43618cece7496e48(&var_30);
    rbx
}
