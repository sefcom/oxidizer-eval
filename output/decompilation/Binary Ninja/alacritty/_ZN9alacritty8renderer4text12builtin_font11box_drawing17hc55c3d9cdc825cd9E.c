
  uint64_t alacritty::renderer::text::builtin_font::box_drawing::hc55c3d9cdc825cd9(int64_t* arg1, int32_t arg2, double* arg3, char arg4, char arg5)

{
    double zmm0 = arg3[1];
    int32_t rax =
        __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0, -0x3e20000000000000), 0x41dfffffffc00000);
    
    if (FCMP_UO(zmm0, zmm0))
        rax = 0;
    
    int32_t rax_1 = core::cmp::Ord::max::h485505c56320f468(arg5 + rax, 1);
    zmm0 = *arg3;
    int32_t rax_2 =
        __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0, -0x3e20000000000000), 0x41dfffffffc00000);
    
    if (FCMP_UO(zmm0, zmm0))
        rax_2 = 0;
    
    int32_t rax_3 = core::cmp::Ord::max::h485505c56320f468(arg4 + rax_2, 1);
    int64_t rbx_1 = rax_1;
    int64_t r14 = rax_3;
    int64_t rax_4 =
        alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(r14);
    int64_t r13_1 = rax_4 * 2;
    uint64_t result;
    int64_t* var_160;
    int64_t var_158;
    int64_t var_148;
    int64_t var_90;
    int16_t* var_88;
    int64_t var_80;
    
    if (arg2 - 0x2571 >= 3)
    {
        int64_t* var_58_1 = &var_90;
        uint128_t zmm0_2;
        uint128_t zmm1_1;
        float zmm2_1[0x4];
        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_90, 
            r14, rbx_1);
        uint64_t rax_6 = arg2 - 0x2504;
        int32_t r14_1 = arg2;
        int64_t* r15_2;
        float var_158_2[0x4];
        float var_148_1[0x4];
        int64_t var_128_1;
        int32_t var_b8;
        int64_t var_78;
        int64_t var_70;
        float zmm0_15[0x4];
        
        if (rax_6 > 0x91)
        {
            label_864aaf:
            int32_t rax_39;
            rax_39 = (r14_1 & 0x1ffffc) == 0x2500;
            int32_t rcx_25;
            rcx_25 = r14_1 - 0x250c < 0x40;
            int32_t rdx_15;
            rdx_15 = r14_1 - 0x2574 < 0xc;
            rdx_15 |= rcx_25;
            rdx_15 |= rax_39;
            float var_d0;
            
            if (!rdx_15)
            {
                uint64_t r15_3 = r14_1 - 0x2550;
                float var_108;
                float var_100;
                float var_d8;
                
                if (r15_3 >= 0x1d)
                {
                    int32_t rax_81;
                    rax_81 = (r14_1 & 0x1ffff8) == 0x2580;
                    int32_t rcx_53;
                    rcx_53 = r14_1 - 0x2589 < 8;
                    rcx_53 |= rax_81;
                    
                    if (rcx_53)
                        goto label_865193;
                    
                    int32_t rbx_10 = r14_1 - 0x2596;
                    
                    if (rbx_10 >= 0xa)
                    {
                        uint64_t rbx_12 = r14_1 - 0x1fb00;
                        
                        if (rbx_12 >= 0x3c)
                        {
                            core::panicking::panic::h85d6dd562679980c(
                                "internal error: entered unreacha…");
                            /* no return */
                        }
                        
                        r15_2 = arg1;
                        
                        if (var_78 < 0)
                        {
                            zmm0_2 = (var_78 & 1) | var_78 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = var_78;
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        uint32_t zmm0_24[0x4];
                        uint32_t zmm1_19[0x4];
                        zmm0_24 = roundf(zmm0_2);
                        
                        if (rbx_1 < 0)
                        {
                            zmm1_19[0] = (rax_1 & 1) | rbx_1 >> 1;
                            zmm1_19[0] = zmm1_19[0] + zmm1_19[0];
                        }
                        else
                            zmm1_19[0] = rax_1;
                        
                        var_158_2 = __maxss_xmmss_memss(zmm0_24[0], 0x3f800000);
                        var_b8 = zmm1_19;
                        zmm1_19[0] = zmm1_19[0] / 3f;
                        var_148 = __maxss_xmmss_memss(roundf(zmm1_19)[0], 0x3f800000)[0];
                        float zmm0_25[0x4] = {0};
                        float zmm2_10[0x4] = {0};
                        int128_t zmm3_6 = {0};
                        
                        if (rbx_12 <= 0x3a && TEST_BITQ(0x55555aaaaa55555, rbx_12))
                        {
                            zmm2_10 = var_158_2;
                            zmm3_6 = var_148;
                        }
                        
                        r14_1 = arg2;
                        uint64_t rax_128 = r14_1 - 0x1fb01;
                        float zmm1_20[0x4];
                        
                        if (rax_128 > 0x3a)
                            zmm1_20 = {0};
                        else
                        {
                            zmm1_20 = {0};
                            
                            if (TEST_BITQ(0x4cccc99999b3333, rax_128))
                            {
                                zmm0_25 = var_158_2;
                                zmm1_20 = var_148;
                            }
                        }
                        
                        var_d8 = zmm1_20[0];
                        float var_98_4 = zmm0_25[0];
                        zmm1_20 = {0};
                        uint64_t rax_129 = r14_1 - 0x1fb03;
                        zmm0_25 = {0};
                        float zmm4_1 = {0};
                        
                        if (rax_129 <= 0x38 && TEST_BITQ(0x1c3c3c787870f0f, rax_129))
                        {
                            zmm0_25 = var_158_2;
                            zmm4_1 = var_148;
                        }
                        
                        var_100 = zmm0_25[0];
                        zmm0_25 = var_148;
                        zmm0_25[0] = zmm0_25[0] + zmm0_25[0];
                        var_128_1 = zmm0_25;
                        uint64_t rax_130 = r14_1 - 0x1fb07;
                        
                        if (rax_130 > 0x34)
                            zmm0_25 = {0};
                        else
                        {
                            zmm0_25 = {0};
                            
                            if (TEST_BITQ(0x1fc03f807f80ff, rax_130))
                            {
                                zmm1_20 = var_158_2;
                                zmm0_25 = var_148;
                            }
                        }
                        
                        var_108 = zmm0_25[0];
                        zmm0_25 = var_b8;
                        zmm0_25[0] = zmm0_25[0] - var_128_1;
                        var_d0 = 0f;
                        uint64_t rax_131 = r14_1 - 0x1fb0f;
                        var_b8 = zmm0_25;
                        float var_f0 = zmm1_20[0];
                        
                        if (rax_131 > 0x2c)
                            zmm0_25 = {0};
                        else
                        {
                            zmm0_25 = {0};
                            
                            if (TEST_BITQ(0x1fffc0007fff, rax_131))
                            {
                                var_d0 = var_158_2[0];
                                zmm0_25 = var_b8;
                            }
                        }
                        
                        float var_118 = zmm0_25[0];
                        int64_t rbp;
                        rbp = r14_1 - 0x1fb1e < 0x1e;
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, {0}, {0}, zmm2_10, zmm3_6);
                        uint64_t zmm0_27[0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, var_158_2, {0}, var_98_4, var_d8);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, _mm_xor_pd(zmm0_27, zmm0_27), var_148, var_100, zmm4_1);
                        uint64_t zmm0_29[0x2] = alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, var_158_2, var_148, var_f0, var_108);
                        alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(&var_90, _mm_xor_pd(zmm0_29, zmm0_29), var_128_1, var_d0, var_118);
                        int32_t rbx_13;
                        rbx_13 = rbp;
                        zmm0_15 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_shuffle_epi32(rbx_13, 0x50), 0x1f), 0x1f);
                        var_148_1 = __punpckldq_xmmdq_memdq(var_158_2, var_b8) & zmm0_15;
                    }
                    else
                    {
                        if (var_70 < 0)
                        {
                            zmm1_1 = (var_70 & 1) | var_70 >> 1;
                            zmm1_1 = zmm1_1 + zmm1_1;
                        }
                        else
                            zmm1_1 = var_70;
                        
                        r15_2 = arg1;
                        
                        if (var_78 < 0)
                        {
                            zmm0_2 = (var_78 & 1) | var_78 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = var_78;
                        
                        zmm0_2 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm0_2, zmm1_1), *data_4e98d0);
                        var_128_1 = zmm0_2;
                        uint32_t zmm0_20[0x4] = var_128_1;
                        uint32_t zmm2_7[0x4] = _mm_unpacklo_ps(roundf(zmm0_2), 
                            roundf(_mm_shuffle_ps(zmm0_20, zmm0_20, 0x55))[0]);
                        float zmm0_21[0x4] = data_4e8770[0x10][0];
                        uint32_t zmm1_16[0x4] = _mm_max_ps(zmm0_21, zmm2_7);
                        zmm2_7 = _mm_cmpeq_ps(zmm2_7, zmm2_7, 3);
                        zmm0_21 = _mm_and_ps(zmm0_21, zmm2_7);
                        zmm2_7 = _mm_or_ps(_mm_andnot_ps(zmm2_7, zmm1_16), zmm0_21);
                        uint32_t zmm3_3[0x4] = _mm_shuffle_epi32(zmm2_7, 0x55);
                        r14_1 = arg2;
                        float var_b8_5 = 0f;
                        var_158_2 = zmm2_7;
                        
                        if (r14_1 - 0x2598 >= 5)
                            zmm2_7 = {0};
                        
                        var_128_1 = zmm3_3;
                        
                        if (r14_1 - 0x2598 >= 5)
                            zmm3_3 = {0};
                        
                        var_d0 = var_158_2[0];
                        zmm0_21 = var_128_1;
                        
                        if (r14_1 - 0x259b >= 5)
                        {
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                            var_d0 = zmm0_21[0];
                        }
                        
                        float var_98_3 = zmm0_21[0];
                        
                        if (rbx_10 > 9)
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                        else
                        {
                            zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                            
                            if (TEST_BITD(0x329, rbx_10))
                            {
                                var_b8_5 = var_158_2[0];
                                zmm0_21 = var_128_1;
                            }
                        }
                        
                        var_d8 = zmm0_21[0];
                        zmm0_21 = _mm_xor_pd(zmm0_21, zmm0_21);
                        var_148_1 = zmm0_21;
                        
                        if (r14_1 - 0x2597 <= 8 && TEST_BITD(0x12d, r14_1 - 0x2597))
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
                    int32_t rcx_34 = r14_1 - 0x2552;
                    float var_98_2;
                    int32_t rax_105;
                    int64_t r13_2;
                    
                    if (rcx_34 > 0x18 || !TEST_BITD(0x1249249, rcx_34))
                    {
                        r13_2 = var_78;
                        
                        if (r13_2 < 0)
                        {
                            zmm0_2 = (r13_2 & 1) | r13_2 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = r13_2;
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        int32_t zmm1_25;
                        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, zmm0_2);
                        int32_t rdi_63 = zmm0_2;
                        
                        if (zmm0_2 > 2.14748352e+09f)
                            rdi_63 = 0x7fffffff;
                        
                        var_158 = zmm1_25;
                        
                        if (FCMP_UO(zmm0_2, zmm0_2))
                            rdi_63 = 0;
                        
                        int32_t rax_138 = core::cmp::Ord::max::h485505c56320f468(rdi_63 - 1, 0);
                        zmm0_2 = var_158;
                        int32_t rdi_65 = zmm0_2;
                        
                        if (zmm0_2 > 2.14748352e+09f)
                            rdi_65 = 0x7fffffff;
                        
                        if (FCMP_UO(zmm0_2, zmm0_2))
                            rdi_65 = 0;
                        
                        zmm0_2 = rax_138;
                        var_98_2 = zmm0_2;
                        zmm0_2 = core::cmp::Ord::min::h3552534d3430b892(rdi_65 + 1, rax_3);
                        r14_1 = arg2;
                        rax_105 = r14_1 - 0x2553;
                        var_158 = zmm0_2;
                        
                        if (rax_105 <= 0x18 && TEST_BITD(0x1249249, rax_105))
                            goto label_86561b;
                        
                        goto label_866124;
                    }
                    
                    r13_2 = var_78;
                    
                    if (r13_2 < 0)
                    {
                        zmm0_2 = (r13_2 & 1) | r13_2 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                        zmm0_2 = r13_2;
                    
                    zmm0_2 = zmm0_2 * 0.5f;
                    var_98_2 = zmm0_2;
                    rax_105 = r14_1 - 0x2553;
                    var_158 = zmm0_2;
                    int64_t var_f0_2;
                    float var_b8_4;
                    
                    if (rax_105 > 0x18 || !TEST_BITD(0x1249249, rax_105))
                    {
                        label_866124:
                        int64_t rdi_67 = var_70;
                        var_f0_2 = rdi_67;
                        
                        if (rdi_67 < 0)
                        {
                            zmm0_2 = (var_f0_2 & 1) | rdi_67 >> 1;
                            rdi_67 = var_f0_2;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = rdi_67;
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        int32_t zmm1_26;
                        zmm0_2 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rdi_67, rax_4, zmm0_2);
                        int32_t rdi_68 = zmm0_2;
                        
                        if (zmm0_2 > 2.14748352e+09f)
                            rdi_68 = 0x7fffffff;
                        
                        var_128_1 = zmm1_26;
                        
                        if (FCMP_UO(zmm0_2, zmm0_2))
                            rdi_68 = 0;
                        
                        int32_t rax_142 = core::cmp::Ord::max::h485505c56320f468(rdi_68 - 1, 0);
                        zmm0_2 = var_128_1;
                        int32_t rdi_70 = zmm0_2;
                        
                        if (zmm0_2 > 2.14748352e+09f)
                            rdi_70 = 0x7fffffff;
                        
                        if (FCMP_UO(zmm0_2, zmm0_2))
                            rdi_70 = 0;
                        
                        zmm0_2 = rax_142;
                        var_b8_4 = zmm0_2;
                        zmm0_2 = core::cmp::Ord::min::h3552534d3430b892(rdi_70 + 1, rbx_1);
                        var_d0 = zmm0_2;
                        r14_1 = arg2;
                    }
                    else
                    {
                        label_86561b:
                        var_f0_2 = var_70;
                        
                        if (var_70 < 0)
                        {
                            zmm0_2 = (var_70 & 1) | var_70 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = var_70;
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        var_d0 = zmm0_2;
                        var_b8_4 = zmm0_2;
                    }
                    
                    float zmm0_11;
                    float zmm1_11;
                    zmm0_11 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, var_98_2);
                    float zmm0_12;
                    float zmm1_12;
                    zmm0_12 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(r13_2, rax_4, var_158);
                    var_100 = zmm0_12;
                    int32_t rbp_13 = var_f0_2;
                    float zmm0_13;
                    int32_t zmm1_13;
                    zmm0_13 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rbp_13, rax_4, var_b8_4);
                    float zmm0_14[0x4];
                    float zmm1_14;
                    zmm0_14 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(rbp_13, rax_4, var_d0);
                    var_148 = zmm0_14[0];
                    float var_a0 = zmm1_14;
                    
                    if (rbx_1 < 0)
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
                    int64_t rax_110 = rax_3;
                    zmm1_14 = var_b8_4;
                    zmm2_1 = zmm1_11;
                    
                    if (rax_110 < 0)
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
                    float var_e0_1;
                    
                    if (r15_3 > 0x1c)
                    {
                        label_865b60:
                        
                        if (r14_1 - 0x2555 < 3)
                        {
                            var_e0_1 = zmm2_1[0];
                            zmm2_1 = zmm1_12;
                            goto label_86620f;
                        }
                        
                        if (r14_1 - 0x255b >= 3)
                        {
                            if (r14_1 - 0x2561 < 3)
                                goto label_866206;
                            
                            var_e0_1 = 0f;
                            zmm2_1 = {0};
                            
                            if (r14_1 - 0x2564 <= 4)
                            {
                                if (r13_2 < 0)
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
                            var_e0_1 = zmm1_12[0];
                    }
                    else
                        switch (r15_3)
                        {
                            case 0:
                            case 0x1b:
                            {
                                if (r13_2 < 0)
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
                                break;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 0xa:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            {
                                goto label_865b60;
                            }
                            case 0x19:
                            {
                                if (r13_2 < 0)
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
                                goto label_86623b;
                            }
                            case 0x1a:
                            case 0x1c:
                            {
                                label_866206:
                                var_e0_1 = zmm2_1[0];
                                break;
                            }
                        }
                    
                    label_86620f:
                    float var_110;
                    float var_e4_1;
                    int64_t rbx_9;
                    
                    if (r15_3 > 0x1c)
                    {
                        label_8662f2:
                        
                        if (rcx_34 >= 3)
                        {
                            if (r14_1 - 0x2558 < 3)
                            {
                                zmm0_14 = zmm0_11;
                                goto label_8663e5;
                            }
                            
                            var_e4_1 = 0f;
                            
                            if (r14_1 - 0x255e < 3)
                                goto label_8663df;
                            
                            var_d8 = 0f;
                            var_100 = 0f;
                            goto label_8663ee;
                        }
                        
                        var_e4_1 = var_100[0];
                        var_100 = zmm0_11[0];
                        label_8663ee:
                        r15_2 = arg1;
                        zmm0_14 = {0};
                        var_108 = zmm0_14[0];
                        uint64_t rax_154 = r14_1 - 0x2551;
                        
                        if (rax_154 > 0x1b)
                        {
                            label_866707:
                            int32_t rcx_109;
                            
                            if (r14_1 - 0x2558 >= 5)
                            {
                                if (r14_1 - 0x255e < 3)
                                {
                                    if (var_f0_2 < 0)
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
                                    goto label_86648a;
                                }
                                
                                var_a0 = zmm0_14[0];
                                var_110 = zmm0_14[0];
                                rcx_109 = rcx_34;
                                
                                if (r14_1 - 0x2561 < 3)
                                {
                                    if (var_f0_2 < 0)
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
                                label_86648a:
                                var_110 = zmm0_14[0];
                                rcx_109 = rcx_34;
                            }
                            
                            if (r14_1 - 0x256b < 2)
                            {
                                var_108 = var_148[0];
                                rbx_9 = rax_4;
                            }
                            else if (r14_1 == 0x2551 || r14_1 == 0x256a)
                            {
                                if (var_f0_2 < 0)
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
                            else if (rcx_109 >= 3)
                            {
                                rbx_9 = rax_4;
                                
                                if (r14_1 - 0x2555 >= 3)
                                {
                                    if (r14_1 - 0x255e < 3)
                                    {
                                        if (var_f0_2 < 0)
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
                                    else if (r14_1 - 0x2561 < 3)
                                    {
                                        if (var_f0_2 < 0)
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
                                    else if (r14_1 - 0x2564 >= 3)
                                    {
                                        var_148 = 0;
                                        var_128_1 = 0;
                                    }
                                    else
                                        var_108 = var_148[0];
                                    
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
                            switch (rax_154)
                            {
                                case 0:
                                case 0x19:
                                {
                                    if (var_f0_2 < 0)
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
                                    goto label_866481;
                                }
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                case 7:
                                case 8:
                                case 9:
                                case 0xa:
                                case 0xb:
                                case 0xd:
                                case 0xe:
                                case 0xf:
                                case 0x10:
                                case 0x11:
                                case 0x12:
                                case 0x13:
                                case 0x14:
                                case 0x15:
                                {
                                    goto label_866707;
                                }
                                case 0xc:
                                {
                                    var_110 = var_a0[0];
                                    var_a0 = zmm1_13[0];
                                    label_866532:
                                    zmm0_14 = {0};
                                    var_148 = zmm0_14[0];
                                    var_128_1 = zmm0_14[0];
                                    rbx_9 = rax_4;
                                    break;
                                }
                                case 0x16:
                                case 0x18:
                                case 0x1a:
                                case 0x1b:
                                {
                                    zmm0_14 = zmm1_13;
                                    label_866481:
                                    var_a0 = zmm0_14[0];
                                    goto label_86648a;
                                }
                                case 0x17:
                                {
                                    var_110 = zmm1_13[0];
                                    goto label_866532;
                                }
                            }
                    }
                    else
                        switch (r15_3)
                        {
                            case 0:
                            case 0x15:
                            case 0x1b:
                            {
                                if (r13_2 < 0)
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
                                goto label_8663ee;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 0xa:
                            case 0xb:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            {
                                goto label_8662f2;
                            }
                            case 0x14:
                            case 0x16:
                            {
                                if (r13_2 < 0)
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
                                goto label_8663ee;
                            }
                            case 0x17:
                            case 0x19:
                            {
                                label_86623b:
                                
                                if (r13_2 < 0)
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
                                goto label_8663e5;
                            }
                            case 0x18:
                            {
                                var_108 = 0f;
                                var_110 = zmm1_13[0];
                                var_e4_1 = var_100[0];
                                var_100 = zmm0_11[0];
                                var_148 = 0;
                                var_128_1 = 0;
                                r15_2 = arg1;
                                rbx_9 = rax_4;
                                break;
                            }
                            case 0x1a:
                            case 0x1c:
                            {
                                label_8663df:
                                zmm0_14 = var_100;
                                label_8663e5:
                                var_e4_1 = zmm0_14[0];
                                goto label_8663ee;
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
                int64_t rbp_5 = 0;
                uint64_t rax_40 = r14_1 - 0x2500;
                int64_t rbx_4;
                
                if (rax_40 > 0x7e)
                {
                    r15_2 = arg1;
                    rbx_4 = 0;
                    
                    if (rax_40 <= 0x7e)
                    {
                        label_865202:
                        
                        switch (rax_40)
                        {
                            case 0:
                            case 0xc:
                            case 0xe:
                            case 0x14:
                            case 0x16:
                            case 0x1c:
                            case 0x1e:
                            case 0x1f:
                            case 0x20:
                            case 0x2c:
                            case 0x2d:
                            case 0x30:
                            case 0x31:
                            case 0x34:
                            case 0x35:
                            case 0x38:
                            case 0x39:
                            case 0x3c:
                            case 0x3d:
                            case 0x40:
                            case 0x41:
                            case 0x42:
                            case 0x43:
                            case 0x45:
                            case 0x49:
                            case 0x76:
                            case 0x7e:
                            {
                                rbx_4 = rax_4;
                                break;
                            }
                            case 1:
                            case 0xd:
                            case 0xf:
                            case 0x15:
                            case 0x17:
                            case 0x1d:
                            case 0x21:
                            case 0x22:
                            case 0x23:
                            case 0x2e:
                            case 0x2f:
                            case 0x32:
                            case 0x33:
                            case 0x36:
                            case 0x37:
                            case 0x3a:
                            case 0x3b:
                            case 0x3e:
                            case 0x3f:
                            case 0x44:
                            case 0x46:
                            case 0x47:
                            case 0x48:
                            case 0x4a:
                            case 0x4b:
                            case 0x7a:
                            case 0x7c:
                            {
                                rbx_4 = r13_1;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    r15_2 = arg1;
                    
                    switch (rax_40)
                    {
                        case 0:
                        case 0x10:
                        case 0x12:
                        case 0x18:
                        case 0x1a:
                        case 0x24:
                        case 0x26:
                        case 0x27:
                        case 0x28:
                        case 0x2c:
                        case 0x2e:
                        case 0x30:
                        case 0x32:
                        case 0x34:
                        case 0x36:
                        case 0x38:
                        case 0x3a:
                        case 0x3c:
                        case 0x3e:
                        case 0x40:
                        case 0x41:
                        case 0x42:
                        case 0x44:
                        case 0x46:
                        case 0x4a:
                        case 0x74:
                        case 0x7c:
                        {
                            rbp_5 = rax_4;
                            rbx_4 = 0;
                            
                            if (rax_40 <= 0x7e)
                                goto label_865202;
                            break;
                        }
                        case 1:
                        case 0x11:
                        case 0x13:
                        case 0x19:
                        case 0x1b:
                        case 0x25:
                        case 0x29:
                        case 0x2a:
                        case 0x2b:
                        case 0x2d:
                        case 0x2f:
                        case 0x31:
                        case 0x33:
                        case 0x35:
                        case 0x37:
                        case 0x39:
                        case 0x3b:
                        case 0x3d:
                        case 0x3f:
                        case 0x43:
                        case 0x45:
                        case 0x47:
                        case 0x48:
                        case 0x49:
                        case 0x4b:
                        case 0x78:
                        case 0x7e:
                        {
                            rbp_5 = r13_1;
                            label_8651f4:
                            rbx_4 = 0;
                            
                            if (rax_40 <= 0x7e)
                                goto label_865202;
                            break;
                        }
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 0xa:
                        case 0xb:
                        case 0xc:
                        case 0xd:
                        case 0xe:
                        case 0xf:
                        case 0x14:
                        case 0x15:
                        case 0x16:
                        case 0x17:
                        case 0x1c:
                        case 0x1d:
                        case 0x1e:
                        case 0x1f:
                        case 0x20:
                        case 0x21:
                        case 0x22:
                        case 0x23:
                        case 0x4c:
                        case 0x4d:
                        case 0x4e:
                        case 0x4f:
                        case 0x50:
                        case 0x51:
                        case 0x52:
                        case 0x53:
                        case 0x54:
                        case 0x55:
                        case 0x56:
                        case 0x57:
                        case 0x58:
                        case 0x59:
                        case 0x5a:
                        case 0x5b:
                        case 0x5c:
                        case 0x5d:
                        case 0x5e:
                        case 0x5f:
                        case 0x60:
                        case 0x61:
                        case 0x62:
                        case 0x63:
                        case 0x64:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                        case 0x68:
                        case 0x69:
                        case 0x6a:
                        case 0x6b:
                        case 0x6c:
                        case 0x6d:
                        case 0x6e:
                        case 0x6f:
                        case 0x70:
                        case 0x71:
                        case 0x72:
                        case 0x73:
                        case 0x75:
                        case 0x76:
                        case 0x77:
                        case 0x79:
                        case 0x7a:
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_8651f4;
                        }
                    }
                }
                
                var_148 = 0;
                uint64_t rax_87 = r14_1 - 0x2502;
                
                if (rax_87 <= 0x7d)
                    switch (rax_87)
                    {
                        case 0:
                        case 0x12:
                        case 0x13:
                        case 0x16:
                        case 0x17:
                        case 0x1a:
                        case 0x1b:
                        case 0x1d:
                        case 0x20:
                        case 0x22:
                        case 0x23:
                        case 0x25:
                        case 0x28:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x3a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3f:
                        case 0x43:
                        case 0x44:
                        case 0x46:
                        case 0x73:
                        case 0x7b:
                        {
                            var_148 = rax_4;
                            break;
                        }
                        case 1:
                        case 0x14:
                        case 0x15:
                        case 0x18:
                        case 0x19:
                        case 0x1c:
                        case 0x1e:
                        case 0x1f:
                        case 0x21:
                        case 0x24:
                        case 0x26:
                        case 0x27:
                        case 0x29:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                        case 0x3e:
                        case 0x40:
                        case 0x41:
                        case 0x42:
                        case 0x45:
                        case 0x47:
                        case 0x48:
                        case 0x49:
                        case 0x77:
                        case 0x7d:
                        {
                            var_148 = r13_1;
                            break;
                        }
                    }
                
                int64_t r14_7 = 0;
                
                if (rax_87 <= 0x7d)
                    switch (rax_87)
                    {
                        case 0:
                        case 0xa:
                        case 0xb:
                        case 0xe:
                        case 0xf:
                        case 0x1a:
                        case 0x1b:
                        case 0x1c:
                        case 0x1f:
                        case 0x22:
                        case 0x23:
                        case 0x24:
                        case 0x27:
                        case 0x2a:
                        case 0x2b:
                        case 0x2c:
                        case 0x2d:
                        case 0x3a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x41:
                        case 0x42:
                        case 0x45:
                        case 0x75:
                        case 0x7d:
                        {
                            r14_7 = rax_4;
                            break;
                        }
                        case 1:
                        case 0xc:
                        case 0xd:
                        case 0x10:
                        case 0x11:
                        case 0x1d:
                        case 0x1e:
                        case 0x20:
                        case 0x21:
                        case 0x25:
                        case 0x26:
                        case 0x28:
                        case 0x29:
                        case 0x2e:
                        case 0x2f:
                        case 0x30:
                        case 0x31:
                        case 0x3f:
                        case 0x40:
                        case 0x43:
                        case 0x44:
                        case 0x46:
                        case 0x47:
                        case 0x48:
                        case 0x49:
                        case 0x79:
                        case 0x7b:
                        {
                            r14_7 = r13_1;
                            break;
                        }
                    }
                
                if (var_78 < 0)
                {
                    zmm0_2 = (var_78 & 1) | var_78 >> 1;
                    zmm0_2 = zmm0_2 + zmm0_2;
                }
                else
                    zmm0_2 = var_78;
                
                zmm0_2 = zmm0_2 * 0.5f;
                
                if (var_70 < 0)
                {
                    zmm2_1[0] = (var_70 & 1) | var_70 >> 1;
                    zmm2_1[0] = zmm2_1[0] + zmm2_1[0];
                }
                else
                    zmm2_1[0] = var_70;
                
                zmm2_1[0] = zmm2_1[0] * 0.5f;
                var_160 = zmm2_1[0];
                var_158 = zmm0_2;
                float zmm0_4;
                float zmm1_4;
                zmm0_4 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_78, var_148, zmm0_2);
                float zmm0_5;
                float zmm1_5;
                zmm0_5 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_78, r14_7, var_158);
                var_b8 = rbp_5;
                float zmm0_6;
                float zmm1_6;
                zmm0_6 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_70, rbp_5, var_160);
                var_128_1 = zmm0_6;
                float zmm0_7;
                float zmm1_7;
                zmm0_7 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(var_70, rbx_4, var_160);
                float var_98_1 = zmm0_7;
                int32_t rdi_42 = zmm1_4;
                
                if (zmm1_4 > 2.14748352e+09f)
                    rdi_42 = 0x7fffffff;
                
                if (FCMP_UO(zmm1_4, zmm1_4))
                    rdi_42 = 0;
                
                int32_t rsi_26 = zmm1_5;
                
                if (zmm1_5 > 2.14748352e+09f)
                    rsi_26 = 0x7fffffff;
                
                if (FCMP_UO(zmm1_5, zmm1_5))
                    rsi_26 = 0;
                
                var_d0 = core::cmp::Ord::max::h485505c56320f468(rdi_42, rsi_26);
                int32_t rdi_43 = zmm1_6;
                
                if (zmm1_6 > 2.14748352e+09f)
                    rdi_43 = 0x7fffffff;
                
                if (FCMP_UO(zmm1_6, zmm1_6))
                    rdi_43 = 0;
                
                int32_t rsi_27 = zmm1_7;
                
                if (zmm1_7 > 2.14748352e+09f)
                    rsi_27 = 0x7fffffff;
                
                if (FCMP_UO(zmm1_7, zmm1_7))
                    rsi_27 = 0;
                
                int32_t rax_95 = core::cmp::Ord::max::h485505c56320f468(rdi_43, rsi_27);
                zmm0_7 = var_128_1;
                int32_t rdi_44 = zmm0_7;
                
                if (zmm0_7 > 2.14748352e+09f)
                    rdi_44 = 0x7fffffff;
                
                if (FCMP_UO(zmm0_7, zmm0_7))
                    rdi_44 = 0;
                
                int32_t rsi_28 = var_98_1;
                
                if (var_98_1 > 2.14748352e+09f)
                    rsi_28 = 0x7fffffff;
                
                if (FCMP_UO(var_98_1, var_98_1))
                    rsi_28 = 0;
                
                int32_t rax_96 = core::cmp::Ord::min::h3552534d3430b892(rdi_44, rsi_28);
                
                if (rbx_1 < 0)
                {
                    zmm0_7 = (rax_1 & 1) | rbx_1 >> 1;
                    zmm0_7 = zmm0_7 + zmm0_7;
                }
                else
                    zmm0_7 = rax_1;
                
                var_128_1 = zmm0_7;
                r14_1 = arg2;
                alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                    &var_90, var_b8, {0}, var_160, var_d0);
                int64_t rax_99 = rax_3;
                float zmm0_8;
                
                if (rax_99 < 0)
                {
                    zmm0_8 = (rax_3 & 1) | rax_99 >> 1;
                    zmm0_8 = zmm0_8 + zmm0_8;
                }
                else
                    zmm0_8 = rax_3;
                
                float var_b8_3 = zmm0_8;
                int32_t rdi_46 = zmm0_4;
                
                if (zmm0_4 > 2.14748352e+09f)
                    rdi_46 = 0x7fffffff;
                
                if (FCMP_UO(zmm0_4, zmm0_4))
                    rdi_46 = 0;
                
                int32_t rsi_30 = zmm0_5;
                
                if (zmm0_5 > 2.14748352e+09f)
                    rsi_30 = 0x7fffffff;
                
                if (FCMP_UO(zmm0_5, zmm0_5))
                    rsi_30 = 0;
                
                zmm0_8 = core::cmp::Ord::min::h3552534d3430b892(rdi_46, rsi_30);
                int128_t zmm2_3;
                zmm2_3 = var_b8_3 - zmm0_8;
                alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(
                    &var_90, rbx_4, zmm0_8, var_160, zmm2_3);
                int128_t zmm2_4;
                zmm2_4 = rax_95;
                alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                    &var_90, var_148, var_158, {0}, zmm2_4);
                float zmm1_10 = rax_96;
                var_148 = zmm1_10;
                var_128_1 = var_128_1 - zmm1_10;
                alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(
                    &var_90, r14_7, var_158, var_148, var_128_1);
            }
        }
        else
        {
            int64_t rbx_2 = 2;
            int64_t var_48;
            
            switch (rax_6)
            {
                case 0:
                {
                    goto label_86491f;
                }
                case 1:
                {
                    goto label_864929;
                }
                case 2:
                {
                    goto label_864b1f;
                }
                case 3:
                {
                    goto label_864b36;
                }
                case 4:
                {
                    rbx_2 = 3;
                    goto label_86491f;
                }
                case 5:
                {
                    rbx_2 = 3;
                    goto label_864929;
                }
                case 6:
                {
                    rbx_2 = 3;
                    goto label_864b1f;
                }
                case 7:
                {
                    rbx_2 = 3;
                    goto label_864b36;
                }
                case 8:
                case 9:
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x2f:
                case 0x30:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x37:
                case 0x38:
                case 0x39:
                case 0x3a:
                case 0x3b:
                case 0x3c:
                case 0x3d:
                case 0x3e:
                case 0x3f:
                case 0x40:
                case 0x41:
                case 0x42:
                case 0x43:
                case 0x44:
                case 0x45:
                case 0x46:
                case 0x47:
                case 0x4c:
                case 0x4d:
                case 0x4e:
                case 0x4f:
                case 0x50:
                case 0x51:
                case 0x52:
                case 0x53:
                case 0x54:
                case 0x55:
                case 0x56:
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5a:
                case 0x5b:
                case 0x5c:
                case 0x5d:
                case 0x5e:
                case 0x5f:
                case 0x60:
                case 0x61:
                case 0x62:
                case 0x63:
                case 0x64:
                case 0x65:
                case 0x66:
                case 0x67:
                case 0x68:
                case 0x6d:
                case 0x6e:
                case 0x6f:
                case 0x70:
                case 0x71:
                case 0x72:
                case 0x73:
                case 0x74:
                case 0x75:
                case 0x76:
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                case 0x7b:
                case 0x7c:
                case 0x7d:
                case 0x7e:
                case 0x7f:
                case 0x80:
                case 0x81:
                case 0x82:
                case 0x83:
                case 0x85:
                case 0x86:
                case 0x87:
                case 0x88:
                case 0x89:
                case 0x8a:
                case 0x8b:
                case 0x8c:
                {
                    goto label_864aaf;
                }
                case 0x48:
                {
                    rbx_2 = 1;
                    label_86491f:
                    r13_1 = rax_4;
                    goto label_864929;
                }
                case 0x49:
                {
                    rbx_2 = 1;
                    label_864929:
                    int64_t r12_6 = rax_3;
                    int64_t rax_25 = core::cmp::Ord::max::h20b6d33cbe488162(r12_6 >> 3, 1);
                    int64_t rdx_7 = rax_25 * rbx_2;
                    int64_t rax_26 = 0;
                    
                    if (r12_6 >= rdx_7)
                        rax_26 = r12_6 - rdx_7;
                    
                    r15_2 = arg1;
                    uint64_t rax_27;
                    
                    if (!(rax_26 >> 0x20))
                        rax_27 = COMBINE(0, rax_26) / (rbx_2 + 1);
                    else
                        rax_27 = COMBINE(0, rax_26) / (rbx_2 + 1);
                    
                    int64_t rax_28 = core::cmp::Ord::max::h20b6d33cbe488162(rax_27, 1);
                    
                    if (var_70 < 0)
                    {
                        zmm0_2 = (var_70 & 1) | var_70 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                        zmm0_2 = var_70;
                    
                    var_158 = zmm0_2;
                    var_48 = 0;
                    int64_t var_40_1 = rbx_2;
                    char var_38_1 = 0;
                    
                    if (rax_28 < 0)
                    {
                        zmm0_2 = (rax_28 & 1) | rax_28 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                        zmm0_2 = rax_28;
                    
                    var_128_1 = zmm0_2;
                    zmm0_2 = var_158 * 0.5f;
                    var_158 = zmm0_2;
                    int64_t* var_58_4 = &var_90;
                    r14_1 = arg2;
                    
                    while (true)
                    {
                        char rax_34;
                        int64_t rdx_13;
                        rax_34 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (!(rax_34 & 1))
                            break;
                        
                        int64_t rax_35 = core::cmp::Ord::min::h7c13e9bfb8ea3862(
                            rdx_13 * (rax_28 + rax_25), r12_6);
                        
                        if (rax_35 >= 0)
                            zmm0_2 = rax_35;
                        else
                        {
                            zmm0_2 = (rax_35 & 1) | rax_35 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        
                        alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(&var_90, r13_1, zmm0_2, var_158, var_128_1);
                    }
                    break;
                }
                case 0x4a:
                {
                    rbx_2 = 1;
                    label_864b1f:
                    r13_1 = rax_4;
                    goto label_864b36;
                }
                case 0x4b:
                {
                    rbx_2 = 1;
                    label_864b36:
                    int64_t rax_41 = core::cmp::Ord::max::h20b6d33cbe488162(rbx_1 >> 3, 1);
                    int64_t rdx_19 = rax_41 * rbx_2;
                    int64_t rax_42 = 0;
                    
                    if (rbx_1 >= rdx_19)
                        rax_42 = rbx_1 - rdx_19;
                    
                    r15_2 = arg1;
                    uint64_t rax_43;
                    
                    if (!(rax_42 >> 0x20))
                        rax_43 = COMBINE(0, rax_42) / (rbx_2 + 1);
                    else
                        rax_43 = COMBINE(0, rax_42) / (rbx_2 + 1);
                    
                    int64_t rax_44 = core::cmp::Ord::max::h20b6d33cbe488162(rax_43, 1);
                    
                    if (var_78 < 0)
                    {
                        zmm0_2 = (var_78 & 1) | var_78 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                        zmm0_2 = var_78;
                    
                    var_158 = zmm0_2;
                    var_48 = 0;
                    int64_t var_40_2 = rbx_2;
                    char var_38_2 = 0;
                    
                    if (rax_44 < 0)
                    {
                        zmm0_2 = (rax_44 & 1) | rax_44 >> 1;
                        zmm0_2 = zmm0_2 + zmm0_2;
                    }
                    else
                        zmm0_2 = rax_44;
                    
                    var_128_1 = zmm0_2;
                    zmm0_2 = var_158 * 0.5f;
                    var_158 = zmm0_2;
                    int64_t* var_58_5 = &var_90;
                    r14_1 = arg2;
                    
                    while (true)
                    {
                        char rax_50;
                        int64_t rdx_25;
                        rax_50 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (!(rax_50 & 1))
                            break;
                        
                        int64_t rax_51 = core::cmp::Ord::min::h7c13e9bfb8ea3862(
                            rdx_25 * (rax_44 + rax_41), rbx_1);
                        
                        if (rax_51 >= 0)
                            zmm1_1 = rax_51;
                        else
                        {
                            zmm1_1 = (rax_51 & 1) | rax_51 >> 1;
                            zmm1_1 = zmm1_1 + zmm1_1;
                        }
                        
                        alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(&var_90, r13_1, var_158, zmm1_1, var_128_1);
                    }
                    break;
                }
                case 0x69:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                {
                    alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner::h0beb163b132b4e9b(&var_90, rax_4);
                    int64_t r8 = r14;
                    r15_2 = arg1;
                    char const (** const var_110_1)[0xeb];
                    int16_t* var_d8_1;
                    char const (** rax_182)[0xeb];
                    int64_t r10_1;
                    int64_t r13_4;
                    
                    if (r14_1 == 0x256d || r14_1 == 0x2570)
                    {
                        var_d8_1 = var_88;
                        r10_1 = var_80;
                        
                        if (rax_1 >= 2)
                        {
                            if (var_78 < 0)
                            {
                                zmm0_2 = (var_78 & 1) | var_78 >> 1;
                                zmm0_2 = zmm0_2 + zmm0_2;
                            }
                            else
                                zmm0_2 = var_78;
                            
                            zmm0_2 = zmm0_2 * 0.5f;
                            int64_t rax_56 = zmm0_2;
                            int64_t rdx_29 = ((zmm0_2 - 9.22337204e+18f) & rax_56 >> 0x3f) | rax_56;
                            int64_t r8_1 = 0;
                            
                            if (zmm0_2 < 0f)
                                rdx_29 = 0;
                            
                            int64_t rax_57 = -1;
                            
                            if (zmm0_2 <= 1.8446743e+19f)
                                rax_57 = rdx_29;
                            
                            uint64_t rdi_29 = (rax_4 ^ rax_3) & 1;
                            int64_t r9_1 = rax_3;
                            int64_t r12_12 = ~rdi_29 + r9_1;
                            int64_t rcx_39 = r9_1 * 3;
                            int16_t* rbp_6 = var_d8_1;
                            var_148 = rcx_39 - rdi_29 * 3 + rbp_6 - 3;
                            int64_t rsi_16 = 1;
                            int64_t rax_61 = 2;
                            var_110_1 = &data_c83cb0;
                            var_158 = r10_1;
                            int64_t var_f0_1 = r9_1;
                            
                            while (true)
                            {
                                if (rdi_29)
                                {
                                    r13_4 = (rsi_16 - 1) * r9_1;
                                    
                                    if (r13_4 >= r10_1)
                                        goto label_8669ca;
                                    
                                    if (rsi_16 * r9_1 - 1 >= r10_1)
                                    {
                                        r13_4 = rsi_16 * r9_1 - 1;
                                        rax_182 = &data_c83cc8;
                                        break;
                                    }
                                    
                                    int64_t rax_64 = r13_4 * 3;
                                    int64_t rcx_45 = (rsi_16 * r9_1 - 1) * 3;
                                    int16_t rdx_31 = *(var_d8_1 + rax_64);
                                    *(var_d8_1 + rcx_45 + 2) = *(var_d8_1 + rax_64 + 2);
                                    *(var_d8_1 + rcx_45) = rdx_31;
                                }
                                
                                int32_t var_98;
                                var_98 = rax_61;
                                int64_t r14_5 = rax_57;
                                int16_t* rbx_5 = rbp_6;
                                var_b8 = r8_1;
                                r13_4 = r8_1;
                                int64_t r15_4 = var_148;
                                int64_t var_d0_1 = r12_12;
                                
                                if (rax_57)
                                {
                                    while (true)
                                    {
                                        if (r13_4 < r10_1)
                                        {
                                            if (r12_12 >= r10_1)
                                                r13_4 = r12_12;
                                            else
                                            {
                                                core::ptr::swap::he5bebdc076cfabf5(rbx_5, r15_4);
                                                r12_12 -= 1;
                                                r15_4 -= 3;
                                                r13_4 += 1;
                                                rbx_5 += 3;
                                                int64_t temp14_1 = r14_5;
                                                r14_5 -= 1;
                                                r10_1 = var_158;
                                                
                                                if (temp14_1 == 1)
                                                    goto label_864e08;
                                                
                                                continue;
                                            }
                                        }
                                        
                                        rax_182 = &data_c83ce0;
                                        break;
                                    }
                                    
                                    break;
                                }
                                
                                label_864e08:
                                rsi_16 = var_98;
                                rax_61 = rsi_16 + 0;
                                r9_1 = var_f0_1;
                                r12_12 = var_d0_1 + r9_1;
                                var_148 += rcx_39;
                                r8_1 = var_b8 + r9_1;
                                rbp_6 += rcx_39;
                                r15_2 = arg1;
                                r14_1 = arg2;
                                
                                if (rsi_16 >= rbx_1)
                                    goto label_864f39;
                            }
                            
                            goto label_8669b3;
                        }
                        
                        label_864f39:
                        r8 = r14;
                        
                        if (r14_1 - 0x256d < 2)
                            goto label_864f4f;
                    }
                    else if (r14_1 == 0x256e)
                    {
                        var_d8_1 = var_88;
                        r10_1 = var_80;
                        label_864f4f:
                        
                        if (var_70 < 0)
                        {
                            zmm0_2 = (var_70 & 1) | var_70 >> 1;
                            zmm0_2 = zmm0_2 + zmm0_2;
                        }
                        else
                            zmm0_2 = var_70;
                        
                        zmm0_2 = zmm0_2 * 0.5f;
                        int64_t rax_71 = zmm0_2;
                        int64_t rcx_50 = 0;
                        
                        if (zmm0_2 >= 0f)
                            rcx_50 = ((zmm0_2 - 9.22337204e+18f) & rax_71 >> 0x3f) | rax_71;
                        
                        int64_t rax_72 = -1;
                        
                        if (zmm0_2 <= 1.8446743e+19f)
                            rax_72 = rcx_50;
                        
                        int32_t rbp_7 = rax_4 ^ rax_1;
                        var_158 = r10_1;
                        
                        if (rbp_7 & 1 && rax_3)
                        {
                            int64_t rcx_52 = (rbx_1 - 1) * r8;
                            int64_t rsi_20 = rcx_52 * 3;
                            int64_t rdx_35 = 0;
                            int16_t* rdi_33 = var_d8_1;
                            
                            while (true)
                            {
                                if (r10_1 == rdx_35)
                                {
                                    var_110_1 = &data_c83d10;
                                    r13_4 = rdx_35;
                                    goto label_8669ca;
                                }
                                
                                r13_4 = rcx_52 + rdx_35;
                                
                                if (r13_4 >= r10_1)
                                {
                                    rax_182 = &data_c83d28;
                                    break;
                                }
                                
                                int16_t r8_3 = *rdi_33;
                                *(rdi_33 + rsi_20 + 2) = rdi_33[1];
                                *(rdi_33 + rsi_20) = r8_3;
                                rdx_35 += 1;
                                rdi_33 += 3;
                                
                                if (r14 == rdx_35)
                                    goto label_865037;
                            }
                            
                            label_8669b3:
                            var_110_1 = rax_182;
                            label_8669ca:
                            core::panicking::panic_bounds_check::h025cadc56a971af7(r13_4, var_158);
                            /* no return */
                        }
                        
                        label_865037:
                        var_48 = 1;
                        int64_t var_40_3 = rax_72;
                        char var_38_3 = 0;
                        char rax_73;
                        int64_t rdx_36;
                        rax_73 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                        
                        if (rax_73 & 1)
                        {
                            if (!rax_3)
                            {
                                char rax_79;
                                
                                do
                                    rax_79 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                                 while (rax_79 & 1);
                            }
                            else
                            {
                                int64_t rax_75 = r14 * 3;
                                var_110_1 = &data_c83cf8;
                                
                                while (true)
                                {
                                    int64_t rbp_10 = rbx_1 - (rdx_36 + (rbp_7 & 1));
                                    int64_t r12_14 = r14;
                                    int64_t rbp_11 = rbp_10 * r12_14;
                                    int16_t* rbx_8 = rax_75 * rbp_10 + var_d8_1;
                                    r13_4 = (rdx_36 - 1) * r12_14;
                                    void* r15_7 = rax_75 * (rdx_36 - 1) + var_d8_1;
                                    
                                    while (true)
                                    {
                                        if (r13_4 >= var_158)
                                            goto label_8669ca;
                                        
                                        if (rbp_11 >= var_158)
                                        {
                                            r13_4 = rbp_11;
                                            goto label_8669ca;
                                        }
                                        
                                        core::ptr::swap::he5bebdc076cfabf5(r15_7, rbx_8);
                                        rbp_11 += 1;
                                        rbx_8 += 3;
                                        r13_4 += 1;
                                        r15_7 += 3;
                                        int64_t temp15_1 = r12_14;
                                        r12_14 -= 1;
                                        
                                        if (temp15_1 == 1)
                                        {
                                            char rax_78;
                                            rax_78 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_48);
                                            
                                            if (rax_78 & 1)
                                                break;
                                            
                                            goto label_86514c;
                                        }
                                    }
                                }
                            }
                        }
                        
                        label_86514c:
                        r15_2 = arg1;
                        r14_1 = arg2;
                    }
                    break;
                }
                case 0x84:
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0xffffff);
                    r15_2 = arg1;
                    break;
                }
                case 0x8d:
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0x404040);  /* "T_New_Glyph" */
                    r15_2 = arg1;
                    break;
                }
                case 0x8e:
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0x808080);
                    r15_2 = arg1;
                    break;
                }
                case 0x8f:
                {
                    alacritty::renderer::text::builtin_font::Canvas::fill::h62e4e3cf80c1f68b(
                        var_88, var_80, 0xc0c0c0);
                    r15_2 = arg1;
                    break;
                }
                case 0x90:
                case 0x91:
                {
                    label_865193:
                    zmm1_1 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(rax_3, rax_1), 0);
                    zmm0_2 = *data_4e9250;
                    float temp0_11[0x4] = _mm_cvtpd_ps(_mm_sub_pd(zmm1_1 | zmm0_2, zmm0_2));
                    uint64_t rax_82 = r14_1 - 0x2580;
                    uint128_t var_148_2;
                    float zmm2_6[0x4];
                    uint128_t zmm3_1;
                    
                    if (rax_82 > 0x15)
                    {
                        label_865815:
                        zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                        var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                        zmm0_15 = data_4e8770[0x10][0];
                        float temp0_19[0x4] = _mm_max_ps(zmm0_15, temp0_11);
                        float temp0_20[0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                        zmm0_15 = _mm_and_ps(zmm0_15, temp0_20);
                        var_158_2 = {0};
                        var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_20, temp0_19), zmm0_15);
                        r15_2 = arg1;
                    }
                    else
                        switch (rax_82)
                        {
                            case 0:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm3_1 = 4f * zmm1_1;
                                zmm0_2 = 0x3e000000;
                                label_865a1c:
                                zmm3_1 = zmm3_1 * zmm0_2;
                                var_148_2 = zmm3_1;
                                zmm1_1 = zmm1_1 * 8f;
                                zmm1_1 = zmm1_1 * zmm0_2;
                                label_865a31:
                                r15_2 = arg1;
                                zmm0_2 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) - zmm1_1;
                                var_128_1 = roundf(zmm0_2);
                                float temp0_49[0x4] = _mm_shuffle_ps(
                                    roundf(var_148_2)[0] | temp0_11[0] << 0x40, temp0_11, 0xe2);
                                zmm2_6 = data_4e8770[0x10][0];
                                float temp0_50[0x4] = _mm_max_ps(zmm2_6, temp0_49);
                                float temp0_51[0x4] = _mm_cmpeq_ps(temp0_49, temp0_49, 3);
                                zmm2_6 = _mm_and_ps(zmm2_6, temp0_51);
                                var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_51, temp0_50), zmm2_6);
                                var_158_2 = {0};
                                break;
                            }
                            case 1:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                goto label_865885;
                            }
                            case 2:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm1_1 = zmm1_1 + zmm1_1;
                                goto label_865885;
                            }
                            case 3:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 3f;
                                goto label_865885;
                            }
                            case 4:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 4f;
                                label_865885:
                                zmm1_1 = zmm1_1 * 0.125f;
                                var_148_2 = zmm1_1;
                                goto label_865a31;
                            }
                            case 5:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 5f;
                                goto label_865885;
                            }
                            case 6:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 6f;
                                goto label_865885;
                            }
                            case 7:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55) * 7f;
                                goto label_865885;
                            }
                            case 8:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            {
                                goto label_865815;
                            }
                            case 9:
                            {
                                zmm0_2 = 0x40e00000 * temp0_11[0];
                                goto label_865932;
                            }
                            case 0xa:
                            {
                                zmm0_2 = 0x40c00000 * temp0_11[0];
                                goto label_865932;
                            }
                            case 0xb:
                            {
                                zmm0_2 = 0x40a00000 * temp0_11[0];
                                goto label_865932;
                            }
                            case 0xc:
                            {
                                zmm0_2 = 0x40800000 * temp0_11[0];
                                goto label_865932;
                            }
                            case 0xd:
                            {
                                zmm0_2 = 0x40400000 * temp0_11[0];
                                goto label_865932;
                            }
                            case 0xe:
                            {
                                zmm0_2 = temp0_11 + temp0_11[0];
                                label_865932:
                                r15_2 = arg1;
                                zmm0_2 = zmm0_2 * 0.125f;
                                var_160 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_160)[0];
                                zmm0_15 = data_4e8770[0x10][0];
                                float temp0_35[0x4] = _mm_max_ps(zmm0_15, temp0_11);
                                float temp0_36[0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm0_15 = _mm_and_ps(zmm0_15, temp0_36);
                                var_158_2 = {0};
                                var_148_1 = _mm_or_ps(_mm_andnot_ps(temp0_36, temp0_35), zmm0_15);
                                break;
                            }
                            case 0xf:
                            {
                                zmm0_2 = temp0_11;
                                goto label_865932;
                            }
                            case 0x10:
                            {
                                zmm0_2 = 4f * temp0_11[0];
                                zmm0_2 = zmm0_2 * 0.125f;
                                var_148 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_148)[0];
                                zmm2_6 = data_4e8770[0x10][0];
                                float temp0_29[0x4] = _mm_max_ps(zmm2_6, temp0_11);
                                float temp0_30[0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm2_6 = _mm_and_ps(zmm2_6, temp0_30);
                                float zmm1_15[0x4] = _mm_andnot_ps(temp0_30, temp0_29);
                                r15_2 = arg1;
                                
                                if (var_78 < 0)
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
                                break;
                            }
                            case 0x14:
                            {
                                zmm1_1 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55);
                                zmm0_2 = 0x3e000000;
                                zmm3_1 = zmm1_1;
                                goto label_865a1c;
                            }
                            case 0x15:
                            {
                                zmm0_2 = 0.125f * temp0_11[0];
                                var_148 = zmm0_2;
                                zmm0_2 = _mm_sub_ps(temp0_11, temp0_11);
                                var_128_1 = roundf(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55));
                                temp0_11[0] = roundf(var_148)[0];
                                zmm0_15 = data_4e8770[0x10][0];
                                float temp0_42[0x4] = _mm_max_ps(zmm0_15, temp0_11);
                                float temp0_43[0x4] = _mm_cmpeq_ps(temp0_11, temp0_11, 3);
                                zmm0_15 = _mm_and_ps(zmm0_15, temp0_43);
                                zmm2_6 = _mm_or_ps(_mm_andnot_ps(temp0_43, temp0_42), zmm0_15);
                                var_148_1 = zmm2_6;
                                temp0_11[0] = temp0_11[0] - zmm2_6[0];
                                var_158_2 = temp0_11;
                                r15_2 = arg1;
                                break;
                            }
                        }
                    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(
                        &var_90, var_158_2, var_128_1, var_148_1, 
                        _mm_shuffle_ps(var_148_1, var_148_1, 0x55));
                    break;
                }
            }
        }
        zmm0_2 = arg3[2];
        int32_t rcx_114 = 0x7fffffff;
        
        if (zmm0_2 <= 2.14748352e+09f)
            rcx_114 = zmm0_2;
        
        int32_t rax_164 = 0;
        
        if (FCMP_O(zmm0_2, zmm0_2))
            rax_164 = rcx_114;
        
        result = rax_164 + rax_1;
        int64_t rcx_115 = var_90;
        r15_2[5] = r14_1;
        *(r15_2 + 0x2c) = rax_3;
        int32_t rdi_80 = rbx_1;
        r15_2[6] = rdi_80;
        *(r15_2 + 0x34) = result;
        r15_2[7] = 0;
        r15_2[4] = rax_3;
        *(r15_2 + 0x24) = rdi_80;
        *r15_2 = 0;
        r15_2[1] = rcx_115 * 3;
        r15_2[2] = var_88;
        r15_2[3] = var_80 * 3;
    }
    else
    {
        int64_t rsi = rax_3;
        int32_t zmm0_1;
        
        if (rsi < 0)
        {
            zmm0_1 = (rax_3 & 1) | rsi >> 1;
            zmm0_1 = zmm0_1 + zmm0_1;
        }
        else
            zmm0_1 = rax_3;
        
        var_158 = zmm0_1;
        
        if (rbx_1 < 0)
        {
            zmm0_1 = (rax_1 & 1) | rbx_1 >> 1;
            zmm0_1 = zmm0_1 + zmm0_1;
        }
        else
            zmm0_1 = rax_1;
        
        int32_t var_b8_1 = zmm0_1;
        zmm0_1 = arg3[2];
        int32_t rcx_6 = 0x7fffffff;
        
        if (zmm0_1 <= 2.14748352e+09f)
            rcx_6 = zmm0_1;
        
        int32_t rbx_3 = 0;
        
        if (FCMP_O(zmm0_1, zmm0_1))
            rbx_3 = rcx_6;
        
        int64_t r12_3 = rbx_1 + r13_1;
        alacritty::renderer::text::builtin_font::Canvas::new::h00f2c0315425a567(&var_90, rsi, 
            r12_3 + r13_1);
        int32_t var_c8_1 = r12_3;
        int32_t r12_4;
        uint32_t var_128;
        uint32_t zmm0_3[0x4];
        
        if (rax_4 < 0)
        {
            r12_4 = rax_4;
            zmm0_3 = {0};
            zmm0_3[0] = (rax_4 & 1) | rax_4 >> 1;
            zmm0_3[0] = zmm0_3[0] + zmm0_3[0];
            var_128 = zmm0_3[0];
            
            if (r13_1)
            {
                label_86465d:
                uint32_t zmm1_3[0x4] = var_b8_1;
                zmm1_3[0] = zmm1_3[0] + var_128;
                uint32_t var_b8_2 = zmm1_3[0];
                zmm0_3 = var_158;
                zmm1_3[0] = zmm1_3[0] / zmm0_3[0];
                zmm0_3[0] = zmm0_3[0] + 1f;
                uint32_t zmm2_2[0x4] = {0};
                zmm2_2[0] = 0f * zmm1_3[0];
                double* var_68;
                var_68 = zmm2_2[0];
                var_158 = zmm0_3[0];
                zmm1_3[0] = zmm1_3[0] * zmm0_3[0];
                var_160 = zmm1_3[0];
                int64_t r14_2 = 0;
                
                if (arg2 == 0x2572)
                {
                    int64_t* var_58_3 = &var_90;
                    
                    do
                    {
                        if (r14_2 < 0)
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
                    } while (r13_1 != r14_2);
                }
                else
                {
                    int64_t* var_58_2 = &var_90;
                    
                    do
                    {
                        if (r14_2 < 0)
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
                        
                        if (arg2 == 0x2573)
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
                    } while (r13_1 != r14_2);
                }
            }
        }
        else
        {
            r12_4 = rax_4;
            zmm0_3 = {0};
            zmm0_3[0] = rax_4;
            var_128 = zmm0_3[0];
            
            if (r13_1)
                goto label_86465d;
        }
        result = var_90 * 3;
        arg1[5] = arg2;
        *(arg1 + 0x2c) = rax_3;
        arg1[6] = var_c8_1;
        *(arg1 + 0x34) = rax_1 + rbx_3 + r12_4;
        arg1[7] = 0;
        arg1[4] = rax_3;
        *(arg1 + 0x24) = var_c8_1;
        *arg1 = 0;
        arg1[1] = result;
        arg1[2] = var_88;
        arg1[3] = var_80 * 3;
    }
    return result;
}
