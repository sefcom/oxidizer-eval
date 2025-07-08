
  uint128_t uu_numfmt::format::transform_from::h06c22e665722480c(int64_t* arg1, char* arg2, void* arg3, int64_t arg4, char arg5)

{
    int64_t var_38;
    int64_t r12;
    uu_numfmt::format::parse_suffix::h407c60c3b46102ef(&var_38, arg2, arg3, r12);
    int64_t rdx = var_38;
    int64_t result_1;
    uint128_t result = result_1;
    char var_28;
    bool var_27;
    
    if (rdx != -0x8000000000000000)
    {
        int16_t var_22;
        *(arg1 + 0x16) = var_22;
        int32_t var_26;
        *(arg1 + 0x12) = var_26;
        *arg1 = rdx;
        arg1[1] = result;
        arg1[2] = var_28;
        *(arg1 + 0x11) = var_27;
    }
    else
    {
        uint128_t zmm1_1 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg4, data_415e90), data_415dd0);
        uint128_t zmm2_1;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        result = result * zmm2_1;
        result = uu_numfmt::format::remove_suffix::h52c5c1e5f9168522(&var_38, var_28, var_27, arg5, 
            result);
        
        if (var_38 != -0x8000000000000000)
        {
            arg1[2] = var_28;
            result = var_38;
            *arg1 = result;
        }
        else
        {
            uint128_t result_2 = result_1;
            result = _mm_xor_pd(result, result);
            
            if (arg5 == 5)
                result = _mm_andnot_pd(_mm_cmpeq_sd(result, result_2, 0), result_2);
            else if (result <= result_2)
                result = ceil(result_2);
            else
                result = __xorpd_xmmxuq_memxuq(ceil(__andpd_xmmxuq_memxuq(result_2, data_415de0)), 
                    data_416160);
            
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
