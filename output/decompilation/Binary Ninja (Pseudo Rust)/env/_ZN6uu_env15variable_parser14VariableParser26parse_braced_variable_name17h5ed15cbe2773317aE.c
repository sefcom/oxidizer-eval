
  fn uu_env::variable_parser::VariableParser::parse_braced_variable_name::h5ed15cbe2773317a(arg1: *mut i32, arg2: *mut i64, arg3: i64 @ r12) -> u64

{
    let var_28: i64 = arg3;
    let r13: i64 = arg2[4];
    let mut result_1: i32;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(
        &result_1, arg2);
    let mut result: u64;
    let var_60: i128;
    let result_2: u64;
    
    if result_1 != 0xc
    {
        'label_471c62:
        result = result_2;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = result_1;
        *arg1.byte_offset(0x10) = var_60;
        *arg1 = zmm0_1;
    }
    else
    {
        for let mut i: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2); 
            i != 0x110000; 
            i = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2)
        {
            if i < 0x80 && i - 0x30 >= 0xa && (i & 0x5f) - 0x41 > 0x19 && i != 0x5f
            {
                let mut var_6c: i128;
                let mut rbp_1: i64;
                let mut r15_1: i64;
                
                if i == 0x3a
                {
                    rbp_1 = arg2[4];
                    
                    do
                    {
                        let rax_1: i32 = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
                        
                        if rax_1 == 0x7d
                        {
                            let r15_2: i64 = arg2[4];
                            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(
                                &result_1, arg2);
                            result = result_1;
                            
                            if result != 0xc
                            {
                                goto 'label_471dc9;
                            }
                            
                            result_1 = rbp_1 + 1;
                            *var_6c[4] = r15_2;
                            let mut rax_4: i64;
                            let mut rdx_2: i64;
                            rax_4 =
                                uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(
                                arg2, &result_1);
                            r15_1 = rax_4;
                            arg3 = rdx_2;
                            goto 'label_471d92;
                        }
                        
                        if rax_1 == 0x110000
                        {
                            result = arg2[4];
                            *arg1 = 6;
                            *arg1.byte_offset(8) = result;
                            return result;
                        }
                        
                        uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(
                            &result_1, arg2);
                        result = result_1;
                    } while result == 0xc;
                    
                    goto 'label_471dc9;
                }
                
                if i != 0x7d
                {
                    let r14_1: i64 = arg2[4];
                    result_1 = 0;
                    let mut rax_2: *mut i8;
                    let mut rdx_1: u64;
                    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(i, &result_1);
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_48, rax_2, rdx_1);
                    *arg1 = 8;
                    *arg1.byte_offset(8) = r14_1;
                    *arg1.byte_offset(0x10) = var_48;
                    let result_3: u64;
                    result = result_3;
                    *arg1.byte_offset(0x20) = result;
                }
                else
                {
                    rbp_1 = arg2[4];
                    uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&result_1, 
                        arg2);
                    result = result_1;
                    
                    if result != 0xc
                    {
                        'label_471dc9:
                        arg1[9] = *result_2[4];
                        *arg1.byte_offset(0x14) = var_60;
                        *arg1.byte_offset(4) = var_6c;
                        *arg1 = result;
                    }
                    else
                    {
                        r15_1 = 0;
                        'label_471d92:
                        result_1 = r13;
                        *var_6c[4] = rbp_1;
                        let mut rdx_3: i64;
                        result = uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(
                            arg2, &result_1);
                        *arg1.byte_offset(8) = result;
                        *arg1.byte_offset(0x10) = rdx_3;
                        *arg1.byte_offset(0x18) = r15_1;
                        *arg1.byte_offset(0x20) = arg3;
                        *arg1 = 0xc;
                    }
                }
                
                return result;
            }
            
            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&result_1, arg2);
            
            if result_1 != 0xc
            {
                goto 'label_471c62;
            }
        }
        
        result = arg2[4];
        *arg1 = 4;
        *arg1.byte_offset(8) = result;
    }
    result
}
