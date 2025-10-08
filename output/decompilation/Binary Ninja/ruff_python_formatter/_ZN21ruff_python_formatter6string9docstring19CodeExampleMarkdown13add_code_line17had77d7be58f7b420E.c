
  int64_t ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line::had77d7be58f7b420(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4)

{
    char* r13 = *arg3;
    int64_t rbp = arg3[1];
    int64_t result;
    int64_t var_80;
    
    if (!ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end::ha9cdf7b4e1783aa6(
        arg2, r13, rbp))
    {
        int64_t rdx_3 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace::h5a52efbb7ff02cf2(r13, rbp);
        char rax_2;
        
        if (rdx_3)
        {
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_80, r13, rbp);
            rax_2 = _$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_80, arg2 + 0x18);
        }
        
        if (rdx_3 && rax_2 < 0)
        {
            int128_t var_68;
            var_68 = arg2[1];
            int128_t var_78_3 = *arg2;
            var_80 = -0x7ffffffffffffffa;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_80);
            int128_t var_58;
            var_58 = arg3[4];
            int128_t var_68_3 = *(arg3 + 0x10);
            int128_t var_78_4 = *arg3;
            var_80 = -0x7ffffffffffffffd;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_80);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            ruff_python_formatter::string::docstring::CodeExampleMarkdown::push::hb519fb4818d6dac7(
                arg2, arg3);
            var_80 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_80);
            int128_t zmm0_3 = *arg2;
            int128_t zmm1_2 = arg2[1];
            int128_t zmm2_2 = arg2[2];
            *(arg1 + 0x30) = arg2[3];
            *(arg1 + 0x20) = zmm2_2;
            *(arg1 + 0x10) = zmm1_2;
            *arg1 = zmm0_3;
        }
    }
    else
    {
        int128_t var_48_1 = arg2[3];
        int128_t var_58_1 = arg2[2];
        int128_t var_68_1 = arg2[1];
        int128_t var_78_1 = *arg2;
        var_80 = -0x7ffffffffffffffe;
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(arg4, 
            &var_80);
        var_58_1 = arg3[4];
        int128_t var_68_2 = *(arg3 + 0x10);
        int128_t var_78_2 = *arg3;
        var_80 = -0x7ffffffffffffffd;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_80);
        *arg1 = -0x8000000000000000;
    }
    return result;
}
