
  uint64_t just::parser::Parser::parse_expression::h8b701a5fe27dff96(int64_t* arg1, void* arg2)

{
    int64_t rax = *(arg2 + 0x60);
    uint64_t result;
    int64_t var_2b8;
    int128_t var_2b0;
    int128_t var_2a0;
    int128_t var_290;
    int128_t var_280;
    int128_t var_270;
    int128_t var_1d8;
    
    if (rax != 0x100)
    {
        *(arg2 + 0x60) = rax + 1;
        result = just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(&var_2b8, arg2);
        int64_t r12_1 = var_2b8;
        
        if (r12_1 != 0x12)
        {
            var_1d8 = var_2b0;
            int128_t var_1a8 = var_280;
            var_1d8 = r12_1;
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_2b8, arg2, 6);
            char rax_4 = var_2b8;
            char rcx_4 = var_270;
            
            if (rcx_4 != 0x25)
            {
                arg1[9] = *var_280[8];
                int128_t zmm0_2 = *var_2b8[1];
                *(arg1 + 0x39) = var_290;
                *(arg1 + 0x29) = var_2a0;
                *(arg1 + 0x19) = var_2b0;
                *(arg1 + 9) = zmm0_2;
                *(arg1 + 0x51) = *var_270[1];
                *(arg1 + 0x54) = *var_270[4];
                arg1[1] = rax_4;
                arg1[0xa] = rcx_4;
                *arg1 = 0x12;
                return 
                    core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_1d8);
            }
            
            int128_t var_158;
            int128_t var_148;
            int128_t var_138;
            int128_t var_128;
            int128_t var_118;
            int128_t var_108;
            uint64_t result_1;
            uint64_t rax_7;
            uint64_t r15_1;
            int128_t var_260;
            int128_t var_250;
            uint64_t result_2;
            
            if (!(rax_4 & 1))
            {
                r15_1 = *var_1d8[8];
                rax_7 = var_2a0;
                var_158 = var_2a0;
                var_148 = var_290;
                var_138 = var_1a8;
                var_128 = var_270;
                var_118 = var_260;
                var_108 = var_250;
                result_1 = result_2;
            }
            else
            {
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(arg2 + 0x68, 1);
                int64_t var_198;
                var_280 = var_198;
                var_2b8 = var_1d8;
                uint64_t rax_5 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_2b8);
                r15_1 = rax_5;
                uint64_t var_1e0 = rax_5;
                just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_2b8, arg2);
                int64_t rax_6 = var_2b8;
                
                if (rax_6 == 0x12)
                {
                    *(arg1 + 0x48) = var_270;
                    *(arg1 + 0x38) = var_280;
                    *(arg1 + 0x28) = var_1a8;
                    *(arg1 + 0x18) = var_290;
                    *(arg1 + 8) = var_2a0;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_1e0);
                }
                
                uint64_t result_3 = result_2;
                int128_t var_38_1 = var_250;
                int128_t var_48_1 = var_260;
                int64_t var_a0 = rax_6;
                int128_t var_98_1 = var_2a0;
                int128_t var_88_1 = var_290;
                int128_t var_78_1 = var_1a8;
                int128_t var_68_1 = var_280;
                int128_t var_58_1 = var_270;
                rax_7 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_a0);
                r12_1 = 0xf;
            }
            *(arg2 + 0x60) -= 1;
            *arg1 = r12_1;
            arg1[1] = r15_1;
            arg1[2] = rax_7;
            *(arg1 + 0x18) = var_158;
            *(arg1 + 0x28) = var_148;
            *(arg1 + 0x38) = var_138;
            *(arg1 + 0x48) = var_128;
            *(arg1 + 0x58) = var_118;
            *(arg1 + 0x68) = var_108;
            result = result_1;
            arg1[0xf] = result;
        }
        else
        {
            *(arg1 + 0x48) = var_270;
            *(arg1 + 0x38) = var_280;
            *(arg1 + 0x28) = var_290;
            *(arg1 + 0x18) = var_2a0;
            *(arg1 + 8) = var_2b0;
            *arg1 = 0x12;
        }
    }
    else
    {
        just::parser::Parser::next::h26f20bd451ef506f(&var_2b8, arg2);
        result = var_270;
        var_1d8 = var_2b8;
        int64_t rcx_1 = *var_280[8];
        
        if (result != 0x25)
        {
            *(arg1 + 0x54) = *var_270[4];
            *(arg1 + 0x51) = *var_270[1];
            arg1[9] = rcx_1;
            int128_t zmm0 = var_1d8;
            *(arg1 + 0x38) = var_290;
            *(arg1 + 0x28) = var_2a0;
            *(arg1 + 0x18) = var_2b0;
            *(arg1 + 8) = zmm0;
            arg1[0xa] = result;
            *arg1 = 0x12;
        }
        else
        {
            int128_t var_e8 = var_1d8;
            int128_t var_d8_1 = var_2b0;
            int128_t var_c8_1 = var_2a0;
            int128_t var_b8_1 = var_290;
            int64_t var_a8_1 = rcx_1;
            var_2b8 = -0x7fffffffffffffd1;
            result = just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(&arg1[1], &var_e8, 
                &var_2b8);
            *arg1 = 0x12;
        }
    }
    return result;
}
