
  bool alacritty::input::Processor$LT$T$C$A$GT$::cell_side::h8083590e79163558(void* arg1, int64_t arg2)

{
    void var_40;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_40, arg1);
    float var_28;
    int64_t rax = var_28;
    int64_t rcx_2 = 0;
    
    if (var_28 >= 0f)
        rcx_2 = ((var_28 - 9.22337204e+18f) & rax >> 0x3f) | rax;
    
    if (var_28 > 1.8446743e+19f)
        rcx_2 = -1;
    
    if (!rcx_2)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    float var_20;
    int64_t rdx_3 = var_20;
    int64_t rdi_3 = ((var_20 - 9.22337204e+18f) & rdx_3 >> 0x3f) | rdx_3;
    
    if (var_20 < 0f)
        rdi_3 = 0;
    
    if (var_20 > 1.8446743e+19f)
        rdi_3 = -1;
    
    int64_t rax_2 = arg2 - rdi_3;
    
    if (arg2 < rdi_3)
        rax_2 = 0;
    
    uint64_t r14;
    
    if (!((rax_2 | rcx_2) >> 0x20))
        r14 = COMBINE(0, rax_2) % rcx_2;
    else
        r14 = COMBINE(0, rax_2) % rcx_2;
    
    float zmm0 = 0.5f * var_28;
    int64_t rax_5 = zmm0;
    int64_t rax_6 = 0;
    
    if (zmm0 >= 0f)
        rax_6 = ((zmm0 - 9.22337204e+18f) & rax_5 >> 0x3f) | rax_5;
    
    int64_t r15 = -1;
    
    if (zmm0 <= 1.8446743e+19f)
        r15 = rax_6;
    
    float var_30;
    uint64_t rcx_5;
    float zmm0_1;
    rcx_5 = fmodf(var_30 - (var_20 + var_20), var_28);
    float zmm1_1 = var_30 - var_20 - zmm0_1;
    
    if (arg2 < 0)
    {
        zmm0_1 = (arg2 & 1) | arg2 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
        zmm0_1 = arg2;
    
    rcx_5 = zmm0_1 >= zmm1_1;
    return r14 > r15 | rcx_5;
}
