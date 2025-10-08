
  fn alacritty::renderer::rects::RectRenderer::new::hf1d071614f4edbd0(arg1: *mut i64, arg2: i32) -> i64

{
    let mut var_240: i32 = 0;
    let mut var_23c: i32 = 0;
    let mut var_1f0: i32;
    let mut result: i64 =
        alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(&var_1f0, arg2, 0);
    let mut var_1ec: i128;
    let mut var_1dc: i128;
    
    if var_1f0 != 1
    {
        let var_1bc: i64;
        let var_208_1: i64 = var_1bc;
        let var_1cc: i128;
        let var_218_1: i128 = var_1cc;
        let mut var_228_1: i128 = var_1dc;
        let var_a8_1: i128 = var_1ec;
        let var_98_1: i128 = var_1dc;
        let r12_1: u32 = arg2;
        alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(&var_1f0, r12_1, 1);
        let var_1b4: i32;
        
        if var_1f0 == 1
        {
            var_228_1 = var_1dc;
            let var_234_2: i128 = var_1ec;
            *arg1.byte_offset(0x18) = var_1dc;
            *arg1.byte_offset(8) = var_1ec;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(var_1b4);
        }
        
        let var_68_1: i128 = var_1ec;
        let var_58_1: i128 = var_1dc;
        let mut var_238: i32;
        alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(&var_238, r12_1, 2);
        let mut var_158_1: i128;
        let mut var_148_1: i128;
        let mut var_138_1: i128;
        let mut var_128_1: i64;
        let mut r15_1: i32;
        let var_234: i128;
        
        if var_238 != 1
        {
            var_128_1 = var_1bc;
            var_138_1 = var_1cc;
            var_148_1 = var_1dc;
            var_158_1 = var_234;
            let var_1fc: i32;
            r15_1 = var_1fc;
        }
        else
        {
            let var_c8_1: i128 = var_1dc;
            let mut var_d8: i128 = var_234;
            let mut var_118: *const i8;
            let mut var_108: *const i8;
            let mut var_f8: i64;
            
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
            {
                let mut var_b8: *mut i128 = &var_d8;
                let var_b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alacritty..renderer..shader..ShaderError$u20$as$u20$core..fmt..Display$GT$::fmt::h281a2589ed92e25f;
                var_1f0 = &data_c839c0;
                *var_1ec[4] = 2;
                *var_1dc[0xc] = 0;
                *var_1ec[0xc] = &var_b8;
                *var_1dc[4] = 1;
                let rax_3: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c839e0);
                var_118 = "alacritty::renderer::rects#defin…";
                let var_110_1: i64 = 0x1a;
                var_108 = "alacritty::renderer::rects#defin…";
                let var_100_1: i64 = 0x1a;
                var_f8 = rax_3;
                log::__private_api::log::h0b6680b994d742b1(&var_1f0, 3, &var_118);
            }
            
            alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(&var_1f0, r12_1, 
                0);
            
            if var_1f0 == 1
            {
                *var_108[4] = var_1dc;
                *var_118[4] = var_1ec;
                *arg1.byte_offset(0x18) = var_1dc;
                *arg1.byte_offset(8) = var_1ec;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alacritty..renderer..shader..ShaderError$GT$::hdfef2d9be6b3004e(&var_d8);
                core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(var_1b4);
                return core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(var_1b4);
            }
            
            let var_e8_1: i64 = var_1bc;
            var_f8 = var_1cc;
            var_108 = var_1dc;
            r15_1 = var_1b4;
            var_158_1 = var_1ec;
            var_148_1 = var_1dc;
            var_138_1 = var_1cc;
            var_128_1 = var_1bc;
            core::ptr::drop_in_place$LT$alacritty..renderer..shader..ShaderError$GT$::hdfef2d9be6b3004e(&var_d8);
        }
        alacritty::renderer::rects::RectShaderProgram::new::h1440e6e8f6b474eb(&var_1f0, r12_1, 3);
        
        if var_1f0 == 1
        {
            let var_228_2: i128 = var_1dc;
            let var_234_3: i128 = var_1ec;
            *arg1.byte_offset(0x18) = var_1dc;
            *arg1.byte_offset(8) = var_1ec;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(r15_1);
            core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(var_1b4);
            return core::ptr::drop_in_place$LT$alacritty..renderer..rects..RectShaderProgram$GT$::hc1f25e25ff5100df(var_1b4);
        }
        
        let var_218_2: i128 = var_1cc;
        let var_228_3: i128 = var_1dc;
        var_238 = var_1ec;
        *arg1.byte_offset(0x140) = var_1cc;
        *arg1.byte_offset(0x134) = var_1cc;
        *arg1.byte_offset(0x124) = var_1dc;
        *arg1.byte_offset(0x114) = var_1ec;
        *alacritty::gl::storage::GenVertexArrays::h4e7aa93504329e19.0(1, &var_240);
        *alacritty::gl::storage::GenBuffers::h4563f51a284cec65.0(1, &var_23c);
        *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(var_240);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, var_23c);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(0, 2, 0x1406, 0, 0xc, 0);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(0);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(1, 4, 0x1401, 1, 0xc, 8);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(1);
        *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(0);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, 0);
        let var_160_1: i64 = var_1bc;
        let var_170_1: i128 = var_1cc;
        let var_180_1: i128 = var_98_1;
        let var_190_1: i128 = var_a8_1;
        *arg1.byte_offset(0xcc) = var_1bc;
        *arg1.byte_offset(0xbc) = var_1cc;
        *arg1.byte_offset(0xac) = var_58_1;
        *arg1.byte_offset(0x9c) = var_68_1;
        *arg1.byte_offset(0xd8) = var_158_1;
        *arg1.byte_offset(0xe8) = var_148_1;
        *arg1.byte_offset(0xf8) = var_138_1;
        arg1[0x21] = var_128_1;
        let r13_1: i32 = var_240;
        let r12_2: i32 = var_23c;
        core::array::_$LT$impl$u20$core..default..Default$u20$for$u20$$u5b$T$u3b$$u20$4$u5d$$GT$::default::hbd06cb1be86b9a7e(&var_1f0);
        result = memcpy(arg1, &var_1f0, 0x98);
        arg1[0x13] = var_1b4;
        *arg1.byte_offset(0xd4) = var_1b4;
        arg1[0x22] = r15_1;
        arg1[0x2a] = r13_1;
        *arg1.byte_offset(0x154) = r12_2;
    }
    else
    {
        let var_228: i128 = var_1dc;
        let var_234_1: i128 = var_1ec;
        *arg1.byte_offset(0x18) = var_1dc;
        *arg1.byte_offset(8) = var_1ec;
        *arg1 = -0x8000000000000000;
    }
    result
}
