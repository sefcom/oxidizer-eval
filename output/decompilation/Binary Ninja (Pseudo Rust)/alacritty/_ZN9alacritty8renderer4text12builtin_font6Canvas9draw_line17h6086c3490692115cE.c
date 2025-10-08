
  fn alacritty::renderer::text::builtin_font::Canvas::draw_line::h6086c3490692115c(arg1: *mut c_void, arg2: [u32; 0x4] @ zmm0, arg3: [u32; 0x4] @ zmm1, arg4: [u32; 0x4] @ zmm2) -> i64

{
    arg4[0] = arg4[0] - arg2[0];
    let mut zmm4: [u32; 0x4] = data_4e90d0;
    let temp0: [u32; 0x4] = _mm_and_ps(arg4, zmm4);
    let temp0_1: [u32; 0x4] = _mm_and_ps(zmm4, arg3);
    let var_48: u32 = temp0_1[0];
    let mut zmm5: [u32; 0x4];
    let mut zmm3: [u32; 0x4];
    
    if temp0[0] <= temp0_1[0]
    {
        zmm5 = arg3;
        arg3 = arg4;
        zmm3 = arg2;
        arg2 = {0};
        
        if 0f <= zmm5[0]
        {
            'label_8674ed:
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
        
        if !(arg2[0] > zmm5[0])
        {
            goto 'label_8674ed;
        }
        
        arg4 = arg2;
        zmm4 = zmm3;
    }
    let var_7c: u32 = arg4[0];
    arg2 = arg4;
    arg2[0] = arg2[0] - zmm5[0];
    arg4 = 0x3f800000;
    
    if !(1.1920929e-07f >= _mm_and_ps(data_4e90d0, arg2)[0])
    {
        arg4 = zmm4;
        arg4[0] = arg4[0] - arg3[0];
        arg4[0] = arg4[0] / arg2[0];
    }
    
    let var_6c: u32 = arg4[0];
    let var_74: u32 = zmm4[0];
    let var_78: u32 = zmm5[0];
    let mut zmm0: u32 = roundf(zmm5);
    let var_70: u32 = zmm0;
    arg3[0] = arg3[0] + (zmm0 - var_78) * var_6c;
    zmm0 = var_78 + 0.5f;
    let zmm1_1: f32 = truncf(zmm0) - zmm0 + 1f;
    let zmm5_1: [u32; 0x4] = truncf(arg3[0]);
    arg3[0] = arg3[0] - zmm5_1[0];
    let rax: i8 = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - arg3[0]) * zmm1_1 * 255f));
    arg3[0] = arg3[0] * zmm1_1;
    arg3[0] = arg3[0] * 255f;
    let rsi: i32 = rax * 0x10101;
    let rbp: i32 = _mm_min_ss(0x437f0000, _mm_max_ss(0, arg3[0]))[0] * 0x10101;
    let var_78_2: u32 = zmm5_1[0];
    let mut zmm0_3: u32;
    let mut zmm1_2: f32;
    
    if temp0[0] <= var_48
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
    let mut zmm0_5: u32 = roundf(var_7c);
    let var_78_3: u32 = zmm0_5;
    let zmm2_2: u32 = var_74 + (zmm0_5 - var_7c) * var_6c;
    zmm0_5 = var_7c + 0.5f;
    let zmm1_4: u32 = zmm0_5 - truncf(zmm0_5);
    let mut zmm0_7: [u32; 0x4] = truncf(zmm2_2);
    let zmm1_5: [u32; 0x4] = zmm0_7;
    let zmm6_1: f32 = zmm2_2 - zmm0_7[0];
    zmm0_7 = 0x3f800000;
    zmm0_7[0] = 1f - zmm6_1;
    zmm0_7[0] = zmm0_7[0] * zmm1_4;
    zmm0_7[0] = zmm0_7[0] * 255f;
    let rsi_2: i32 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm0_7[0])[0])[0] * 0x10101;
    let rbp_1: i32 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm6_1 * zmm1_4 * 255f)[0])[0] * 0x10101;
    let zmm2_3: [f32; 0x4] = var_70;
    let mut r15: i32 = zmm2_3[0];
    
    if zmm2_3[0] > 2.14748352e+09f
    {
        r15 = 0x7fffffff;
    }
    
    if FCMP_UO(zmm2_3[0], zmm2_3[0])
    {
        r15 = 0;
    }
    
    let zmm3_2: [f32; 0x4] = var_78_3;
    let mut r12: i32 = zmm3_2[0];
    
    if zmm3_2[0] > 2.14748352e+09f
    {
        r12 = 0x7fffffff;
    }
    
    if FCMP_UO(zmm3_2[0], zmm3_2[0])
    {
        r12 = 0;
    }
    
    let mut r15_1: i32 = r15 + 1;
    let cond:5: bool = temp0[0] <= var_48;
    arg3[0] = arg3[0] + var_6c;
    zmm1_5[0] = zmm1_5[0] + 1f;
    let var_7c_3: f32 = zmm1_5[0];
    let mut result: i64;
    
    if cond:5
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi_2, 
            zmm3_2[0], zmm1_5[0]);
        result = alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
            arg1, rbp_1, var_78_3, var_7c_3[0]);
        
        if r15_1 < r12
        {
            do
            {
                let zmm4_2: f32 = truncf(arg3[0]);
                let mut zmm0_14: u32 = arg3[0] - zmm4_2;
                let rax_9: i8 = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - zmm0_14) * 255f));
                let temp0_18: i32 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm0_14 * 255f));
                zmm0_14 = r15_1;
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    rax_9 * 0x10101, zmm0_14, zmm4_2);
                result =
                    alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
                    arg1, temp0_18 * 0x10101, zmm0_14, zmm4_2 + 1f);
                arg3[0] = arg3[0] + var_6c;
                r15_1 += 1;
            } while r12 != r15_1;
        }
    }
    else
    {
        alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, rsi_2, 
            zmm1_5[0], zmm3_2[0]);
        result = alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
            arg1, rbp_1, var_7c_3, var_78_3[0]);
        
        if r15_1 < r12
        {
            do
            {
                let zmm0_10: f32 = truncf(arg3[0]);
                let zmm4_1: f32 = arg3[0] - zmm0_10;
                let rax_6: i8 = _mm_min_ss(0x437f0000, _mm_max_ss(0, (1f - zmm4_1) * 255f));
                let zmm1_6: f32 = r15_1;
                let rbp_2: i8 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm4_1 * 255f));
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    rax_6 * 0x10101, zmm0_10, zmm1_6);
                result =
                    alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(
                    arg1, rbp_2 * 0x10101, zmm0_10 + 1f, zmm1_6);
                arg3[0] = arg3[0] + var_6c;
                r15_1 += 1;
            } while r12 != r15_1;
        }
    }
    
    result
}
