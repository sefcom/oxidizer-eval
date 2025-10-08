
  uint32_t alacritty::input::Processor$LT$T$C$A$GT$::mouse_wheel_input::h8535dc9907bfb1b9(int64_t* arg1, int32_t* arg2, char arg3)

{
    char r15_1 = *(arg1[8] + 0x414);
    uint128_t zmm0_1;
    uint128_t zmm1_1;
    double zmm2[0x2];
    
    if (*arg2 != 1)
    {
        float var_78_1 = arg2[1];
        int32_t var_68_1 = arg2[2];
        void* r14_1 = arg1[6];
        void var_48;
        _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_48, r14_1);
        _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_48, r14_1);
        int32_t var_2c;
        zmm1_1 = var_68_1 * var_2c;
        float var_30;
        zmm0_1 = (var_78_1 * var_30);
        zmm1_1 = zmm1_1;
    }
    else
    {
        uint32_t result;
        
        if (!arg3)
        {
            void* rbx_1 = arg1[3];
            result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::scheduler_mut::h7228edc0b7dad3ea(rbx_1);
            *(rbx_1 + 0x10) = {0};
            return result;
        }
        
        result = arg3;
        
        if (result != 1)
            return result;
        
        uint128_t zmm0 = *(arg2 + 8);
        uint128_t zmm1 = *(arg2 + 0x10);
        int32_t var_78;
        var_78 = zmm1;
        int32_t var_68;
        var_68 = _mm_and_pd(data_4e7800, zmm0);
        zmm0_1 = hypot(zmm0, zmm1);
        zmm2 = var_68;
        zmm2[0] = zmm2[0] / zmm0_1;
        zmm0_1 = zmm0;
        zmm1_1 = 0x3feccccccccccccd;
        bool cond:0_1 = zmm2[0] > zmm1_1;
        zmm1_1 = __andnpd_xmmxuq_memxuq(_mm_cmpeq_sd(zmm1_1, zmm2[0], 1), var_78);
        
        if (!cond:0_1)
            zmm0_1 = {0};
    }
    
    zmm2 = {0};
    zmm2[0] = r15_1;
    /* tailcall */
    return alacritty::input::Processor$LT$T$C$A$GT$::scroll_terminal::h19a40c0c4c7b1806(arg1, 
        zmm0_1, zmm1_1, zmm2);
}
