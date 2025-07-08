
  fn uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_20: i64;
    uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&var_20, arg2);
    let mut result: i32;
    
    if var_20 == 0
    {
        result = 8;
    }
    else
    {
        let var_18: i64;
        *arg1.byte_offset(8) = var_18;
        *arg1.byte_offset(0x10) = var_18;
        let var_10: i8;
        arg1[6] = var_10;
        result = 5;
    }
    
    *arg1 = result;
    result
}
