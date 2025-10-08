
  int64_t alacritty::event::Mouse::point::h7553a37268becc3a(int64_t arg1, int64_t arg2, int32_t* arg3, int32_t arg4)

{
    int128_t zmm1 = arg3[6];
    int64_t rax = zmm1;
    int128_t zmm0;
    zmm0 = zmm1 - 9.22337204e+18f;
    int64_t rcx_2 = 0;
    
    if (zmm1 >= 0f)
        rcx_2 = (zmm0 & rax >> 0x3f) | rax;
    
    if (zmm1 > 1.8446743e+19f)
        rcx_2 = -1;
    
    if (!rcx_2)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    zmm1 = arg3[7];
    int64_t rdx_3 = zmm1;
    int64_t r13 = 0;
    
    if (zmm1 >= 0f)
        r13 = ((zmm1 - 9.22337204e+18f) & rdx_3 >> 0x3f) | rdx_3;
    
    if (zmm1 > 1.8446743e+19f)
        r13 = -1;
    
    if (!r13)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    zmm0 = arg3[8];
    int64_t rax_1 = zmm0;
    zmm1 = zmm0 - 9.22337204e+18f;
    int64_t rsi_4 = (zmm1 & rax_1 >> 0x3f) | rax_1;
    
    if (zmm0 < 0f)
        rsi_4 = 0;
    
    int64_t rdx_6 = -1;
    
    if (zmm0 <= 1.8446743e+19f)
        rdx_6 = rsi_4;
    
    int64_t rdi = arg1 - rdx_6;
    
    if (arg1 < rdx_6)
        rdi = 0;
    
    uint64_t rax_6;
    
    if (!((rdi | rcx_2) >> 0x20))
        rax_6 = COMBINE(0, rdi) / rcx_2;
    else
        rax_6 = COMBINE(0, rdi) / rcx_2;
    
    int64_t result = core::cmp::Ord::min::hffab314b5e6491b1(rax_6, *(arg3 + 8) - 1);
    zmm0 = arg3[9];
    int64_t rcx_3 = zmm0;
    zmm1 = zmm0 - 9.22337204e+18f;
    int64_t rsi_9 = (zmm1 & rcx_3 >> 0x3f) | rcx_3;
    
    if (zmm0 < 0f)
        rsi_9 = 0;
    
    int64_t rdx_12 = -1;
    
    if (zmm0 <= 1.8446743e+19f)
        rdx_12 = rsi_9;
    
    int64_t r15_1 = arg2 - rdx_12;
    
    if (arg2 < rdx_12)
        r15_1 = 0;
    
    uint64_t rax_12;
    
    if (!((r15_1 | r13) >> 0x20))
        rax_12 = COMBINE(0, r15_1) / r13;
    else
        rax_12 = COMBINE(0, r15_1) / r13;
    
    core::cmp::Ord::min::h7c13e9bfb8ea3862(rax_12, *arg3 - 1);
    return result;
}
