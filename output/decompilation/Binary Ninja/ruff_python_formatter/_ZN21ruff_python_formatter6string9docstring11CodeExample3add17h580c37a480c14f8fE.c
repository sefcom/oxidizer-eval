
  int64_t ruff_python_formatter::string::docstring::CodeExample::add::h580c37a480c14f8f(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rcx = *arg1;
    int64_t rax = arg1[9];
    *arg1 = -0x7ffffffffffffffd;
    
    if (rcx != -0x7ffffffffffffffd)
    {
        int64_t rsi_1 = rcx ^ 0x8000000000000000;
        int64_t rdx = 1;
        
        if (rsi_1 < 3)
            rdx = rsi_1;
        
        int64_t var_130;
        int64_t var_138;
        int128_t var_128;
        int64_t result_1;
        int64_t result;
        int128_t zmm0_6;
        int128_t zmm1_6;
        
        if (!rdx)
        {
            int64_t var_c8_1 = arg1[5];
            int128_t var_d8_1 = *(arg1 + 0x18);
            int128_t var_e8 = *(arg1 + 8);
            ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line::h71949ff9db75b266(&var_138, &var_e8, arg2, arg3);
            
            if (var_138 != -0x8000000000000000)
            {
                int128_t zmm0_3 = var_138;
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x8000000000000000;
                result = result_1;
                arg1[5] = result;
                zmm0_6 = zmm0_3;
                zmm1_6 = var_128;
                label_724991:
                *(arg1 + 0x18) = zmm1_6;
                *(arg1 + 8) = zmm0_6;
                return result;
            }
        }
        else
        {
            int64_t var_168;
            int128_t var_108;
            
            if (rdx != 1)
            {
                int128_t var_38_1 = *(arg1 + 0x38);
                int128_t var_48_1 = *(arg1 + 0x28);
                int128_t var_58_1 = *(arg1 + 0x18);
                int128_t var_68 = *(arg1 + 8);
                ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line::had77d7be58f7b420(&var_138, &var_68, arg2, arg3);
                
                if (var_138 == -0x8000000000000000)
                    return core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_130);
                
                int128_t zmm0_5 = var_138;
                var_168 = result_1;
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x7ffffffffffffffe;
                zmm0_6 = zmm0_5;
                zmm1_6 = var_128;
                *(arg1 + 0x38) = var_108;
                *(arg1 + 0x28) = var_168;
                goto label_724991;
            }
            
            int64_t var_b8 = rcx;
            int128_t var_b0_1 = *(arg1 + 8);
            int128_t var_a0_1 = *(arg1 + 0x18);
            int128_t var_90_1 = *(arg1 + 0x28);
            int128_t var_80_1 = *(arg1 + 0x38);
            int64_t var_70_1 = rax;
            ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line::h8a8bdc1484158855(&var_138, &var_b8, arg2, arg3);
            
            if (var_138 != -0x8000000000000000)
            {
                int128_t zmm0_1 = var_138;
                var_168 = result_1;
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                int128_t var_f8;
                *(arg1 + 0x40) = var_f8;
                *(arg1 + 0x30) = var_108;
                *(arg1 + 0x20) = var_168;
                *(arg1 + 0x10) = var_128;
                *arg1 = zmm0_1;
                return result;
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_130);
    }
    
    /* tailcall */
    return ruff_python_formatter::string::docstring::CodeExample::add_start::h1189953d372e99f2(
        arg1, arg2, arg3);
}
