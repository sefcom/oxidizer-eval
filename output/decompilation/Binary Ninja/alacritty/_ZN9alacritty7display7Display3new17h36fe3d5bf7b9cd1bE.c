
  int64_t alacritty::display::Display::new::h36fe3d5bf7b9cd1b(int64_t* arg1, int64_t* arg2, char* arg3, void* arg4)

{
    uint128_t var_8a8;
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_8a8, &arg2[4], arg3, arg4);
    int32_t var_a78;
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_a78, &var_8a8);
    int32_t rax = var_a78;
    uint128_t var_a74;
    uint128_t var_a98 = var_a74;
    uint64_t var_c40 = arg2[3];
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::new::h8d6a856607fc64cb(&var_8a8);
    int32_t var_808;
    int128_t var_898;
    int128_t var_888;
    uint128_t var_878;
    uint128_t zmm0_1;
    
    if (var_808 != 0x3b9aca01)
    {
        zmm0_1 = var_c40;
        var_c40 = zmm0_1;
        memcpy(&var_a78, &var_8a8, 0xa0);
        void var_d8;
        memcpy(&var_d8, &var_a78, 0xa0);
        int64_t zmm0_2;
        zmm0_2 = *(arg4 + 0x128) / 1000000.0;
        int32_t var_38_1 = var_808;
        zmm0_2 = zmm0_2 * var_c40;
        zmm0_2 = _mm_min_ss(0x4579f000, _mm_max_ss(0x3f800000, zmm0_2)) * 1000000f;
        int32_t rcx = 0;
        
        if (zmm0_2 >= 0f)
            rcx = zmm0_2;
        
        int32_t var_804;
        int32_t var_34_1 = var_804;
        int32_t r12_1 = -1;
        
        if (zmm0_2 <= 4.29496704e+09f)
            r12_1 = rcx;
        
        int128_t var_a58;
        int64_t* var_3d8;
        int64_t (* var_3d0)(int64_t* arg1, int64_t arg2);
        void* var_208;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
        {
            var_208 = arg4 + 0x68;
            var_3d8 = &var_208;
            var_3d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
            var_8a8 = &data_c823d8;
            *var_8a8[8] = 2;
            var_888 = 0;
            var_898 = &var_3d8;
            *var_898[8] = 1;
            int64_t rax_6 = log::__private_api::loc::h250021ea1f26630a(&data_c82490);
            var_a78 = "alacritty::displayfailed to swap…";
            *var_a74[4] = 0x12;
            *var_a74[0xc] = "alacritty::displayfailed to swap…";
            int64_t var_a60_1 = 0x12;
            var_a58 = rax_6;
            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 4, &var_a78);
        }
        
        _$LT$alacritty..config..font..Font$u20$as$u20$core..clone..Clone$GT$::clone::h51757ca44d710c13(&var_8a8, arg4 + 0x68);
        int32_t var_7e4;
        int32_t var_4b4_1 = var_7e4;
        char var_7e0;
        char var_4b0_1 = var_7e0;
        int128_t zmm2_1 = var_888;
        uint128_t var_578 = var_8a8;
        int128_t var_568_1 = var_898;
        int128_t var_558_1 = zmm2_1;
        uint128_t var_548_1 = var_878;
        uint128_t var_868;
        uint128_t var_538_1 = var_868;
        uint128_t var_858;
        uint128_t var_528_1 = var_858;
        uint128_t var_848;
        uint128_t var_518_1 = var_848;
        uint128_t var_838;
        uint128_t var_508_1 = var_838;
        uint128_t var_828;
        uint128_t var_4f8_1 = var_828;
        int128_t var_7f8;
        int128_t var_4c8_1 = var_7f8;
        int128_t var_4d8_1 = var_808;
        uint128_t var_818;
        uint128_t var_4e8_1 = var_818;
        int32_t var_4b8_1 = r12_1;
        char var_7df;
        char var_4af_1 = var_7df;
        memcpy(&var_3d8, &var_d8, 0xa8);
        int32_t rbx_1;
        rbx_1 = 1;
        alacritty::renderer::text::glyph_cache::GlyphCache::new::h2aa9558433f4be42(&var_8a8, 
            &var_3d8, &var_578);
        int32_t var_7a0;
        
        if (var_7a0 != 0x3b9aca01)
        {
            memcpy(&var_a78, &var_8a8, 0x108);
            int128_t var_79c;
            int128_t var_fc_1 = var_79c;
            int128_t var_78c;
            int128_t var_ec_1 = var_78c;
            int32_t var_77c;
            int32_t var_dc_1 = var_77c;
            memcpy(&var_208, &var_a78, 0x108);
            int32_t var_100_1 = var_7a0;
            uint128_t zmm0_6;
            zmm0_6 = *(arg4 + 0x12c);
            uint128_t zmm1_5;
            zmm1_5 = *(arg4 + 0x12d);
            int64_t var_c30_1 = zmm1_5;
            int64_t var_1c8;
            zmm0_6 = zmm0_6 + var_1c8;
            uint128_t zmm0_7;
            uint128_t zmm1_6;
            zmm0_7 = floor(zmm0_6, zmm1_5);
            zmm0_7 = __maxsd_xmmsd_memsd(zmm0_7, 0x3ff0000000000000);
            int32_t var_c5c_1 = zmm0_7;
            int64_t var_1c0;
            zmm0_7 = var_c30_1 + var_1c0;
            int64_t zmm0_8;
            zmm0_8 = __maxsd_xmmsd_memsd(floor(zmm0_7, zmm1_6), 0x3ff0000000000000);
            int32_t var_c4c = var_c5c_1;
            float var_c48 = zmm0_8;
            int64_t r12_2 = *(arg4 + 0x188);
            int64_t rdx_2 = *(arg4 + 0x190);
            alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(&var_8a8, r12_2, 
                rdx_2);
            
            if (var_8a8 == 1)
            {
                int32_t rax_14;
                int32_t rdx_4;
                rax_14 = alacritty::display::window_size::h994bca71328498f8(*(arg4 + 0x1a8), 
                    *(arg4 + 0x1aa), *var_8a8[8], var_898, var_c4c, var_c48, var_c40);
                winit::window::Window::request_inner_size::h3d7e5486d0f7ede1(&var_a78, &arg2[4], 
                    rax_14, rdx_4);
            }
            
            int32_t rax_16;
            char rcx_4;
            int64_t rdx_6;
            rax_16 = winit::window::Window::inner_size::h6f4d29b4a50e18ee(arg2[4], arg2[5]);
            _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_3d8, &arg2[4], rdx_6, rcx_4);
            int128_t var_4a0;
            core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_4a0, &var_3d8);
            var_3d8 = var_4a0;
            int64_t var_490;
            int64_t var_3c8_1 = var_490;
            alacritty::renderer::platform::create_gl_surface::hef2cfe26c84c40d1(&var_8a8, arg3, 
                rax_16, rdx_6, &var_3d8);
            int64_t rax_18 = var_8a8;
            var_a78 = var_8a8;
            var_a58 = *var_888[8];
            char rbx_3;
            
            if (rax_18 != 2)
            {
                *(arg1 + 0x40) = var_878;
                arg1[7] = var_a58;
                uint128_t zmm0_11 = var_a78;
                *(arg1 + 0x28) = var_898;
                *(arg1 + 0x18) = zmm0_11;
                arg1[1] = 3;
                arg1[2] = rax_18;
                *arg1 = 2;
                rbx_3 = 1;
            }
            else
            {
                uint128_t var_bb8 = var_a78;
                uint128_t var_ba8_1 = var_898;
                int64_t rax_19 = var_a58;
                var_a58 = *(arg3 + 0x20);
                var_a74 = *(arg3 + 0x10);
                var_a78 = *arg3;
                _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..context..NotCurrentGlContext$GT$::make_current::h3e0bbea917f79f53(&var_8a8, &var_a78, &var_bb8);
                int64_t rax_21 = var_8a8;
                var_3d8 = var_8a8;
                var_3c8_1 = var_898;
                int64_t rcx_8 = *var_888[8];
                
                if (rax_21 != 2)
                {
                    *(arg1 + 0x40) = var_878;
                    arg1[7] = rcx_8;
                    uint128_t zmm0_12 = var_3d8;
                    *(arg1 + 0x28) = var_3c8_1;
                    *(arg1 + 0x18) = zmm0_12;
                    arg1[1] = 3;
                    arg1[2] = rax_21;
                    *arg1 = 2;
                }
                else
                {
                    uint128_t var_b88 = var_3d8;
                    char rax_24 = *(arg4 + 0xe);
                    var_c40 = rax_24;
                    alacritty::renderer::Renderer::new::h55b7130c64977f8c(&var_8a8, &var_b88, 
                        rax_24);
                    int64_t* rbx_4 = var_8a8;
                    var_a78 = var_8a8;
                    var_a74 = var_898;
                    
                    if (rbx_4 != 2)
                    {
                        void var_3b0;
                        memcpy(&var_3b0, &*var_888[8], 0x1a0);
                        var_3d0 = var_a78;
                        uint128_t var_3c0_1 = var_a74;
                        var_3d8 = rbx_4;
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
                        {
                            var_8a8 = &data_c823f8;
                            *var_8a8[8] = 1;
                            var_898 = 8;
                            var_898 = {0};
                            int64_t rax_27 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824a8);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            int64_t var_a60_2 = 0x12;
                            var_a58 = rax_27;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 4, &var_a78);
                        }
                        
                        alacritty::renderer::Renderer::with_loader::hb957d5f08ee9b417(&var_3d8);
                        float zmm1_13 = arg2[3];
                        uint128_t zmm0_15;
                        zmm0_15 = *(arg4 + 0x1a8);
                        zmm0_15 = zmm0_15 * zmm1_13;
                        int32_t var_c20_1 = floorf(zmm0_15);
                        uint128_t zmm0_16;
                        zmm0_16 = *(arg4 + 0x1aa);
                        zmm0_16 = zmm0_16 * zmm1_13;
                        int32_t zmm0_17 = floorf(zmm0_16);
                        int32_t rax_30;
                        int32_t rdx_12;
                        rax_30 =
                            winit::window::Window::inner_size::h6f4d29b4a50e18ee(arg2[4], arg2[5]);
                        float var_c24_1 = var_c4c;
                        float var_c28_1 = var_c48;
                        char rax_32;
                        
                        if (*(arg4 + 0x1ac) != 1)
                            rax_32 = 0;
                        else
                        {
                            alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(
                                &var_8a8, r12_2, rdx_2);
                            rax_32 = var_8a8 ^ 1;
                        }
                        
                        uint128_t zmm0_18;
                        zmm0_18 = rax_30;
                        uint128_t zmm1_14;
                        zmm1_14 = rdx_12;
                        int64_t var_b60;
                        alacritty::display::SizeInfo::new::hc493ea048056a091(&var_b60, rax_32 & 1, 
                            zmm0_18, zmm1_14, var_c24_1, var_c28_1, var_c20_1, zmm0_17);
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
                        {
                            var_4a0 = &var_c4c;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            float* var_490_1 = &var_c48;
                            int64_t (* var_488_1)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82408;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            int64_t rax_34 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824c0);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            int64_t var_a60_3 = 0x12;
                            var_a58 = rax_34;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        int32_t var_be8;
                        int32_t var_b40;
                        int32_t var_b08;
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
                        {
                            var_be8 = var_b40;
                            int32_t var_b3c;
                            var_b08 = var_b3c;
                            var_4a0 = &var_be8;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            int32_t* var_490_2 = &var_b08;
                            int64_t (* var_488_2)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82428;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            int64_t rax_36 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824d8);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            int64_t var_a60_4 = 0x12;
                            var_a58 = rax_36;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        int32_t var_b50;
                        
                        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
                        {
                            var_be8 = var_b50;
                            int32_t var_b4c;
                            var_b08 = var_b4c;
                            var_4a0 = &var_be8;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            int32_t* var_490_3 = &var_b08;
                            int64_t (* var_488_3)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82448;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            int64_t rax_38 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824f0);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            int64_t var_a60_5 = 0x12;
                            var_a58 = rax_38;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(&var_3d8, 
                            &var_b60);
                        int512_t zmm0_20;
                        zmm0_20 = *(arg4 + 0x1a4);
                        int512_t zmm0_21;
                        int512_t zmm1_16;
                        zmm0_21 = alacritty::renderer::Renderer::clear::h28d9311462ed0122(
                            *(arg4 + 0x275) << 0x10 | *(arg4 + 0x273), zmm0_20);
                        
                        if (rax != 6)
                        {
                            _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::swap_buffers::hd28ac391abbf1f4d(&var_8a8, &var_bb8, &var_b88);
                            uint128_t* rdi_41 = &var_8a8;
                            core::result::Result$LT$T$C$E$GT$::expect::he18683c3aeadddae(rdi_41, 
                                "failed to swap buffers.failed to…", 0x17);
                            zmm0_21 = alacritty::renderer::Renderer::finish::h21f8b411e9422e91(
                                rdi_41, "failed to swap buffers.failed to…", 0x17, &data_c82508);
                        }
                        
                        if (*(arg4 + 0x1af))
                        {
                            zmm0_21 = var_c4c;
                            zmm1_16 = var_c48;
                            alacritty::display::window::Window::set_resize_increments::hf3788ac180acdeb0(arg2[4], arg2[5]);
                        }
                        
                        winit::window::Window::set_visible::hc9bce2823a2ff022(arg2[4], arg2[5], 1);
                        
                        if (rax != 6 && *(arg4 + 0x1b3) == 1)
                            alacritty::display::window::Window::set_maximized::hf8571f6f03a74d24(
                                arg2, 1);
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_8a8, *(arg4 + 0x2b8), *(arg4 + 0x2c0));
                        var_b08 = var_8a8;
                        int64_t var_af0_1 = 0;
                        int64_t var_ae8_1 = 8;
                        int128_t var_ae0_1 = {0};
                        int64_t var_ad0_1 = 8;
                        int128_t var_ac8_1 = {0};
                        int64_t var_ab8_1 = 4;
                        int128_t var_ab0_1 = {0};
                        int64_t var_b58;
                        alacritty::display::damage::DamageTracker::new::h443f813e5bbf2b56(&var_4a0, 
                            var_b60, var_b58);
                        char var_3e0_1 = *(arg4 + 0xb);
                        int32_t rbp_3;
                        rbp_3 = 1;
                        _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::set_swap_interval::h16392418fea3cb68(&var_a78, &var_bb8, &var_b88);
                        char const* const var_c18;
                        char const* const var_c08;
                        uint128_t** var_bd8;
                        int64_t var_bc8;
                        uint128_t* var_b38;
                        
                        if (var_a78 != 2)
                        {
                            uint128_t zmm0_23 = var_a78;
                            int128_t var_a48;
                            int128_t var_878_1 = var_a48;
                            var_888 = var_a58;
                            uint128_t var_898_1 = var_a74;
                            var_8a8 = zmm0_23;
                            
                            if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
                            {
                                var_b38 = &var_8a8;
                                int64_t (* var_b30_1)(void* arg1, int64_t* arg2) = _$LT$glutin..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6356b3d53669c523;
                                var_be8 = &data_c82468;
                                int64_t var_be0_1 = 1;
                                var_bc8 = 0;
                                var_bd8 = &var_b38;
                                int64_t var_bd0_1 = 1;
                                int64_t rax_47 =
                                    log::__private_api::loc::h250021ea1f26630a(&data_c82520);
                                var_c18 = "alacritty::displayfailed to swap…";
                                int64_t var_c10_1 = 0x12;
                                var_c08 = "alacritty::displayfailed to swap…";
                                int64_t var_c00_1 = 0x12;
                                int64_t var_bf8_1 = rax_47;
                                log::__private_api::log::h0b6680b994d742b1(&var_be8, 3, &var_c18);
                            }
                            
                            core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(
                                &var_8a8);
                        }
                        else
                            core::ptr::drop_in_place$LT$core..option..Option$LT$glutin..error..Error$GT$$GT$::h10b0f157d01e4037(&var_a78);
                        
                        var_b38 = var_b88;
                        char rbx_7 = *(arg4 + 0x35a);
                        uint32_t r12_3 = *(arg4 + 0x358);
                        memcpy(&var_a78, &var_3d8, 0x1c8);
                        var_c08 = var_ba8_1;
                        var_c18 = var_bb8;
                        _$LT$alacritty..display..color..List$u20$as$u20$core..convert..From$LT$$RF$alacritty..config..color..Colors$GT$$GT$::from::h4562d385f38e06c1(&var_8a8, arg4 + 0x1d8);
                        alacritty::display::FrameTimer::new::h8ba1f3f46d19fa8b(&var_be8);
                        uint64_t r14_7 = ((r12_3 >> 3) * 0x20c5) >> 0x14;
                        memcpy(arg1, &var_4a0, 0xc8);
                        memcpy(&arg1[0xbf], &var_208, 0x130);
                        *(arg1 + 0x418) = var_b08;
                        *(arg1 + 0x428) = var_898;
                        *(arg1 + 0x438) = var_ae8_1;
                        *(arg1 + 0x448) = var_ae0_1;
                        *(arg1 + 0x458) = var_ac8_1;
                        *(arg1 + 0x468) = var_ab8_1;
                        arg1[0x8f] = *var_ab0_1[8];
                        memcpy(&arg1[0x64], arg2, 0xf8);
                        core::array::_$LT$impl$u20$core..default..Default$u20$for$u20$$u5b$T$u3b$$u20$10$u5d$$GT$::default::hef75bd2ef45fff96(&arg1[0xfa]);
                        arg1[0xf7] = var_b40;
                        uint128_t zmm0_27 = var_b60;
                        *(arg1 + 0x7a8) = var_b50;
                        *(arg1 + 0x798) = zmm0_27;
                        *(arg1 + 0x58c) = var_a98;
                        int32_t var_a64;
                        *(arg1 + 0x59c) = var_a64;
                        memcpy(&arg1[0x107], &var_8a8, 0x327);
                        *(arg1 + 0x5c8) = var_be8;
                        *(arg1 + 0x5d8) = var_bd8;
                        *(arg1 + 0x5e8) = var_bc8;
                        memcpy(&arg1[0x1c], &var_a78, 0x1c8);
                        *(arg1 + 0x560) = var_c18;
                        *(arg1 + 0x570) = var_c08;
                        arg1[0xb0] = rax_19;
                        *(arg1 + 0x2a8) = var_b38;
                        *(arg1 + 0x2b8) = var_3c8_1;
                        arg1[0x59] = rcx_8;
                        arg1[0x19] = 0;
                        arg1[0x5a] = 2;
                        arg1[0x63] = 0;
                        arg1[0x90] = -0x8000000000000000;
                        arg1[0xaa] = 0;
                        *(arg1 + 0x55c) = 0;
                        arg1[0xb1] = rax;
                        arg1[0xb4] = r14_7;
                        arg1[0xb5] = (r12_3 - r14_7 * 0x3e8) * 0xf4240;
                        arg1[0xb7] = 0x3b9aca00;
                        arg1[0xb8] = rbx_7;
                        arg1[0xeb] = 2;
                        arg1[0xf2] = 2;
                        *(arg1 + 0x7c0) = {0};
                        *(arg1 + 0x820) = {0};
                        arg1[0x106] = r12_1;
                        *(arg1 + 0x834) = 2;
                        *(arg1 + 0x836) = 0;
                        *(arg1 + 0x837) = var_c40;
                        return core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(&var_578);
                    }
                    
                    uint128_t zmm0_13 = var_a78;
                    *(arg1 + 0x20) = var_a74;
                    *(arg1 + 0x10) = zmm0_13;
                    arg1[1] = 2;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(&var_b88);
                }
                
                rbx_3 = 0;
                core::ptr::drop_in_place$LT$glutin..surface..Surface$LT$glutin..surface..WindowSurface$GT$$GT$::h18e84856e49a7b68(&var_bb8);
            }
            
            core::ptr::drop_in_place$LT$alacritty..renderer..text..glyph_cache..GlyphCache$GT$::hd425254031c5f492(&var_208);
            core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(
                &var_578);
            
            if (rbx_3)
                core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg3);
        }
        else
        {
            uint128_t zmm0_4 = var_8a8;
            int128_t zmm2_2 = var_888;
            uint128_t var_a48_2 = var_878;
            int128_t var_a58_2 = zmm2_2;
            var_a74 = var_898;
            var_a78 = zmm0_4;
            *(arg1 + 0x40) = var_878;
            *(arg1 + 0x30) = zmm2_2;
            *(arg1 + 0x20) = var_898;
            *(arg1 + 0x10) = zmm0_4;
            arg1[1] = 1;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(
                &var_578);
            core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(
                arg3);
        }
    }
    else
    {
        zmm0_1 = var_8a8;
        int128_t zmm2 = var_888;
        uint128_t var_a48_1 = var_878;
        int128_t var_a58_1 = zmm2;
        var_a74 = var_898;
        var_a78 = zmm0_1;
        *(arg1 + 0x40) = var_878;
        *(arg1 + 0x30) = zmm2;
        *(arg1 + 0x20) = var_898;
        *(arg1 + 0x10) = zmm0_1;
        arg1[1] = 1;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg3);
    }
    return core::ptr::drop_in_place$LT$alacritty..display..window..Window$GT$::h9f663359b82fe398(
        arg2);
}
