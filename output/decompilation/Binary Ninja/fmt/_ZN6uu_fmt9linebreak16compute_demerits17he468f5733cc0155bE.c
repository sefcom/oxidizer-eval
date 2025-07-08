
  uint32_t [0x4] uu_fmt::linebreak::compute_demerits::he468f5733cc0155b(int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4[0x4] @ zmm0)

{
    uint32_t zmm1[0x4];
    uint32_t result[0x4];
    
    if (arg2 < 0)
    {
        zmm1[0] = (arg2 & 1) | arg2 >> 1;
        zmm1[0] = zmm1[0] + zmm1[0];
        
        if (arg1)
        {
            result[0] = arg1;
            result[0] = result[0] / zmm1[0];
        }
        else
            result = {0};
    }
    else
    {
        zmm1[0] = arg2;
        
        if (!arg1)
            result = {0};
        else
        {
            result[0] = arg1;
            result[0] = result[0] / zmm1[0];
        }
    }
    
    if (!(_mm_and_ps(*data_414fd0, result)[0] > 1f))
    {
        result[0] = result[0] * result[0];
        result[0] = result[0] * result[0];
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(result, *data_414fd0);
        temp0_1[0] = temp0_1[0] * 100f;
        temp0_1[0];
        temp0_1[0];
        FCMP_O(temp0_1[0], temp0_1[0]);
    }
    
    int64_t rcx_6 = arg2 - arg3;
    
    if (arg2 > arg3)
    {
        float zmm2;
        int64_t rsi;
        
        if (arg2 - arg3 < 0)
        {
            zmm1 = {0};
            zmm1[0] = (rcx_6 & 1) | rcx_6 >> 1;
            zmm1[0] = zmm1[0] + zmm1[0];
            rsi = arg2 - 1;
            
            if (arg2 - 1 < 0)
            {
                zmm2 = (rsi & 1) | rsi >> 1;
                zmm2 = zmm2 + zmm2;
            }
            else
                zmm2 = rsi;
        }
        else
        {
            zmm1 = {0};
            zmm1[0] = rcx_6;
            rsi = arg2 - 1;
            
            if (arg2 - 1 >= 0)
                zmm2 = rsi;
            else
            {
                zmm2 = (rsi & 1) | rsi >> 1;
                zmm2 = zmm2 + zmm2;
            }
        }
        zmm1[0] = zmm1[0] / zmm2;
        zmm1[0] * zmm1[0] * zmm1[0];
    }
    
    result[0] = result[0] - arg4[0];
    result[0] = result[0] * 0.5f;
    result[0] = result[0] * result[0];
    result[0] = result[0] * result[0];
    uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(result, *data_414fd0);
    temp0_3[0] = temp0_3[0] * 600f;
    temp0_3[0];
    temp0_3[0];
    FCMP_O(temp0_3[0], temp0_3[0]);
    return result;
}
