
  int64_t alacritty::renderer::rects::RectRenderer::add_rect::h35912be66eb425f4(int64_t* arg1, int64_t* arg2, float arg3[0x4] @ zmm0, float arg4[0x4] @ zmm1)

{
    char rax = *(arg2 + 0x14);
    char rcx = *(arg2 + 0x15);
    char rdx = *(arg2 + 0x16);
    float zmm3[0x4] = arg2[2];
    zmm3[0] = zmm3[0] * 255f;
    char rdi = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm3[0])[0]);
    uint128_t zmm2 = *arg2;
    float temp0_2[0x4] = _mm_unpacklo_ps(arg3, arg4[0]);
    zmm2 = _mm_div_ps(zmm2, temp0_2);
    float temp0_4[0x4] = _mm_add_ps(0xbf800000, zmm2);
    float temp0_5[0x4] = _mm_sub_ps(data_4e97c0, zmm2);
    float temp0_7[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_5, temp0_4, 1), temp0_4, 0xe2);
    int64_t var_38 = temp0_7[0];
    char var_30 = rax;
    char var_2f = rcx;
    char var_2e = rdx;
    char var_2d = rdi;
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55);
    float var_50 = temp0_4[0];
    char var_48 = rax;
    char var_47 = rcx;
    char var_46 = rdx;
    char var_45 = rdi;
    float var_40 = temp0_8[0];
    char var_3c = rax;
    char var_3b = rcx;
    char var_3a = rdx;
    char var_39 = rdi;
    zmm2 = _mm_div_ps(arg2[1], temp0_2);
    float temp0_10[0x4] = _mm_add_ps(temp0_7, zmm2);
    float temp0_11[0x4] = _mm_sub_ps(temp0_7, zmm2);
    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_11, temp0_10, 1), temp0_10, 0xe2);
    float var_4c = _mm_shuffle_ps(temp0_11, temp0_11, 0x55)[0];
    float var_44 = temp0_10[0];
    int64_t var_28 = zmm2;
    char var_20 = rax;
    char var_1f = rcx;
    char var_1e = rdx;
    char var_1d = rdi;
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_38);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_50);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_44);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_44);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_28);
    return alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_50);
}
