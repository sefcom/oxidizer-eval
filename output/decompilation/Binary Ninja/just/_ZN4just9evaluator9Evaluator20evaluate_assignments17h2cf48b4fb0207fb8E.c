
  int64_t just::evaluator::Evaluator::evaluate_assignments::h2cf48b4fb0207fb8(char* arg1, int64_t arg2, int64_t arg3, void* arg4, int64_t* arg5, int64_t arg6)

{
    int64_t var_d8 = 0;
    int64_t var_c8 = 0;
    int64_t r9;
    int64_t var_c0 = r9;
    int64_t var_1a8 = 0;
    int64_t var_1a0 = 8;
    int64_t var_198 = 0;
    int64_t rax = *arg5;
    int64_t rdi = arg5[1];
    int64_t rsi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rsi = arg5[2];
    
    int64_t var_190 = rdx;
    int64_t var_188 = 0;
    int64_t var_180 = rax;
    int64_t var_178 = rdi;
    int64_t var_170 = rdx;
    int64_t var_168 = 0;
    int64_t var_160 = rax;
    int64_t var_158 = rdi;
    int64_t var_150 = rsi;
    void* r13 = *(arg4 + 0x280);
    int64_t rbp = *(arg4 + 0x288);
    int64_t var_148;
    int128_t var_b8;
    int128_t var_b1;
    int128_t var_a0;
    int128_t var_90;
    int128_t var_80;
    int128_t var_70;
    int64_t var_60;
    void* rdx_1;
    
    while (true)
    {
        void* rax_2;
        rax_2 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0825ba1c453e6840(&var_190);
        
        if (!rax_2)
            break;
        
        void* rax_3 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(r13, 
            rbp, *(rax_2 + 8), *(rax_2 + 0x10));
        
        if (!rax_3)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_b8, rax_2);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_1a8, &var_b8);
        }
        else
        {
            char r12_1 = *(rax_3 + 0xcd);
            int128_t var_110;
            *var_110[8] = *(rax_3 + 0xc0);
            int128_t zmm3_1 = *(rax_3 + 0xb0);
            int64_t var_128;
            var_128 = *(rax_3 + 0xa0);
            int64_t var_138;
            var_138 = *(rax_3 + 0x90);
            var_148 = *(rax_3 + 0x80);
            char r14_2 = *(rax_3 + 0xce);
            int128_t var_48;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_48, rdx_1);
            char var_54_1 = 0;
            char var_53_1 = r12_1;
            int32_t var_58_1 = 0;
            var_60 = *var_110[8];
            var_70 = zmm3_1;
            var_80 = var_128;
            var_90 = var_138;
            var_a0 = var_148;
            char var_52_1 = r14_2;
            var_b8 = var_48;
            int64_t var_38;
            *var_b1[9] = var_38;
            just::scope::Scope::bind::h2017080dbe33bcde(&var_d8, &var_b8);
        }
    }
    
    if (var_198)
    {
        int128_t var_b1_1 = var_1a8;
        *arg1 = 0x33;
        *(arg1 + 1) = var_b8;
        *(arg1 + 0x10) = *var_b1_1[8];
        *(arg1 + 0x18) = var_198;
        return core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_d8);
    }
    
    int128_t zmm0_1 = var_d8;
    void* var_128_1 = arg4 + 0x280;
    var_148 = arg2;
    int64_t var_140_1 = arg3;
    void* var_138_1 = arg4;
    int64_t var_130_1 = arg6;
    char var_100_1 = 0;
    void* rcx_3 = r13;
    rdx_1 = r13;
    
    if (r13)
        rcx_3 = *(arg4 + 0x290);
    
    int64_t rax_13;
    rax_13 = rdx_1;
    var_190 = rax_13;
    int64_t var_188_1 = 0;
    void* var_180_1 = r13;
    int64_t var_178_1 = rbp;
    int64_t var_170_1 = rax_13;
    int64_t var_168_1 = 0;
    void* var_160_1 = r13;
    int64_t var_158_1 = rbp;
    void* var_150_1 = rcx_3;
    
    while (true)
    {
        int64_t rax_14;
        int64_t* rdx_5;
        rax_14 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6442f8fd74f44bbc(&var_190);
        
        if (!rax_14)
        {
            *(arg1 + 0x18) = var_c8;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 0x38;
            break;
        }
        
        just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(&var_b8, &var_148, 
            rdx_5);
        char rax_15 = var_b8;
        
        if (rax_15 != 0x38)
        {
            int32_t rcx_4 = *var_b8[1];
            *(arg1 + 4) = *var_b8[4];
            *(arg1 + 1) = rcx_4;
            *(arg1 + 0x18) = var_a0;
            *(arg1 + 0x28) = var_90;
            *(arg1 + 0x38) = var_80;
            *(arg1 + 0x48) = var_70;
            *(arg1 + 0x58) = var_60;
            *arg1 = rax_15;
            *(arg1 + 8) = var_b1;
            core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_148);
            break;
        }
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_1a8);
}
