
  int64_t ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line::h8a8bdc1484158855(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int128_t var_b8;
    
    if (arg2[3] == 5)
    {
        int128_t var_78_1 = arg2[4];
        int128_t var_88_1 = arg2[3];
        int128_t var_98_1 = arg2[2];
        int128_t var_a8_1 = arg2[1];
        var_b8 = *arg2;
        return ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line::ha201d189871b1fd9(arg1, &var_b8, arg3, arg4);
    }
    
    int64_t var_38_1 = arg2[4];
    int128_t var_48 = arg2[3];
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_b8, *arg3, 
        arg3[1]);
    int64_t var_a0;
    int64_t result;
    
    if (!var_a0)
    {
        char* rsi_7 = arg3[2];
        
        if (!rsi_7)
        {
            label_725619:
            int128_t var_78_2 = arg2[4];
            int128_t var_88_2 = arg2[3];
            int128_t var_98_2 = arg2[2];
            int128_t var_a8_2 = arg2[1];
            var_b8 = *arg2;
            result = ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action::h57ee3deea7ce478b(&var_b8, arg4);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(
                &var_b8, rsi_7, arg3[3]);
            
            if (var_a0)
            {
                ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                    &var_b8, var_b8, *var_b8[8]);
                
                if (_$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_b8, arg2 + 0x18) <= 0)
                    goto label_725619;
            }
            
            ruff_python_formatter::string::docstring::CodeExampleRst::push::hb1022fab31bb617c(arg2, 
                arg3);
            var_b8 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_b8);
            label_7255ae:
            *(arg1 + 0x40) = arg2[4];
            int128_t zmm0_4 = *arg2;
            int128_t zmm1_2 = arg2[1];
            int128_t zmm2_2 = arg2[2];
            *(arg1 + 0x30) = arg2[3];
            *(arg1 + 0x20) = zmm2_2;
            *(arg1 + 0x10) = zmm1_2;
            *arg1 = zmm0_4;
        }
    }
    else
    {
        int128_t var_60;
        ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(&var_60, 
            var_b8, *var_b8[8]);
        
        if (_$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_60, arg2 + 0x18) > 0)
        {
            if (_$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_60, &var_48) < 0)
            {
                int64_t var_50;
                arg2[4] = var_50;
                arg2[3] = var_60;
            }
            
            ruff_python_formatter::string::docstring::CodeExampleRst::push::hb1022fab31bb617c(arg2, 
                arg3);
            var_b8 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_b8);
            goto label_7255ae;
        }
        
        int64_t var_a0_1 = arg2[1];
        var_b8 = *arg2;
        var_b8 = -0x7ffffffffffffffa;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_b8);
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
