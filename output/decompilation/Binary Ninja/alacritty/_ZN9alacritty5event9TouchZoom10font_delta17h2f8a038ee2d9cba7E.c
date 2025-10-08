
  int64_t alacritty::event::TouchZoom::font_delta::h2f8a038ee2d9cba7(void* arg1, int128_t* arg2)

{
    float var_38 = alacritty::event::TouchZoom::distance::ha17fa3104e8be542(arg1);
    int32_t rcx;
    rcx = arg2[3] != *(arg1 + 0x30);
    uint64_t rcx_1 = rcx << 6;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    *(arg1 + rcx_1 + 0x30) = arg2[3];
    *(arg1 + rcx_1 + 0x20) = zmm2;
    *(arg1 + rcx_1 + 0x10) = zmm1;
    *(arg1 + rcx_1) = zmm0;
    uint32_t zmm0_1[0x4] = alacritty::event::TouchZoom::distance::ha17fa3104e8be542(arg1);
    zmm0_1[0] = zmm0_1[0] - var_38;
    zmm0_1[0] = zmm0_1[0] * 0.00999999978f;
    zmm0_1[0] = zmm0_1[0] + *(arg1 + 0x80);
    uint32_t temp0_1[0x4] =
        __orps_xmmxud_memxud(_mm_and_ps(data_4e98a0[0x20][0], zmm0_1), data_4e9c90);
    uint32_t var_28 = zmm0_1[0];
    uint32_t zmm1_1[0x4] = _mm_cmpeq_ss(zmm0_1[0], zmm0_1[0], 3);
    var_38 = _mm_or_ps(_mm_and_ps(0x7fc00000, zmm1_1), _mm_andnot_ps(zmm1_1, temp0_1));
    int64_t result;
    float zmm0_2;
    result = floorf(_mm_and_ps(data_4e90d0, zmm0_1));
    *(arg1 + 0x80) = var_28 - zmm0_2 * var_38;
    return result;
}
