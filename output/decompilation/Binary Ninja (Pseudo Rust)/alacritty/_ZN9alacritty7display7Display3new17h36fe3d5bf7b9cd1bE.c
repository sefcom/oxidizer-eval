
  fn alacritty::display::Display::new::h36fe3d5bf7b9cd1b(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void) -> i64

{
    let mut var_8a8: u128;
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_8a8, &arg2[4], arg3, arg4);
    let mut var_a78: i32;
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_a78, &var_8a8);
    let rax: i32 = var_a78;
    let mut var_a74: u128;
    let var_a98: u128 = var_a74;
    let mut var_c40: u64 = arg2[3];
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::new::h8d6a856607fc64cb(&var_8a8);
    let var_808: i32;
    let mut var_898: i128;
    let mut var_888: i128;
    let var_878: u128;
    let mut zmm0_1: u128;
    
    if var_808 != 0x3b9aca01
    {
        zmm0_1 = var_c40;
        var_c40 = zmm0_1;
        memcpy(&var_a78, &var_8a8, 0xa0);
        let mut var_d8: ();
        memcpy(&var_d8, &var_a78, 0xa0);
        let mut zmm0_2: i64;
        zmm0_2 = *arg4.byte_offset(0x128) / 1000000.0;
        let var_38_1: i32 = var_808;
        zmm0_2 = zmm0_2 * var_c40;
        zmm0_2 = _mm_min_ss(0x4579f000, _mm_max_ss(0x3f800000, zmm0_2)) * 1000000f;
        let mut rcx: i32 = 0;
        
        if zmm0_2 >= 0f
        {
            rcx = zmm0_2;
        }
        
        let var_804: i32;
        let var_34_1: i32 = var_804;
        let mut r12_1: i32 = -1;
        
        if zmm0_2 <= 4.29496704e+09f
        {
            r12_1 = rcx;
        }
        
        let mut var_a58: i128;
        let mut var_3d8: *mut i64;
        let mut var_3d0: fn(arg1: *mut i64, arg2: i64) -> i64;
        let mut var_208: *mut c_void;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
        {
            var_208 = arg4.byte_offset(0x68);
            var_3d8 = &var_208;
            var_3d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h83f1bbefb10239b3;
            var_8a8 = &data_c823d8;
            *var_8a8[8] = 2;
            var_888 = 0;
            var_898 = &var_3d8;
            *var_898[8] = 1;
            let rax_6: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82490);
            var_a78 = "alacritty::displayfailed to swap…";
            *var_a74[4] = 0x12;
            *var_a74[0xc] = "alacritty::displayfailed to swap…";
            let var_a60_1: i64 = 0x12;
            var_a58 = rax_6;
            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 4, &var_a78);
        }
        
        _$LT$alacritty..config..font..Font$u20$as$u20$core..clone..Clone$GT$::clone::h51757ca44d710c13(&var_8a8, arg4.byte_offset(0x68));
        let var_7e4: i32;
        let var_4b4_1: i32 = var_7e4;
        let var_7e0: i8;
        let var_4b0_1: i8 = var_7e0;
        let zmm2_1: i128 = var_888;
        let mut var_578: u128 = var_8a8;
        let var_568_1: i128 = var_898;
        let var_558_1: i128 = zmm2_1;
        let var_548_1: u128 = var_878;
        let var_868: u128;
        let var_538_1: u128 = var_868;
        let var_858: u128;
        let var_528_1: u128 = var_858;
        let var_848: u128;
        let var_518_1: u128 = var_848;
        let var_838: u128;
        let var_508_1: u128 = var_838;
        let var_828: u128;
        let var_4f8_1: u128 = var_828;
        let var_7f8: i128;
        let var_4c8_1: i128 = var_7f8;
        let var_4d8_1: i128 = var_808;
        let var_818: u128;
        let var_4e8_1: u128 = var_818;
        let var_4b8_1: i32 = r12_1;
        let var_7df: i8;
        let var_4af_1: i8 = var_7df;
        memcpy(&var_3d8, &var_d8, 0xa8);
        let mut rbx_1: i32;
        rbx_1 = 1;
        alacritty::renderer::text::glyph_cache::GlyphCache::new::h2aa9558433f4be42(&var_8a8, 
            &var_3d8, &var_578);
        let var_7a0: i32;
        
        if var_7a0 != 0x3b9aca01
        {
            memcpy(&var_a78, &var_8a8, 0x108);
            let var_79c: i128;
            let var_fc_1: i128 = var_79c;
            let var_78c: i128;
            let var_ec_1: i128 = var_78c;
            let var_77c: i32;
            let var_dc_1: i32 = var_77c;
            memcpy(&var_208, &var_a78, 0x108);
            let var_100_1: i32 = var_7a0;
            let mut zmm0_6: u128;
            zmm0_6 = *arg4.byte_offset(0x12c);
            let mut zmm1_5: u128;
            zmm1_5 = *arg4.byte_offset(0x12d);
            let var_c30_1: i64 = zmm1_5;
            let var_1c8: i64;
            zmm0_6 = zmm0_6 + var_1c8;
            let mut zmm0_7: u128;
            let mut zmm1_6: u128;
            zmm0_7 = floor(zmm0_6, zmm1_5);
            zmm0_7 = __maxsd_xmmsd_memsd(zmm0_7, 0x3ff0000000000000);
            let var_c5c_1: i32 = zmm0_7;
            let var_1c0: i64;
            zmm0_7 = var_c30_1 + var_1c0;
            let mut zmm0_8: i64;
            zmm0_8 = __maxsd_xmmsd_memsd(floor(zmm0_7, zmm1_6), 0x3ff0000000000000);
            let mut var_c4c: i32 = var_c5c_1;
            let mut var_c48: f32 = zmm0_8;
            let r12_2: i64 = *arg4.byte_offset(0x188);
            let rdx_2: i64 = *arg4.byte_offset(0x190);
            alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(&var_8a8, r12_2, 
                rdx_2);
            
            if var_8a8 == 1
            {
                let mut rax_14: i32;
                let mut rdx_4: i32;
                rax_14 = alacritty::display::window_size::h994bca71328498f8(
                    *arg4.byte_offset(0x1a8), *arg4.byte_offset(0x1aa), *var_8a8[8], var_898, 
                    var_c4c, var_c48, var_c40);
                winit::window::Window::request_inner_size::h3d7e5486d0f7ede1(&var_a78, &arg2[4], 
                    rax_14, rdx_4);
            }
            
            let mut rax_16: i32;
            let mut rcx_4: i8;
            let mut rdx_6: i64;
            rax_16 = winit::window::Window::inner_size::h6f4d29b4a50e18ee(arg2[4], arg2[5]);
            _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_3d8, &arg2[4], rdx_6, rcx_4);
            let mut var_4a0: i128;
            core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_4a0, &var_3d8);
            var_3d8 = var_4a0;
            let var_490: i64;
            let mut var_3c8_1: i64 = var_490;
            alacritty::renderer::platform::create_gl_surface::hef2cfe26c84c40d1(&var_8a8, arg3, 
                rax_16, rdx_6, &var_3d8);
            let rax_18: i64 = var_8a8;
            var_a78 = var_8a8;
            var_a58 = *var_888[8];
            let mut rbx_3: i8;
            
            if rax_18 != 2
            {
                *arg1.byte_offset(0x40) = var_878;
                arg1[7] = var_a58;
                let zmm0_11: u128 = var_a78;
                *arg1.byte_offset(0x28) = var_898;
                *arg1.byte_offset(0x18) = zmm0_11;
                arg1[1] = 3;
                arg1[2] = rax_18;
                *arg1 = 2;
                rbx_3 = 1;
            }
            else
            {
                let mut var_bb8: u128 = var_a78;
                let var_ba8_1: u128 = var_898;
                let rax_19: i64 = var_a58;
                var_a58 = *arg3.byte_offset(0x20);
                var_a74 = *arg3.byte_offset(0x10);
                var_a78 = *arg3;
                _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..context..NotCurrentGlContext$GT$::make_current::h3e0bbea917f79f53(&var_8a8, &var_a78, &var_bb8);
                let rax_21: i64 = var_8a8;
                var_3d8 = var_8a8;
                var_3c8_1 = var_898;
                let rcx_8: i64 = *var_888[8];
                
                if rax_21 != 2
                {
                    *arg1.byte_offset(0x40) = var_878;
                    arg1[7] = rcx_8;
                    let zmm0_12: u128 = var_3d8;
                    *arg1.byte_offset(0x28) = var_3c8_1;
                    *arg1.byte_offset(0x18) = zmm0_12;
                    arg1[1] = 3;
                    arg1[2] = rax_21;
                    *arg1 = 2;
                }
                else
                {
                    let mut var_b88: u128 = var_3d8;
                    let rax_24: i8 = *arg4.byte_offset(0xe);
                    var_c40 = rax_24;
                    alacritty::renderer::Renderer::new::h55b7130c64977f8c(&var_8a8, &var_b88, 
                        rax_24);
                    let rbx_4: *mut i64 = var_8a8;
                    var_a78 = var_8a8;
                    var_a74 = var_898;
                    
                    if rbx_4 != 2
                    {
                        let mut var_3b0: ();
                        memcpy(&var_3b0, &*var_888[8], 0x1a0);
                        var_3d0 = var_a78;
                        let var_3c0_1: u128 = var_a74;
                        var_3d8 = rbx_4;
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
                        {
                            var_8a8 = &data_c823f8;
                            *var_8a8[8] = 1;
                            var_898 = 8;
                            var_898 = {0};
                            let rax_27: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824a8);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            let var_a60_2: i64 = 0x12;
                            var_a58 = rax_27;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 4, &var_a78);
                        }
                        
                        alacritty::renderer::Renderer::with_loader::hb957d5f08ee9b417(&var_3d8);
                        let zmm1_13: f32 = arg2[3];
                        let mut zmm0_15: u128;
                        zmm0_15 = *arg4.byte_offset(0x1a8);
                        zmm0_15 = zmm0_15 * zmm1_13;
                        let var_c20_1: i32 = floorf(zmm0_15);
                        let mut zmm0_16: u128;
                        zmm0_16 = *arg4.byte_offset(0x1aa);
                        zmm0_16 = zmm0_16 * zmm1_13;
                        let zmm0_17: i32 = floorf(zmm0_16);
                        let mut rax_30: i32;
                        let mut rdx_12: i32;
                        rax_30 =
                            winit::window::Window::inner_size::h6f4d29b4a50e18ee(arg2[4], arg2[5]);
                        let var_c24_1: f32 = var_c4c;
                        let var_c28_1: f32 = var_c48;
                        let mut rax_32: i8;
                        
                        if *arg4.byte_offset(0x1ac) != 1
                        {
                            rax_32 = 0;
                        }
                        else
                        {
                            alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(
                                &var_8a8, r12_2, rdx_2);
                            rax_32 = var_8a8 ^ 1;
                        }
                        
                        let mut zmm0_18: u128;
                        zmm0_18 = rax_30;
                        let mut zmm1_14: u128;
                        zmm1_14 = rdx_12;
                        let mut var_b60: i64;
                        alacritty::display::SizeInfo::new::hc493ea048056a091(&var_b60, rax_32 & 1, 
                            zmm0_18, zmm1_14, var_c24_1, var_c28_1, var_c20_1, zmm0_17);
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
                        {
                            var_4a0 = &var_c4c;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            let var_490_1: *mut f32 = &var_c48;
                            let var_488_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82408;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            let rax_34: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824c0);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            let var_a60_3: i64 = 0x12;
                            var_a58 = rax_34;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        let mut var_be8: i32;
                        let var_b40: i32;
                        let mut var_b08: i32;
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
                        {
                            var_be8 = var_b40;
                            let var_b3c: i32;
                            var_b08 = var_b3c;
                            var_4a0 = &var_be8;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            let var_490_2: *mut i32 = &var_b08;
                            let var_488_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82428;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            let rax_36: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824d8);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            let var_a60_4: i64 = 0x12;
                            var_a58 = rax_36;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        let var_b50: i32;
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
                        {
                            var_be8 = var_b50;
                            let var_b4c: i32;
                            var_b08 = var_b4c;
                            var_4a0 = &var_be8;
                            *var_4a0[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            let var_490_3: *mut i32 = &var_b08;
                            let var_488_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
                            var_8a8 = &data_c82448;
                            *var_8a8[8] = 2;
                            var_888 = 0;
                            var_898 = &var_4a0;
                            *var_898[8] = 2;
                            let rax_38: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c824f0);
                            var_a78 = "alacritty::displayfailed to swap…";
                            *var_a74[4] = 0x12;
                            *var_a74[0xc] = "alacritty::displayfailed to swap…";
                            let var_a60_5: i64 = 0x12;
                            var_a58 = rax_38;
                            log::__private_api::log::h0b6680b994d742b1(&var_8a8, 3, &var_a78);
                        }
                        
                        alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(&var_3d8, 
                            &var_b60);
                        let mut zmm0_20: i512;
                        zmm0_20 = *arg4.byte_offset(0x1a4);
                        let mut zmm0_21: i512;
                        let mut zmm1_16: i512;
                        zmm0_21 = alacritty::renderer::Renderer::clear::h28d9311462ed0122(
                            *arg4.byte_offset(0x275) << 0x10 | *arg4.byte_offset(0x273), zmm0_20);
                        
                        if rax != 6
                        {
                            _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::swap_buffers::hd28ac391abbf1f4d(&var_8a8, &var_bb8, &var_b88);
                            let rdi_41: *mut u128 = &var_8a8;
                            core::result::Result$LT$T$C$E$GT$::expect::he18683c3aeadddae(rdi_41, 
                                "failed to swap buffers.failed to…", 0x17);
                            zmm0_21 = alacritty::renderer::Renderer::finish::h21f8b411e9422e91(
                                rdi_41, "failed to swap buffers.failed to…", 0x17, &data_c82508);
                        }
                        
                        if *arg4.byte_offset(0x1af) != 0
                        {
                            zmm0_21 = var_c4c;
                            zmm1_16 = var_c48;
                            alacritty::display::window::Window::set_resize_increments::hf3788ac180acdeb0(arg2[4], arg2[5]);
                        }
                        
                        winit::window::Window::set_visible::hc9bce2823a2ff022(arg2[4], arg2[5], 1);
                        
                        if rax != 6 && *arg4.byte_offset(0x1b3) == 1
                        {
                            alacritty::display::window::Window::set_maximized::hf8571f6f03a74d24(
                                arg2, 1);
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_8a8, *arg4.byte_offset(0x2b8), *arg4.byte_offset(0x2c0));
                        var_b08 = var_8a8;
                        let var_af0_1: i64 = 0;
                        let var_ae8_1: i64 = 8;
                        let var_ae0_1: i128 = {0};
                        let var_ad0_1: i64 = 8;
                        let var_ac8_1: i128 = {0};
                        let var_ab8_1: i64 = 4;
                        let var_ab0_1: i128 = {0};
                        let var_b58: i64;
                        alacritty::display::damage::DamageTracker::new::h443f813e5bbf2b56(&var_4a0, 
                            var_b60, var_b58);
                        let var_3e0_1: i8 = *arg4.byte_offset(0xb);
                        let mut rbp_3: i32;
                        rbp_3 = 1;
                        _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::set_swap_interval::h16392418fea3cb68(&var_a78, &var_bb8, &var_b88);
                        let mut var_c18: *const i8;
                        let mut var_c08: *const i8;
                        let mut var_bd8: *mut *mut u128;
                        let mut var_bc8: i64;
                        let mut var_b38: *mut u128;
                        
                        if var_a78 != 2
                        {
                            let zmm0_23: u128 = var_a78;
                            let var_a48: i128;
                            let var_878_1: i128 = var_a48;
                            var_888 = var_a58;
                            let var_898_1: u128 = var_a74;
                            var_8a8 = zmm0_23;
                            
                            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
                            {
                                var_b38 = &var_8a8;
                                let var_b30_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$glutin..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6356b3d53669c523;
                                var_be8 = &data_c82468;
                                let var_be0_1: i64 = 1;
                                var_bc8 = 0;
                                var_bd8 = &var_b38;
                                let var_bd0_1: i64 = 1;
                                let rax_47: i64 =
                                    log::__private_api::loc::h250021ea1f26630a(&data_c82520);
                                var_c18 = "alacritty::displayfailed to swap…";
                                let var_c10_1: i64 = 0x12;
                                var_c08 = "alacritty::displayfailed to swap…";
                                let var_c00_1: i64 = 0x12;
                                let var_bf8_1: i64 = rax_47;
                                log::__private_api::log::h0b6680b994d742b1(&var_be8, 3, &var_c18);
                            }
                            
                            core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(
                                &var_8a8);
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$glutin..error..Error$GT$$GT$::h10b0f157d01e4037(&var_a78);
                        }
                        
                        var_b38 = var_b88;
                        let rbx_7: i8 = *arg4.byte_offset(0x35a);
                        let r12_3: u32 = *arg4.byte_offset(0x358);
                        memcpy(&var_a78, &var_3d8, 0x1c8);
                        var_c08 = var_ba8_1;
                        var_c18 = var_bb8;
                        _$LT$alacritty..display..color..List$u20$as$u20$core..convert..From$LT$$RF$alacritty..config..color..Colors$GT$$GT$::from::h4562d385f38e06c1(&var_8a8, arg4.byte_offset(0x1d8));
                        alacritty::display::FrameTimer::new::h8ba1f3f46d19fa8b(&var_be8);
                        let r14_7: u64 = ((r12_3 >> 3) * 0x20c5) >> 0x14;
                        memcpy(arg1, &var_4a0, 0xc8);
                        memcpy(&arg1[0xbf], &var_208, 0x130);
                        *arg1.byte_offset(0x418) = var_b08;
                        *arg1.byte_offset(0x428) = var_898;
                        *arg1.byte_offset(0x438) = var_ae8_1;
                        *arg1.byte_offset(0x448) = var_ae0_1;
                        *arg1.byte_offset(0x458) = var_ac8_1;
                        *arg1.byte_offset(0x468) = var_ab8_1;
                        arg1[0x8f] = *var_ab0_1[8];
                        memcpy(&arg1[0x64], arg2, 0xf8);
                        core::array::_$LT$impl$u20$core..default..Default$u20$for$u20$$u5b$T$u3b$$u20$10$u5d$$GT$::default::hef75bd2ef45fff96(&arg1[0xfa]);
                        arg1[0xf7] = var_b40;
                        let zmm0_27: u128 = var_b60;
                        *arg1.byte_offset(0x7a8) = var_b50;
                        *arg1.byte_offset(0x798) = zmm0_27;
                        *arg1.byte_offset(0x58c) = var_a98;
                        let var_a64: i32;
                        *arg1.byte_offset(0x59c) = var_a64;
                        memcpy(&arg1[0x107], &var_8a8, 0x327);
                        *arg1.byte_offset(0x5c8) = var_be8;
                        *arg1.byte_offset(0x5d8) = var_bd8;
                        *arg1.byte_offset(0x5e8) = var_bc8;
                        memcpy(&arg1[0x1c], &var_a78, 0x1c8);
                        *arg1.byte_offset(0x560) = var_c18;
                        *arg1.byte_offset(0x570) = var_c08;
                        arg1[0xb0] = rax_19;
                        *arg1.byte_offset(0x2a8) = var_b38;
                        *arg1.byte_offset(0x2b8) = var_3c8_1;
                        arg1[0x59] = rcx_8;
                        arg1[0x19] = 0;
                        arg1[0x5a] = 2;
                        arg1[0x63] = 0;
                        arg1[0x90] = -0x8000000000000000;
                        arg1[0xaa] = 0;
                        *arg1.byte_offset(0x55c) = 0;
                        arg1[0xb1] = rax;
                        arg1[0xb4] = r14_7;
                        arg1[0xb5] = (r12_3 - r14_7 * 0x3e8) * 0xf4240;
                        arg1[0xb7] = 0x3b9aca00;
                        arg1[0xb8] = rbx_7;
                        arg1[0xeb] = 2;
                        arg1[0xf2] = 2;
                        *arg1.byte_offset(0x7c0) = {0};
                        *arg1.byte_offset(0x820) = {0};
                        arg1[0x106] = r12_1;
                        *arg1.byte_offset(0x834) = 2;
                        *arg1.byte_offset(0x836) = 0;
                        *arg1.byte_offset(0x837) = var_c40;
                        return core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(&var_578);
                    }
                    
                    let zmm0_13: u128 = var_a78;
                    *arg1.byte_offset(0x20) = var_a74;
                    *arg1.byte_offset(0x10) = zmm0_13;
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
            
            if rbx_3 != 0
            {
                core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg3);
            }
        }
        else
        {
            let zmm0_4: u128 = var_8a8;
            let zmm2_2: i128 = var_888;
            let var_a48_2: u128 = var_878;
            let var_a58_2: i128 = zmm2_2;
            var_a74 = var_898;
            var_a78 = zmm0_4;
            *arg1.byte_offset(0x40) = var_878;
            *arg1.byte_offset(0x30) = zmm2_2;
            *arg1.byte_offset(0x20) = var_898;
            *arg1.byte_offset(0x10) = zmm0_4;
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
        let zmm2: i128 = var_888;
        let var_a48_1: u128 = var_878;
        let var_a58_1: i128 = zmm2;
        var_a74 = var_898;
        var_a78 = zmm0_1;
        *arg1.byte_offset(0x40) = var_878;
        *arg1.byte_offset(0x30) = zmm2;
        *arg1.byte_offset(0x20) = var_898;
        *arg1.byte_offset(0x10) = zmm0_1;
        arg1[1] = 1;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg3);
    }
    core::ptr::drop_in_place$LT$alacritty..display..window..Window$GT$::h9f663359b82fe398(arg2)
}
