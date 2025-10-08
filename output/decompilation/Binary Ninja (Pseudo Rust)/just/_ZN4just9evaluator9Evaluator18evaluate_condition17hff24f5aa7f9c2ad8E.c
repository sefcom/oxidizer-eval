
  fn just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(arg1: *mut i8, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut result_1: i8;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, *arg3);
    let result: i8 = result_1;
    let mut var_15f: i128;
    let mut var_140: i128;
    let var_130: i128;
    let var_120: i128;
    let var_110: i128;
    let var_100: i64;
    let mut var_d8: i128;
    
    if result != 0x38
    {
        var_d8 = var_15f;
        *arg1.byte_offset(0x60) = var_100;
        *arg1.byte_offset(0x50) = var_110;
        *arg1.byte_offset(0x40) = var_120;
        *arg1.byte_offset(0x30) = var_130;
        *arg1.byte_offset(0x20) = var_140;
        *arg1.byte_offset(0x10) = var_15f;
        *arg1.byte_offset(1) = var_d8;
        *arg1 = result;
        return result;
    }
    
    let mut var_198: i128 = var_15f;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, arg3[1]);
    let result_2: i8 = result_1;
    
    if result_2 != 0x38
    {
        var_d8 = var_15f;
        *arg1.byte_offset(0x60) = var_100;
        *arg1.byte_offset(0x50) = var_110;
        *arg1.byte_offset(0x40) = var_120;
        *arg1.byte_offset(0x30) = var_130;
        *arg1.byte_offset(0x20) = var_140;
        *arg1.byte_offset(0x10) = var_15f;
        *arg1.byte_offset(1) = var_d8;
        *arg1 = result_2;
    }
    else
    {
        let mut var_178: i128 = var_15f;
        let var_148: u64;
        let mut var_f8: i128;
        let mut var_c9: i128;
        let mut r14_1: i8;
        
        match arg3[2]
        {
            0 =>
            {
                arg1[1] = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(*var_198[8], var_148, *var_178[8], var_148);
                *arg1 = 0x38;
            }
            1 =>
            {
                r14_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(*var_198[8], var_148, *var_178[8], var_148);
                'label_666a67:
                arg1[1] = r14_1 ^ 1;
                *arg1 = 0x38;
            }
            2 =>
            {
                let mut var_58: i64;
                regex::regex::string::Regex::new::h678b3567117d3be5(&var_58, *var_178[8]);
                let var_50: i128;
                
                if var_58 == 0
                {
                    let var_87: i64;
                    *arg1.byte_offset(0x20) = var_87;
                    *arg1.byte_offset(0x11) = *var_50[9];
                    *arg1.byte_offset(0x15) = *var_50[0xd];
                    arg1[0x17] = *var_50[0xf];
                    let var_40: i64;
                    *arg1.byte_offset(0x18) = var_40;
                    arg1[0x20] = var_87;
                    let var_a6: i128;
                    *arg1.byte_offset(1) = var_a6;
                    *arg1 = 0x27;
                }
                else
                {
                    let var_e8_1: i128 = var_50;
                    var_f8 = var_58;
                    result_1 = 0;
                    *var_15f[7] = *var_198[8];
                    *var_15f[0xf] = var_148;
                    let var_148_1: i64 = 0;
                    var_140 = var_148;
                    *var_140[8] = 1;
                    regex_automata::util::search::Input::set_span::h60a38042080ed652(&result_1);
                    let var_b8_1: i128 = var_140;
                    var_c9 = var_15f;
                    var_d8 = result_1;
                    regex_automata::meta::regex::Regex::search_half::h19d3b64e04d17d62(&result_1, 
                        var_f8, *var_f8[8], &var_d8);
                    r14_1 = result_1;
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h8a6235b02cb1e98d(
                        &var_f8);
                    arg1[1] = r14_1;
                    *arg1 = 0x38;
                }
            }
            3 =>
            {
                let mut var_38: i64;
                regex::regex::string::Regex::new::h678b3567117d3be5(&var_38, *var_178[8]);
                let var_30: i128;
                
                if var_38 != 0
                {
                    let var_e8_2: i128 = var_30;
                    var_f8 = var_38;
                    result_1 = 0;
                    *var_15f[7] = *var_198[8];
                    *var_15f[0xf] = var_148;
                    let var_148_2: i64 = 0;
                    var_140 = var_148;
                    *var_140[8] = 1;
                    regex_automata::util::search::Input::set_span::h60a38042080ed652(&result_1);
                    let var_b8_2: i128 = var_140;
                    var_c9 = var_15f;
                    var_d8 = result_1;
                    regex_automata::meta::regex::Regex::search_half::h19d3b64e04d17d62(&result_1, 
                        var_f8, *var_f8[8], &var_d8);
                    r14_1 = result_1;
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h8a6235b02cb1e98d(
                        &var_f8);
                    goto 'label_666a67;
                }
                
                let var_60: i64;
                *arg1.byte_offset(0x20) = var_60;
                *arg1.byte_offset(0x11) = *var_30[9];
                *arg1.byte_offset(0x15) = *var_30[0xd];
                arg1[0x17] = *var_30[0xf];
                let var_20: i64;
                *arg1.byte_offset(0x18) = var_20;
                arg1[0x20] = var_60;
                let var_7f: i128;
                *arg1.byte_offset(1) = var_7f;
                *arg1 = 0x27;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_178);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_198)
}
