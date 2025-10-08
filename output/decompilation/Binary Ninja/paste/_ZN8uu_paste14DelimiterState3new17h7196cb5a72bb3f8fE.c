
  void uu_paste::DelimiterState::new::h7196cb5a72bb3f8f(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    if (arg3)
    {
        int64_t rax;
        int64_t rcx_1;
        int64_t rdx;
        int64_t* rsi;
        int64_t r8_1;
        
        if (arg3 != 1)
        {
            int128_t zmm0 = *arg2;
            int64_t* r14_1 = arg1;
            core::iter::adapters::cycle::Cycle$LT$I$GT$::new::h1924fbb896f97455(&arg1[5], arg2, 
                &arg2[arg3 * 2]);
            rsi = arg2;
            rax = arg3;
            arg1 = r14_1;
            *(r14_1 + 8) = zmm0;
            rcx_1 = 2;
            rdx = 0x20;
            r8_1 = 0x18;
        }
        else
        {
            rax = arg2[1];
            
            if (!rax)
            {
                *arg1 = 0;
                return;
            }
            
            rsi = *arg2;
            rcx_1 = 1;
            rdx = 0x10;
            r8_1 = 8;
        }
        
        *(arg1 + r8_1) = rsi;
        *(arg1 + rdx) = rax;
        arg3 = rcx_1;
    }
    
    *arg1 = arg3;
}
