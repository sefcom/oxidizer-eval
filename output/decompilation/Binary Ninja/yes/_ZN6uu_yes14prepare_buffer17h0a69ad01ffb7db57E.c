
  uint64_t uu_yes::prepare_buffer::h0a69ad01ffb7db57(int64_t* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t i = arg1[2];
    uint64_t result = i * 2;
    
    if (result <= 0x4000)
    {
        if (!i)
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !buf.is_empty(…");
            /* no return */
        }
        
        uint64_t rdx_1 = 0x4000;
        
        if (i <= 0x4000)
        {
            int32_t temp2_1 = i;
            result = COMBINE(0, 0x4000) / temp2_1;
            rdx_1 = COMBINE(0, 0x4000) % temp2_1;
        }
        
        for (; i < 0x4000 - rdx_1; i = arg1[2])
            result = alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h41055947fdb33520(arg1, 
                core::cmp::min_by::hd689102d52ee7212(0x4000 - rdx_1 - i, i));
    }
    
    return result;
}
