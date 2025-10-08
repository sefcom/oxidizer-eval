
  fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line::had77d7be58f7b420(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let r13: *mut i8 = *arg3;
    let rbp: i64 = arg3[1];
    let mut result: i64;
    let mut var_80: i64;
    
    if ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end::ha9cdf7b4e1783aa6(
        arg2, r13, rbp) == 0
    {
        let rdx_3: i64 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace::h5a52efbb7ff02cf2(r13, rbp);
        let mut rax_2: i8;
        
        if rdx_3 != 0
        {
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_80, r13, rbp);
            rax_2 = _$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_80, arg2.byte_offset(0x18));
        }
        
        if rdx_3 != 0 && rax_2 < 0
        {
            let mut var_68: i128;
            var_68 = arg2[1];
            let var_78_3: i128 = *arg2;
            var_80 = -0x7ffffffffffffffa;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_80);
            let mut var_58: i128;
            var_58 = arg3[4];
            let var_68_3: i128 = *arg3.byte_offset(0x10);
            let var_78_4: i128 = *arg3;
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
            let zmm0_3: i128 = *arg2;
            let zmm1_2: i128 = arg2[1];
            let zmm2_2: i128 = arg2[2];
            *arg1.byte_offset(0x30) = arg2[3];
            *arg1.byte_offset(0x20) = zmm2_2;
            *arg1.byte_offset(0x10) = zmm1_2;
            *arg1 = zmm0_3;
        }
    }
    else
    {
        let var_48_1: i128 = arg2[3];
        let mut var_58_1: i128 = arg2[2];
        let var_68_1: i128 = arg2[1];
        let var_78_1: i128 = *arg2;
        var_80 = -0x7ffffffffffffffe;
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(arg4, 
            &var_80);
        var_58_1 = arg3[4];
        let var_68_2: i128 = *arg3.byte_offset(0x10);
        let var_78_2: i128 = *arg3;
        var_80 = -0x7ffffffffffffffd;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_80);
        *arg1 = -0x8000000000000000;
    }
    result
}
