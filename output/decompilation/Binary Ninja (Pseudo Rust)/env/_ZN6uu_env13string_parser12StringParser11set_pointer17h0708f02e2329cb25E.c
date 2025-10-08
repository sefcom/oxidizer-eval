
  fn uu_env::string_parser::StringParser::set_pointer::h0708f02e2329cb25(arg1: *mut i64, arg2: i64) -> i512

{
    arg1[4] = arg2;
    let rdx: i64 = arg1[1];
    
    if arg2 <= rdx
    {
        let mut var_28: ();
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_28, 
            *arg1, rdx, arg2);
        let result: i128;
        *arg1.byte_offset(0x10) = result;
        return result;
    }
    
    let mut var_58: *mut *mut [i8; 0xef] = &data_5104e8;
    let var_50: i64 = 1;
    let var_48: i64 = 8;
    let var_40: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_58);
    /* no return */
}
