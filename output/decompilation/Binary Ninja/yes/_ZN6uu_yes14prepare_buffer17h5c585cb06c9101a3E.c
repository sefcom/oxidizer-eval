
  void uu_yes::prepare_buffer::h5c585cb06c9101a3(int64_t* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rsi = arg1[2];
    
    if (rsi <= 0x2000)
    {
        if (!rsi)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: !buf.is_empty(…");
            /* no return */
        }
        
        rax = 0x4000;
        int16_t temp2_1 = rsi;
        rax = COMBINE(0, 0x4000) / temp2_1;
        uint64_t r14_1 = 0x4000 - COMBINE(0, 0x4000) % temp2_1;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h6cd1031674c11119(arg1, 
                core::cmp::Ord::min::h5f0d19bf62851fe4(r14_1 - rsi, rsi));
            rsi = arg1[2];
        } while (rsi < r14_1);
    }
}
