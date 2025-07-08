
  fn uu_env::string_parser::StringParser::peek_char_at_pointer::h13f3254ae1b02ce7(arg1: *mut i32, arg2: *mut i64, arg3: i64) -> *mut i32

{
    let rdx: i64 = arg2[1];
    
    if rdx < arg3
    {
        let mut var_60: *mut *mut [i8; 0xcd] = &data_548e80;
        let var_58: i64 = 1;
        let var_50: i64 = 8;
        let var_48: i128 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
        /* no return */
    }
    
    let mut var_30: ();
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_30, 
        *arg2, rdx, arg3);
    let var_18: i64;
    let mut rax_1: i32;
    
    if var_18 == 0
    {
        *arg1 = arg2[4];
        rax_1 = 0;
    }
    else
    {
        let var_20: *mut i8;
        rax_1 = uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*var_20);
        
        if rax_1 != 0x110000
        {
            *arg1 = rax_1;
        }
        else
        {
            *arg1 = 0xfffd;
        }
        
        rax_1 = 2;
    }
    
    arg1[2] = rax_1;
    arg1
}
