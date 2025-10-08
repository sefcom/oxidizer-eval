
  uint64_t uu_numfmt::format::transform_from::hcd3fb358ec05b121(int64_t* arg1, char* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_50;
    int64_t r13;
    uu_numfmt::format::parse_suffix::h65381ef2a47d074c(&var_50, arg2, arg3, r13);
    int64_t rdx = var_50;
    char result_1;
    uint64_t result = result_1;
    double var_48;
    char var_40;
    
    if (-(rdx) != -0x8000000000000000)
    {
        int16_t var_3a;
        int16_t var_54_1 = var_3a;
        int32_t var_3e;
        int32_t var_58_1 = var_3e;
        *(arg1 + 0x16) = var_3a;
        *(arg1 + 0x12) = var_3e;
        *arg1 = rdx;
        arg1[1] = var_48;
        arg1[2] = var_40;
        *(arg1 + 0x11) = result;
    }
    else
    {
        uint128_t zmm1_1 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg4, data_419750), data_419640[0xa0][0]);
        double zmm2_1[0x2] = _mm_unpackhi_pd(zmm1_1, zmm1_1);
        zmm2_1[0] = zmm2_1[0] + zmm1_1;
        int64_t var_38;
        uint64_t zmm1_2[0x2] = uu_numfmt::format::remove_suffix::h7f875f2aa3a3c8ad(&var_38, var_40, 
            result, arg5, var_48 * zmm2_1[0]);
        
        if (var_38 != -0x8000000000000000)
        {
            uint64_t result_2;
            result = result_2;
            arg1[2] = result;
            *arg1 = var_38;
        }
        else
        {
            int64_t var_30;
            int64_t zmm0_2;
            zmm0_2 =
                uu_numfmt::format::transform_from::_$u7b$$u7b$closure$u7d$$u7d$::hb3e2a9b15b793ed1(
                arg5, var_30, zmm1_2);
            arg1[1] = zmm0_2;
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
