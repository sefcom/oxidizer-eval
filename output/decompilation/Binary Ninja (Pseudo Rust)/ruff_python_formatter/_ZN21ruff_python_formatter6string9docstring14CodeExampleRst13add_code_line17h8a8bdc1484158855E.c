
  fn ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line::h8a8bdc1484158855(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut var_b8: i128;
    
    if arg2[3] == 5
    {
        let var_78_1: i128 = arg2[4];
        let var_88_1: i128 = arg2[3];
        let var_98_1: i128 = arg2[2];
        let var_a8_1: i128 = arg2[1];
        var_b8 = *arg2;
        return ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line::ha201d189871b1fd9(arg1, &var_b8, arg3, arg4);
    }
    
    let var_38_1: i64 = arg2[4];
    let mut var_48: i128 = arg2[3];
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_b8, *arg3, 
        arg3[1]);
    let var_a0: i64;
    let mut result: i64;
    
    if var_a0 == 0
    {
        let rsi_7: *mut i8 = arg3[2];
        
        if rsi_7 == 0
        {
            'label_725619:
            let var_78_2: i128 = arg2[4];
            let var_88_2: i128 = arg2[3];
            let var_98_2: i128 = arg2[2];
            let var_a8_2: i128 = arg2[1];
            var_b8 = *arg2;
            result = ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action::h57ee3deea7ce478b(&var_b8, arg4);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(
                &var_b8, rsi_7, arg3[3]);
            
            if var_a0 != 0
            {
                ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                    &var_b8, var_b8, *var_b8[8]);
                
                if _$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_b8, arg2.byte_offset(0x18)) <= 0
                {
                    goto 'label_725619;
                }
            }
            
            ruff_python_formatter::string::docstring::CodeExampleRst::push::hb1022fab31bb617c(arg2, 
                arg3);
            var_b8 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_b8);
            'label_7255ae:
            *arg1.byte_offset(0x40) = arg2[4];
            let zmm0_4: i128 = *arg2;
            let zmm1_2: i128 = arg2[1];
            let zmm2_2: i128 = arg2[2];
            *arg1.byte_offset(0x30) = arg2[3];
            *arg1.byte_offset(0x20) = zmm2_2;
            *arg1.byte_offset(0x10) = zmm1_2;
            *arg1 = zmm0_4;
        }
    }
    else
    {
        let mut var_60: i128;
        ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(&var_60, 
            var_b8, *var_b8[8]);
        
        if _$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_60, arg2.byte_offset(0x18)) > 0
        {
            if _$LT$ruff_python_formatter..string..docstring..Indentation$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h8297bea3dba54416(&var_60, &var_48) < 0
            {
                let var_50: i64;
                arg2[4] = var_50;
                arg2[3] = var_60;
            }
            
            ruff_python_formatter::string::docstring::CodeExampleRst::push::hb1022fab31bb617c(arg2, 
                arg3);
            var_b8 = -0x7ffffffffffffffc;
            result =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
                arg4, &var_b8);
            goto 'label_7255ae;
        }
        
        let var_a0_1: i64 = arg2[1];
        var_b8 = *arg2;
        var_b8 = -0x7ffffffffffffffa;
        result = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(
            arg4, &var_b8);
        *arg1 = -0x8000000000000000;
    }
    
    result
}
