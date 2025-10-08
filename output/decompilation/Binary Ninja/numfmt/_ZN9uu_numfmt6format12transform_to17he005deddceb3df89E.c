
  uint64_t uu_numfmt::format::transform_to::he005deddceb3df89(int64_t* arg1, int64_t arg2, char arg3, char arg4, int64_t arg5, uint64_t arg6[0x2] @ zmm0)

{
    uint64_t* var_b0;
    uu_numfmt::format::consider_suffix::h8fe5d35b3319f348(&var_b0, arg3, arg4, arg5, arg6);
    uint64_t* rdx_1 = var_b0;
    int64_t var_a8;
    uint128_t zmm0 = var_a8;
    char result_1;
    uint64_t result = result_1;
    char var_a0;
    int32_t var_78;
    
    if (-(rdx_1) != -0x8000000000000000)
    {
        int16_t var_9a;
        int16_t var_74_1 = var_9a;
        int32_t var_9e;
        var_78 = var_9e;
        *(arg1 + 0x1e) = var_9a;
        *(arg1 + 0x1a) = var_9e;
        arg1[1] = rdx_1;
        arg1[2] = zmm0;
        arg1[3] = var_a0;
        *(arg1 + 0x19) = result;
        *arg1 = 1;
    }
    else
    {
        uint128_t zmm1_1 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_419750), data_419640[0xa0][0]);
        uint128_t zmm2_1;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        zmm0 = zmm0 / zmm2_1;
        uint64_t var_80 = zmm0;
        int128_t var_48;
        uint64_t** rsi_3;
        int128_t* rdi_3;
        int64_t var_b8;
        int128_t var_98;
        
        if (result != 2)
        {
            int16_t var_60;
            
            if (!arg5)
            {
                result &= 1;
                void* const rax_1;
                
                if (0x4024000000000000 <= __andpd_xmmxuq_memxuq(zmm0, data_4196f0))
                {
                    *var_b8[1] = var_a0;
                    *var_b8[2] = result;
                    var_b8 = arg3;
                    var_78 = &var_80;
                    int64_t (* var_70_4)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                    int64_t* var_68_4 = &var_b8;
                    var_60 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
                    var_b0 = &data_4195a0;
                    int64_t var_a8_4 = 2;
                    rax_1 = &data_41ab88;
                }
                else
                {
                    *var_b8[1] = var_a0;
                    *var_b8[2] = result;
                    var_b8 = arg3;
                    var_78 = &var_80;
                    int64_t (* var_70_3)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                    int64_t* var_68_3 = &var_b8;
                    var_60 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
                    var_b0 = &data_4195a0;
                    int64_t var_a8_3 = 2;
                    rax_1 = &data_41abe8;
                }
                
                *var_98[8] = rax_1;
                int64_t var_88_2 = 2;
                goto label_46a4a0;
            }
            
            *var_b8[1] = var_a0;
            result &= 1;
            *var_b8[2] = result;
            var_b8 = arg3;
            
            if (arg5 > 0xffff)
            {
                var_b0 = &data_502460;
                int64_t var_a8_6 = 1;
                var_a0 = 8;
                uint128_t var_98_2 = _mm_xor_pd(zmm0, zmm0);
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            var_b0 = &var_80;
            int64_t (* var_a8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            var_a0 = &var_b8;
            var_98 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
            *var_98[8] = 0;
            int64_t var_88;
            var_88 = arg5;
            var_78 = &data_4195a0;
            int64_t var_70_2 = 2;
            void* const var_58_1 = &data_41ac48;
            int64_t var_50_1 = 2;
            uint64_t** var_68_2 = &var_b0;
            var_60 = 3;
            rdi_3 = &var_48;
            rsi_3 = &var_78;
        }
        else
        {
            uint64_t zmm0_1[0x2] =
                uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(arg4, arg5, zmm0);
            var_b8 = zmm0_1;
            
            if (arg5 > 0xffff)
            {
                var_b0 = &data_502460;
                int64_t var_a8_5 = 1;
                var_a0 = 8;
                uint64_t var_98_1[0x2] = _mm_xor_pd(zmm0_1, zmm0_1);
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            var_78 = &var_b8;
            int64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            int64_t var_68_1 = 0;
            int16_t var_60_1 = arg5;
            var_b0 = &data_4198c0;
            int64_t var_a8_1 = 1;
            *var_98[8] = &data_41ab58;
            int64_t var_88_1 = 1;
            label_46a4a0:
            var_a0 = &var_78;
            var_98 = 2;
            rdi_3 = &var_48;
            rsi_3 = &var_b0;
        }
        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(rdi_3, rsi_3);
        uint64_t result_2;
        result = result_2;
        arg1[3] = result;
        *(arg1 + 8) = var_48;
        *arg1 = 0;
    }
    return result;
}
