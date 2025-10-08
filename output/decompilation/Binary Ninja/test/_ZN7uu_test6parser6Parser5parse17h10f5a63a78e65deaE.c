
  int128_t* uu_test::parser::Parser::parse::h10f5a63a78e65dea(int64_t* arg1, int64_t* arg2)

{
    int32_t var_70;
    int128_t* result = uu_test::parser::Parser::expr::hea95ff6631384a05(&var_70, arg2);
    int128_t var_60;
    
    if (var_70 != 7)
    {
        int128_t zmm0_1 = var_70;
        *(arg1 + 0x10) = var_60;
        *arg1 = zmm0_1;
    }
    else
    {
        int64_t r14_1 = arg2[3];
        arg2[3] = -0x7fffffffffffffff;
        
        if (r14_1 != -0x7fffffffffffffff)
        {
            int128_t var_48 = *(arg2 + 0x20);
            
            if (r14_1 != -0x8000000000000000)
            {
                label_4583cf:
                int64_t r15_2 = var_48;
                var_70 = 1;
                int64_t var_68_1 = r15_2;
                var_60 = *var_48[8];
                *var_60[8] = 1;
                int128_t var_38;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_38, &var_70);
                int64_t var_28;
                arg1[3] = var_28;
                *(arg1 + 8) = var_38;
                *arg1 = 2;
                return 
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    r14_1, r15_2);
            }
        }
        else
        {
            int64_t var_50;
            result = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4dcbdc82a201ae23(&var_50, &arg2[6]);
            r14_1 = var_50;
            
            if (r14_1 != -0x8000000000000000)
                goto label_4583cf;
        }
        
        *arg1 = 7;
    }
    return result;
}
