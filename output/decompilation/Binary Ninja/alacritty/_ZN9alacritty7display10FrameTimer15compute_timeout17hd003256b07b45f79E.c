
  int64_t alacritty::display::FrameTimer::compute_timeout::hd003256b07b45f79(int64_t* arg1, int64_t arg2, int32_t arg3)

{
    int64_t result = arg2;
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    
    if (arg1[4] != result || arg1[5] != arg3)
    {
        *arg1 = rax;
        arg1[1] = rdx;
        arg1[2] = rax;
        arg1[3] = rdx;
        arg1[4] = result;
        arg1[5] = arg3;
    }
    else
    {
        int64_t rax_1;
        int32_t rdx_2;
        rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(arg1[2], arg1[3], result, arg3);
        
        if (rax_1 == rax)
        {
            if (rdx_2 < rdx)
                goto label_84fd7d;
            
            goto label_84fd34;
        }
        
        if (rax_1 < rax)
        {
            label_84fd7d:
            int64_t rax_2;
            int32_t rdx_6;
            rax_2 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$GT$::sub::h58e97276508fd021(rax, rdx, *arg1);
            int64_t rsi_3 = result * 0xf4240;
            uint64_t rcx_4 = arg3 / 0x3e8;
            int64_t rcx_5 = rcx_4 + rsi_3;
            
            if (rcx_4 == -(rsi_3))
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            int64_t rax_4 = rax_2 * 0xf4240 + rdx_6 / 0x3e8;
            uint64_t rcx_6;
            
            if (!((rax_4 | rcx_5) >> 0x20))
                rcx_6 = COMBINE(0, rax_4) % rcx_5;
            else
                rcx_6 = COMBINE(0, rax_4) % rcx_5;
            
            uint64_t rdx_17 = rcx_6 / 0xf4240;
            int64_t rax_10;
            int32_t rdx_18;
            rax_10 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$LT$core..time..Duration$GT$$GT$::sub::h5e9dd3ecc3decb67(rax, rdx, rdx_17, (rcx_6 - rdx_17 * 0xf4240) * 0x3e8);
            arg1[2] = rax_10;
            arg1[3] = rdx_18;
            return 0;
        }
        
        label_84fd34:
        arg1[2] = rax_1;
        arg1[3] = rdx_2;
        int64_t result_1;
        int32_t rdx_4;
        result_1 =
            _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$GT$::sub::h58e97276508fd021(
            rax_1, rdx_2, rax);
        result = result_1;
    }
    
    return result;
}
