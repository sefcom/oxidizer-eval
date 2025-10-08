
  fn uu_env::variable_parser::VariableParser::parse_variable::h7989a880208e7e71(arg1: *mut i32, arg2: *mut i64) -> *mut i32

{
    let r14: *mut i64 = *arg2;
    let mut var_38: i32;
    uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_38, r14);
    let var_28: i128;
    let var_18: i64;
    
    if var_38 != 0xc
    {
        'label_471f55:
        *arg1.byte_offset(0x20) = var_18;
        let zmm0_1: i128 = var_38;
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        let rax_1: i32 =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(r14);
        let var_34: i32;
        let var_30: i128;
        let mut rax_4: i64;
        let mut rcx_1: i64;
        let mut rdx_1: i64;
        let mut rsi_3: i64;
        
        if rax_1 == 0x7b
        {
            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_38, r14);
            
            if var_38 != 0xc
            {
                goto 'label_471f55;
            }
            
            let r12: i64;
            uu_env::variable_parser::VariableParser::parse_braced_variable_name::h5ed15cbe2773317a(
                &var_38, r14, r12);
            let rax_3: i32 = var_38;
            
            if rax_3 != 0xc
            {
                *arg1 = rax_3;
                arg1[1] = var_34;
                *arg1.byte_offset(8) = var_30;
                *arg1.byte_offset(0x18) = var_28;
            }
            else
            {
                rax_4 = var_30;
                rcx_1 = var_28;
                rdx_1 = *var_28[8];
                rsi_3 = var_18;
                'label_471f93:
                *arg1.byte_offset(8) = rax_4;
                *arg1.byte_offset(0x10) = rcx_1;
                *arg1.byte_offset(0x18) = rdx_1;
                *arg1.byte_offset(0x20) = rsi_3;
                *arg1 = 0xc;
            }
        }
        else if rax_1 != 0x110000
        {
            rsi_3 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hac50d30206de8963(&var_38, r14);
            let rax_7: i32 = var_38;
            
            if rax_7 == 0xc
            {
                rax_4 = var_30;
                rcx_1 = var_28;
                rdx_1 = 0;
                goto 'label_471f93;
            }
            
            *arg1.byte_offset(0x18) = var_28;
            *arg1 = rax_7;
            arg1[1] = var_34;
            *arg1.byte_offset(8) = var_30;
        }
        else
        {
            let rax_2: i64 = r14[4];
            *arg1 = 5;
            *arg1.byte_offset(8) = rax_2;
        }
    }
    arg1
}
