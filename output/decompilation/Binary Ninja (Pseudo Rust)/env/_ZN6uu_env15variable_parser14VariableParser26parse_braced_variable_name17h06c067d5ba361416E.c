
  fn uu_env::variable_parser::VariableParser::parse_braced_variable_name::h06c067d5ba361416(arg1: *mut i32, arg2: *mut i64, arg3: i64 @ r12) -> *mut i128

{
    let var_28: i64 = arg3;
    let r13: i64 = arg2[4];
    let mut result_1: i32;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(
        &result_1, arg2);
    let mut result: *mut i128;
    let mut var_68: i128;
    let result_2: *mut i128;
    
    if result_1 != 8
    {
        'label_4d5324:
        result = result_2;
        *arg1.byte_offset(0x20) = result;
        let zmm0_1: i128 = result_1;
        *arg1.byte_offset(0x10) = var_68;
        *arg1 = zmm0_1;
    }
    else
    {
        let mut rax_1: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
        let mut r14_1: i64;
        let mut rdx_1: u64;
        let mut rsi_1: *mut c_void;
        let mut rdi_4: *mut i64;
        
        if rax_1 == 0x110000
        {
            'label_4d52ff:
            r14_1 = arg2[4];
            rdi_4 = &arg1[4];
            rsi_1 = "Missing closing braceMissing clo…";
            rdx_1 = 0x15;
            'label_4d5313:
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                rdi_4, rsi_1, rdx_1);
        }
        else
        {
            loop
            {
                if rax_1 <= 0x7f && rax_1 - 0x30 >= 0xa && (rax_1 & 0x5f) - 0x41 > 0x19
                    && rax_1 != 0x5f
                {
                    let mut rbp_1: i64;
                    let mut r15_1: i64;
                    
                    if rax_1 == 0x3a
                    {
                        rbp_1 = arg2[4];
                        
                        do
                        {
                            let rax_2: i32 = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
                            
                            if rax_2 == 0x7d
                            {
                                let r15_2: i64 = arg2[4];
                                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&result_1, arg2);
                                result = result_1;
                                
                                if result != 8
                                {
                                    goto 'label_4d5492;
                                }
                                
                                result_1 = rbp_1 + 1;
                                let var_70_2: i64 = r15_2;
                                let mut rax_4: i64;
                                let mut rdx_2: i64;
                                rax_4 = uu_env::string_parser::StringParser::substring::h93033379edd1d12f(arg2, &result_1);
                                r15_1 = rax_4;
                                arg3 = rdx_2;
                                goto 'label_4d545e;
                            }
                            
                            if rax_2 == 0x110000
                            {
                                r14_1 = arg2[4];
                                rdi_4 = &arg1[4];
                                rsi_1 = "Missing closing brace after defa…";
                                rdx_1 = 0x29;
                                goto 'label_4d5313;
                            }
                            
                            uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(
                                &result_1, arg2);
                            result = result_1;
                        } while result == 8;
                    }
                    else
                    {
                        if rax_1 != 0x7d
                        {
                            let mut var_44: i32 = rax_1;
                            r14_1 = arg2[4];
                            let mut var_40: *mut i32 = &var_44;
                            let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                            result_1 = &data_548e48;
                            let var_70_1: i64 = 2;
                            let var_58: i64 = 0;
                            var_68 = &var_40;
                            *var_68[8] = 1;
                            result = core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(
                                &arg1[4], &result_1);
                            break;
                        }
                        
                        rbp_1 = arg2[4];
                        uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(
                            &result_1, arg2);
                        result = result_1;
                        
                        if result == 8
                        {
                            r15_1 = 0;
                            'label_4d545e:
                            result_1 = r13;
                            let var_70_3: i64 = rbp_1;
                            let mut rdx_3: i64;
                            result =
                                uu_env::string_parser::StringParser::substring::h93033379edd1d12f(
                                arg2, &result_1);
                            *arg1.byte_offset(8) = result;
                            *arg1.byte_offset(0x10) = rdx_3;
                            *arg1.byte_offset(0x18) = r15_1;
                            *arg1.byte_offset(0x20) = arg3;
                            *arg1 = 8;
                            return result;
                        }
                    }
                    'label_4d5492:
                    arg1[9] = *result_2[4];
                    *arg1.byte_offset(0x14) = var_68;
                    let var_74: i128;
                    *arg1.byte_offset(4) = var_74;
                    *arg1 = result;
                    return result;
                }
                
                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&result_1, 
                    arg2);
                
                if result_1 != 8
                {
                    goto 'label_4d5324;
                }
                
                rax_1 =
                    uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(
                    arg2);
                
                if rax_1 == 0x110000
                {
                    goto 'label_4d52ff;
                }
            }
        }
        *arg1 = 4;
        *arg1.byte_offset(8) = r14_1;
    }
    result
}
