
  int64_t alacritty::display::window_size::h994bca71328498f8(int16_t arg1, int16_t arg2, int64_t arg3, int64_t arg4, uint128_t arg5 @ zmm0, float arg6, int32_t arg7 @ zmm2)

{
    float var_30 = arg5;
    arg5 = arg1;
    arg5 = arg5 * arg7;
    int32_t var_24 = floorf(arg5);
    uint128_t zmm0;
    zmm0 = arg2;
    zmm0 = zmm0 * arg7;
    int32_t zmm0_1;
    int512_t zmm2;
    zmm0_1 = floorf(zmm0);
    float var_2c_1 = zmm0_1;
    int64_t rax_2 = core::cmp::Ord::max::h20b6d33cbe488162(arg3, 2);
    
    if (rax_2 < 0)
    {
        zmm0_1 = (rax_2 & 1) | rax_2 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
        zmm0_1 = rax_2;
    
    float var_30_1 = var_30 * zmm0_1;
    int64_t rax_5 = core::cmp::Ord::max::h20b6d33cbe488162(arg4, 1);
    
    if (rax_5 < 0)
    {
        zmm0_1 = (rax_5 & 1) | rax_5 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
        zmm0_1 = rax_5;
    
    zmm2 = var_30_1;
    float zmm0_3;
    int512_t zmm2_1;
    zmm0_3 = floorf(fmaf());
    zmm2_1 = arg6 * zmm0_1;
    floorf(fmaf());
    int64_t result = zmm0_3;
    
    if (zmm0_3 < 0f)
        result = 0;
    
    if (zmm0_3 > 4.29496704e+09f)
        result = 0xffffffff;
    
    return result;
}
