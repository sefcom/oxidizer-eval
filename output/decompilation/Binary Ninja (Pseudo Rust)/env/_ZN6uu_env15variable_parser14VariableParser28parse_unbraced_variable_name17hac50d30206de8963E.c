
  fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hac50d30206de8963(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let r12: i64 = arg2[4];
    let mut var_48: i32;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(&var_48, 
        arg2);
    let mut result: i64;
    
    if var_48 != 0xc
    {
        'label_471e7f:
        let result_2: i64;
        result = result_2;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = var_48;
        let var_38: i128;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        let mut i: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
        
        if i != 0x110000
        {
            while i == 0x5f || i - 0x30 < 0xa || (i & 0x1fffdf) - 0x41 < 0x1a
            {
                uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_48, arg2);
                
                if var_48 != 0xc
                {
                    goto 'label_471e7f;
                }
                
                i = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(
                    arg2);
                
                if i == 0x110000
                {
                    break;
                }
            }
        }
        
        result = arg2[4];
        
        if result != r12
        {
            var_48 = r12;
            let result_1: i64 = result;
            let mut rdx_1: i64;
            result =
                uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(arg2, &var_48);
            *arg1.byte_offset(8) = result;
            *arg1.byte_offset(0x10) = rdx_1;
            *arg1 = 0xc;
        }
        else
        {
            *arg1 = 5;
            *arg1.byte_offset(8) = r12;
        }
    }
    
    result
}
