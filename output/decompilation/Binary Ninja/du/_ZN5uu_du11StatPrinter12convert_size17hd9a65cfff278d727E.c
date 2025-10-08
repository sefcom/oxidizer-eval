
  int64_t uu_du::StatPrinter::convert_size::hd9a65cfff278d727(int128_t* arg1, void* arg2, uint64_t arg3)

{
    uint64_t rax = arg3;
    int64_t rcx = *(arg2 + 0x20);
    
    if (!rcx)
        /* tailcall */
        return uucore::features::format::human::human_readable::h3f1a583a2a5b554e(arg1, rax, 2);
    
    if (rcx == 1)
        /* tailcall */
        return uucore::features::format::human::human_readable::h3f1a583a2a5b554e(arg1, rax, 1);
    
    int128_t* rbx;
    void* rsi_4;
    void var_1c;
    
    if (!*(arg2 + 0x49))
    {
        int64_t rcx_3 = *(arg2 + 0x28);
        
        if (!rcx_3)
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
        
        rbx = arg1;
        uint64_t rax_3;
        uint64_t rdx_6;
        
        if (!((rax | rcx_3) >> 0x20))
        {
            int32_t temp2_2 = rcx_3;
            rax_3 = COMBINE(0, rax) / temp2_2;
            rdx_6 = COMBINE(0, rax) % temp2_2;
        }
        else
        {
            int64_t rdx_5 = 0;
            int32_t temp2_1 = rcx_3;
            rax_3 = COMBINE(rdx_5, rax) / temp2_1;
            rdx_6 = COMBINE(rdx_5, rax) % temp2_1;
        }
        
        rax = rax_3 + 1;
        rsi_4 = &var_1c;
    }
    else
    {
        rsi_4 = &var_1c;
        rbx = arg1;
    }
    int64_t rax_4;
    uint64_t rdx_7;
    rax_4 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(rax, rsi_4, 0x14);
    int128_t var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_38, rax_4, rdx_7);
    int64_t result;
    rbx[1] = result;
    *rbx = var_38;
    return result;
}
