
  fn uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rdx: i64 = arg1[1];
    let r14: i64 = *arg2;
    let mut var_80: *mut *mut [i8; 0xef];
    
    if r14 > rdx
    {
        var_80 = &data_5104e8;
        let var_78: i64 = 1;
        let var_70: i64 = 8;
        let var_68: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_80);
        /* no return */
    }
    
    let mut var_50: ();
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_50, 
        *arg1, rdx, r14);
    let rcx_2: i64 = arg2[1] - r14;
    let var_38: i64;
    
    if rcx_2 <= var_38
    {
        let var_40: i64;
        let mut result: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&result, 
            var_40, var_38, rcx_2);
        return result;
    }
    
    var_80 = &data_5104e8;
    let var_78_1: i64 = 1;
    let var_70_1: i64 = 8;
    let var_68_1: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_80);
    /* no return */
}
