
  int64_t uu_split::number::DynamicWidthNumber::digits::h3f586449ee60c902(int128_t* arg1, uint64_t arg2, char arg3)

{
    uint64_t r14 = arg2;
    uint64_t rbx = arg3;
    int64_t rax_1 = (rbx - 1) * rbx;
    int64_t r15 = 2;
    
    if (arg2 >= rax_1)
    {
        do
        {
            r14 -= rax_1;
            r15 += 1;
            rax_1 *= rbx;
        } while (r14 >= rax_1);
    }
    
    int64_t var_50 = 0;
    int64_t var_48 = 1;
    int64_t result = 0;
    
    if (r14)
    {
        if (!arg3)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        bool cond:0_1;
        
        do
        {
            uint8_t rdx_1;
            uint64_t rbp_1;
            
            if (!(r14 >> 0x20))
            {
                int32_t rax_6 = r14;
                int32_t temp2_2 = rbx;
                rdx_1 = COMBINE(0, rax_6) % temp2_2;
                rbp_1 = COMBINE(0, rax_6) / temp2_2;
            }
            else
            {
                int64_t rdx = 0;
                int32_t temp2_1 = rbx;
                rdx_1 = COMBINE(rdx, r14) % temp2_1;
                rbp_1 = COMBINE(rdx, r14) / temp2_1;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hec3bc305ec2b1aaa(&var_50, rdx_1);
            cond:0_1 = r14 >= rbx;
            r14 = rbp_1;
        } while (cond:0_1);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::resize::hb2fbbb6384bf1fbf(&var_50, r15);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h9b9aacd060e138af(var_48, result);
    arg1[1] = result;
    *arg1 = var_50;
    return result;
}
