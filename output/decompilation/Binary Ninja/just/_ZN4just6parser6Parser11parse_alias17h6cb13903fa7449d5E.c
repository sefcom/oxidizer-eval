
  int64_t just::parser::Parser::parse_alias::h6cb13903fa7449d5(int128_t* arg1, void* arg2, int64_t* arg3)

{
    int128_t var_158;
    just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_158, arg2, 0);
    char var_110;
    int128_t var_148;
    int128_t var_138;
    int128_t var_128;
    int128_t var_118;
    
    if (var_110 != 0x25)
    {
        *(arg1 + 0x48) = var_118;
        int128_t zmm0 = var_158;
        *(arg1 + 0x38) = var_128;
        *(arg1 + 0x28) = var_138;
        *(arg1 + 0x18) = var_148;
        *(arg1 + 8) = zmm0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        just::parser::Parser::parse_name::he2804e36e47b7e10(&var_158, arg2);
        char rax_1 = var_110;
        int128_t var_d8_1 = var_158;
        int128_t var_c8_1 = var_148;
        int128_t var_b8_1 = var_138;
        int128_t var_a8_1 = var_128;
        int64_t var_98_1 = var_118;
        int32_t var_10f;
        int32_t rcx_3;
        
        if (rax_1 != 0x25)
        {
            rcx_3 = var_10f;
            *(arg1 + 0x54) = var_10f;
            label_67a378:
            *(arg1 + 0x51) = rcx_3;
            *(arg1 + 0x48) = var_98_1;
            *(arg1 + 0x38) = var_a8_1;
            *(arg1 + 0x28) = var_b8_1;
            *(arg1 + 0x18) = var_c8_1;
            *(arg1 + 8) = var_d8_1;
            arg1[5] = rax_1;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            int128_t var_68 = var_d8_1;
            just::parser::Parser::presume_any::hdb874b0785d8f9b5(&var_158, arg2);
            
            if (var_110 != 0x25)
            {
                int64_t rcx_5 = var_158;
                int128_t zmm0_2 = var_158;
                var_d8_1 = *var_118[1];
                *var_d8_1[3] = *var_118[4];
                *(arg1 + 0x54) = var_10f;
                *(arg1 + 0x51) = var_10f;
                *(arg1 + 0x4c) = *var_d8_1[3];
                *(arg1 + 0x49) = var_d8_1;
                *(arg1 + 8) = rcx_5;
                arg1[1] = zmm0_2;
                arg1[2] = var_148;
                arg1[3] = var_138;
                arg1[4] = *var_128[8];
                *(arg1 + 0x48) = var_118;
                arg1[5] = var_110;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_158, arg2);
                rax_1 = var_110;
                
                if (rax_1 != 0x25)
                {
                    var_98_1 = var_118;
                    var_a8_1 = var_128;
                    var_b8_1 = var_138;
                    var_c8_1 = var_148;
                    var_d8_1 = var_158;
                    *(arg1 + 0x54) = var_10f;
                    rcx_3 = var_10f;
                    goto label_67a378;
                }
                
                int128_t var_88 = var_158;
                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_158, arg2);
                int128_t zmm0_3;
                
                if (var_110 == 0x25)
                {
                    just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(
                        &var_158, arg3, "AliasAssignmentxError getting cu…", 5, &var_68, 
                        &data_4715f0, 1);
                    
                    if (var_110 == 0x25)
                    {
                        var_148 = var_148;
                        var_158 = var_88;
                        int128_t var_f8 = *arg3;
                        int64_t rax_5 = arg3[2];
                        zmm0_3 = var_68;
                        var_110 = var_a8_1;
                        arg1[1] = zmm0_3;
                        *(arg1 + 0x18) = *zmm0_3[8];
                        arg1[2] = var_c8_1;
                        arg1[3] = var_b8_1;
                        arg1[4] = var_118;
                        arg1[7] = rax_5;
                        zmm0_3 = var_158;
                        arg1[6] = var_f8;
                        int64_t result;
                        arg1[5] = result;
                        *(arg1 + 0x58) = var_98_1;
                        *arg1 = zmm0_3;
                        return result;
                    }
                }
                
                *(arg1 + 0x48) = var_118;
                zmm0_3 = var_158;
                *(arg1 + 0x38) = var_128;
                *(arg1 + 0x28) = var_138;
                *(arg1 + 0x18) = var_148;
                *(arg1 + 8) = zmm0_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                    &var_88);
            }
        }
    }
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(
        arg3);
}
