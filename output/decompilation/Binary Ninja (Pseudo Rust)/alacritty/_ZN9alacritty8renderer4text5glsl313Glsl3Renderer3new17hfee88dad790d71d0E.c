
  fn alacritty::renderer::text::glsl3::Glsl3Renderer::new::hfee88dad790d71d0(arg1: *mut i128) -> *mut *mut [i8; 0x98]

{
    let mut result_1: *mut *mut [i8; 0x98];
    let mut var_80: i32;
    let mut var_7c: *mut i8;
    let mut var_70: i64;
    let mut var_58: *const i8;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        result_1 = &data_c83f50;
        var_80 = 1;
        var_7c = 8;
        var_70 = {0};
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83f60);
        var_58 = "alacritty::renderer::text::glsl3…";
        let var_50: i32 = 0x20;
        let var_48_1: *const i8 = "alacritty::renderer::text::glsl3…";
        let var_40_1: i64 = 0x20;
        let var_38_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_58);
    }
    
    alacritty::renderer::text::glsl3::TextShaderProgram::new::h33d0a0950f87c578(&result_1);
    let mut result: *mut *mut [i8; 0x98] = result_1;
    let rbp: i32 = var_80;
    let mut var_98: *mut i8 = var_7c;
    let var_74: i32;
    
    if result != 4
    {
        *arg1.byte_offset(0x1c) = var_74;
        *arg1.byte_offset(0x14) = var_98;
        *arg1.byte_offset(8) = result;
        arg1[1] = rbp;
        arg1[2] = var_70;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        var_58 = var_98;
        let mut var_a0: i32 = 0;
        let mut var_9c: i32 = 0;
        var_98 = 0;
        *alacritty::gl::storage::Enable::hc33911a3f611e19c.0(0xbe2);
        *alacritty::gl::storage::BlendFunc::ha142700221b021d9.0(0x88f9, 0x88fa);
        *alacritty::gl::storage::DepthMask::h5bafd1e2e308f05c.0(0);
        *alacritty::gl::storage::GenVertexArrays::h4e7aa93504329e19.0(1, &var_a0);
        *alacritty::gl::storage::GenBuffers::h4563f51a284cec65.0(1, &var_9c);
        *alacritty::gl::storage::GenBuffers::h4563f51a284cec65.0(1, &var_98);
        *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(var_a0);
        __builtin_memcpy(&result_1, 
            "\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 0x18);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8893, var_9c);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8893, 0x18, &result_1, 0x88e4);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, var_98);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 0x240000, 0, 0x88e0);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(0, 2, 0x1403, 0, 0x24, 0);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(0);
        *alacritty::gl::storage::VertexAttribDivisor::hbde0698143c4a369.0(0, 1);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(1, 4, 0x1402, 0, 0x24, 4);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(1);
        *alacritty::gl::storage::VertexAttribDivisor::hbde0698143c4a369.0(1, 1);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(2, 4, 0x1406, 0, 0x24, 
            0xc);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(2);
        *alacritty::gl::storage::VertexAttribDivisor::hbde0698143c4a369.0(2, 1);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(3, 4, 0x1401, 0, 0x24, 
            0x1c);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(3);
        *alacritty::gl::storage::VertexAttribDivisor::hbde0698143c4a369.0(3, 1);
        *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(4, 4, 0x1401, 0, 0x24, 
            0x20);
        *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(4);
        *alacritty::gl::storage::VertexAttribDivisor::hbde0698143c4a369.0(4, 1);
        *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(0);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, 0);
        *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8893, 0);
        let r15_1: i32 = var_a0;
        let r12_1: i32 = var_9c;
        let r13_1: i32 = var_98;
        let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x1c, 0);
        
        if rax_4 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&result_1, 0);
        let zmm0_1: i128 = result_1;
        *(rax_4 + 0xc) = var_7c;
        *rax_4 = zmm0_1;
        result_1 = 1;
        var_80 = rax_4;
        var_7c = 1;
        let mut rdx_3: i64;
        result = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(0x10000, 
            4, 0x24);
        *arg1.byte_offset(0x44) = var_74;
        *arg1.byte_offset(0x3c) = var_58;
        *arg1 = result_1;
        arg1[1] = var_7c;
        *arg1.byte_offset(0x18) = result;
        arg1[2] = rdx_3;
        *arg1.byte_offset(0x28) = 0;
        arg1[3] = 0;
        *arg1.byte_offset(0x38) = rbp;
        *arg1.byte_offset(0x48) = 0;
        arg1[5] = r15_1;
        *arg1.byte_offset(0x54) = r12_1;
        *arg1.byte_offset(0x58) = r13_1;
        *arg1.byte_offset(0x5c) = 0;
    }
    result
}
