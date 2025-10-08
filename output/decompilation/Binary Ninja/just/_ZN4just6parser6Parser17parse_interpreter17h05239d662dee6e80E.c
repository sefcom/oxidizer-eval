
  uint64_t just::parser::Parser::parse_interpreter::h05239d662dee6e80(int128_t* arg1, void* arg2)

{
    int64_t var_118;
    just::parser::Parser::expect::h35e1151927597ac7(&var_118, arg2, 9);
    char result_1;
    uint64_t result = result_1;
    int128_t var_110;
    int128_t var_100;
    int128_t var_f0;
    int64_t var_e0;
    char var_d8;
    int32_t var_d7;
    int32_t var_cf;
    int32_t var_cc;
    int32_t var_c8;
    
    if (result != 0x25)
    {
        int64_t rcx = var_118;
        var_c8 = var_d7;
        var_c8 = var_d7;
        *(arg1 + 0x4c) = var_cc;
        *(arg1 + 0x49) = var_cf;
        int32_t rdi_12 = var_c8;
        *(arg1 + 0x44) = var_c8;
        *(arg1 + 0x41) = rdi_12;
        *arg1 = rcx;
        *(arg1 + 8) = var_110;
        *(arg1 + 0x18) = var_100;
        *(arg1 + 0x28) = var_f0;
        *(arg1 + 0x38) = var_e0;
        arg1[4] = var_d8;
        *(arg1 + 0x48) = result;
    }
    else
    {
        just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_118, arg2);
        result = result_1;
        
        if (result != 0x25)
        {
            var_c8 = var_118;
            *(arg1 + 0x4c) = var_cc;
            *(arg1 + 0x49) = var_cf;
            arg1[4] = var_d8;
            int128_t zmm0_1 = var_c8;
            arg1[3] = var_f0;
            arg1[2] = var_100;
            arg1[1] = var_110;
            *arg1 = zmm0_1;
            *(arg1 + 0x48) = result;
        }
        else
        {
            int128_t var_68 = var_118;
            int128_t var_58_1 = var_110;
            int64_t var_80 = 0;
            int64_t var_78_1 = 8;
            int64_t var_70_1 = 0;
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_118, arg2, 0xf);
            char rax = var_118;
            char result_3 = result_1;
            
            if (result_3 != 0x25)
            {
                label_681c6e:
                arg1[4] = var_d8;
                int128_t zmm0_2 = *var_118[1];
                *(arg1 + 0x31) = var_f0;
                *(arg1 + 0x21) = var_100;
                *(arg1 + 0x11) = var_110;
                *(arg1 + 1) = zmm0_2;
                *(arg1 + 0x49) = var_cf;
                *(arg1 + 0x4c) = var_cc;
                *arg1 = rax;
                *(arg1 + 0x48) = result_3;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..string_literal..StringLiteral$GT$$GT$::hdeab20929d510684(&var_80);
                return core::ptr::drop_in_place$LT$just..string_literal..StringLiteral$GT$::hf0f71171f0974aed(&var_68);
            }
            
            char result_2;
            
            if (rax & 1)
            {
                while (true)
                {
                    if (just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0xa))
                        goto label_681af5;
                    
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_118, arg2);
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                    {
                        var_c8 = var_118;
                        *(arg1 + 0x4c) = var_cc;
                        *(arg1 + 0x49) = var_cf;
                        arg1[4] = var_d8;
                        int128_t zmm0_3 = var_c8;
                        arg1[3] = var_f0;
                        arg1[2] = var_100;
                        arg1[1] = var_110;
                        *arg1 = zmm0_3;
                        break;
                    }
                    
                    int128_t var_a8_1 = var_100;
                    int128_t var_b8_1 = var_110;
                    var_c8 = var_118;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0b203acee3eb68a4(&var_80, &var_c8);
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_118, arg2, 0xf);
                    rax = var_118;
                    result_3 = result_1;
                    
                    if (result_3 != 0x25)
                        goto label_681c6e;
                    
                    if (!(rax & 1))
                        goto label_681af5;
                }
                
                goto label_681d89;
            }
            
            label_681af5:
            just::parser::Parser::expect::h35e1151927597ac7(&var_118, arg2, 0xa);
            result_2 = result_1;
            
            if (result_2 != 0x25)
            {
                int64_t rcx_5 = var_118;
                var_c8 = var_d7;
                var_c8 = var_d7;
                *(arg1 + 0x4c) = var_cc;
                *(arg1 + 0x49) = var_cf;
                int32_t rdi_17 = var_c8;
                *(arg1 + 0x44) = var_c8;
                *(arg1 + 0x41) = rdi_17;
                *arg1 = rcx_5;
                *(arg1 + 8) = var_110;
                *(arg1 + 0x18) = var_100;
                *(arg1 + 0x28) = var_f0;
                *(arg1 + 0x38) = var_e0;
                arg1[4] = var_d8;
                label_681d89:
                *(arg1 + 0x48) = result_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..string_literal..StringLiteral$GT$$GT$::hdeab20929d510684(&var_80);
                return core::ptr::drop_in_place$LT$just..string_literal..StringLiteral$GT$::hf0f71171f0974aed(&var_68);
            }
            
            *var_110[8] = var_70_1;
            int128_t zmm0_4 = var_80;
            var_118 = zmm0_4;
            int128_t zmm1_4 = var_68;
            var_e0 = var_100;
            *arg1 = zmm0_4;
            arg1[4] = var_d8;
            arg1[3] = var_58_1;
            arg1[2] = zmm1_4;
            arg1[1] = *var_110[8];
            result = zmm1_4;
            *(arg1 + 0x18) = result;
            *(arg1 + 0x48) = 0x25;
        }
    }
    return result;
}
