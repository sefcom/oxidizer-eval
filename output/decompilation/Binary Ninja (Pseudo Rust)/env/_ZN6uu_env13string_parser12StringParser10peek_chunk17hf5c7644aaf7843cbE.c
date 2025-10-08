
  fn uu_env::string_parser::StringParser::peek_chunk::hf5c7644aaf7843cb(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut var_28: i8;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::h90aefca5fb8ee726(&var_28, arg2, 
        arg2[4]);
    let mut rax: i64;
    
    if (var_28 & 1) == 0
    {
        let var_20: i128;
        *arg1.byte_offset(8) = var_20;
        rax = 1;
    }
    else
    {
        rax = 0;
    }
    
    *arg1 = rax;
    arg1
}
