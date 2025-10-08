
  int64_t ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line::ha201d189871b1fd9(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    if (arg2[6] != 5)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: self.min_inden…");
        /* no return */
    }
    
    int64_t var_98;
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_98, *arg3, 
        arg3[1]);
    int64_t var_80;
    int64_t result;
    
    if (!var_80)
    {
        int64_t var_70_2 = arg3[4];
        var_80 = *(arg3 + 0x10);
        int128_t var_90_2 = *arg3;
        var_98 = -0x7ffffffffffffffd;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_98);
        label_7257e3:
        *(arg1 + 0x40) = *(arg2 + 0x40);
        int128_t zmm0_2 = *arg2;
        int128_t zmm1_3 = *(arg2 + 0x10);
        int128_t zmm2_1 = *(arg2 + 0x20);
        *(arg1 + 0x30) = *(arg2 + 0x30);
        *(arg1 + 0x20) = zmm2_1;
        *(arg1 + 0x10) = zmm1_3;
        *arg1 = zmm0_2;
    }
    else
    {
        int64_t r13_1 = var_98;
        int128_t var_90;
        char rax_1;
        
        if (arg2[9])
            rax_1 = ruff_python_formatter::string::docstring::is_rst_option::h85d4d44a3db9c66f(
                *var_90[8], var_80);
        
        if (arg2[9] && rax_1)
        {
            int64_t var_70_1 = arg3[4];
            var_80 = *(arg3 + 0x10);
            int128_t var_90_1 = *arg3;
            var_98 = -0x7ffffffffffffffd;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_98);
            goto label_7257e3;
        }
        
        int128_t var_48;
        ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(&var_48, 
            r13_1, var_90);
        
        if (_$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_48, &arg2[3]) > 0)
        {
            int64_t var_38;
            arg2[8] = var_38;
            *(arg2 + 0x30) = var_48;
            ruff_python_formatter::string::docstring::CodeExampleRst::push::hb1022fab31bb617c(arg2, 
                arg3);
            var_98 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_98);
            goto label_7257e3;
        }
        
        int64_t var_80_1 = arg2[2];
        int128_t var_90_3 = *arg2;
        var_98 = -0x7ffffffffffffffa;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_98);
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
