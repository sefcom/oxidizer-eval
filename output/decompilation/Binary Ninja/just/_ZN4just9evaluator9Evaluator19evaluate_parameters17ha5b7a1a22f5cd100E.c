
  int64_t just::evaluator::Evaluator::evaluate_parameters::ha5b7a1a22f5cd100(char* arg1, int128_t* arg2, char arg3, void* arg4, int64_t arg5, void* arg6, int64_t arg7, int64_t arg8)

{
    void* r13 = arg4;
    int64_t var_78 = 0;
    int128_t zmm1 = arg2[1];
    int128_t var_98 = *arg2;
    int128_t var_88 = zmm1;
    char var_50 = arg3;
    int64_t var_70 = 0;
    int64_t var_60 = 0;
    int64_t var_58 = arg8;
    int64_t var_150 = 0;
    int64_t var_148 = 8;
    int64_t result = 0;
    int128_t var_138;
    
    if (arg7)
    {
        void* r15_1 = arg6;
        int64_t rbx_1 = arg5;
        void* rax_2 = arg7 * 0xd0 + arg6;
        void* rax_3 = arg6 + 0xd0;
        void* rcx_2;
        
        do
        {
            int128_t var_128;
            int128_t var_118;
            int128_t var_f8;
            int128_t var_e8;
            int64_t var_d8;
            int64_t rbp_1;
            int64_t rsi_3;
            int64_t r14_1;
            int64_t var_178;
            int64_t var_170;
            int64_t var_168;
            
            if (!rbx_1)
            {
                if (*r15_1 != 0x12)
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_138, 
                        &var_98, r15_1);
                    char rax_5 = var_138;
                    
                    if (rax_5 != 0x38)
                    {
                        *var_170[7] = var_128;
                        var_178 = var_138;
                        *(arg1 + 0x60) = var_d8;
                        *(arg1 + 0x50) = var_e8;
                        *(arg1 + 0x40) = var_f8;
                        int64_t var_108;
                        *(arg1 + 0x30) = var_108;
                        *(arg1 + 0x20) = var_118;
                        *(arg1 + 0x10) = *var_170[7];
                        *(arg1 + 1) = var_178;
                        *arg1 = rax_5;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_150);
                        return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_98);
                    }
                    
                    var_168 = *var_128[8];
                    *var_178[7] = var_138;
                    int128_t var_c8 = *var_178[7];
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_c8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                    rbp_1 = var_c8;
                    rsi_3 = *var_c8[8];
                    r14_1 = var_168;
                }
                else
                {
                    if (*(r15_1 + 0xc9) != 2)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_138, "missing parameter without defaul…", 0x21);
                        var_138 = var_138;
                        *var_128[7] = var_128;
                        *arg1 = 0x1d;
                        int64_t rax_11 = *var_138[0xf];
                        *(arg1 + 1) = var_138;
                        *(arg1 + 0x10) = rax_11;
                        *(arg1 + 0x18) = *var_128[7];
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_150);
                        return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_98);
                    }
                    
                    rsi_3 = 1;
                    rbp_1 = 0;
                    r14_1 = 0;
                }
                
                rbx_1 = 0;
            }
            else if (*(r15_1 + 0xc9) != 1)
            {
                void* i = nullptr;
                
                do
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, i + r13);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                    i += 0x18;
                } while (rbx_1 * 0x18 != i);
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_178, r13, rbx_1);
                alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_138, var_170, var_168, 
                    " [private]\nexport no entry foun…", 1);
                rbp_1 = var_138;
                int64_t rbx_3 = *var_138[8];
                r14_1 = var_128;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_178);
                rsi_3 = rbx_3;
                r13 = 8;
                rbx_1 = 0;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_178, r13);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_178);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                rbx_1 -= 1;
                r13 += 0x18;
                rbp_1 = var_178;
                rsi_3 = var_170;
                r14_1 = var_168;
            }
            *var_e8[8] = *(r15_1 + 0xc0);
            var_f8 = *(r15_1 + 0xb0);
            int128_t var_100_1 = *(r15_1 + 0xa0);
            var_118 = *(r15_1 + 0x90);
            var_128 = *(r15_1 + 0x80);
            *var_d8[4] = 0;
            *var_d8[5] = *(r15_1 + 0xc8);
            var_d8 = 0;
            *var_d8[6] = 0;
            var_138 = rbp_1;
            *var_138[8] = rsi_3;
            var_128 = r14_1;
            just::scope::Scope::bind::h2017080dbe33bcde(&var_70, &var_138);
            rcx_2 = rax_3;
            rax_3 = rcx_2 + 0xd0;
            r15_1 = rcx_2;
            
            if (rcx_2 == rax_2)
                rax_3 = rcx_2;
        } while (rcx_2 != rax_2);
    }
    
    int128_t zmm0 = var_70;
    zmm1 = var_60;
    int128_t var_128_1 = zmm1;
    var_138 = zmm0;
    int128_t zmm2 = var_150;
    int128_t var_118_1 = zmm2;
    int64_t result_1 = result;
    *(arg1 + 0x38) = result;
    *(arg1 + 0x28) = zmm2;
    *(arg1 + 0x18) = zmm1;
    *(arg1 + 8) = zmm0;
    *arg1 = 0x38;
    return result;
}
