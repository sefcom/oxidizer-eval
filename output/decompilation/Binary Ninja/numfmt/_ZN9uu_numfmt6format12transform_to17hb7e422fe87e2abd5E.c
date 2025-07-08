
  uint64_t uu_numfmt::format::transform_to::hb7e422fe87e2abd5(int64_t* arg1, int64_t arg2, char arg3, char arg4, int64_t arg5, uint64_t arg6[0x2] @ zmm0)

{
    int64_t var_b8;
    uu_numfmt::format::consider_suffix::h00abba19284ba538(&var_b8, arg3, arg4, arg5, arg6);
    int64_t rdx_1 = var_b8;
    int64_t var_b0;
    uint128_t zmm0 = var_b0;
    char result_1;
    uint64_t result = result_1;
    char var_a8;
    
    if (rdx_1 != -0x8000000000000000)
    {
        int16_t var_a2;
        *(arg1 + 0x1e) = var_a2;
        int32_t var_a6;
        *(arg1 + 0x1a) = var_a6;
        arg1[1] = rdx_1;
        arg1[2] = zmm0;
        arg1[3] = var_a8;
        *(arg1 + 0x19) = result;
        *arg1 = 1;
    }
    else
    {
        uint128_t zmm1_1 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_415e90), data_415dd0);
        uint128_t zmm2_1;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        zmm0 = zmm0 / zmm2_1;
        uint64_t var_f0 = zmm0;
        int128_t var_40;
        int128_t* const* rsi_4;
        int128_t* rdi_2;
        double var_128;
        int128_t* const var_120;
        uint64_t* var_e8;
        
        if (result != 2)
        {
            if (!arg5)
            {
                zmm0 = __andpd_xmmxuq_memxuq(zmm0, data_415de0);
                result &= 1;
                
                if (0x4024000000000000 <= zmm0)
                {
                    var_128 = var_a8;
                    *var_128[1] = result;
                    var_e8 = &var_f0;
                    int64_t (* var_e0_4)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                    double* var_d8_4 = &var_128;
                    int64_t (* var_d0_4)(char* arg1, void* arg2) = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
                    var_b8 = _mm_xor_pd(zmm0, zmm0);
                }
                else
                {
                    var_128 = var_a8;
                    *var_128[1] = result;
                    var_e8 = &var_f0;
                    int64_t (* var_e0_3)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                    double* var_d8_3 = &var_128;
                    int64_t (* var_d0_3)(char* arg1, void* arg2) = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
                    var_b8 = 0;
                    int64_t var_b0_1 = 1;
                }
                
                var_a8 = 2;
                int64_t var_98_3 = 0;
                int64_t var_90_3 = 0x20;
                char var_88_3 = 3;
                int64_t var_80_2 = 2;
                int64_t var_70_2 = 2;
                int64_t var_60_2 = 1;
                int64_t var_58_2 = 0x20;
                char var_50_2 = 3;
                var_120 = &data_41a370;
                int64_t var_118_3 = 2;
                int64_t* var_100_3 = &var_b8;
                int64_t var_f8_3 = 2;
                goto label_4c40f5;
            }
            
            result &= 1;
            var_128 = var_a8;
            *var_128[1] = result;
            var_120 = &var_f0;
            int64_t (* var_118_2)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            double* var_110_1 = &var_128;
            int64_t (* var_108_1)(char* arg1, void* arg2) = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            int64_t var_100_2 = arg5;
            int64_t var_f8_2 = 0;
            int64_t var_98_2 = 0;
            int64_t var_90_2 = 0x20;
            char var_88_2 = 3;
            int64_t var_80_1 = 2;
            int64_t var_70_1 = 2;
            int64_t var_60_1 = 1;
            int64_t var_58_1 = 0x20;
            char var_50_1 = 3;
            var_e8 = &data_41a370;
            int64_t var_e0_2 = 2;
            int64_t* var_c8_1 = &var_b8;
            int64_t var_c0;
            __builtin_memcpy(&var_c0, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
            int128_t* const* var_d8_2 = &var_120;
            int64_t var_d0_2 = 3;
            rdi_2 = &var_40;
            rsi_4 = &var_e8;
        }
        else
        {
            var_128 = uu_numfmt::format::round_with_precision::h7f1d296807047857(arg4, arg5, zmm0);
            var_e8 = &var_128;
            int64_t (* var_e0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            int64_t var_d8_1 = arg5;
            int64_t var_d0_1 = 0;
            __builtin_memcpy(&var_b8, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x18);
            int64_t var_98_1 = 0;
            int64_t var_90_1 = 0x20;
            char var_88_1 = 3;
            var_120 = &data_416000;
            int64_t var_118_1 = 1;
            int64_t* var_100_1 = &var_b8;
            int64_t var_f8_1 = 1;
            label_4c40f5:
            uint64_t** var_110_2 = &var_e8;
            int64_t var_108_2 = 2;
            rdi_2 = &var_40;
            rsi_4 = &var_120;
        }
        core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(rdi_2, rsi_4);
        uint64_t result_2;
        result = result_2;
        arg1[3] = result;
        *(arg1 + 8) = var_40;
        *arg1 = 0;
    }
    return result;
}
