
  fn uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(arg1: *mut i32, arg2: *mut i64) -> *mut i32

{
    let r14: *mut i64 = *arg2;
    let mut var_38: i32;
    uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_38, r14);
    let var_28: i128;
    let var_18: i64;
    
    if var_38 != 8
    {
        'label_4d563e:
        *arg1.byte_offset(0x20) = var_18;
        let zmm0_1: i128 = var_38;
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        let rax_1: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(r14);
        let var_34: i32;
        let var_30: i128;
        let mut rax_3: i64;
        let mut rcx_1: i64;
        let mut rdx_1: i64;
        let mut rsi_3: i64;
        
        if rax_1 == 0x7b
        {
            uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_38, r14);
            
            if var_38 != 8
            {
                goto 'label_4d563e;
            }
            
            let r12: i64;
            uu_env::variable_parser::VariableParser::parse_braced_variable_name::h06c067d5ba361416(
                &var_38, r14, r12);
            let rax_2: i32 = var_38;
            
            if rax_2 != 8
            {
                *arg1 = rax_2;
                arg1[1] = var_34;
                *arg1.byte_offset(8) = var_30;
                *arg1.byte_offset(0x18) = var_28;
            }
            else
            {
                rax_3 = var_30;
                rcx_1 = var_28;
                rdx_1 = *var_28[8];
                rsi_3 = var_18;
                'label_4d567c:
                *arg1.byte_offset(8) = rax_3;
                *arg1.byte_offset(0x10) = rcx_1;
                *arg1.byte_offset(0x18) = rdx_1;
                *arg1.byte_offset(0x20) = rsi_3;
                *arg1 = 8;
            }
        }
        else if rax_1 != 0x110000
        {
            rsi_3 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(&var_38, r14);
            let rax_6: i32 = var_38;
            
            if rax_6 == 8
            {
                rax_3 = var_30;
                rcx_1 = var_28;
                rdx_1 = 0;
                goto 'label_4d567c;
            }
            
            *arg1.byte_offset(0x18) = var_28;
            *arg1 = rax_6;
            arg1[1] = var_34;
            *arg1.byte_offset(8) = var_30;
        }
        else
        {
            let r14_1: i64 = r14[4];
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], "missing variable name", 0x15);
            *arg1 = 4;
            *arg1.byte_offset(8) = r14_1;
        }
    }
    arg1
}
