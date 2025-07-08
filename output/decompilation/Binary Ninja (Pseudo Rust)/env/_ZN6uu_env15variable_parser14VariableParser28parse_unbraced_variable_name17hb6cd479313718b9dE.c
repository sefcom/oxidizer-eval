
  fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let r12: i64 = arg2[4];
    let mut var_48: i32;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(&var_48, 
        arg2);
    let mut result: i64;
    
    if var_48 != 8
    {
        'label_4d5554:
        let result_1: i64;
        result = result_1;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = var_48;
        let var_38: i128;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        let mut i: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
        
        if i != 0x110000
        {
            while i == 0x5f || i - 0x30 < 0xa || (i & 0x1fffdf) - 0x41 <= 0x19
            {
                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_48, arg2);
                
                if var_48 != 8
                {
                    goto 'label_4d5554;
                }
                
                i = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(
                    arg2);
                
                if i == 0x110000
                {
                    break;
                }
            }
        }
        
        let rax_3: i64 = arg2[4];
        
        if rax_3 != r12
        {
            var_48 = r12;
            let var_40_1: i64 = rax_3;
            let mut rdx_1: i64;
            result =
                uu_env::string_parser::StringParser::substring::h93033379edd1d12f(arg2, &var_48);
            *arg1.byte_offset(8) = result;
            *arg1.byte_offset(0x10) = rdx_1;
            *arg1 = 8;
        }
        else
        {
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], "Missing variable namemissing var…", 0x15);
            *arg1 = 4;
            *arg1.byte_offset(8) = r12;
        }
    }
    
    result
}
