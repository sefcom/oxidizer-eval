
  int16_t* alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(void* arg1, int128_t arg2 @ zmm0, int128_t arg3 @ zmm1, int128_t arg4 @ zmm2, int128_t arg5 @ zmm3)

{
    int128_t var_58 = arg3;
    arg3 = arg2 - 9.22337204e+18f;
    int64_t rcx = arg2;
    int64_t rbx_3 = (rcx >> 0x3f & arg3) | rcx;
    arg3 = {0};
    
    if (arg2 < arg3)
        rbx_3 = 0;
    
    if (arg2 > 1.8446743e+19f)
        rbx_3 = -1;
    
    arg4 = arg4 + arg2;
    int64_t rax_1 = arg4;
    arg2 = arg4 - 9.22337204e+18f;
    int64_t rdi_2 = (arg2 & rax_1 >> 0x3f) | rax_1;
    
    if (arg4 < arg3)
        rdi_2 = 0;
    
    if (arg4 > 1.8446743e+19f)
        rdi_2 = -1;
    
    int64_t r14 = *(arg1 + 0x18);
    int64_t rax_2 = core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi_2, r14);
    arg2 = var_58 - 9.22337204e+18f;
    int64_t rcx_3 = var_58;
    int64_t r13_3 = (rcx_3 >> 0x3f & arg2) | rcx_3;
    
    if (var_58 < 0f)
        r13_3 = 0;
    
    if (var_58 > 1.8446743e+19f)
        r13_3 = -1;
    
    arg3 = arg5 + var_58;
    int64_t rax_4 = arg3;
    arg2 = arg3 - 9.22337204e+18f;
    int64_t rdi_5 = (arg2 & rax_4 >> 0x3f) | rax_4;
    
    if (arg3 < 0f)
        rdi_5 = 0;
    
    if (arg3 > 1.8446743e+19f)
        rdi_5 = -1;
    
    int16_t* result = core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi_5, *(arg1 + 0x20));
    void* i_1 = result - r13_3;
    
    if (result > r13_3)
    {
        int64_t rbp_1 = *(arg1 + 8);
        int64_t r15_1 = *(arg1 + 0x10);
        int64_t rcx_7 = r13_3 * r14;
        int64_t r12_1 = rax_2 + rcx_7;
        int64_t rbx_4 = rbx_3 + rcx_7;
        void* i;
        
        do
        {
            int64_t rax_5;
            int64_t rdx_2;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1733595a6a516e51(rbx_4, r12_1, rbp_1, r15_1);
            result = _$LT$$u5b$T$u5d$$u20$as$u20$core..slice..specialize..SpecFill$LT$T$GT$$GT$::spec_fill::h15b3a9a1ce3f9f9a(rax_5, rdx_2, 0xffffff);
            r12_1 += r14;
            rbx_4 += r14;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    return result;
}
