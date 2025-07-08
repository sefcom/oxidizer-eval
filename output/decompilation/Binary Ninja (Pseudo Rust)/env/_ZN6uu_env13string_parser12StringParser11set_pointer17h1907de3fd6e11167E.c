
  fn uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(arg1: *mut i64, arg2: i64) -> i512

{
    arg1[4] = arg2;
    let rdx: i64 = arg1[1];
    
    if rdx >= arg2
    {
        let mut var_28: ();
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&var_28, 
            *arg1, rdx, arg2);
        let result: i128;
        *arg1.byte_offset(0x10) = result;
        return result;
    }
    
    let mut var_58: *mut *mut [i8; 0xcd] = &data_548e80;
    let var_50: i64 = 1;
    let var_48: i64 = 8;
    let var_40: i128 = {0};
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_58);
    /* no return */
}
