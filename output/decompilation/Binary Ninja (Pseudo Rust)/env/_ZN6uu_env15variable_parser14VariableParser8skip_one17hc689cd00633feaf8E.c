
  fn uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(arg1: *mut i32, arg2: *mut i64) -> *mut i64

{
    let mut var_20: i32;
    let rax: *mut i64 =
        uu_env::string_parser::StringParser::consume_chunk::h727b81068f6a78cb(&var_20, arg2);
    
    if var_20 != 1
    {
        *arg1 = 0xc;
        return rax;
    }
    
    let var_18: i64;
    *arg1.byte_offset(8) = var_18;
    *arg1.byte_offset(0x10) = var_18;
    let var_10: i8;
    arg1[6] = var_10;
    *arg1 = 0xb;
    var_18
}
