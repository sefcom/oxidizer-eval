
  fn uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r15: i64 = arg2[4];
    let mut var_48: i64;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(&var_48, arg2, 
        r15);
    let mut rax: i64;
    
    if var_48 == 0
    {
        let var_37: i32;
        *arg1.byte_offset(0x14) = var_37;
        *arg1.byte_offset(0x11) = var_37;
        let var_30: i64;
        uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(arg2, r15 + var_30);
        rax = 0;
    }
    else
    {
        rax = 1;
    }
    
    let var_40: i64;
    arg1[1] = var_40;
    let var_38: i8;
    arg1[2] = var_38;
    *arg1 = rax;
    arg1
}
