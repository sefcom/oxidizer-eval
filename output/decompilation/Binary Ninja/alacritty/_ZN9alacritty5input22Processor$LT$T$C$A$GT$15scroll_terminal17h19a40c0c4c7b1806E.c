
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::scroll_terminal::h19a40c0c4c7b1806(int64_t* arg1, double arg2[0x2] @ zmm0, uint128_t arg3 @ zmm1, double arg4[0x2] @ zmm2)

{
    uint128_t var_c8 = arg4;
    void* r14 = arg1[6];
    int128_t var_58;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r14);
    int32_t var_40;
    double zmm0 = var_40;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, r14);
    int32_t var_3c;
    double zmm0_1[0x2] = var_3c;
    zmm0_1[0] = zmm0_1[0];
    int64_t var_a8 = zmm0_1;
    void* r14_1 = arg1[1];
    uint64_t rbp;
    uint128_t zmm1;
    
    if (!_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r14_1))
    {
        char* r14_3;
        
        if (!(~*(r14_1 + 0x6dc) & 0x9000))
            r14_3 = arg1[5];
        
        if (~*(r14_1 + 0x6dc) & 0x9000 || *r14_3 & 4)
        {
            zmm0_1 = arg3;
            zmm0_1[0] = zmm0_1[0] * var_c8;
            void* r14_8 = arg1[3];
            zmm0_1[0] = zmm0_1[0] + *(r14_8 + 0x18);
            *(r14_8 + 0x18) = zmm0_1;
            var_c8 = r14_8;
            zmm1 = zmm0_1 / var_a8;
            int32_t rax_8 = __minsd_xmmsd_memsd(
                __maxsd_xmmsd_memsd(zmm1[0], -0x3e20000000000000)[0], 0x41dfffffffc00000)[0];
            int32_t rdx_5 = 0;
            
            if (FCMP_O(zmm1, zmm1))
                rdx_5 = rax_8;
            
            if (rdx_5)
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scroll::h2700179c7835b4fb(arg1);
        }
        else
        {
            double temp0_7[0x2] = __unpcklpd_xmmpd_memdq(arg2, arg3);
            var_c8 = _mm_mul_pd(_mm_unpacklo_pd(var_c8, var_c8), temp0_7);
            void* r13_1 = arg1[3];
            zmm1 = __addpd_xmmpd_mempd(*(r13_1 + 0x10), var_c8);
            uint128_t var_98_2 = zmm1;
            zmm0_1 = _mm_xor_pd(temp0_7, temp0_7);
            rbp = 0x42;
            rbp = 0x42 - (arg3[0] > zmm0_1[0]);
            bool cond:1_1 = arg2[0] > zmm0_1[0];
            *(r13_1 + 0x10) = zmm1;
            uint128_t var_b8;
            var_b8 = cond:1_1 + 0x43;
            zmm0_1 = var_98_2;
            double temp0_12[0x2] = _mm_unpackhi_pd(zmm0_1, zmm0_1[0]);
            temp0_12[0] = temp0_12[0] / var_a8;
            zmm0_1 = __andpd_xmmxuq_memxuq(temp0_12, data_4e7800);
            int64_t rax_4 = zmm0_1[0];
            zmm1 = zmm0_1 - 9.2233720368547758e+18;
            int64_t r14_6 = (zmm1 & rax_4 >> 0x3f) | rax_4;
            
            if (zmm0_1[0] < 0.0)
                r14_6 = 0;
            
            if (zmm0_1[0] > 1.844674407370955e+19)
                r14_6 = -1;
            
            var_c8 = r13_1;
            zmm1 = var_98_2 / zmm0;
            zmm1 = __andpd_xmmxuq_memxuq(zmm1, data_4e7800);
            int64_t rax_5 = zmm1;
            zmm0_1 = zmm1;
            zmm0_1[0] = zmm0_1[0] - 9.2233720368547758e+18;
            int64_t r13_4 = (zmm0_1[0] & rax_5 >> 0x3f) | rax_5;
            
            if (zmm1 < 0.0)
                r13_4 = 0;
            
            if (zmm1 > 1.844674407370955e+19)
                r13_4 = -1;
            
            int64_t rax_7;
            int64_t rdx_1;
            rax_7 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(
                (r13_4 + r14_6) * 3, 1, 1);
            int64_t var_80 = rax_7;
            int64_t var_78_1 = rdx_1;
            int64_t var_70_1 = 0;
            int64_t r14_7 = r14_6 + 1;
            
            while (true)
            {
                int64_t temp2_1 = r14_7;
                r14_7 -= 1;
                
                if (temp2_1 == 1)
                    break;
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x1b);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x4f);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, rbp);
            }
            
            int64_t r13_5 = r13_4 + 1;
            
            while (true)
            {
                int64_t temp3_1 = r13_5;
                r13_5 -= 1;
                
                if (temp3_1 == 1)
                    break;
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x1b);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, 0x4f);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_80, var_b8);
            }
            
            int64_t var_48_1 = var_70_1;
            var_58 = var_80;
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(*arg1, &var_58);
        }
    }
    else
    {
        void* r14_2 = arg1[3];
        zmm0_1 = *(r14_2 + 0x10);
        double temp0_1[0x2] = _mm_add_pd(_mm_unpacklo_pd(arg2, arg3), zmm0_1);
        double var_98_1[0x2] = temp0_1;
        *(r14_2 + 0x10) = temp0_1;
        rbp = arg3 > _mm_xor_pd(zmm0_1, zmm0_1)[0];
        var_c8 = r14_2;
        double temp0_3[0x2] = _mm_unpackhi_pd(var_98_1, var_98_1[0]);
        temp0_3[0] = temp0_3[0] / var_a8;
        zmm0_1 = __andpd_xmmxuq_memxuq(temp0_3, data_4e7800);
        bool cond:0_1 = FCMP_UO(zmm0_1[0], zmm0_1[0]);
        int32_t i_2 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1[0], -0x3e20000000000000)[0], 
            0x41dfffffffc00000)[0];
        
        if (cond:0_1)
            i_2 = 0;
        
        if (i_2 > 0)
        {
            rbp ^= 0x41;
            int32_t i;
            
            do
            {
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(arg1, 
                    rbp, 0);
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            var_98_1 = *(var_c8 + 0x10);
        }
        
        rbp = arg2[0] > 0.0;
        zmm1 = var_98_1 / zmm0;
        zmm1 = __andpd_xmmxuq_memxuq(zmm1, data_4e7800);
        int32_t i_3 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm1[0], -0x3e20000000000000)[0], 
            0x41dfffffffc00000)[0];
        
        if (FCMP_UO(zmm1, zmm1))
            i_3 = 0;
        
        if (i_3 > 0)
        {
            rbp ^= 0x43;
            int32_t i_1;
            
            do
            {
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(arg1, 
                    rbp, 0);
                i_1 = i_3;
                i_3 -= 1;
            } while (i_1 != 1);
        }
    }
    void* r14_9 = var_c8;
    *(r14_9 + 0x10) = fmod((*(r14_9 + 0x10))[0], zmm0);
    int64_t result;
    int64_t zmm0_4;
    result = fmod(*(r14_9 + 0x18), var_a8);
    *(r14_9 + 0x18) = zmm0_4;
    return result;
}
