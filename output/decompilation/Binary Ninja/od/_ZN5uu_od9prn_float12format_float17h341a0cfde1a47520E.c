
  int128_t* uu_od::prn_float::format_float::h341a0cfde1a47520(int128_t* arg1, int64_t arg2, int64_t arg3, uint64_t arg4[0x2] @ zmm0)

{
    int64_t var_70 = arg4;
    uint64_t rax = arg4[0];
    int64_t** rsi_2;
    int64_t* var_d8;
    int64_t var_a8;
    char const (** const var_68)[0x88];
    
    if (FCMP_UO(arg4[0], arg4[0]))
    {
        label_4d51da:
        uint64_t temp0[0x2] = _mm_xor_pd(arg4, arg4);
        arg4[0] - temp0[0];
        
        if (arg4[0] != temp0[0] || FCMP_UO(arg4[0], temp0[0]) || rax >= 0)
        {
            arg4[0] - temp0[0];
            uint64_t temp0_6[0x2];
            
            if (arg4[0] != temp0[0] || !FCMP_O(arg4[0], temp0[0]))
                temp0_6 = __andpd_xmmxuq_memxuq(arg4, data_40d940);
            
            int64_t (* rax_5)(int64_t* arg1, int64_t* arg2);
            
            if ((!(arg4[0] != temp0[0]) && FCMP_O(arg4[0], temp0[0]))
                || 0x7ff0000000000000[0] <= temp0_6[0])
            {
                var_68 = &var_70;
                rax_5 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                var_68 = &var_70;
                rax_5 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            
            int64_t (* var_60_1)(int64_t* arg1, int64_t* arg2) = rax_5;
            int64_t var_58_1 = arg2;
            int64_t var_50_1 = 0;
            var_a8 = 2;
            int64_t var_98_2 = 1;
            int64_t var_90_2 = 1;
            int64_t var_88_1 = 0;
            int64_t var_80_1 = 0x20;
            char var_78_1 = 3;
        }
        else
        {
            var_68 = &data_542048;
            int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            int64_t var_58 = arg2;
            int64_t var_50 = 0;
            var_a8 = 2;
            int64_t var_98_1 = 1;
            int64_t var_90_1 = 1;
            int64_t var_88 = 0;
            int64_t var_80 = 0x20;
            char var_78 = 1;
        }
        
        var_d8 = &data_40dad0;
        int64_t var_d0_1 = 1;
        int64_t* var_b8 = &var_a8;
        int64_t var_b0 = 1;
        char const (** const* var_c8_1)[0x88] = &var_68;
        int64_t var_c0 = 2;
        rsi_2 = &var_d8;
    }
    else
    {
        int64_t r14_1 = arg3;
        int64_t rcx_2 = rax & 0x7ff0000000000000;
        int64_t rsi_1 = rax << 0xc;
        
        if (!rsi_1)
        {
            if (!rcx_2 || rcx_2 == 0x7ff0000000000000)
                goto label_4d51da;
        }
        else if (!rcx_2)
            goto label_4d51da;
        
        uint64_t temp0_1[0x2] = _mm_and_pd(data_40d940, arg4);
        uint64_t var_38_1 = arg4[0];
        DFtype x;
        double zmm0_1;
        x = floor(log10(arg1, rsi_1, temp0_1[0]));
        int32_t m = 0;
        int32_t m_1 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1, -0x3e20000000000000), 
            0x41dfffffffc00000);
        
        if (FCMP_O(zmm0_1, zmm0_1))
            m = m_1;
        
        uint64_t zmm0_2[0x2];
        uint64_t zmm1_1[0x2];
        zmm0_2 = __powidf2(m, x);
        uint64_t temp0_4[0x2] = _mm_xor_pd(zmm1_1, zmm1_1);
        
        if (!(var_38_1 <= temp0_4[0]) && zmm0_2[0] > var_38_1)
            m -= 1;
        else if (!(temp0_4[0] <= var_38_1)
                && !(var_38_1 <= __xorpd_xmmxuq_memxuq(zmm0_2, data_40dbf0)[0]))
            m -= 1;
        
        if (m < 0 || m >= r14_1)
        {
            int64_t (* rax_4)(int64_t* arg1, int64_t* arg2);
            
            if (m == 0xffffffff)
            {
                var_d8 = &var_70;
                rax_4 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                r14_1 -= 1;
                var_d8 = &var_70;
                rax_4 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            
            int64_t (* var_d0_2)(int64_t* arg1, int64_t* arg2) = rax_4;
            int64_t var_c8_2 = r14_1;
        }
        else
        {
            var_d8 = &var_70;
            int64_t (* var_d0)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            int64_t var_c8 = ~m + r14_1;
        }
        
        int64_t var_c0_1 = 0;
        int64_t var_b8_1 = arg2;
        int64_t var_b0_1 = 0;
        __builtin_memcpy(&var_a8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        int64_t var_88_2 = 0;
        int64_t var_80_2 = 0x20;
        char var_78_2 = 3;
        var_68 = &data_40dad0;
        int64_t var_60_2 = 1;
        int64_t* var_48_1 = &var_a8;
        int64_t var_40_1 = 1;
        int64_t** var_58_2 = &var_d8;
        int64_t var_50_2 = 3;
        rsi_2 = &var_68;
    }
    return core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, rsi_2);
}
