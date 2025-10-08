
  int64_t just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(char* arg1, int64_t* arg2, int64_t* arg3)

{
    char result_1;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, *arg3);
    char result = result_1;
    int128_t var_15f;
    int128_t var_140;
    int128_t var_130;
    int128_t var_120;
    int128_t var_110;
    int64_t var_100;
    int128_t var_d8;
    
    if (result != 0x38)
    {
        var_d8 = var_15f;
        *(arg1 + 0x60) = var_100;
        *(arg1 + 0x50) = var_110;
        *(arg1 + 0x40) = var_120;
        *(arg1 + 0x30) = var_130;
        *(arg1 + 0x20) = var_140;
        *(arg1 + 0x10) = var_15f;
        *(arg1 + 1) = var_d8;
        *arg1 = result;
        return result;
    }
    
    int128_t var_198 = var_15f;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, arg3[1]);
    char result_2 = result_1;
    
    if (result_2 != 0x38)
    {
        var_d8 = var_15f;
        *(arg1 + 0x60) = var_100;
        *(arg1 + 0x50) = var_110;
        *(arg1 + 0x40) = var_120;
        *(arg1 + 0x30) = var_130;
        *(arg1 + 0x20) = var_140;
        *(arg1 + 0x10) = var_15f;
        *(arg1 + 1) = var_d8;
        *arg1 = result_2;
    }
    else
    {
        int128_t var_178 = var_15f;
        uint64_t var_148;
        int128_t var_f8;
        int128_t var_c9;
        char r14_1;
        
        switch (arg3[2])
        {
            case 0:
            {
                arg1[1] = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(*var_198[8], var_148, *var_178[8], var_148);
                *arg1 = 0x38;
                break;
            }
            case 1:
            {
                r14_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h642c0cf731eb11c2(*var_198[8], var_148, *var_178[8], var_148);
                label_666a67:
                arg1[1] = r14_1 ^ 1;
                *arg1 = 0x38;
                break;
            }
            case 2:
            {
                int64_t var_58;
                regex::regex::string::Regex::new::h678b3567117d3be5(&var_58, *var_178[8]);
                int128_t var_50;
                
                if (!var_58)
                {
                    int64_t var_87;
                    *(arg1 + 0x20) = var_87;
                    *(arg1 + 0x11) = *var_50[9];
                    *(arg1 + 0x15) = *var_50[0xd];
                    arg1[0x17] = *var_50[0xf];
                    int64_t var_40;
                    *(arg1 + 0x18) = var_40;
                    arg1[0x20] = var_87;
                    int128_t var_a6;
                    *(arg1 + 1) = var_a6;
                    *arg1 = 0x27;
                }
                else
                {
                    int128_t var_e8_1 = var_50;
                    var_f8 = var_58;
                    result_1 = 0;
                    *var_15f[7] = *var_198[8];
                    *var_15f[0xf] = var_148;
                    int64_t var_148_1 = 0;
                    var_140 = var_148;
                    *var_140[8] = 1;
                    regex_automata::util::search::Input::set_span::h60a38042080ed652(&result_1);
                    int128_t var_b8_1 = var_140;
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
                break;
            }
            case 3:
            {
                int64_t var_38;
                regex::regex::string::Regex::new::h678b3567117d3be5(&var_38, *var_178[8]);
                int128_t var_30;
                
                if (var_38)
                {
                    int128_t var_e8_2 = var_30;
                    var_f8 = var_38;
                    result_1 = 0;
                    *var_15f[7] = *var_198[8];
                    *var_15f[0xf] = var_148;
                    int64_t var_148_2 = 0;
                    var_140 = var_148;
                    *var_140[8] = 1;
                    regex_automata::util::search::Input::set_span::h60a38042080ed652(&result_1);
                    int128_t var_b8_2 = var_140;
                    var_c9 = var_15f;
                    var_d8 = result_1;
                    regex_automata::meta::regex::Regex::search_half::h19d3b64e04d17d62(&result_1, 
                        var_f8, *var_f8[8], &var_d8);
                    r14_1 = result_1;
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h8a6235b02cb1e98d(
                        &var_f8);
                    goto label_666a67;
                }
                
                int64_t var_60;
                *(arg1 + 0x20) = var_60;
                *(arg1 + 0x11) = *var_30[9];
                *(arg1 + 0x15) = *var_30[0xd];
                arg1[0x17] = *var_30[0xf];
                int64_t var_20;
                *(arg1 + 0x18) = var_20;
                arg1[0x20] = var_60;
                int128_t var_7f;
                *(arg1 + 1) = var_7f;
                *arg1 = 0x27;
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_178);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_198);
}
