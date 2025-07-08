
  int64_t uu_split::number::DynamicWidthNumber::digits::hff29e0107769e312(int128_t* arg1, uint64_t arg2, char arg3)

{
    uint64_t r14 = arg2;
    uint64_t rbp = arg3;
    int64_t rax_1 = (rbp - 1) * rbp;
    int64_t r15 = 2;
    
    if (rax_1 <= arg2)
    {
        do
        {
            r14 -= rax_1;
            r15 += 1;
            rax_1 *= rbp;
        } while (r14 >= rax_1);
    }
    
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t result = 0;
    
    if (r14)
    {
        if (!arg3)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
            /* no return */
        }
        
        bool cond:0_1;
        
        do
        {
            uint8_t rdx_1;
            uint64_t r13_1;
            
            if (!(r14 >> 0x20))
            {
                int32_t rax_6 = r14;
                int32_t temp2_2 = rbp;
                rdx_1 = COMBINE(0, rax_6) % temp2_2;
                r13_1 = COMBINE(0, rax_6) / temp2_2;
            }
            else
            {
                int64_t rdx = 0;
                int32_t temp2_1 = rbp;
                rdx_1 = COMBINE(rdx, r14) % temp2_1;
                r13_1 = COMBINE(rdx, r14) / temp2_1;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hf1e1eb1ae4f6230e(&var_48, rdx_1);
            cond:0_1 = r14 >= rbp;
            r14 = r13_1;
        } while (cond:0_1);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h073d932e12575a02(&var_48, r15, 0);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h611a04afb35bad30(var_40, result);
    arg1[1] = result;
    *arg1 = var_48;
    return result;
}
