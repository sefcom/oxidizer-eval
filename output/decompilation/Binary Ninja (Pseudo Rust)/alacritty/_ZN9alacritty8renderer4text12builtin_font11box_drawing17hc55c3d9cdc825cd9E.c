
  fn alacritty::renderer::text::builtin_font::box_drawing::hc55c3d9cdc825cd9(arg1: *mut i64, arg2: i32, arg3: *mut f64, arg4: i8, arg5: i8) -> u64

{
    let mut zmm0: f64 = arg3[1];
    let mut rax: i32 =
        __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0, -0x3e20000000000000), 0x41dfffffffc00000);
    
    if FCMP_UO(zmm0, zmm0)
    {
        rax = 0;
    }
    
    let rax_1: i32 = core::cmp::Ord::max::h485505c56320f468(arg5 + rax, 1);
    zmm0 = *arg3;
    let mut rax_2: i32 =
        __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0, -0x3e20000000000000), 0x41dfffffffc00000);
    
    if FCMP_UO(zmm0, zmm0)
    {
        rax_2 = 0;
    }
    
    let rax_3: i32 = core::cmp::Ord::max::h485505c56320f468(arg4 + rax_2, 1);
    let rbx_1: i64 = rax_1;
    let r14: i64 = rax_3;
    let rax_4: i64 =
        alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(r14);
    let mut r13_1: i64 = rax_4 * 2;
    let mut result: u64;
    let mut var_160: *mut i64;
    let mut var_158: i64;
    let mut var_148: i64;
    let mut var_90: i64;
    let var_88: *mut i16;
    let var_80: i64;
    
    if arg2 - 0x2571 >= 3
    {
        let var_58_1: *mut i64 = &var_90;
        let mut zmm0_2: u128;
        let mut zmm1_1: u128;
        let mut zmm2_1: [f32; 0x4];
        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_90, 
            r14, rbx_1);
        let rax_6: u64 = arg2 - 0x2504;
        let mut r14_1: i32 = arg2;
        let mut r15_2: *mut i64;
        let mut var_158_2: [f32; 0x4];
        let mut var_148_1: [f32; 0x4];
        let mut var_128_1: i64;
        let mut var_b8: i32;
        let var_78: i64;
        let var_70: i64;
        let mut zmm0_15: [f32; 0x4];
        
        if rax_6 > 0x91
        {
            'label_864aaf:
            let mut rax_39: i32;
            rax_39 = (r14_1 & 0x1ffffc) == 0x2500;
            let mut rcx_25: i32;
            rcx_25 = r14_1 - 0x250c < 0x40;
            let mut rdx_15: i32;
            rdx_15 = r14_1 - 0x2574 < 0xc;
            rdx_15 |= rcx_25;
            rdx_15 |= rax_39;
            let mut var_d0: f32;
            
            if rdx_15 == 0
            {
                let r15_3: u64 = r14_1 - 0x2550;
                let mut var_108: f32;
                let mut var_100: f32;
                let mut var_d8: f32;
                
                if r15_3 >= 0x1d
                {
                    let mut rax_81: i32;
                    rax_81 = (r14_1 & 0x1ffff8) == 0x2580;
                    let mut rcx_53: i32;
                    rcx_53 = r14_1 - 0x2589 < 8;
                    rcx_53 |= rax_81;
                    
                    if rcx_53 != 0
                    {
                        goto 'label_865193;
                    }
                    
                    let rbx_10: i32 = r14_1 - 0x2596;
                    
                    if rbx_10 >= 0xa
                    {
                        let rbx_12: u64 = r14_1 - 0x1fb00;
                        
                        if rbx_12 >= 0x3c
                        {
                            core::panicking::panic::h85d6dd562679980c(
                                "internal error: entered unreacha…");
                            /* no return */
                        }
                        
                        r15_2 = arg1;
                        
                        if var_78 < 0
                        {
                            zmm0_2 = (var_78 & 1) | var_78 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = var_78;
                        }
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        let mut zmm0_24: [u32; 0x4];
                        let mut zmm1_19: [u32; 0x4];
                        zmm0_24 = roundf(zmm0_2);
                        
                        if rbx_1 < 0
                        {
                            zmm1_19[0] = (rax_1 & 1) | rbx_1 >> 1;
                            zmm1_19[0] = zmm1_19[0] + zmm1_19[0];
                        }
                        else
                        {
                            zmm1_19[0] = rax_1;
                        }
                        
                        var_158_2 = __maxss_xmmss_memss(zmm0_24[0], 0x3f800000);
                        var_b8 = zmm1_19;
                        zmm1_19[0] = zmm1_19[0] / 3f;
                        var_148 = __maxss_xmmss_memss(roundf(zmm1_19)[0], 0x3f800000)[0];
                        let mut zmm0_25: [f32; 0x4] = {0};
                        let mut zmm2_10: [f32; 0x4] = {0};
                        let mut zmm3_6: i128 = {0};
                        
                        if rbx_12 <= 0x3a && TEST_BITQ(0x55555aaaaa55555, rbx_12)
                        {
                            zmm2_10 = var_158_2;
                            zmm3_6 = var_148;
                        }
                        
                        r14_1 = arg2;
                        let rax_128: u64 = r14_1 - 0x1fb01;
                        let mut zmm1_20: [f32; 0x4];
                        
                        if rax_128 > 0x3a
                        {
                            zmm1_20 = {0};
                        }
                        else
                        {
                            zmm1_20 = {0};
                            
                            if TEST_BITQ(0x4cccc99999b3333, rax_128)
                            {
                                zmm0_25 = var_158_2;
                                zmm1_20 = var_148;
                            }
                        }
                        
                        var_d8 = zmm1_20[0];
                        let var_98_4: f32 = zmm0_25[0];
                        zmm1_20 = {0};
                        let rax_129: u64 = r14_1 - 0x1fb03;
                        zmm0_25 = {0};
                        let mut zmm4_1: f32 = {0};
                        
                        if rax_129 <= 0x38 && TEST_BITQ(0x1c3c3c787870f0f, rax_129)
                        {
                            zmm0_25 = var_158_2;
                            zmm4_1 = var_148;
                        }
                        
                        var_100 = zmm0_25[0];
                        zmm0_25 = var_148;
                        zmm0_25[0] = zmm0_25[0] + zmm0_25[0];
                        var_128_1 = zmm0_25;
                        let rax_130: u64 = r14_1 - 0x1fb07;
                        
                        if rax_130 > 0x34
                        {
                            zmm0_25 = {0};
                        }
                        else
                        {
                            zmm0_25 = {0};
                            
                            if TEST_BITQ(0x1fc03f807f80ff, rax_130)
                            {
                                zmm1_20 = var_158_2;
                                zmm0_25 = var_148;
                            }
                        }
                        
                        var_108 = zmm0_25[0];
                        zmm0_25 = var_b8;
                        zmm0_25[0] = zmm0_25[0] - var_128_1;
                        var_d0 = 0f;
                        let rax_131: u64 = r14_1 - 0x1fb0f;
                        var_b8 = zmm0_25;
                        let var_f0: f32 = zmm1_20[0];
                        
                        if rax_131 > 0x2c
                        {
                            zmm0_25 = {0};
                        }
                        else
                        {
                            zmm0_25 = {0};
                            
                            if TEST_BITQ(0x1fffc0007fff, rax_131)
                            {
                                var_d0 = var_158_2[0];
                                zmm0_25 = var_b8;
                            }
                        }
                        
                        let var_118: f32 = zmm0_25[0];
                        let mut rbp: i64;
                        rbp = r14_1 - 0x1fb1e < 0x1e;
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, {0}, {0}, zmm2_10, zmm3_6);
                        let zmm0_27: [u64; 0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, var_158_2, {0}, var_98_4, var_d8);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, _mm_xor_pd(zmm0_27, zmm0_27), var_148, var_100, zmm4_1);
                        let zmm0_29: [u64; 0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, var_158_2, var_148, var_f0, var_108);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, _mm_xor_pd(zmm0_29, zmm0_29), var_128_1, var_d0, var_118);
                        let mut rbx_13: i32;
                        rbx_13 = rbp;
                        zmm0_15 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_shuffle_epi32(rbx_13, 0x50), 0x1f), 0x1f);
                        var_148_1 = __punpckldq_xmmdq_memdq(var_158_2, var_b8) & zmm0_15;
                    }
                    else
                    {
                        if var_70 < 0
                        {
                            zmm1_1 = (var_70 & 1) | var_70 >> 1;
                            zmm1_1 = zmm1_1 + zmm1_1;
                        }
                        else
                        {
                            zmm1_1 = var_70;
                        }
                        
                        r15_2 = arg1;
                        
                        if var_78 < 0
                        {
                            zmm0_2 = (var_78 & 1) | var_78 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = var_78;
                        }
                        
                        zmm0_2 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm0_2, zmm1_1), *data_4e98d0);
                        var_128_1 = zmm0_2;
                        let zmm0_20: [u32; 0x4] = var_128_1;
                        let mut zmm2_7: [u32; 0x4] = _mm_unpacklo_ps(roundf(zmm0_2), 
                            roundf(_mm_shuffle_ps(zmm0_20, zmm0_20, 0x55))[0]);
                        let mut zmm0_21: [f32; 0x4] = data_4e8770[0x10][0];
                        let zmm1_16: [u32; 0x4] = _mm_max_ps(zmm0_21, zmm2_7);
                        zmm2_7 = _mm_cmpeq_ps(zmm2_7, zmm2_7, 3);
                        zmm0_21 = _mm_and_ps(zmm0_21, zmm2_7);
                        zmm2_7 = _mm_or_ps(_mm_andnot_ps(zmm2_7, zmm1_16), zmm0_21);
                        let mut zmm3_3: [u32; 0x4] = _mm_shuffle_epi32(zmm2_7, 0x55);
                        r14_1 = arg2;
                        let mut var_b8_5: f32 = 0f;
                        var_158_2 = zmm2_7;
                        
                        if r14_1 - 0x2598 >= 5
                        {
                            zmm2_7 = {0};
                        }
                        
                        var_128_1 = zmm3_3;
                        
                        if r14_1 - 0x2598 >= 5
                        {
                            zmm3_3 = {0};
                        }
                        
                        var_d0 = var_158_2[0];
                        zmm0_21 = var_128_1;
                        
                        if r14_1 - 0x259b >= 5
                        {
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                            var_d0 = zmm0_21[0];
                        }
                        
                        let var_98_3: f32 = zmm0_21[0];
                        
                        if rbx_10 > 9
                        {
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                        }
                        else
                        {
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                            
                            if TEST_BITD(0x329, rbx_10)
                            {
                                var_b8_5 = var_158_2[0];
                                zmm0_21 = var_128_1;
                            }
                        }
                        
                        var_d8 = zmm0_21[0];
                        zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                        var_148_1 = zmm0_21;
                        
                        if r14_1 - 0x2597 <= 8 && TEST_BITD(0x12d, r14_1 - 0x2597)
                        {
                            zmm0_21 = var_158_2;
                            var_148_1 = zmm0_21;
                        }
                        
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, _mm_xor_pd(zmm0_21, zmm0_21), {0}, zmm2_7, zmm3_3);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, var_158_2, {0}, var_d0, var_98_3);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, {0}, var_128_1, var_b8_5, var_d8);
                    }
                    
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_90, var_158_2, var_128_1, var_148_1, 
                        _mm_shuffle_ps(var_148_1, var_148_1, 0x55));
                }
                else
                {
                    let rcx_34: i32 = r14_1 - 0x2552;
                    let mut var_98_2: f32;
                    let mut rax_105: i32;
                    let mut r13_2: i64;
                    
                    if rcx_34 > 0x18 || !TEST_BITD(0x1249249, rcx_34)
                    {
                        r13_2 = var_78;
                        
                        if r13_2 < 0
                        {
                            zmm0_2 = (r13_2 & 1) | r13_2 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = r13_2;
                        }
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        let mut zmm1_25: i32;
                        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, zmm0_2);
                        let mut rdi_63: i32 = zmm0_2;
                        
                        if zmm0_2 > 2.14748352e+09f
                        {
                            rdi_63 = 0x7fffffff;
                        }
                        
                        var_158 = zmm1_25;
                        
                        if FCMP_UO(zmm0_2, zmm0_2)
                        {
                            rdi_63 = 0;
                        }
                        
                        let rax_138: i32 = core::cmp::Ord::max::h485505c56320f468(rdi_63 - 1, 0);
                        zmm0_2 = var_158;
                        let mut rdi_65: i32 = zmm0_2;
                        
                        if zmm0_2 > 2.14748352e+09f
                        {
                            rdi_65 = 0x7fffffff;
                        }
                        
                        if FCMP_UO(zmm0_2, zmm0_2)
                        {
                            rdi_65 = 0;
                        }
                        
                        zmm0_2 = rax_138;
                        var_98_2 = zmm0_2;
                        zmm0_2 = core::cmp::Ord::min::h3552534d3430b892(rdi_65 + 1, rax_3);
                        r14_1 = arg2;
                        rax_105 = r14_1 - 0x2553;
                        var_158 = zmm0_2;
                        
                        if rax_105 <= 0x18 && TEST_BITD(0x1249249, rax_105)
                        {
                            goto 'label_86561b;
                        }
                        
                        goto 'label_866124;
                    }
                    
                    r13_2 = var_78;
                    
                    if r13_2 < 0
                    {
                        zmm0_2 = (r13_2 & 1) | r13_2 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                    {
                        zmm0_2 = r13_2;
                    }
                    
                    zmm0_2 = zmm0_2 * 0.5f;
                    var_98_2 = zmm0_2;
                    rax_105 = r14_1 - 0x2553;
                    var_158 = zmm0_2;
                    let mut var_f0_2: i64;
                    let mut var_b8_4: f32;
                    
                    if rax_105 > 0x18 || !TEST_BITD(0x1249249, rax_105)
                    {
                        'label_866124:
                        let mut rdi_67: i64 = var_70;
                        var_f0_2 = rdi_67;
                        
                        if rdi_67 < 0
                        {
                            zmm0_2 = (var_f0_2 & 1) | rdi_67 >> 1;
                            rdi_67 = var_f0_2;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = rdi_67;
                        }
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        let mut zmm1_26: i32;
                        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rdi_67, rax_4, zmm0_2);
                        let mut rdi_68: i32 = zmm0_2;
                        
                        if zmm0_2 > 2.14748352e+09f
                        {
                            rdi_68 = 0x7fffffff;
                        }
                        
                        var_128_1 = zmm1_26;
                        
                        if FCMP_UO(zmm0_2, zmm0_2)
                        {
                            rdi_68 = 0;
                        }
                        
                        let rax_142: i32 = core::cmp::Ord::max::h485505c56320f468(rdi_68 - 1, 0);
                        zmm0_2 = var_128_1;
                        let mut rdi_70: i32 = zmm0_2;
                        
                        if zmm0_2 > 2.14748352e+09f
                        {
                            rdi_70 = 0x7fffffff;
                        }
                        
                        if FCMP_UO(zmm0_2, zmm0_2)
                        {
                            rdi_70 = 0;
                        }
                        
                        zmm0_2 = rax_142;
                        var_b8_4 = zmm0_2;
                        zmm0_2 = core::cmp::Ord::min::h3552534d3430b892(rdi_70 + 1, rbx_1);
                        var_d0 = zmm0_2;
                        r14_1 = arg2;
                    }
                    else
                    {
                        'label_86561b:
                        var_f0_2 = var_70;
                        
                        if var_70 < 0
                        {
                            zmm0_2 = (var_70 & 1) | var_70 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = var_70;
                        }
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        var_d0 = zmm0_2;
                        var_b8_4 = zmm0_2;
                    }
                    
                    let mut zmm0_11: f32;
                    let mut zmm1_11: f32;
                    zmm0_11 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, var_98_2);
                    let mut zmm0_12: f32;
                    let mut zmm1_12: f32;
                    zmm0_12 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, var_158);
                    var_100 = zmm0_12;
                    let rbp_13: i32 = var_f0_2;
                    let mut zmm0_13: f32;
                    let mut zmm1_13: i32;
                    zmm0_13 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rbp_13, rax_4, var_b8_4);
                    let mut zmm0_14: [f32; 0x4];
                    let mut zmm1_14: f32;
                    zmm0_14 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rbp_13, rax_4, var_d0);
                    var_148 = zmm0_14[0];
                    let mut var_a0: f32 = zmm1_14;
                    
                    if rbx_1 < 0
                    {
                        zmm0_14 = {0};
                        zmm0_14[0] = (rax_1 & 1) | rbx_1 >> 1;
                        zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                    }
                    else
                    {
                        zmm0_14 = {0};
                        zmm0_14[0] = rax_1;
                    }
                    
                    var_128_1 = zmm0_14[0];
                    let rax_110: i64 = rax_3;
                    zmm1_14 = var_b8_4;
                    zmm2_1 = zmm1_11;
                    
                    if rax_110 < 0
                    {
                        zmm0_14 = {0};
                        zmm0_14[0] = (rax_3 & 1) | rax_110 >> 1;
                        zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                    }
                    else
                    {
                        zmm0_14 = {0};
                        zmm0_14[0] = rax_3;
                    }
                    
                    var_d8 = zmm0_14[0];
                    let mut var_e0_1: f32;
                    
                    if r15_3 > 0x1c
                    {
                        'label_865b60:
                        
                        if r14_1 - 0x2555 < 3
                        {
                            var_e0_1 = zmm2_1[0];
                            zmm2_1 = zmm1_12;
                            goto 'label_86620f;
                        }
                        
                        if r14_1 - 0x255b >= 3
                        {
                            if r14_1 - 0x2561 < 3
                            {
                                goto 'label_866206;
                            }
                            
                            var_e0_1 = 0f;
                            zmm2_1 = {0};
                            
                            if r14_1 - 0x2564 <= 4
                            {
                                if r13_2 < 0
                                {
                                    zmm2_1 = {0};
                                    zmm2_1[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm2_1[0] = zmm2_1[0] + zmm2_1[0];
                                }
                                else
                                {
                                    zmm2_1 = {0};
                                    zmm2_1[0] = r13_2;
                                }
                                
                                zmm2_1[0] = zmm2_1[0] * 0.5f;
                                var_e0_1 = zmm1_11[0];
                                r14_1 = arg2;
                                zmm1_14 = var_b8_4;
                            }
                        }
                        else
                        {
                            var_e0_1 = zmm1_12[0];
                        }
                    }
                    else
                    {
                        match r15_3
                        {
                            0 | 0x1b =>
                            {
                                if r13_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = r13_2;
                                }
                                
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                var_e0_1 = zmm0_14[0];
                                zmm2_1 = zmm0_14;
                            }
                            1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf |
                                0x10 | 0x11 | 0x12 | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 =>
                            {
                                goto 'label_865b60;
                            }
                            0x19 =>
                            {
                                if r13_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = r13_2;
                                }
                                
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                var_e0_1 = zmm0_14[0];
                                goto 'label_86623b;
                            }
                            0x1a | 0x1c =>
                            {
                                'label_866206:
                                var_e0_1 = zmm2_1[0];
                            }
                        }
                    }
                    
                    'label_86620f:
                    let mut var_110: f32;
                    let mut var_e4_1: f32;
                    let mut rbx_9: i64;
                    
                    if r15_3 > 0x1c
                    {
                        'label_8662f2:
                        
                        if rcx_34 >= 3
                        {
                            if r14_1 - 0x2558 < 3
                            {
                                zmm0_14 = zmm0_11;
                                goto 'label_8663e5;
                            }
                            
                            var_e4_1 = 0f;
                            
                            if r14_1 - 0x255e < 3
                            {
                                goto 'label_8663df;
                            }
                            
                            var_d8 = 0f;
                            var_100 = 0f;
                            goto 'label_8663ee;
                        }
                        
                        var_e4_1 = var_100[0];
                        var_100 = zmm0_11[0];
                        'label_8663ee:
                        r15_2 = arg1;
                        zmm0_14 = {0};
                        var_108 = zmm0_14[0];
                        let rax_154: u64 = r14_1 - 0x2551;
                        
                        if rax_154 > 0x1b
                        {
                            'label_866707:
                            let mut rcx_109: i32;
                            
                            if r14_1 - 0x2558 >= 5
                            {
                                if r14_1 - 0x255e < 3
                                {
                                    if var_f0_2 < 0
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                        zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                    }
                                    else
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = var_f0_2;
                                    }
                                    
                                    zmm0_14[0] = zmm0_14[0] * 0.5f;
                                    var_a0 = zmm0_14[0];
                                    zmm0_14 = zmm1_13;
                                    goto 'label_86648a;
                                }
                                
                                var_a0 = zmm0_14[0];
                                var_110 = zmm0_14[0];
                                rcx_109 = rcx_34;
                                
                                if r14_1 - 0x2561 < 3
                                {
                                    if var_f0_2 < 0
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                        zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                    }
                                    else
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = var_f0_2;
                                    }
                                    
                                    zmm0_14[0] = zmm0_14[0] * 0.5f;
                                    var_110 = zmm0_14[0];
                                    var_a0 = zmm1_13[0];
                                    r15_2 = arg1;
                                    r14_1 = arg2;
                                    zmm1_14 = var_b8_4;
                                    rcx_109 = rcx_34;
                                }
                            }
                            else
                            {
                                zmm0_14 = zmm1_13;
                                'label_86648a:
                                var_110 = zmm0_14[0];
                                rcx_109 = rcx_34;
                            }
                            
                            if r14_1 - 0x256b < 2
                            {
                                var_108 = var_148[0];
                                rbx_9 = rax_4;
                            }
                            else if r14_1 == 0x2551 || r14_1 == 0x256a
                            {
                                if var_f0_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = var_f0_2;
                                }
                                
                                rbx_9 = rax_4;
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                var_108 = zmm0_14[0];
                                var_148 = zmm0_14[0];
                            }
                            else if rcx_109 >= 3
                            {
                                rbx_9 = rax_4;
                                
                                if r14_1 - 0x2555 >= 3
                                {
                                    if r14_1 - 0x255e < 3
                                    {
                                        if var_f0_2 < 0
                                        {
                                            zmm0_14 = {0};
                                            zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                            zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                        }
                                        else
                                        {
                                            zmm0_14 = {0};
                                            zmm0_14[0] = var_f0_2;
                                        }
                                        
                                        zmm0_14[0] = zmm0_14[0] * 0.5f;
                                        var_108 = zmm0_14[0];
                                    }
                                    else if r14_1 - 0x2561 < 3
                                    {
                                        if var_f0_2 < 0
                                        {
                                            zmm0_14 = {0};
                                            zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                            zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                        }
                                        else
                                        {
                                            zmm0_14 = {0};
                                            zmm0_14[0] = var_f0_2;
                                        }
                                        
                                        zmm0_14[0] = zmm0_14[0] * 0.5f;
                                        var_108 = var_148;
                                        var_148 = zmm0_14[0];
                                    }
                                    else if r14_1 - 0x2564 >= 3
                                    {
                                        var_148 = 0;
                                        var_128_1 = 0;
                                    }
                                    else
                                    {
                                        var_108 = var_148[0];
                                    }
                                    
                                    r15_2 = arg1;
                                    r14_1 = arg2;
                                    rbx_9 = rax_4;
                                    zmm1_14 = var_b8_4;
                                }
                                else
                                {
                                    var_108 = var_148[0];
                                    var_148 = zmm0_13[0];
                                }
                            }
                            else
                            {
                                var_108 = zmm0_13[0];
                                rbx_9 = rax_4;
                            }
                        }
                        else
                        {
                            match rax_154
                            {
                                0 | 0x19 =>
                                {
                                    if var_f0_2 < 0
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = (var_f0_2 & 1) | var_f0_2 >> 1;
                                        zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                    }
                                    else
                                    {
                                        zmm0_14 = {0};
                                        zmm0_14[0] = var_f0_2;
                                    }
                                    
                                    zmm0_14[0] = zmm0_14[0] * 0.5f;
                                    goto 'label_866481;
                                }
                                1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xd | 0xe | 0xf |
                                    0x10 | 0x11 | 0x12 | 0x13 | 0x14 | 0x15 =>
                                {
                                    goto 'label_866707;
                                }
                                0xc =>
                                {
                                    var_110 = var_a0[0];
                                    var_a0 = zmm1_13[0];
                                    'label_866532:
                                    zmm0_14 = {0};
                                    var_148 = zmm0_14[0];
                                    var_128_1 = zmm0_14[0];
                                    rbx_9 = rax_4;
                                }
                                0x16 | 0x18 | 0x1a | 0x1b =>
                                {
                                    zmm0_14 = zmm1_13;
                                    'label_866481:
                                    var_a0 = zmm0_14[0];
                                    goto 'label_86648a;
                                }
                                0x17 =>
                                {
                                    var_110 = zmm1_13[0];
                                    goto 'label_866532;
                                }
                            }
                        }
                    }
                    else
                    {
                        match r15_3
                        {
                            0 | 0x15 | 0x1b =>
                            {
                                if r13_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = r13_2;
                                }
                                
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                var_e4_1 = zmm0_14[0];
                                var_100 = zmm0_14[0];
                                goto 'label_8663ee;
                            }
                            1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf |
                                0x10 | 0x11 | 0x12 | 0x13 =>
                            {
                                goto 'label_8662f2;
                            }
                            0x14 | 0x16 =>
                            {
                                if r13_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = r13_2;
                                }
                                
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                var_e4_1 = var_100[0];
                                var_100 = zmm0_14[0];
                                goto 'label_8663ee;
                            }
                            0x17 | 0x19 =>
                            {
                                'label_86623b:
                                
                                if r13_2 < 0
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = (r13_2 & 1) | r13_2 >> 1;
                                    zmm0_14[0] = zmm0_14[0] + zmm0_14[0];
                                }
                                else
                                {
                                    zmm0_14 = {0};
                                    zmm0_14[0] = r13_2;
                                }
                                
                                zmm0_14[0] = zmm0_14[0] * 0.5f;
                                goto 'label_8663e5;
                            }
                            0x18 =>
                            {
                                var_108 = 0f;
                                var_110 = zmm1_13[0];
                                var_e4_1 = var_100[0];
                                var_100 = zmm0_11[0];
                                var_148 = 0;
                                var_128_1 = 0;
                                r15_2 = arg1;
                                rbx_9 = rax_4;
                            }
                            0x1a | 0x1c =>
                            {
                                'label_8663df:
                                zmm0_14 = var_100;
                                'label_8663e5:
                                var_e4_1 = zmm0_14[0];
                                goto 'label_8663ee;
                            }
                        }
                    }
                    
                    alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                        &var_90, rbx_9, {0}[0], zmm1_14, zmm2_1);
                    alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                        &var_90, rbx_9, {0}, var_d0, var_e0_1);
                    alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                        &var_90, rbx_9, var_100, var_b8_4, var_d8);
                    alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                        &var_90, rbx_9, var_e4_1, var_d0, var_d8);
                    alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                        &var_90, rbx_9, var_98_2, {0}, var_a0);
                    alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                        &var_90, rbx_9, var_158, {0}, var_110);
                    alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                        &var_90, rbx_9, var_98_2, var_108, var_128_1);
                    alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                        &var_90, rbx_9, var_158, var_148, var_128_1);
                }
            }
            else
            {
                let mut rbp_5: i64 = 0;
                let rax_40: u64 = r14_1 - 0x2500;
                let mut rbx_4: i64;
                
                if rax_40 > 0x7e
                {
                    r15_2 = arg1;
                    rbx_4 = 0;
                    
                    if rax_40 <= 0x7e
                    {
                        'label_865202:
                        
                        match rax_40
                        {
                            0 | 0xc | 0xe | 0x14 | 0x16 | 0x1c | 0x1e | 0x1f | 0x20 | 0x2c | 0x2d |
                                0x30 | 0x31 | 0x34 | 0x35 | 0x38 | 0x39 | 0x3c | 0x3d | 0x40 | 0x41
                                | 0x42 | 0x43 | 0x45 | 0x49 | 0x76 | 0x7e =>
                            {
                                rbx_4 = rax_4;
                            }
                            1 | 0xd | 0xf | 0x15 | 0x17 | 0x1d | 0x21 | 0x22 | 0x23 | 0x2e | 0x2f |
                                0x32 | 0x33 | 0x36 | 0x37 | 0x3a | 0x3b | 0x3e | 0x3f | 0x44 | 0x46
                                | 0x47 | 0x48 | 0x4a | 0x4b | 0x7a | 0x7c =>
                            {
                                rbx_4 = r13_1;
                            }
                        }
                    }
                }
                else
                {
                    r15_2 = arg1;
                    
                    match rax_40
                    {
                        0 | 0x10 | 0x12 | 0x18 | 0x1a | 0x24 | 0x26 | 0x27 | 0x28 | 0x2c | 0x2e |
                            0x30 | 0x32 | 0x34 | 0x36 | 0x38 | 0x3a | 0x3c | 0x3e | 0x40 | 0x41 |
                            0x42 | 0x44 | 0x46 | 0x4a | 0x74 | 0x7c =>
                        {
                            rbp_5 = rax_4;
                            rbx_4 = 0;
                            
                            if rax_40 <= 0x7e
                            {
                                goto 'label_865202;
                            }
                        }
                        1 | 0x11 | 0x13 | 0x19 | 0x1b | 0x25 | 0x29 | 0x2a | 0x2b | 0x2d | 0x2f |
                            0x31 | 0x33 | 0x35 | 0x37 | 0x39 | 0x3b | 0x3d | 0x3f | 0x43 | 0x45 |
                            0x47 | 0x48 | 0x49 | 0x4b | 0x78 | 0x7e =>
                        {
                            rbp_5 = r13_1;
                            'label_8651f4:
                            rbx_4 = 0;
                            
                            if rax_40 <= 0x7e
                            {
                                goto 'label_865202;
                            }
                        }
                        2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x14 |
                            0x15 | 0x16 | 0x17 | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 |
                            0x23 | 0x4c | 0x4d | 0x4e | 0x4f | 0x50 | 0x51 | 0x52 | 0x53 | 0x54 |
                            0x55 | 0x56 | 0x57 | 0x58 | 0x59 | 0x5a | 0x5b | 0x5c | 0x5d | 0x5e |
                            0x5f | 0x60 | 0x61 | 0x62 | 0x63 | 0x64 | 0x65 | 0x66 | 0x67 | 0x68 |
                            0x69 | 0x6a | 0x6b | 0x6c | 0x6d | 0x6e | 0x6f | 0x70 | 0x71 | 0x72 |
                            0x73 | 0x75 | 0x76 | 0x77 | 0x79 | 0x7a | 0x7b | 0x7d =>
                        {
                            goto 'label_8651f4;
                        }
                    }
                }
                
                var_148 = 0;
                let rax_87: u64 = r14_1 - 0x2502;
                
                if rax_87 <= 0x7d
                {
                    match rax_87
                    {
                        0 | 0x12 | 0x13 | 0x16 | 0x17 | 0x1a | 0x1b | 0x1d | 0x20 | 0x22 | 0x23 |
                            0x25 | 0x28 | 0x32 | 0x33 | 0x34 | 0x35 | 0x3a | 0x3b | 0x3c | 0x3d |
                            0x3f | 0x43 | 0x44 | 0x46 | 0x73 | 0x7b =>
                        {
                            var_148 = rax_4;
                        }
                        1 | 0x14 | 0x15 | 0x18 | 0x19 | 0x1c | 0x1e | 0x1f | 0x21 | 0x24 | 0x26 |
                            0x27 | 0x29 | 0x36 | 0x37 | 0x38 | 0x39 | 0x3e | 0x40 | 0x41 | 0x42 |
                            0x45 | 0x47 | 0x48 | 0x49 | 0x77 | 0x7d =>
                        {
                            var_148 = r13_1;
                        }
                    }
                }
                
                let mut r14_7: i64 = 0;
                
                if rax_87 <= 0x7d
                {
                    match rax_87
                    {
                        0 | 0xa | 0xb | 0xe | 0xf | 0x1a | 0x1b | 0x1c | 0x1f | 0x22 | 0x23 | 0x24
                            | 0x27 | 0x2a | 0x2b | 0x2c | 0x2d | 0x3a | 0x3b | 0x3c | 0x3d | 0x3e
                            | 0x41 | 0x42 | 0x45 | 0x75 | 0x7d =>
                        {
                            r14_7 = rax_4;
                        }
                        1 | 0xc | 0xd | 0x10 | 0x11 | 0x1d | 0x1e | 0x20 | 0x21 | 0x25 | 0x26 | 0x28
                            | 0x29 | 0x2e | 0x2f | 0x30 | 0x31 | 0x3f | 0x40 | 0x43 | 0x44 | 0x46
                            | 0x47 | 0x48 | 0x49 | 0x79 | 0x7b =>
                        {
                            r14_7 = r13_1;
                        }
                    }
                }
                
                if var_78 < 0
                {
                    zmm0_2 = (var_78 & 1) | var_78 >> 1;
                    zmm0_2 = zmm0_2 + zmm0_2;
                }
                else
                {
                    zmm0_2 = var_78;
                }
                
                zmm0_2 = zmm0_2 * 0.5f;
                
                if var_70 < 0
                {
                    zmm2_1[0] = (var_70 & 1) | var_70 >> 1;
                    zmm2_1[0] = zmm2_1[0] + zmm2_1[0];
                }
                else
                {
                    zmm2_1[0] = var_70;
                }
                
                zmm2_1[0] = zmm2_1[0] * 0.5f;
                var_160 = zmm2_1[0];
                var_158 = zmm0_2;
                let mut zmm0_4: f32;
                let mut zmm1_4: f32;
                zmm0_4 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_78, var_148, zmm0_2);
                let mut zmm0_5: f32;
                let mut zmm1_5: f32;
                zmm0_5 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_78, r14_7, var_158);
                var_b8 = rbp_5;
                let mut zmm0_6: f32;
                let mut zmm1_6: f32;
                zmm0_6 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_70, rbp_5, var_160);
                var_128_1 = zmm0_6;
                let mut zmm0_7: f32;
                let mut zmm1_7: f32;
                zmm0_7 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_70, rbx_4, var_160);
                let var_98_1: f32 = zmm0_7;
                let mut rdi_42: i32 = zmm1_4;
                
                if zmm1_4 > 2.14748352e+09f
                {
                    rdi_42 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm1_4, zmm1_4)
                {
                    rdi_42 = 0;
                }
                
                let mut rsi_26: i32 = zmm1_5;
                
                if zmm1_5 > 2.14748352e+09f
                {
                    rsi_26 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm1_5, zmm1_5)
                {
                    rsi_26 = 0;
                }
                
                var_d0 = core::cmp::Ord::max::h485505c56320f468(rdi_42, rsi_26);
                let mut rdi_43: i32 = zmm1_6;
                
                if zmm1_6 > 2.14748352e+09f
                {
                    rdi_43 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm1_6, zmm1_6)
                {
                    rdi_43 = 0;
                }
                
                let mut rsi_27: i32 = zmm1_7;
                
                if zmm1_7 > 2.14748352e+09f
                {
                    rsi_27 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm1_7, zmm1_7)
                {
                    rsi_27 = 0;
                }
                
                let rax_95: i32 = core::cmp::Ord::max::h485505c56320f468(rdi_43, rsi_27);
                zmm0_7 = var_128_1;
                let mut rdi_44: i32 = zmm0_7;
                
                if zmm0_7 > 2.14748352e+09f
                {
                    rdi_44 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm0_7, zmm0_7)
                {
                    rdi_44 = 0;
                }
                
                let mut rsi_28: i32 = var_98_1;
                
                if var_98_1 > 2.14748352e+09f
                {
                    rsi_28 = 0x7fffffff;
                }
                
                if FCMP_UO(var_98_1, var_98_1)
                {
                    rsi_28 = 0;
                }
                
                let rax_96: i32 = core::cmp::Ord::min::h3552534d3430b892(rdi_44, rsi_28);
                
                if rbx_1 < 0
                {
                    zmm0_7 = (rax_1 & 1) | rbx_1 >> 1;
                    zmm0_7 = zmm0_7 + zmm0_7;
                }
                else
                {
                    zmm0_7 = rax_1;
                }
                
                var_128_1 = zmm0_7;
                r14_1 = arg2;
                alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                    &var_90, var_b8, {0}, var_160, var_d0);
                let rax_99: i64 = rax_3;
                let mut zmm0_8: f32;
                
                if rax_99 < 0
                {
                    zmm0_8 = (rax_3 & 1) | rax_99 >> 1;
                    zmm0_8 = zmm0_8 + zmm0_8;
                }
                else
                {
                    zmm0_8 = rax_3;
                }
                
                let var_b8_3: f32 = zmm0_8;
                let mut rdi_46: i32 = zmm0_4;
                
                if zmm0_4 > 2.14748352e+09f
                {
                    rdi_46 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm0_4, zmm0_4)
                {
                    rdi_46 = 0;
                }
                
                let mut rsi_30: i32 = zmm0_5;
                
                if zmm0_5 > 2.14748352e+09f
                {
                    rsi_30 = 0x7fffffff;
                }
                
                if FCMP_UO(zmm0_5, zmm0_5)
                {
                    rsi_30 = 0;
                }
                
                zmm0_8 = core::cmp::Ord::min::h3552534d3430b892(rdi_46, rsi_30);
                let mut zmm2_3: i128;
                zmm2_3 = var_b8_3 - zmm0_8;
                alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                    &var_90, rbx_4, zmm0_8, var_160, zmm2_3);
                let mut zmm2_4: i128;
                zmm2_4 = rax_95;
                alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                    &var_90, var_148, var_158, {0}, zmm2_4);
                let zmm1_10: f32 = rax_96;
                var_148 = zmm1_10;
                var_128_1 = var_128_1 - zmm1_10;
                alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                    &var_90, r14_7, var_158, var_148, var_128_1);
            }
        }
        else
        {
            let mut rbx_2: i64 = 2;
            let mut var_48: i64;
            
            match rax_6
            {
                0 =>
                {
                    goto 'label_86491f;
                }
                1 =>
                {
                    goto 'label_864929;
                }
                2 =>
                {
                    goto 'label_864b1f;
                }
                3 =>
                {
                    goto 'label_864b36;
                }
                4 =>
                {
                    rbx_2 = 3;
                    goto 'label_86491f;
                }
                5 =>
                {
                    rbx_2 = 3;
                    goto 'label_864929;
                }
                6 =>
                {
                    rbx_2 = 3;
                    goto 'label_864b1f;
                }
                7 =>
                {
                    rbx_2 = 3;
                    goto 'label_864b36;
                }
                8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 | 0x13 | 0x14 | 0x15
                    | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 |
                    0x21 | 0x22 | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 | 0x29 | 0x2a | 0x2b |
                    0x2c | 0x2d | 0x2e | 0x2f | 0x30 | 0x31 | 0x32 | 0x33 | 0x34 | 0x35 | 0x36 |
                    0x37 | 0x38 | 0x39 | 0x3a | 0x3b | 0x3c | 0x3d | 0x3e | 0x3f | 0x40 | 0x41 |
                    0x42 | 0x43 | 0x44 | 0x45 | 0x46 | 0x47 | 0x4c | 0x4d | 0x4e | 0x4f | 0x50 |
                    0x51 | 0x52 | 0x53 | 0x54 | 0x55 | 0x56 | 0x57 | 0x58 | 0x59 | 0x5a | 0x5b |
                    0x5c | 0x5d | 0x5e | 0x5f | 0x60 | 0x61 | 0x62 | 0x63 | 0x64 | 0x65 | 0x66 |
                    0x67 | 0x68 | 0x6d | 0x6e | 0x6f | 0x70 | 0x71 | 0x72 | 0x73 | 0x74 | 0x75 |
                    0x76 | 0x77 | 0x78 | 0x79 | 0x7a | 0x7b | 0x7c | 0x7d | 0x7e | 0x7f | 0x80 |
                    0x81 | 0x82 | 0x83 | 0x85 | 0x86 | 0x87 | 0x88 | 0x89 | 0x8a | 0x8b | 0x8c =>
                {
                    goto 'label_864aaf;
                }
                0x48 =>
                {
                    rbx_2 = 1;
                    'label_86491f:
                    r13_1 = rax_4;
                    goto 'label_864929;
                }
                0x49 =>
                {
                    rbx_2 = 1;
                    'label_864929:
                    let r12_6: i64 = rax_3;
                    let rax_25: i64 = core::cmp::Ord::max::h20b6d33cbe488162(r12_6 >> 3, 1);
                    let rdx_7: i64 = rax_25 * rbx_2;
                    let mut rax_26: i64 = 0;
                    
                    if r12_6 >= rdx_7
                    {
                        rax_26 = r12_6 - rdx_7;
                    }
                    
                    r15_2 = arg1;
                    let mut rax_27: u64;
                    
                    if rax_26 >> 0x20 == 0
                    {
                        rax_27 = COMBINE(0, rax_26) / (rbx_2 + 1);
                    }
                    else
                    {
                        rax_27 = COMBINE(0, rax_26) / (rbx_2 + 1);
                    }
                    
                    let rax_28: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rax_27, 1);
                    
                    if var_70 < 0
                    {
                        zmm0_2 = (var_70 & 1) | var_70 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                    {
                        zmm0_2 = var_70;
                    }
                    
                    var_158 = zmm0_2;
                    var_48 = 0;
                    let var_40_1: i64 = rbx_2;
                    let var_38_1: i8 = 0;
                    
                    if rax_28 < 0
                    {
                        zmm0_2 = (rax_28 & 1) | rax_28 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                    {
                        zmm0_2 = rax_28;
                    }
                    
                    var_128_1 = zmm0_2;
                    zmm0_2 = var_158 * 0.5f;
                    var_158 = zmm0_2;
                    let var_58_4: *mut i64 = &var_90;
                    r14_1 = arg2;
                    
                    loop
                    {
                        let mut rax_34: i8;
                        let mut rdx_13: i64;
                        rax_34 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (rax_34 & 1) == 0
                        {
                            break;
                        }
                        
                        let rax_35: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(
                            rdx_13 * (rax_28 + rax_25), r12_6);
                        
                        if rax_35 >= 0
                        {
                            zmm0_2 = rax_35;
                        }
                        else
                        {
                            zmm0_2 = (rax_35 & 1) | rax_35 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        
                        alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(&var_90, r13_1, zmm0_2, var_158, var_128_1);
                    }
                }
                0x4a =>
                {
                    rbx_2 = 1;
                    'label_864b1f:
                    r13_1 = rax_4;
                    goto 'label_864b36;
                }
                0x4b =>
                {
                    rbx_2 = 1;
                    'label_864b36:
                    let rax_41: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rbx_1 >> 3, 1);
                    let rdx_19: i64 = rax_41 * rbx_2;
                    let mut rax_42: i64 = 0;
                    
                    if rbx_1 >= rdx_19
                    {
                        rax_42 = rbx_1 - rdx_19;
                    }
                    
                    r15_2 = arg1;
                    let mut rax_43: u64;
                    
                    if rax_42 >> 0x20 == 0
                    {
                        rax_43 = COMBINE(0, rax_42) / (rbx_2 + 1);
                    }
                    else
                    {
                        rax_43 = COMBINE(0, rax_42) / (rbx_2 + 1);
                    }
                    
                    let rax_44: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rax_43, 1);
                    
                    if var_78 < 0
                    {
                        zmm0_2 = (var_78 & 1) | var_78 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                    {
                        zmm0_2 = var_78;
                    }
                    
                    var_158 = zmm0_2;
                    var_48 = 0;
                    let var_40_2: i64 = rbx_2;
                    let var_38_2: i8 = 0;
                    
                    if rax_44 < 0
                    {
                        zmm0_2 = (rax_44 & 1) | rax_44 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                    {
                        zmm0_2 = rax_44;
                    }
                    
                    var_128_1 = zmm0_2;
                    zmm0_2 = var_158 * 0.5f;
                    var_158 = zmm0_2;
                    let var_58_5: *mut i64 = &var_90;
                    r14_1 = arg2;
                    
                    loop
                    {
                        let mut rax_50: i8;
                        let mut rdx_25: i64;
                        rax_50 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (rax_50 & 1) == 0
                        {
                            break;
                        }
                        
                        let rax_51: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(
                            rdx_25 * (rax_44 + rax_41), rbx_1);
                        
                        if rax_51 >= 0
                        {
                            zmm1_1 = rax_51;
                        }
                        else
                        {
                            zmm1_1 = (rax_51 & 1) | rax_51 >> 1;
                            zmm1_1 = zmm1_1 + zmm1_1;
                        }
                        
                        alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(&var_90, r13_1, var_158, zmm1_1, var_128_1);
                    }
                }
                0x69 | 0x6a | 0x6b | 0x6c =>
                {
                    alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner::h0beb163b132b4e9b(&var_90, rax_4);
                    let mut r8: i64 = r14;
                    r15_2 = arg1;
                    let mut var_110_1: *mut *mut [i8; 0xeb];
                    let mut var_d8_1: *mut i16;
                    let mut rax_182: *mut *mut [i8; 0xeb];
                    let mut r10_1: i64;
                    let mut r13_4: i64;
                    
                    if r14_1 == 0x256d || r14_1 == 0x2570
                    {
                        var_d8_1 = var_88;
                        r10_1 = var_80;
                        
                        if rax_1 >= 2
                        {
                            if var_78 < 0
                            {
                                zmm0_2 = (var_78 & 1) | var_78 >> 1;
                                zmm0_2 = zmm0_2 + zmm0_2;
                            }
                            else
                            {
                                zmm0_2 = var_78;
                            }
                            
                            zmm0_2 = zmm0_2 * 0.5f;
                            let rax_56: i64 = zmm0_2;
                            let mut rdx_29: i64 =
                                ((zmm0_2 - 9.22337204e+18f) & rax_56 >> 0x3f) | rax_56;
                            let mut r8_1: i64 = 0;
                            
                            if zmm0_2 < 0f
                            {
                                rdx_29 = 0;
                            }
                            
                            let mut rax_57: i64 = -1;
                            
                            if zmm0_2 <= 1.8446743e+19f
                            {
                                rax_57 = rdx_29;
                            }
                            
                            let rdi_29: u64 = (rax_4 ^ rax_3) & 1;
                            let mut r9_1: i64 = rax_3;
                            let mut r12_12: i64 = !rdi_29 + r9_1;
                            let rcx_39: i64 = r9_1 * 3;
                            let mut rbp_6: *mut i16 = var_d8_1;
                            var_148 = (rcx_39 - rdi_29 * 3 + rbp_6).byte_offset(-3);
                            let mut rsi_16: i64 = 1;
                            let mut rax_61: i64 = 2;
                            var_110_1 = &data_c83cb0;
                            var_158 = r10_1;
                            let var_f0_1: i64 = r9_1;
                            
                            loop
                            {
                                if rdi_29 != 0
                                {
                                    r13_4 = (rsi_16 - 1) * r9_1;
                                    
                                    if r13_4 >= r10_1
                                    {
                                        goto 'label_8669ca;
                                    }
                                    
                                    if rsi_16 * r9_1 - 1 >= r10_1
                                    {
                                        r13_4 = rsi_16 * r9_1 - 1;
                                        rax_182 = &data_c83cc8;
                                        break;
                                    }
                                    
                                    let rax_64: i64 = r13_4 * 3;
                                    let rcx_45: i64 = (rsi_16 * r9_1 - 1) * 3;
                                    let rdx_31: i16 = *var_d8_1.byte_offset(rax_64);
                                    *var_d8_1.byte_offset(rcx_45).byte_offset(2) =
                                        *var_d8_1.byte_offset(rax_64).byte_offset(2);
                                    *var_d8_1.byte_offset(rcx_45) = rdx_31;
                                }
                                
                                let mut var_98: i32;
                                var_98 = rax_61;
                                let mut r14_5: i64 = rax_57;
                                let mut rbx_5: *mut i16 = rbp_6;
                                var_b8 = r8_1;
                                r13_4 = r8_1;
                                let mut r15_4: i64 = var_148;
                                let var_d0_1: i64 = r12_12;
                                
                                if rax_57 != 0
                                {
                                    loop
                                    {
                                        if r13_4 < r10_1
                                        {
                                            if r12_12 >= r10_1
                                            {
                                                r13_4 = r12_12;
                                            }
                                            else
                                            {
                                                core::ptr::swap::he5bebdc076cfabf5(rbx_5, r15_4);
                                                r12_12 -= 1;
                                                r15_4 -= 3;
                                                r13_4 += 1;
                                                rbx_5 += 3;
                                                let temp14_1: i64 = r14_5;
                                                r14_5 -= 1;
                                                r10_1 = var_158;
                                                
                                                if temp14_1 == 1
                                                {
                                                    goto 'label_864e08;
                                                }
                                                
                                                continue;
                                            }
                                        }
                                        
                                        rax_182 = &data_c83ce0;
                                        break;
                                    }
                                    
                                    break;
                                }
                                
                                'label_864e08:
                                rsi_16 = var_98;
                                rax_61 = rsi_16 + 0;
                                r9_1 = var_f0_1;
                                r12_12 = var_d0_1 + r9_1;
                                var_148 += rcx_39;
                                r8_1 = var_b8 + r9_1;
                                rbp_6 += rcx_39;
                                r15_2 = arg1;
                                r14_1 = arg2;
                                
                                if rsi_16 >= rbx_1
                                {
                                    goto 'label_864f39;
                                }
                            }
                            
                            goto 'label_8669b3;
                        }
                        
                        'label_864f39:
                        r8 = r14;
                        
                        if r14_1 - 0x256d < 2
                        {
                            goto 'label_864f4f;
                        }
                    }
                    else if r14_1 == 0x256e
                    {
                        var_d8_1 = var_88;
                        r10_1 = var_80;
                        'label_864f4f:
                        
                        if var_70 < 0
                        {
                            zmm0_2 = (var_70 & 1) | var_70 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                        {
                            zmm0_2 = var_70;
                        }
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        let rax_71: i64 = zmm0_2;
                        let mut rcx_50: i64 = 0;
                        
                        if zmm0_2 >= 0f
                        {
                            rcx_50 = ((zmm0_2 - 9.22337204e+18f) & rax_71 >> 0x3f) | rax_71;
                        }
                        
                        let mut rax_72: i64 = -1;
                        
                        if zmm0_2 <= 1.8446743e+19f
                        {
                            rax_72 = rcx_50;
                        }
                        
                        let rbp_7: i32 = rax_4 ^ rax_1;
                        var_158 = r10_1;
                        
                        if (rbp_7 & 1) != 0 && rax_3 != 0
                        {
                            let rcx_52: i64 = (rbx_1 - 1) * r8;
                            let rsi_20: i64 = rcx_52 * 3;
                            let mut rdx_35: i64 = 0;
                            let mut rdi_33: *mut i16 = var_d8_1;
                            
                            loop
                            {
                                if r10_1 == rdx_35
                                {
                                    var_110_1 = &data_c83d10;
                                    r13_4 = rdx_35;
                                    goto 'label_8669ca;
                                }
                                
                                r13_4 = rcx_52 + rdx_35;
                                
                                if r13_4 >= r10_1
                                {
                                    rax_182 = &data_c83d28;
                                    break;
                                }
                                
                                let r8_3: i16 = *rdi_33;
                                *rdi_33.byte_offset(rsi_20).byte_offset(2) = rdi_33[1];
                                *rdi_33.byte_offset(rsi_20) = r8_3;
                                rdx_35 += 1;
                                rdi_33 += 3;
                                
                                if r14 == rdx_35
                                {
                                    goto 'label_865037;
                                }
                            }
                            
                            'label_8669b3:
                            var_110_1 = rax_182;
                            'label_8669ca:
                            core::panicking::panic_bounds_check::h025cadc56a971af7(r13_4, var_158);
                            /* no return */
                        }
                        
                        'label_865037:
                        var_48 = 1;
                        let var_40_3: i64 = rax_72;
                        let var_38_3: i8 = 0;
                        let mut rax_73: i8;
                        let mut rdx_36: i64;
                        rax_73 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (rax_73 & 1) != 0
                        {
                            if rax_3 == 0
                            {
                                let mut rax_79: i8;
                                
                                do
                                {
                                    rax_79 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                                } while (rax_79 & 1) != 0;
                            }
                            else
                            {
                                let rax_75: i64 = r14 * 3;
                                var_110_1 = &data_c83cf8;
                                
                                loop
                                {
                                    let rbp_10: i64 = rbx_1 - (rdx_36 + (rbp_7 & 1));
                                    let mut r12_14: i64 = r14;
                                    let mut rbp_11: i64 = rbp_10 * r12_14;
                                    let mut rbx_8: *mut i16 =
                                        (rax_75 * rbp_10).byte_offset(var_d8_1);
                                    r13_4 = (rdx_36 - 1) * r12_14;
                                    let mut r15_7: *mut c_void =
                                        (rax_75 * (rdx_36 - 1)).byte_offset(var_d8_1);
                                    
                                    loop
                                    {
                                        if r13_4 >= var_158
                                        {
                                            goto 'label_8669ca;
                                        }
                                        
                                        if rbp_11 >= var_158
                                        {
                                            r13_4 = rbp_11;
                                            goto 'label_8669ca;
                                        }
                                        
                                        core::ptr::swap::he5bebdc076cfabf5(r15_7, rbx_8);
                                        rbp_11 += 1;
                                        rbx_8 += 3;
                                        r13_4 += 1;
                                        r15_7 += 3;
                                        let temp15_1: i64 = r12_14;
                                        r12_14 -= 1;
                                        
                                        if temp15_1 == 1
                                        {
                                            let mut rax_78: i8;
                                            rax_78 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                                            
                                            if (rax_78 & 1) != 0
                                            {
                                                break;
                                            }
                                            
                                            goto 'label_86514c;
                                        }
                                    }
                                }
                            }
                        }
                        
                        'label_86514c:
                        r15_2 = arg1;
                        r14_1 = arg2;
                    }
                }
                0x84 =>
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0xffffff);
                    r15_2 = arg1;
                }
                0x8d =>
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0x404040);  /* "T_New_Glyph" */
                    r15_2 = arg1;
                }
                0x8e =>
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0x808080);
                    r15_2 = arg1;
                }
                0x8f =>
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0xc0c0c0);
                    r15_2 = arg1;
                }
                0x90 | 0x91 =>
                {
                    'label_865193:
                    zmm1_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(rax_3, rax_1), 0);
                    zmm0_2 = *data_4e9250;
                    let temp0_11: [f32; 0x4] = _mm_cvtpd_ps(_mm_sub_pd(zmm1_1 | zmm0_2, zmm0_2));
                    let rax_82: u64 = r14_1 - 0x2580;
                    let mut var_148_2: u128;
                    let mut zmm2_6: [f32; 0x4];
                    let mut zmm3_1: u128;
                    
                    if rax_82 > 0x15
                    {
                        'label_865815:
                        zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                        var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                        zmm0_15 = data_4e8770[0x10][0];
                        let temp0_19: [f32; 0x4] = _mm_max_ps(zmm0_15, temp0_11);
                        let temp0_20: [f32; 0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                        zmm0_15 = _mm_and_ps(zmm0_15, temp0_20);
                        var_158_2 = {0};
                        var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_20, temp0_19), zmm0_15);
                        r15_2 = arg1;
                    }
                    else
                    {
                        match rax_82
                        {
                            0 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm3_1 = 4f * zmm1_1;
                                zmm0_2 = 0x3e000000;
                                'label_865a1c:
                                zmm3_1 = zmm3_1 * zmm0_2;
                                var_148_2 = zmm3_1;
                                zmm1_1 = zmm1_1 * 8f;
                                zmm1_1 = zmm1_1 * zmm0_2;
                                'label_865a31:
                                r15_2 = arg1;
                                zmm0_2 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) - zmm1_1;
                                var_128_1 = roundf(zmm0_2);
                                let temp0_49: [f32; 0x4] = _mm_shuffle_ps(
                                    roundf(var_148_2)[0] | temp0_11[0] << 0x40, temp0_11, 0xe2);
                                zmm2_6 = data_4e8770[0x10][0];
                                let temp0_50: [f32; 0x4] = _mm_max_ps(zmm2_6, temp0_49);
                                let temp0_51: [f32; 0x4] = _mm_cmpeq_ps(temp0_49, temp0_49, 3);
                                zmm2_6 = _mm_and_ps(zmm2_6, temp0_51);
                                var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_51, temp0_50), zmm2_6);
                                var_158_2 = {0};
                            }
                            1 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                goto 'label_865885;
                            }
                            2 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm1_1 = zmm1_1 + zmm1_1;
                                goto 'label_865885;
                            }
                            3 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 3f;
                                goto 'label_865885;
                            }
                            4 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 4f;
                                'label_865885:
                                zmm1_1 = zmm1_1 * 0.125f;
                                var_148_2 = zmm1_1;
                                goto 'label_865a31;
                            }
                            5 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 5f;
                                goto 'label_865885;
                            }
                            6 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 6f;
                                goto 'label_865885;
                            }
                            7 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 7f;
                                goto 'label_865885;
                            }
                            8 | 0x11 | 0x12 | 0x13 =>
                            {
                                goto 'label_865815;
                            }
                            9 =>
                            {
                                zmm0_2 = 0x40e00000 * temp0_11[0];
                                goto 'label_865932;
                            }
                            0xa =>
                            {
                                zmm0_2 = 0x40c00000 * temp0_11[0];
                                goto 'label_865932;
                            }
                            0xb =>
                            {
                                zmm0_2 = 0x40a00000 * temp0_11[0];
                                goto 'label_865932;
                            }
                            0xc =>
                            {
                                zmm0_2 = 0x40800000 * temp0_11[0];
                                goto 'label_865932;
                            }
                            0xd =>
                            {
                                zmm0_2 = 0x40400000 * temp0_11[0];
                                goto 'label_865932;
                            }
                            0xe =>
                            {
                                zmm0_2 = temp0_11 + temp0_11[0];
                                'label_865932:
                                r15_2 = arg1;
                                zmm0_2 = zmm0_2 * 0.125f;
                                var_160 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_160)[0];
                                zmm0_15 = data_4e8770[0x10][0];
                                let temp0_35: [f32; 0x4] = _mm_max_ps(zmm0_15, temp0_11);
                                let temp0_36: [f32; 0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm0_15 = _mm_and_ps(zmm0_15, temp0_36);
                                var_158_2 = {0};
                                var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_36, temp0_35), zmm0_15);
                            }
                            0xf =>
                            {
                                zmm0_2 = temp0_11;
                                goto 'label_865932;
                            }
                            0x10 =>
                            {
                                zmm0_2 = 4f * temp0_11[0];
                                zmm0_2 = zmm0_2 * 0.125f;
                                var_148 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_148)[0];
                                zmm2_6 = data_4e8770[0x10][0];
                                let temp0_29: [f32; 0x4] = _mm_max_ps(zmm2_6, temp0_11);
                                let temp0_30: [f32; 0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm2_6 = _mm_and_ps(zmm2_6, temp0_30);
                                let zmm1_15: [f32; 0x4] = _mm_andnot_ps(temp0_30, temp0_29);
                                r15_2 = arg1;
                                
                                if var_78 < 0
                                {
                                    zmm0_15 = {0};
                                    zmm0_15[0] = (var_78 & 1) | var_78 >> 1;
                                    zmm0_15[0] = zmm0_15[0] + zmm0_15[0];
                                }
                                else
                                {
                                    zmm0_15 = {0};
                                    zmm0_15[0] = var_78;
                                }
                                
                                var_148_1 = _mm_or_ps(zmm2_6, zmm1_15);
                                zmm0_15[0] = zmm0_15[0] * 0.5f;
                                var_158_2 = zmm0_15;
                            }
                            0x14 =>
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm0_2 = 0x3e000000;
                                zmm3_1 = zmm1_1;
                                goto 'label_865a1c;
                            }
                            0x15 =>
                            {
                                zmm0_2 = 0.125f * temp0_11[0];
                                var_148 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_148)[0];
                                zmm0_15 = data_4e8770[0x10][0];
                                let temp0_42: [f32; 0x4] = _mm_max_ps(zmm0_15, temp0_11);
                                let temp0_43: [f32; 0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm0_15 = _mm_and_ps(zmm0_15, temp0_43);
                                zmm2_6 = _mm_or_ps(_mm_andnot_ps(temp0_43, temp0_42), zmm0_15);
                                var_148_1 = zmm2_6;
                                temp0_11[0] = temp0_11[0] - zmm2_6[0];
                                var_158_2 = temp0_11;
                                r15_2 = arg1;
                            }
                        }
                    }
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_90, var_158_2, var_128_1, var_148_1, 
                        _mm_shuffle_ps(var_148_1, var_148_1, 0x55));
                }
            }
        }
        zmm0_2 = arg3[2];
        let mut rcx_114: i32 = 0x7fffffff;
        
        if zmm0_2 <= 2.14748352e+09f
        {
            rcx_114 = zmm0_2;
        }
        
        let mut rax_164: i32 = 0;
        
        if FCMP_O(zmm0_2, zmm0_2)
        {
            rax_164 = rcx_114;
        }
        
        result = rax_164 + rax_1;
        let rcx_115: i64 = var_90;
        r15_2[5] = r14_1;
        *r15_2.byte_offset(0x2c) = rax_3;
        let rdi_80: i32 = rbx_1;
        r15_2[6] = rdi_80;
        *r15_2.byte_offset(0x34) = result;
        r15_2[7] = 0;
        r15_2[4] = rax_3;
        *r15_2.byte_offset(0x24) = rdi_80;
        *r15_2 = 0;
        r15_2[1] = rcx_115 * 3;
        r15_2[2] = var_88;
        r15_2[3] = var_80 * 3;
    }
    else
    {
        let rsi: i64 = rax_3;
        let mut zmm0_1: i32;
        
        if rsi < 0
        {
            zmm0_1 = (rax_3 & 1) | rsi >> 1;
            zmm0_1 = zmm0_1 + zmm0_1;
        }
        else
        {
            zmm0_1 = rax_3;
        }
        
        var_158 = zmm0_1;
        
        if rbx_1 < 0
        {
            zmm0_1 = (rax_1 & 1) | rbx_1 >> 1;
            zmm0_1 = zmm0_1 + zmm0_1;
        }
        else
        {
            zmm0_1 = rax_1;
        }
        
        let var_b8_1: i32 = zmm0_1;
        zmm0_1 = arg3[2];
        let mut rcx_6: i32 = 0x7fffffff;
        
        if zmm0_1 <= 2.14748352e+09f
        {
            rcx_6 = zmm0_1;
        }
        
        let mut rbx_3: i32 = 0;
        
        if FCMP_O(zmm0_1, zmm0_1)
        {
            rbx_3 = rcx_6;
        }
        
        let r12_3: i64 = rbx_1 + r13_1;
        alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_90, rsi, 
            r12_3 + r13_1);
        let var_c8_1: i32 = r12_3;
        let mut r12_4: i32;
        let mut var_128: u32;
        let mut zmm0_3: [u32; 0x4];
        
        if rax_4 < 0
        {
            r12_4 = rax_4;
            zmm0_3 = {0};
            zmm0_3[0] = (rax_4 & 1) | rax_4 >> 1;
            zmm0_3[0] = zmm0_3[0] + zmm0_3[0];
            var_128 = zmm0_3[0];
            
            if r13_1 != 0
            {
                'label_86465d:
                let mut zmm1_3: [u32; 0x4] = var_b8_1;
                zmm1_3[0] = zmm1_3[0] + var_128;
                let var_b8_2: u32 = zmm1_3[0];
                zmm0_3 = var_158;
                zmm1_3[0] = zmm1_3[0] / zmm0_3[0];
                zmm0_3[0] = zmm0_3[0] + 1f;
                let mut zmm2_2: [u32; 0x4] = {0};
                zmm2_2[0] = 0f * zmm1_3[0];
                let mut var_68: *mut f64;
                var_68 = zmm2_2[0];
                var_158 = zmm0_3[0];
                zmm1_3[0] = zmm1_3[0] * zmm0_3[0];
                var_160 = zmm1_3[0];
                let mut r14_2: i64 = 0;
                
                if arg2 == 0x2572
                {
                    let var_58_3: *mut i64 = &var_90;
                    
                    do
                    {
                        if r14_2 < 0
                        {
                            zmm2_2 = {0};
                            zmm2_2[0] = (r14_2 & 1) | r14_2 >> 1;
                            zmm2_2[0] = zmm2_2[0] + zmm2_2[0];
                        }
                        else
                        {
                            zmm2_2 = {0};
                            zmm2_2[0] = r14_2;
                        }
                        
                        zmm2_2[0] = zmm2_2[0] * 0.5f;
                        zmm0_3 = var_68;
                        zmm0_3[0] = zmm0_3[0] + zmm2_2[0];
                        zmm1_3 = var_128;
                        zmm0_3[0] = zmm0_3[0] + zmm1_3[0];
                        zmm2_2[0] = zmm2_2[0] + var_160;
                        zmm2_2[0] = zmm2_2[0] + zmm1_3[0];
                        alacritty::renderer::text::builtin_font::Canvas::draw_line::h6086c3490692115c(&var_90, zmm0_3, var_158, zmm2_2);
                        r14_2 += 1;
                    } while r13_1 != r14_2;
                }
                else
                {
                    let var_58_2: *mut i64 = &var_90;
                    
                    do
                    {
                        if r14_2 < 0
                        {
                            zmm0_3 = {0};
                            zmm0_3[0] = (r14_2 & 1) | r14_2 >> 1;
                            zmm0_3[0] = zmm0_3[0] + zmm0_3[0];
                        }
                        else
                        {
                            zmm0_3 = {0};
                            zmm0_3[0] = r14_2;
                        }
                        
                        zmm0_3[0] = zmm0_3[0] * 0.5f;
                        zmm2_2 = var_b8_2;
                        var_148 = zmm0_3[0];
                        zmm2_2[0] = zmm2_2[0] - zmm0_3[0];
                        zmm2_2[0] = zmm2_2[0] - var_68;
                        zmm1_3 = var_128;
                        zmm2_2[0] = zmm2_2[0] + zmm1_3[0];
                        zmm2_2[0] = zmm2_2[0] - var_160;
                        zmm2_2[0] = zmm2_2[0] + zmm1_3[0];
                        alacritty::renderer::text::builtin_font::Canvas::draw_line::h6086c3490692115c(&var_90, zmm2_2, var_158, zmm2_2);
                        
                        if arg2 == 0x2573
                        {
                            zmm0_3 = var_68;
                            zmm2_2 = var_148;
                            zmm0_3[0] = zmm0_3[0] + zmm2_2[0];
                            zmm1_3 = var_128;
                            zmm0_3[0] = zmm0_3[0] + zmm1_3[0];
                            zmm2_2[0] = zmm2_2[0] + var_160;
                            zmm2_2[0] = zmm2_2[0] + zmm1_3[0];
                            alacritty::renderer::text::builtin_font::Canvas::draw_line::h6086c3490692115c(&var_90, zmm0_3, var_158, zmm2_2);
                        }
                        
                        r14_2 += 1;
                    } while r13_1 != r14_2;
                }
            }
        }
        else
        {
            r12_4 = rax_4;
            zmm0_3 = {0};
            zmm0_3[0] = rax_4;
            var_128 = zmm0_3[0];
            
            if r13_1 != 0
            {
                goto 'label_86465d;
            }
        }
        result = var_90 * 3;
        arg1[5] = arg2;
        *arg1.byte_offset(0x2c) = rax_3;
        arg1[6] = var_c8_1;
        *arg1.byte_offset(0x34) = rax_1 + rbx_3 + r12_4;
        arg1[7] = 0;
        arg1[4] = rax_3;
        *arg1.byte_offset(0x24) = var_c8_1;
        *arg1 = 0;
        arg1[1] = result;
        arg1[2] = var_88;
        arg1[3] = var_80 * 3;
    }
    result
}
