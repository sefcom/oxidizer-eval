
  uint64_t just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(int64_t* arg1, void* arg2)

{
    int64_t var_208;
    uint64_t result = just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&var_208, arg2);
    int64_t r12 = var_208;
    int128_t var_200;
    int128_t var_1f0;
    int128_t var_1e0;
    int128_t var_1d0;
    int128_t var_1c0;
    
    if (r12 != 0x12)
    {
        int64_t var_188 = r12;
        just::parser::Parser::accepted::h762a87b5f98dff30(&var_208, arg2, 0);
        char rax_1 = var_208;
        char rcx_1 = var_1c0;
        
        if (rcx_1 != 0x25)
        {
            arg1[9] = *var_1d0[8];
            int128_t zmm0_1 = *var_208[1];
            *(arg1 + 0x39) = var_1e0;
            *(arg1 + 0x29) = var_1f0;
            *(arg1 + 0x19) = var_200;
            *(arg1 + 9) = zmm0_1;
            *(arg1 + 0x51) = *var_1c0[1];
            *(arg1 + 0x54) = *var_1c0[4];
            arg1[1] = rax_1;
            arg1[0xa] = rcx_1;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &var_188);
        }
        
        int128_t var_108;
        int128_t var_f8;
        int128_t var_e8;
        int128_t var_d8;
        int128_t var_c8;
        int128_t var_b8;
        uint64_t result_1;
        uint64_t rax_4;
        uint64_t r15_1;
        int128_t var_1b0;
        int128_t var_1a0;
        uint64_t result_2;
        
        if (!(rax_1 & 1))
        {
            r15_1 = var_200;
            rax_4 = *var_200[8];
            var_108 = var_1f0;
            var_f8 = var_1e0;
            var_e8 = var_1d0;
            var_d8 = var_1c0;
            var_c8 = var_1b0;
            var_b8 = var_1a0;
            result_1 = result_2;
        }
        else
        {
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(
                arg2 + 0x68, 1);
            var_208 = var_188;
            uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_208);
            r15_1 = rax_2;
            uint64_t var_210 = rax_2;
            just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(&var_208, arg2);
            int64_t rax_3 = var_208;
            
            if (rax_3 == 0x12)
            {
                *(arg1 + 0x48) = var_1c0;
                *(arg1 + 0x38) = var_1d0;
                *(arg1 + 0x28) = var_1e0;
                *(arg1 + 0x18) = var_1f0;
                *(arg1 + 8) = var_200;
                *arg1 = 0x12;
                return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_210);
            }
            
            uint64_t result_3 = result_2;
            int128_t var_38_1 = var_1a0;
            int128_t var_48_1 = var_1b0;
            int64_t var_a0 = rax_3;
            int128_t var_98_1 = var_200;
            int128_t var_88_1 = var_1f0;
            int128_t var_78_1 = var_1e0;
            int128_t var_68_1 = var_1d0;
            int128_t var_58_1 = var_1c0;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_a0);
            r12 = 7;
        }
        *arg1 = r12;
        arg1[1] = r15_1;
        arg1[2] = rax_4;
        *(arg1 + 0x18) = var_108;
        *(arg1 + 0x28) = var_f8;
        *(arg1 + 0x38) = var_e8;
        *(arg1 + 0x48) = var_d8;
        *(arg1 + 0x58) = var_c8;
        *(arg1 + 0x68) = var_b8;
        result = result_1;
        arg1[0xf] = result;
    }
    else
    {
        *(arg1 + 0x48) = var_1c0;
        *(arg1 + 0x38) = var_1d0;
        *(arg1 + 0x28) = var_1e0;
        *(arg1 + 0x18) = var_1f0;
        *(arg1 + 8) = var_200;
        *arg1 = 0x12;
    }
    return result;
}
