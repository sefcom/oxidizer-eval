
  int32_t alacritty::renderer::text::builtin_font::powerline_drawing::h744b2bb1b0d13ad6(int64_t* arg1, int32_t arg2, int64_t* arg3, char arg4, char arg5)

{
    double zmm0 = *arg3;
    double zmm1 = arg3[1];
    int64_t zmm2 = -0x3e20000000000000;
    int64_t zmm3 = 0x41dfffffffc00000;
    int32_t rbx = _mm_min_sd(_mm_max_sd(zmm1, zmm2), zmm3);
    
    if (FCMP_UO(zmm1, zmm1))
        rbx = 0;
    
    int32_t r15 = arg5;
    int32_t rbp = rbx + r15;
    int32_t rdx = _mm_min_sd(_mm_max_sd(zmm0, zmm2), zmm3);
    
    if (FCMP_UO(zmm0, zmm0))
        rdx = 0;
    
    int64_t r14 = rbp;
    int32_t rax_1 = arg4 + rdx;
    int64_t r12 = rax_1;
    int32_t rax_2 =
        alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(r12);
    int64_t var_e0;
    alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_e0, r12, r14);
    int32_t var_128 = 1;
    int32_t var_124 = 1;
    int32_t var_120 = rbx + r15 - 2;
    int32_t r15_3 = (((rbx + r15 + 1) >> 0x1f) + r14 + 1) >> 1;
    int64_t var_b0 = r12;
    int64_t var_d8;
    
    if (r15_3 - 1 - r12 > 1)
    {
        *arg1 = 2;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alacritty..renderer..text..builtin_font..Canvas$GT$::hd6f2a347f2df8e21(var_e0, var_d8);
    }
    
    int32_t var_98 = 0;
    int32_t var_94 = r15_3 - 1;
    int32_t* var_a8 = &var_128;
    int32_t* var_a0 = &var_124;
    int32_t var_80 = 0;
    int32_t var_7c = r15_3 - 1;
    int32_t* var_90 = &var_128;
    int32_t* var_88 = &var_120;
    void var_78;
    core::iter::traits::iterator::Iterator::zip::h464142987b10ba4d(&var_78, &var_a8, &var_90);
    int32_t var_11c;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
    uint64_t zmm0_2[0x2];
    int32_t var_118;
    int32_t var_114;
    int32_t var_10c;
    int128_t zmm2_2;
    int128_t zmm3_1;
    
    if (var_11c == 1)
        switch (arg2)
        {
            case 0xe0b0:
            case 0xe0b2:
            {
                zmm3_1 = 0x3f800000;
                
                do
                {
                    int32_t var_110;
                    int32_t var_12c_1 = var_110[0];
                    zmm0_2 = var_10c;
                    int32_t var_130_1 = zmm0_2[0];
                    zmm2_2 = var_118 + zmm3_1;
                    uint64_t zmm0_3[0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_e0, _mm_xor_pd(zmm0_2, zmm0_2), var_114, zmm2_2, 
                        zmm3_1);
                    int128_t zmm2_3;
                    zmm2_3 = var_12c_1 + 1f;
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_e0, _mm_xor_pd(zmm0_3, zmm0_3), var_130_1, zmm2_3, 0x3f800000);
                    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
                    zmm3_1 = 0x3f800000;
                } while (var_11c & 1);
                break;
            }
            case 0xe0b1:
            case 0xe0b3:
            {
                int32_t r15_4 = r15_3 - rax_2;
                int32_t r14_1 = 0;
                zmm2_2 = 0x3f800000;
                int32_t rbp_1 = 0;
                
                do
                {
                    int128_t zmm5_1 = var_10c;
                    zmm3_1 = zmm5_1;
                    
                    if (r14_1 < r15_4)
                        zmm3_1 = var_128 * r14_1 + var_124 + rax_2 - 1;
                    
                    zmm0_2 = var_118;
                    int128_t zmm1_2 = var_114;
                    int32_t zmm7_1 = zmm1_2;
                    int32_t zmm6_1 = zmm0_2[0];
                    r12 = rbp_1 < r15_4;
                    
                    if (rbp_1 < r15_4)
                    {
                        zmm6_1 = rbp_1;
                        zmm7_1 = var_120 - (var_128 * rbp_1 + rax_2) + 1;
                    }
                    
                    int64_t rax_21 = zmm0_2[0];
                    int64_t rax_22 = 0;
                    
                    if (zmm0_2[0] >= 0f)
                        rax_22 = ((zmm0_2[0] - 9.22337204e+18f) & rax_21 >> 0x3f) | rax_21;
                    
                    if (zmm0_2[0] > 1.8446743e+19f)
                        rax_22 = -1;
                    
                    if (rax_22 + 1 == var_b0)
                    {
                        zmm5_1 = zmm5_1 - zmm1_2;
                        zmm5_1 = zmm5_1 + zmm2_2;
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_e0, zmm0_2, zmm1_2, zmm2_2, zmm5_1);
                        break;
                    }
                    
                    zmm3_1 = zmm3_1 - zmm1_2;
                    zmm3_1 = zmm3_1 + zmm2_2;
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_e0, zmm0_2, zmm1_2, zmm2_2, zmm3_1);
                    int128_t zmm1_4 = zmm7_1;
                    int128_t zmm3_4;
                    zmm3_4 = zmm5_1 - zmm1_4;
                    zmm3_4 = zmm3_4 + 1f;
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_e0, zmm6_1, zmm1_4, 0x3f800000, zmm3_4);
                    int32_t rax_24;
                    rax_24 = r14_1 < r15_4;
                    r14_1 += rax_24;
                    int32_t rax_25;
                    rax_25 = r12;
                    rbp_1 += rax_25;
                    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
                    zmm2_2 = 0x3f800000;
                } while (var_11c & 1);
                break;
            }
        }
    
    if (!(~arg2 & 0xe0b2))
        alacritty::renderer::text::builtin_font::Canvas::flip_horizontal::ha741b65efc3a4ae8(
            &var_e0);
    
    zmm0_2 = arg3[2];
    int32_t rcx_12 = 0x7fffffff;
    
    if (zmm0_2[0] <= 2.14748352e+09f)
        rcx_12 = zmm0_2[0];
    
    int32_t rax_30 = 0;
    
    if (FCMP_O(zmm0_2[0], zmm0_2[0]))
        rax_30 = rcx_12;
    
    int32_t result = rax_30 + rbp;
    int64_t rcx_13 = var_e0;
    *arg1 = 0;
    arg1[1] = rcx_13 * 3;
    arg1[2] = var_d8;
    int64_t var_d0;
    arg1[3] = var_d0 * 3;
    arg1[4] = rax_1;
    *(arg1 + 0x24) = rbp;
    arg1[5] = arg2;
    *(arg1 + 0x2c) = rax_1;
    arg1[6] = rbp;
    *(arg1 + 0x34) = result;
    arg1[7] = 0;
    return result;
}
