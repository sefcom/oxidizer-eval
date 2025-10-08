
  uint32_t [0x4] uu_fmt::linebreak::compute_demerits::hbbee1174f2c8e20d(int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4[0x4] @ zmm0)

{
    uint32_t zmm2[0x4];
    
    if (arg2 < 0)
    {
        zmm2[0] = (arg2 & 1) | arg2 >> 1;
        zmm2[0] = zmm2[0] + zmm2[0];
    }
    else
        zmm2[0] = arg2;
    
    uint32_t zmm1[0x4];
    zmm1[0] = arg1;
    zmm1[0] = zmm1[0] / zmm2[0];
    uint32_t zmm3[0x4] = zmm1;
    
    if (!arg1)
        zmm3 = {0};
    
    if (arg1)
        zmm1 = __andps_xmmxud_memxud(zmm1, data_417f40);
    
    int64_t rcx_5;
    bool cond:1;
    
    if (!arg1 || zmm1[0] <= 1f)
    {
        zmm3[0] = zmm3[0] * zmm3[0];
        zmm3[0] = zmm3[0] * zmm3[0];
        zmm1 = __andps_xmmxud_memxud(zmm3, data_417f40);
        zmm1[0] = zmm1[0] * 100f;
        zmm1[0];
        zmm1[0];
        FCMP_O(zmm1[0], zmm1[0]);
        rcx_5 = arg2 - arg3;
        cond:1 = arg2 - arg3 < 0;
        
        if (arg2 > arg3)
            goto label_462470;
    }
    else
    {
        rcx_5 = arg2 - arg3;
        cond:1 = arg2 - arg3 < 0;
        
        if (arg2 > arg3)
        {
            label_462470:
            int64_t rsi;
            
            if (cond:1)
            {
                zmm1 = {0};
                zmm1[0] = (rcx_5 & 1) | rcx_5 >> 1;
                zmm1[0] = zmm1[0] + zmm1[0];
                rsi = arg2 - 1;
                
                if (arg2 - 1 < 0)
                {
                    label_46248b:
                    zmm2 = {0};
                    zmm2[0] = (rsi & 1) | rsi >> 1;
                    zmm2[0] = zmm2[0] + zmm2[0];
                }
                else
                {
                    zmm2 = {0};
                    zmm2[0] = rsi;
                }
            }
            else
            {
                zmm1 = {0};
                zmm1[0] = rcx_5;
                rsi = arg2 - 1;
                
                if (arg2 - 1 < 0)
                    goto label_46248b;
                
                zmm2 = {0};
                zmm2[0] = rsi;
            }
            zmm1[0] = zmm1[0] / zmm2[0];
            zmm1[0] = zmm1[0] * zmm1[0];
            zmm1[0] = zmm1[0] * zmm1[0];
            zmm2 = __andps_xmmxud_memxud(zmm1, data_417f40);
            zmm2[0] = zmm2[0] * 300f;
            zmm2[0];
            zmm2[0];
            FCMP_O(zmm2[0], zmm2[0]);
        }
    }
    zmm3[0] = zmm3[0] - arg4[0];
    zmm3[0] = zmm3[0] * 0.5f;
    zmm3[0] = zmm3[0] * zmm3[0];
    zmm3[0] = zmm3[0] * zmm3[0];
    arg4 = __andps_xmmxud_memxud(zmm3, data_417f40);
    arg4[0] = arg4[0] * 600f;
    arg4[0];
    arg4[0];
    FCMP_O(arg4[0], arg4[0]);
    return 0x7fffffffffffffff;
}
