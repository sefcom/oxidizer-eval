
  int64_t alacritty::renderer::text::builtin_font::Canvas::draw_line::h6086c3490692115c(void* arg1, uint32_t arg2[0x4] @ zmm0, uint32_t arg3[0x4] @ zmm1, uint32_t arg4[0x4] @ zmm2)

{
    arg4[0] = arg4[0] - arg2[0];
    uint32_t zmm4[0x4] = data_4e90d0;
    uint32_t temp0[0x4] = _mm_and_ps(arg4, zmm4);
    uint32_t temp0_1[0x4] = _mm_and_ps(zmm4, arg3);
    uint32_t var_48 = temp0_1[0];
    uint32_t zmm5[0x4];
    uint32_t zmm3[0x4];
    
    if (temp0[0] <= temp0_1[0])
    {
        zmm5 = arg3;
        arg3 = arg4;
        zmm3 = arg2;
        arg2 = {0};
        
        if (0f <= zmm5[0])
        {
            label_8674ed:
            arg4 = zmm5;
            zmm4 = arg3;
            arg3 = zmm3;
            zmm5 = arg2;
        }
        else
        {
            arg4 = arg2;
            zmm4 = zmm3;
        }
    }
    else
    {
        zmm3 = {0};
        zmm5 = arg4;
        
        if (!(arg2[0] > zmm5[0]))
            goto label_8674ed;
        
        arg4 = arg2;
        zmm4 = zmm3;
    }
    uint32_t var_7c = arg4[0];
    arg2 = arg4;
    arg2[0] = arg2[0] - zmm5[0];
    arg4 = 0x3f800000;
    
    if (!(1.1920929e-07f >= _mm_and_ps(data_4e90d0, arg2)[0]))
    {
        arg4 = zmm4;
        arg4[0] = arg4[0] - arg3[0];
        arg4[0] = arg4[0] / arg2[0];
    }
    
    uint32_t var_6c = arg4[0];
    uint32_t var_74 = zmm4[0];
    uint32_t var_78 = zmm5[0];
    uint32_t zmm0 = roundf(zmm5);
    uint32_t var_70 = zmm0;
    arg3[0] = arg3[0] + (zmm0 - var_78) * var_6c;
    zmm0 = var_78 + 0.5f;
    float zmm1_1 = truncf(zmm0) - zmm0 + 1f;
    uint32_t zmm5_1[0x4] = truncf(arg3[0]);
    arg3[0] = arg3[0] - zmm5_1[0];
    char rax = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - arg3[0]) * zmm1_1 * 255f));
    arg3[0] = arg3[0] * zmm1_1;
    arg3[0] = arg3[0] * 255f;
    int32_t rsi = rax * 0x10101;
    int32_t rbp = _mm_min_ss(0x437f0000, _mm_max_ss(0, arg3[0]))[0] * 0x10101;
    uint32_t var_78_2 = zmm5_1[0];
    uint32_t zmm0_3;
    float zmm1_2;
    
    if (temp0[0] <= var_48)
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi, 
            var_70[0], zmm5_1[0]);
        zmm1_2 = var_78_2;
        zmm0_3 = var_70;
    }
    else
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi, 
            zmm5_1[0], var_70);
        zmm0_3 = var_78_2;
        zmm1_2 = var_70;
    }
    
    alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rbp, 
        zmm0_3 + 1f, zmm1_2);
    uint32_t zmm0_5 = roundf(var_7c);
    uint32_t var_78_3 = zmm0_5;
    uint32_t zmm2_2 = var_74 + (zmm0_5 - var_7c) * var_6c;
    zmm0_5 = var_7c + 0.5f;
    uint32_t zmm1_4 = zmm0_5 - truncf(zmm0_5);
    uint32_t zmm0_7[0x4] = truncf(zmm2_2);
    uint32_t zmm1_5[0x4] = zmm0_7;
    float zmm6_1 = zmm2_2 - zmm0_7[0];
    zmm0_7 = 0x3f800000;
    zmm0_7[0] = 1f - zmm6_1;
    zmm0_7[0] = zmm0_7[0] * zmm1_4;
    zmm0_7[0] = zmm0_7[0] * 255f;
    int32_t rsi_2 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm0_7[0])[0])[0] * 0x10101;
    int32_t rbp_1 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm6_1 * zmm1_4 * 255f)[0])[0] * 0x10101;
    float zmm2_3[0x4] = var_70;
    int32_t r15 = zmm2_3[0];
    
    if (zmm2_3[0] > 2.14748352e+09f)
        r15 = 0x7fffffff;
    
    if (FCMP_UO(zmm2_3[0], zmm2_3[0]))
        r15 = 0;
    
    float zmm3_2[0x4] = var_78_3;
    int32_t r12 = zmm3_2[0];
    
    if (zmm3_2[0] > 2.14748352e+09f)
        r12 = 0x7fffffff;
    
    if (FCMP_UO(zmm3_2[0], zmm3_2[0]))
        r12 = 0;
    
    int32_t r15_1 = r15 + 1;
    bool cond:5 = temp0[0] <= var_48;
    arg3[0] = arg3[0] + var_6c;
    zmm1_5[0] = zmm1_5[0] + 1f;
    float var_7c_3 = zmm1_5[0];
    int64_t result;
    
    if (cond:5)
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi_2, 
            zmm3_2[0], zmm1_5[0]);
        result = alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
            arg1, rbp_1, var_78_3, var_7c_3[0]);
        
        if (r15_1 < r12)
        {
            do
            {
                float zmm4_2 = truncf(arg3[0]);
                uint32_t zmm0_14 = arg3[0] - zmm4_2;
                char rax_9 = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - zmm0_14) * 255f));
                int32_t temp0_18 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm0_14 * 255f));
                zmm0_14 = r15_1;
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    rax_9 * 0x10101, zmm0_14, zmm4_2);
                result =
                    alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
                    arg1, temp0_18 * 0x10101, zmm0_14, zmm4_2 + 1f);
                arg3[0] = arg3[0] + var_6c;
                r15_1 += 1;
            } while (r12 != r15_1);
        }
    }
    else
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi_2, 
            zmm1_5[0], zmm3_2[0]);
        result = alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
            arg1, rbp_1, var_7c_3, var_78_3[0]);
        
        if (r15_1 < r12)
        {
            do
            {
                float zmm0_10 = truncf(arg3[0]);
                float zmm4_1 = arg3[0] - zmm0_10;
                char rax_6 = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - zmm4_1) * 255f));
                float zmm1_6 = r15_1;
                char rbp_2 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm4_1 * 255f));
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    rax_6 * 0x10101, zmm0_10, zmm1_6);
                result =
                    alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
                    arg1, rbp_2 * 0x10101, zmm0_10 + 1f, zmm1_6);
                arg3[0] = arg3[0] + var_6c;
                r15_1 += 1;
            } while (r12 != r15_1);
        }
    }
    
    return result;
}
