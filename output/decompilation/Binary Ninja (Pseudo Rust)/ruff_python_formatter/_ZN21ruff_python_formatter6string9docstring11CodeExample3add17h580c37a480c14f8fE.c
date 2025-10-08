
  fn ruff_python_formatter::string::docstring::CodeExample::add::h580c37a480c14f8f(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let rcx: i64 = *arg1;
    let rax: i64 = arg1[9];
    *arg1 = -0x7ffffffffffffffd;
    
    if rcx != -0x7ffffffffffffffd
    {
        let rsi_1: i64 = rcx ^ 0x8000000000000000;
        let mut rdx: i64 = 1;
        
        if rsi_1 < 3
        {
            rdx = rsi_1;
        }
        
        let var_130: i64;
        let mut var_138: i64;
        let var_128: i128;
        let result_1: i64;
        let mut result: i64;
        let mut zmm0_6: i128;
        let mut zmm1_6: i128;
        
        if rdx == 0
        {
            let var_c8_1: i64 = arg1[5];
            let var_d8_1: i128 = *arg1.byte_offset(0x18);
            let mut var_e8: i128 = *arg1.byte_offset(8);
            ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line::h71949ff9db75b266(&var_138, &var_e8, arg2, arg3);
            
            if var_138 != -0x8000000000000000
            {
                let zmm0_3: i128 = var_138;
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x8000000000000000;
                result = result_1;
                arg1[5] = result;
                zmm0_6 = zmm0_3;
                zmm1_6 = var_128;
                'label_724991:
                *arg1.byte_offset(0x18) = zmm1_6;
                *arg1.byte_offset(8) = zmm0_6;
                return result;
            }
        }
        else
        {
            let mut var_168: i64;
            let var_108: i128;
            
            if rdx != 1
            {
                let var_38_1: i128 = *arg1.byte_offset(0x38);
                let var_48_1: i128 = *arg1.byte_offset(0x28);
                let var_58_1: i128 = *arg1.byte_offset(0x18);
                let mut var_68: i128 = *arg1.byte_offset(8);
                ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line::had77d7be58f7b420(&var_138, &var_68, arg2, arg3);
                
                if var_138 == -0x8000000000000000
                {
                    return core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_130);
                }
                
                let zmm0_5: i128 = var_138;
                var_168 = result_1;
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x7ffffffffffffffe;
                zmm0_6 = zmm0_5;
                zmm1_6 = var_128;
                *arg1.byte_offset(0x38) = var_108;
                *arg1.byte_offset(0x28) = var_168;
                goto 'label_724991;
            }
            
            let mut var_b8: i64 = rcx;
            let var_b0_1: i128 = *arg1.byte_offset(8);
            let var_a0_1: i128 = *arg1.byte_offset(0x18);
            let var_90_1: i128 = *arg1.byte_offset(0x28);
            let var_80_1: i128 = *arg1.byte_offset(0x38);
            let var_70_1: i64 = rax;
            ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line::h8a8bdc1484158855(&var_138, &var_b8, arg2, arg3);
            
            if var_138 != -0x8000000000000000
            {
                let zmm0_1: i128 = var_138;
                var_168 = result_1;
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                let var_f8: i128;
                *arg1.byte_offset(0x40) = var_f8;
                *arg1.byte_offset(0x30) = var_108;
                *arg1.byte_offset(0x20) = var_168;
                *arg1.byte_offset(0x10) = var_128;
                *arg1 = zmm0_1;
                return result;
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_130);
    }
    
    /* tailcall */
    ruff_python_formatter::string::docstring::CodeExample::add_start::h1189953d372e99f2(arg1, arg2, 
        arg3)
}
