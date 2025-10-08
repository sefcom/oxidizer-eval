
  uint8_t alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int32_t arg6, uint32_t arg7[0x4] @ zmm0, uint32_t arg8[0x4] @ zmm1, int32_t arg9 @ zmm2)

{
    int32_t temp0 = _mm_max_ss(arg9, 0x3f800000);
    int64_t zmm4;
    
    if (arg3 < 0)
    {
        zmm4 = (arg3 & 1) | arg3 >> 1;
        zmm4 = zmm4 + zmm4;
    }
    else
        zmm4 = arg3;
    
    float zmm5[0x4] = *(arg2 + 0x18);
    zmm4 = zmm4 + 1f;
    zmm4 = zmm4 * *(arg2 + 0x1c);
    arg7[0] = arg7[0] + zmm4;
    arg7[0] = arg7[0] - arg8[0];
    arg8 = 0xbf000000;
    arg8[0] = -0.5f * temp0;
    arg8[0] = arg8[0] + arg7[0];
    uint128_t zmm0 = roundf(arg8);
    int64_t zmm3;
    zmm3 = zmm4 - temp0;
    int32_t zmm1;
    
    if (arg5 + 1 < 0)
    {
        zmm1 = ((arg5 + 1) & 1) | (arg5 + 1) >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
        zmm1 = arg5 + 1;
    
    int64_t temp0_2 = _mm_min_ss(zmm3, zmm0);
    zmm1 = zmm1 * zmm5[0];
    
    if (arg4 < 0)
    {
        zmm0 = (arg4 & 1) | arg4 >> 1;
        zmm0 = zmm0 + zmm0;
    }
    else
        zmm0 = arg4;
    
    zmm5[0] = zmm5[0] * zmm0;
    zmm1 = zmm1 - zmm5[0];
    *arg1 = _mm_add_ps(_mm_unpacklo_ps(zmm5, temp0_2), *(arg2 + 0x20))[0];
    arg1[1] = zmm1;
    *(arg1 + 0xc) = temp0;
    uint8_t result = arg6 >> 0x10;
    *(arg1 + 0x16) = result;
    *(arg1 + 0x14) = arg6;
    arg1[2] = 0x3f800000;
    *(arg1 + 0x17) = 0;
    return result;
}
