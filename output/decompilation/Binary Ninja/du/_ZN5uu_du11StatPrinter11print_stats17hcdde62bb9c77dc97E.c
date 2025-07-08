
  int128_t* uu_du::StatPrinter::print_stats::hcdde62bb9c77dc97(int64_t* arg1, int64_t* arg2)

{
    int64_t r13;
    int64_t var_20 = r13;
    int64_t* r15 = arg2;
    char var_d8[0x10];
    std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&var_d8, arg2);
    char zmm0[0x10] = __pcmpeqb_xmmdq_memdq(var_d8, data_40f110);
    int128_t* var_1a8;
    void* const var_188;
    char var_168[0x10];
    int64_t r12;
    
    if (_mm_movemask_epi8(zmm0) != 0xffff)
    {
        void* rax_2 = var_d8[0];
        int64_t rcx_1 = var_d8[8];
        char rdx_3 = *(arg1 + 0x49);
        char rdx_4 = *(arg1 + 0x4a);
        int64_t rdx_5 = arg1[2];
        int64_t rdx_6 = arg1[3];
        int64_t rdx_7 = *arg1;
        int64_t rdx_8 = arg1[1];
        char rdx_9 = *(arg1 + 0x4b);
        r12 = 0;
        int64_t* var_1c0_1 = r15;
        uint32_t i;
        
        do
        {
            int64_t var_c8;
            int64_t* var_c0;
            
            if ((rax_2 ^ 2) | rcx_1)
            {
                var_188 = rax_2;
                int64_t var_180_4 = rcx_1;
                int64_t var_178_4 = var_c8;
                int64_t* var_170_4 = var_c0;
                char var_48[0x10];
                int64_t var_f8_1 = var_48[0];
                char var_58[0x10];
                char var_108_1[0x10] = var_58;
                char var_68[0x10];
                char var_118_1[0x10] = var_68;
                int128_t var_98;
                int128_t var_148_1 = var_98;
                int128_t var_a8;
                int128_t var_158_1 = var_a8;
                char var_b8[0x10];
                var_168 = var_b8;
                int64_t rbp_1;
                int64_t r14_3;
                char var_78[0x10];
                
                if (!rdx_3)
                {
                    r14_3 = r12;
                    int128_t var_88;
                    
                    if (!rdx_4)
                        rbp_1 = var_78[0] << 9;
                    else
                        rbp_1 = *var_88[8];
                }
                else
                {
                    r14_3 = r12;
                    rbp_1 = var_78[8];
                }
                int64_t r15_1 = 0;
                
                if (!var_f8_1)
                    r15_1 = rbp_1;
                
                if (!core::option::Option$LT$T$GT$::map_or::hcdde7c32e5996b93(rdx_5, rdx_6, rbp_1))
                {
                    r12 = !var_f8_1;
                    r13 = !rdx_9;
                    
                    if (core::option::Option$LT$T$GT$::map_or::h49b7c3a1ba7c3f0d(rdx_7, rdx_8, 
                        var_f8_1))
                    {
                        r13 |= r12;
                        
                        if (r13)
                        {
                            int128_t* result = uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(
                                arg1, &var_188, rbp_1);
                            
                            if (result)
                            {
                                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&var_188);
                                return result;
                            }
                        }
                    }
                }
                
                r12 = r14_3 + r15_1;
                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&var_188);
                r15 = var_1c0_1;
            }
            else
            {
                int64_t var_1e8 = var_c8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_c0[0xc](zmm0));
                int64_t rax_4;
                int64_t rdx_12;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                int64_t var_e8 = rax_4;
                int64_t var_e0_1 = rdx_12;
                var_1a8 = &var_e8;
                int64_t (* var_1a0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                int64_t* var_198_1 = &var_1e8;
                int64_t (* var_190_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc201e0bc34ac3284;
                var_188 = &data_5845c8;
                int64_t var_180_3 = 3;
                var_168[0] = 0;
                int128_t** var_178_3 = &var_1a8;
                int64_t var_170_3 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h29011716f9a6ef88(var_1e8, var_c0);
            }
            std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&var_d8, r15);
            rax_2 = var_d8[0];
            rcx_1 = var_d8[8];
            zmm0 = __pcmpeqb_xmmdq_memdq(var_d8, data_40f110);
            i = _mm_movemask_epi8(zmm0);
        } while (i != 0xffff);
    }
    else
        r12 = 0;
    
    if (arg1[9])
    {
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_d8, arg1, r12);
        var_1a8 = &var_d8;
        int64_t (* var_1a0_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_188 = &data_5845f8;
        int64_t var_180_1 = 2;
        var_168[0] = 0;
        int128_t** var_178_1 = &var_1a8;
        int64_t var_170_1 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_188);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_d8);
        var_d8[0] = arg1 + 0x4d;
        var_d8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_188 = &data_40f000;
        int64_t var_180_2 = 1;
        var_168[0] = 0;
        int128_t* var_178_2 = &var_d8;
        int64_t var_170_2 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_188);
    }
    
    return nullptr;
}
