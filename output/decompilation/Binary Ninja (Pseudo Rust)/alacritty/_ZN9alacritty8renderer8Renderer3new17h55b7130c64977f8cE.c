
  fn alacritty::renderer::Renderer::new::h55b7130c64977f8c(arg1: *mut i64, arg2: *mut i32, arg3: i8) -> *mut *mut [i8; 0xe8]

{
    let alacritty::renderer::GL_FUNS_LOADED::h355c00076756bc46_1: u8 =
        alacritty::renderer::GL_FUNS_LOADED::h355c00076756bc46;
    alacritty::renderer::GL_FUNS_LOADED::h355c00076756bc46 = 1;
    let mut result_1: *mut *mut [i8; 0xe8];
    let mut var_310: i128;
    
    if alacritty::renderer::GL_FUNS_LOADED::h355c00076756bc46_1 == 0
    {
        let mut result_2: *mut *mut [i8; 0xe8];
        let mut rdx: i64;
        result_2 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h65e5dd4d2e691e41(arg2);
        result_1 = result_2;
        var_310 = rdx;
        alacritty::gl::load_with::h801dccc6a28a8f2a(&result_1);
        core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&result_1);
    }
    
    alacritty::renderer::gl_get_string::hf6bcd3c4283988f4(&result_1, 0x8b8c, 
        "shader versionOpenGL versionalac…");
    let result: *mut *mut [i8; 0xe8] = result_1;
    let mut var_508: i128 = var_310;
    let mut var_300: u64;
    
    if result != 4
    {
        arg1[4] = var_300;
        *arg1.byte_offset(0x10) = var_508;
        arg1[1] = result;
        *arg1 = 2;
        return result;
    }
    
    let var_558_1: u64 = var_300;
    let mut var_568: i128 = var_508;
    alacritty::renderer::gl_get_string::hf6bcd3c4283988f4(&result_1, 0x1f02, 
        "OpenGL versionalacritty/src/rend…");
    let result_3: *mut *mut [i8; 0xe8] = result_1;
    var_508 = var_310;
    
    if result_3 != 4
    {
        arg1[4] = var_300;
        *arg1.byte_offset(0x10) = var_508;
        arg1[1] = result_3;
        *arg1 = 2;
    }
    else
    {
        let var_538_1: u64 = var_300;
        let mut var_548: i128 = var_508;
        alacritty::renderer::gl_get_string::hf6bcd3c4283988f4(&result_1, 0x1f01, 
            "renderer versionhide_when_typing…");
        let result_4: *mut *mut [i8; 0xe8] = result_1;
        var_508 = var_310;
        let mut var_4f8_2: *const i8 = var_300;
        
        if result_4 != 4
        {
            arg1[4] = var_4f8_2;
            *arg1.byte_offset(0x10) = var_508;
            arg1[1] = result_4;
            *arg1 = 2;
        }
        else
        {
            let var_518_1: *const i8 = var_4f8_2;
            let mut var_528: i128 = var_508;
            let mut var_4f0: i64;
            let mut var_4e8: i64;
            let mut var_2f8: i64;
            let mut var_150: *mut i128;
            
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
            {
                var_150 = &var_528;
                let var_148_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
                result_1 = &data_c84048;
                var_310 = 1;
                var_2f8 = 0;
                *var_310[8] = &var_150;
                var_300 = 1;
                let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84088);
                var_508 = "alacritty::renderer3.3GL_KHR_deb…";
                *var_508[8] = 0x13;
                var_4f8_2 = "alacritty::renderer3.3GL_KHR_deb…";
                var_4f0 = 0x13;
                var_4e8 = rax_5;
                log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_508);
            }
            
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
            {
                var_150 = &var_548;
                let var_148_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
                let var_140_1: *mut i128 = &var_568;
                let var_138_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
                result_1 = &data_c84058;
                var_310 = 2;
                var_2f8 = 0;
                *var_310[8] = &var_150;
                var_300 = 2;
                let rax_7: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c840a0);
                var_508 = "alacritty::renderer3.3GL_KHR_deb…";
                *var_508[8] = 0x13;
                var_4f8_2 = "alacritty::renderer3.3GL_KHR_deb…";
                var_4f0 = 0x13;
                var_4e8 = rax_7;
                log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_508);
            }
            
            let rax_8: i8 = alacritty::renderer::Renderer::supports_robustness::h3e8a46a96e5f1a8d();
            let rax_9: i32 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..context..GlContext$GT$::context_api::he5d1a313b0abefcf(arg2);
            let mut var_5d8_1: i128;
            let mut var_5d8_2: i128;
            let mut var_5c8_1: i128;
            let mut var_5c8_2: i128;
            let mut var_4d8_1: i128;
            let mut var_4c8_1: i128;
            let mut var_4b8_1: i128;
            let mut var_4a8_1: i64;
            let mut var_2f0: i128;
            let mut var_2e0: i128;
            let mut var_2d0: i128;
            let var_2c0: i64;
            let mut rcx_8: *mut c_void;
            let mut result_7: *mut *mut [i8; 0xe8];
            
            match arg3
            {
                0 =>
                {
                    'label_86c805:
                    alacritty::renderer::text::glsl3::Glsl3Renderer::new::hfee88dad790d71d0(
                        &result_1);
                    let result_6: *mut *mut [i8; 0xe8] = result_1;
                    var_5d8_1 = var_310;
                    var_5c8_1 = var_300;
                    
                    if -(result_6) != -0x8000000000000000
                    {
                        var_4a8_1 = var_2c0;
                        var_4b8_1 = var_2d0;
                        var_4c8_1 = var_2e0;
                        var_4d8_1 = var_2f0;
                        var_4f8_2 = var_5d8_1;
                        var_4e8 = var_5c8_1;
                        *var_508[8] = result_6;
                        var_508 = 1;
                        alacritty::renderer::rects::RectRenderer::new::hf1d071614f4edbd0(&result_1, 
                            0);
                        result_7 = result_1;
                        var_5d8_2 = var_310;
                        var_5c8_2 = var_300;
                        
                        if result_7 != -0x8000000000000000
                        {
                            'label_86c93b:
                            memcpy(&var_150, &var_2f0, 0x130);
                            let var_3a8_1: i128 = var_508;
                            var_508 = result_7;
                            var_508 = var_5d8_2;
                            var_4f0 = var_5c8_2;
                            let mut var_4e0: ();
                            memcpy(&var_4e0, &var_150, 0x130);
                            
                            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4 &&
                                alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
                                "GL_KHR_debugGPU reset (guiltyunk…", 0xc) != 0
                            {
                                if core::sync::atomic::atomic_load::h45f93311b58385bb(
                                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
                                {
                                    result_1 = &data_c84078;
                                    var_310 = 1;
                                    *var_310[8] = 8;
                                    var_300 = {0};
                                    let rax_16: i64 =
                                        log::__private_api::loc::h250021ea1f26630a(&data_c840b8);
                                    var_150 = "alacritty::renderer3.3GL_KHR_deb…";
                                    let var_148_3: i64 = 0x13;
                                    let var_140_2: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
                                    let var_138_2: i64 = 0x13;
                                    let var_130_1: i64 = rax_16;
                                    log::__private_api::log::h0b6680b994d742b1(&result_1, 4, 
                                        &var_150);
                                }
                                
                                *alacritty::gl::storage::Enable::hc33911a3f611e19c.0(0x92e0);
                                *alacritty::gl::storage::Enable::hc33911a3f611e19c.0(0x8242);
                                *alacritty::gl::storage::DebugMessageCallback::hf8622d353bcde498.0(
                                    alacritty::renderer::gl_debug_log::h0a1f427af07318e3, 0);
                            }
                            
                            let var_2b8_1: i64 = var_4a8_1;
                            var_2d0 = var_4b8_1;
                            var_2e0 = var_4c8_1;
                            var_2f0 = var_4d8_1;
                            var_2f8 = var_4e8;
                            var_310 = var_4f8_2;
                            result_1 = var_3a8_1;
                            let mut var_2b0: ();
                            memcpy(&var_2b0, &var_508, 0x158);
                            memcpy(arg1, &result_1, 0x1c0);
                            arg1[0x38] = rax_8;
                        }
                        else
                        {
                            *arg1.byte_offset(0x18) = var_5c8_2;
                            *arg1.byte_offset(8) = var_5d8_2;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$alacritty..renderer..TextRendererProvider$GT$::hddd3742f8607da20(&var_508);
                        }
                    }
                    else
                    {
                        'label_86c83c:
                        *arg1.byte_offset(0x18) = var_5c8_1;
                        *arg1.byte_offset(8) = var_5d8_1;
                        *arg1 = 2;
                    }
                }
                1 =>
                {
                    rcx_8 = 1;
                    'label_86c6ee:
                    alacritty::renderer::text::gles2::Gles2Renderer::new::h5d58c9a3ee6f4e47(
                        &result_1, rcx_8, rax_9 & 1);
                    let result_5: *mut *mut [i8; 0xe8] = result_1;
                    var_5d8_1 = var_310;
                    var_5c8_1 = var_300;
                    
                    if -(result_5) == -0x8000000000000000
                    {
                        goto 'label_86c83c;
                    }
                    
                    var_4a8_1 = var_2c0;
                    var_4b8_1 = var_2d0;
                    var_4c8_1 = var_2e0;
                    var_4d8_1 = var_2f0;
                    var_4f8_2 = var_5d8_1;
                    var_4e8 = var_5c8_1;
                    *var_508[8] = result_5;
                    var_508 = 0;
                    alacritty::renderer::rects::RectRenderer::new::hf1d071614f4edbd0(&result_1, 1);
                    result_7 = result_1;
                    var_5d8_2 = var_310;
                    var_5c8_2 = var_300;
                    
                    if result_7 != -0x8000000000000000
                    {
                        goto 'label_86c93b;
                    }
                    
                    *arg1.byte_offset(0x18) = var_5c8_2;
                    *arg1.byte_offset(8) = var_5d8_2;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$alacritty..renderer..TextRendererProvider$GT$::hddd3742f8607da20(&var_508);
                }
                2 =>
                {
                    rcx_8 = nullptr;
                    goto 'label_86c6ee;
                }
                3 =>
                {
                    let mut r15_1: *mut c_void = var_558_1 - 3;
                    let mut rdx_3: u64 = 3;
                    
                    if var_558_1 < 3
                    {
                        rdx_3 = var_558_1;
                    }
                    
                    rcx_8 = memcmp(*var_568[8], "3.3GL_KHR_debugGPU reset (guilty…", rdx_3);
                    
                    if rcx_8 != 0
                    {
                        r15_1 = rcx_8;
                    }
                    
                    rcx_8 = 1;
                    
                    if ((r15_1 < 0 | rax_9) & 1) == 0
                    {
                        goto 'label_86c805;
                    }
                    
                    goto 'label_86c6ee;
                }
            }
            
            core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_528);
        }
        
        core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_548);
    }
    
    core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_568)
}
