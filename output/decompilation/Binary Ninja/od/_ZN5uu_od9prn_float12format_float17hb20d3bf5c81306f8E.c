
  int128_t* uu_od::prn_float::format_float::hb20d3bf5c81306f8(int128_t* arg1, int64_t arg2, uint64_t arg3, int128_t arg4 @ zmm0)

{
    int64_t rax = arg4;
    char const (* var_70)[0x3] = arg4;
    int64_t rcx = 0x7fffffffffffffff & rax;
    int64_t r9_2;
    
    if (rcx != 0x7ff0000000000000)
        r9_2 = rax & 0x7ff0000000000000;
    
    char const (** const* rsi)[0x3];
    void* const var_a0;
    char const (** const var_68)[0x3];
    
    if (rcx == 0x7ff0000000000000 || !r9_2 || r9_2 == 0x7ff0000000000000)
    {
        arg4 - 0.0;
        void* const rax_1;
        
        if (arg4 != 0.0 || FCMP_UO(arg4, 0.0))
        {
            int64_t (* rax_2)(int64_t* arg1, int64_t* arg2);
            
            if (rcx > 0x7fefffffffffffff)
            {
                label_46b72a:
                var_68 = &var_70;
                rax_2 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                goto label_46b831;
            }
            
            var_68 = &var_70;
            rax_2 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h557be61bd0f0070d;
            label_46b831:
            int64_t (* var_60_1)(int64_t* arg1, int64_t* arg2) = rax_2;
            int64_t var_58_1 = 0;
            int16_t var_50_2 = arg2;
            var_a0 = &data_41a940;
            int64_t var_98_2 = 1;
            rax_1 = &data_41d228;
        }
        else
        {
            if (!rax)
                goto label_46b72a;
            
            var_68 = &data_503900;
            int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            int64_t var_58 = 0;
            int16_t var_50_1 = arg2;
            var_a0 = &data_41a940;
            int64_t var_98 = 1;
            rax_1 = &data_41d2a8;
        }
        
        void* const var_80 = rax_1;
        int64_t var_78_1 = 1;
        char const (** const* var_90_1)[0x3] = &var_68;
        int64_t var_88_1 = 2;
        rsi = &var_a0;
    }
    else
    {
        uint64_t r12_1 = arg3;
        int64_t var_38_1 = arg4;
        uint128_t zmm0;
        uint128_t zmm1_1;
        zmm0 = log10(arg1, arg2, (data_41a790[0] & arg4));
        double zmm0_1[0x2] = floor(zmm0, zmm1_1);
        int32_t rbx_1 = 0;
        bool cond:1_1 = FCMP_O(zmm0_1[0], zmm0_1[0]);
        int32_t rax_3 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1[0], -0x3e20000000000000)[0], 
            0x41dfffffffc00000)[0];
        
        if (cond:1_1)
            rbx_1 = rax_3;
        
        uint64_t zmm0_2[0x2] = __powidf2(rbx_1, 0x4024000000000000);
        
        if (!(var_38_1 <= 0.0) && zmm0_2[0] > var_38_1)
            rbx_1 -= 1;
        else if (!(0.0 <= var_38_1))
        {
            zmm0_2 = __xorpd_xmmxuq_memxuq(zmm0_2, data_41aa90);
            
            if (!(var_38_1 <= zmm0_2[0]))
                rbx_1 -= 1;
        }
        
        int64_t var_88;
        int64_t (* rax_7)(int64_t* arg1, int64_t* arg2);
        
        if (rbx_1 >= 0 & rbx_1 < r12_1)
        {
            r12_1 += ~rbx_1;
            
            if (r12_1 > 0xffff)
            {
                var_a0 = &data_5038d8;
                int64_t var_98_1 = 1;
                int64_t var_90 = 8;
                var_88 = _mm_xor_pd(zmm0_2, zmm0_2);
                core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
                /* no return */
            }
            
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        }
        else if (rbx_1 == 0xffffffff)
        {
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        }
        else
        {
            r12_1 = r12_1 - 1;
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h557be61bd0f0070d;
        }
        
        int64_t (* var_98_3)(int64_t* arg1, int64_t* arg2) = rax_7;
        int64_t var_90_2 = 0;
        var_88 = r12_1;
        int64_t var_80_1 = 0;
        int64_t var_78;
        var_78 = arg2;
        var_68 = &data_41a940;
        int64_t var_60_2 = 1;
        void* const var_48_1 = &data_41d258;
        int64_t var_40_1 = 1;
        void* const* var_58_2 = &var_a0;
        int16_t var_50;
        var_50 = 3;
        rsi = &var_68;
    }
    return core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, rsi);
}
