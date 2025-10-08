
  fn alacritty::renderer::text::builtin_font::powerline_drawing::h744b2bb1b0d13ad6(arg1: *mut i64, arg2: i32, arg3: *mut i64, arg4: i8, arg5: i8) -> i32

{
    let zmm0: f64 = *arg3;
    let zmm1: f64 = arg3[1];
    let zmm2: i64 = -0x3e20000000000000;
    let zmm3: i64 = 0x41dfffffffc00000;
    let mut rbx: i32 = _mm_min_sd(_mm_max_sd(zmm1, zmm2), zmm3);
    
    if FCMP_UO(zmm1, zmm1)
    {
        rbx = 0;
    }
    
    let r15: i32 = arg5;
    let rbp: i32 = rbx + r15;
    let mut rdx: i32 = _mm_min_sd(_mm_max_sd(zmm0, zmm2), zmm3);
    
    if FCMP_UO(zmm0, zmm0)
    {
        rdx = 0;
    }
    
    let r14: i64 = rbp;
    let rax_1: i32 = arg4 + rdx;
    let mut r12: i64 = rax_1;
    let rax_2: i32 =
        alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(r12);
    let mut var_e0: i64;
    alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_e0, r12, r14);
    let mut var_128: i32 = 1;
    let mut var_124: i32 = 1;
    let mut var_120: i32 = rbx + r15 - 2;
    let r15_3: i32 = (((rbx + r15 + 1) >> 0x1f) + r14 + 1) >> 1;
    let var_b0: i64 = r12;
    let var_d8: i64;
    
    if r15_3 - 1 - r12 > 1
    {
        *arg1 = 2;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alacritty..renderer..text..builtin_font..Canvas$GT$::hd6f2a347f2df8e21(var_e0, var_d8);
    }
    
    let var_98: i32 = 0;
    let var_94: i32 = r15_3 - 1;
    let mut var_a8: *mut i32 = &var_128;
    let var_a0: *mut i32 = &var_124;
    let var_80: i32 = 0;
    let var_7c: i32 = r15_3 - 1;
    let mut var_90: *mut i32 = &var_128;
    let var_88: *mut i32 = &var_120;
    let mut var_78: ();
    core::iter::traits::iterator::Iterator::zip::h464142987b10ba4d(&var_78, &var_a8, &var_90);
    let mut var_11c: i32;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
    let mut zmm0_2: [u64; 0x2];
    let var_118: i32;
    let var_114: i32;
    let var_10c: i32;
    let mut zmm2_2: i128;
    let mut zmm3_1: i128;
    
    if var_11c == 1
    {
        match arg2
        {
            0xe0b0 | 0xe0b2 =>
            {
                zmm3_1 = 0x3f800000;
                
                do
                {
                    let var_110: i32;
                    let var_12c_1: i32 = var_110[0];
                    zmm0_2 = var_10c;
                    let var_130_1: i32 = zmm0_2[0];
                    zmm2_2 = var_118 + zmm3_1;
                    let zmm0_3: [u64; 0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_e0, _mm_xor_pd(zmm0_2, zmm0_2), var_114, zmm2_2, 
                        zmm3_1);
                    let mut zmm2_3: i128;
                    zmm2_3 = var_12c_1 + 1f;
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_e0, _mm_xor_pd(zmm0_3, zmm0_3), var_130_1, zmm2_3, 0x3f800000);
                    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
                    zmm3_1 = 0x3f800000;
                } while (var_11c & 1) != 0;
            }
            0xe0b1 | 0xe0b3 =>
            {
                let r15_4: i32 = r15_3 - rax_2;
                let mut r14_1: i32 = 0;
                zmm2_2 = 0x3f800000;
                let mut rbp_1: i32 = 0;
                
                do
                {
                    let mut zmm5_1: i128 = var_10c;
                    zmm3_1 = zmm5_1;
                    
                    if r14_1 < r15_4
                    {
                        zmm3_1 = var_128 * r14_1 + var_124 + rax_2 - 1;
                    }
                    
                    zmm0_2 = var_118;
                    let zmm1_2: i128 = var_114;
                    let mut zmm7_1: i32 = zmm1_2;
                    let mut zmm6_1: i32 = zmm0_2[0];
                    r12 = rbp_1 < r15_4;
                    
                    if rbp_1 < r15_4
                    {
                        zmm6_1 = rbp_1;
                        zmm7_1 = var_120 - (var_128 * rbp_1 + rax_2) + 1;
                    }
                    
                    let rax_21: i64 = zmm0_2[0];
                    let mut rax_22: i64 = 0;
                    
                    if zmm0_2[0] >= 0f
                    {
                        rax_22 = ((zmm0_2[0] - 9.22337204e+18f) & rax_21 >> 0x3f) | rax_21;
                    }
                    
                    if zmm0_2[0] > 1.8446743e+19f
                    {
                        rax_22 = -1;
                    }
                    
                    if rax_22 + 1 == var_b0
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
                    let zmm1_4: i128 = zmm7_1;
                    let mut zmm3_4: i128;
                    zmm3_4 = zmm5_1 - zmm1_4;
                    zmm3_4 = zmm3_4 + 1f;
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_e0, zmm6_1, zmm1_4, 0x3f800000, zmm3_4);
                    let mut rax_24: i32;
                    rax_24 = r14_1 < r15_4;
                    r14_1 += rax_24;
                    let mut rax_25: i32;
                    rax_25 = r12;
                    rbp_1 += rax_25;
                    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h3a7c8faf434407c9(&var_11c, &var_78);
                    zmm2_2 = 0x3f800000;
                } while (var_11c & 1) != 0;
            }
        }
    }
    
    if (!arg2 & 0xe0b2) == 0
    {
        alacritty::renderer::text::builtin_font::Canvas::flip_horizontal::ha741b65efc3a4ae8(
            &var_e0);
    }
    
    zmm0_2 = arg3[2];
    let mut rcx_12: i32 = 0x7fffffff;
    
    if zmm0_2[0] <= 2.14748352e+09f
    {
        rcx_12 = zmm0_2[0];
    }
    
    let mut rax_30: i32 = 0;
    
    if FCMP_O(zmm0_2[0], zmm0_2[0])
    {
        rax_30 = rcx_12;
    }
    
    let result: i32 = rax_30 + rbp;
    let rcx_13: i64 = var_e0;
    *arg1 = 0;
    arg1[1] = rcx_13 * 3;
    arg1[2] = var_d8;
    let var_d0: i64;
    arg1[3] = var_d0 * 3;
    arg1[4] = rax_1;
    *arg1.byte_offset(0x24) = rbp;
    arg1[5] = arg2;
    *arg1.byte_offset(0x2c) = rax_1;
    arg1[6] = rbp;
    *arg1.byte_offset(0x34) = result;
    arg1[7] = 0;
    result
}
