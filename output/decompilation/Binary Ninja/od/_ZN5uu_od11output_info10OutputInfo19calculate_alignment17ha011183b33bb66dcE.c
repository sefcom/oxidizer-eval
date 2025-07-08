
  int128_t* uu_od::output_info::OutputInfo::calculate_alignment::ha011183b33bb66dc(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void* const s;
    
    if (arg4 >= 9)
    {
        int64_t var_a0 = arg4 << 3;
        int64_t* var_50 = &var_a0;
        uint64_t (* var_48)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        char const* const var_40 = "@";
        uint64_t (* var_38)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        s = &data_543668;
        int64_t var_90 = 3;
        int64_t var_78 = 0;
        int64_t** var_88 = &var_50;
        int64_t var_80 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&s);
        /* no return */
    }
    
    int512_t zmm0;
    zmm0 = {0};
    __builtin_memset(&s, 0, 0x40);
    int64_t rax = (*(arg3 + 0x18))(arg2, zmm0);
    
    if (!rax)
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    int64_t r15 = rax;
    int64_t rax_1 = (*(arg3 + 0x20))(arg2);
    
    if (r15 <= arg4)
    {
        uint16_t rax_2 = arg4;
        char temp2_1 = r15;
        uint8_t temp1_1 = rax_2 % temp2_1;
        rax_2 = rax_2 / temp2_1;
        *rax_2[1] = temp1_1;
        uint64_t rbp_1 = rax_2;
        int64_t r14_1 = arg5 - rax_1 * rbp_1;
        bool cond:0_1;
        
        do
        {
            uint64_t r12_1;
            
            if (!(r14_1 >> 0x20))
                r12_1 = COMBINE(0, r14_1) / rbp_1;
            else
                r12_1 = COMBINE(0, r14_1) / rbp_1;
            
            int64_t rax_9 = 0;
            
            do
            {
                int64_t r13_2 = rax_9 * r15;
                
                if (r13_2 > 7)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r13_2, 8);
                    /* no return */
                }
                
                rax_9 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rax_9);
                (&s)[r13_2] += r12_1;
                r14_1 -= r12_1;
            } while (rax_9 < rbp_1);
            
            r15 *= 2;
            cond:0_1 = rbp_1 >= 2;
            rbp_1 u>>= 1;
        } while (cond:0_1);
    }
    
    int128_t zmm0_1 = s;
    __builtin_memset(&arg1[1], 0, 0x30);
    *arg1 = zmm0_1;
    return arg1;
}
