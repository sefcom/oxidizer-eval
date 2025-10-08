
  fn uu_env::string_parser::StringParser::peek_char_at_pointer::h891d9700cdd1b6e8(arg1: *mut i32, arg2: *mut i64, arg3: i64) -> *mut i32

{
    let rdx: i64 = arg2[1];
    
    if arg3 > rdx
    {
        let mut var_60: *mut *mut [i8; 0xef] = &data_5104e8;
        let var_58: i64 = 1;
        let var_50: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    let mut var_30: ();
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4b20b73ec557817a(&var_30, 
        *arg2, rdx, arg3);
    let var_18: i64;
    
    if var_18 == 0
    {
        *arg1 = arg2[4];
        arg1[2] = 0;
    }
    else
    {
        let var_20: *mut i8;
        let rax_1: i32 =
            uu_env::native_int_str::get_char_from_native_int::h55c3dbad16c71881(*var_20);
        
        if rax_1 != 0x110000
        {
            *arg1 = rax_1;
        }
        else
        {
            *arg1 = 0xfffd;
        }
        
        arg1[2] = 2;
    }
    
    arg1
}
