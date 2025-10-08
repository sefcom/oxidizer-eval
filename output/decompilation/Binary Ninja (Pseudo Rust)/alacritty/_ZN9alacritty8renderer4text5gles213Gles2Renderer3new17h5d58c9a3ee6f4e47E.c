
  fn alacritty::renderer::text::gles2::Gles2Renderer::new::h5d58c9a3ee6f4e47(arg1: *mut i128, arg2: i8, arg3: i8) -> *mut *mut [i8; 0xc0]

{
    let mut result_1: *mut *mut [i8; 0xc0];
    let mut var_d0: i64;
    let mut var_c8: i64;
    let mut var_c0: i64;
    let mut var_a0: *const i8;
    let mut var_90: *const i8;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        result_1 = &data_c83db8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83de8);
        var_a0 = "alacritty::renderer::text::gles2…";
        let var_98_1: i64 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        let var_88_1: i64 = 0x20;
        let var_80_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    let mut rbx: i8;
    
    if arg2 == 0
    {
        rbx = 0;
    }
    else
    {
        rbx = 1;
        
        if alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
            "GL_EXT_blend_func_extendedGL_ARB…", 0x1a) == 0
        {
            rbx = alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
                "GL_ARB_blend_func_extendedvaryin…", 0x1a);
        }
    }
    
    if arg3 != 0 && core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        result_1 = &data_c83dc8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83e00);
        var_a0 = "alacritty::renderer::text::gles2…";
        let var_98_2: i64 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        let var_88_2: i64 = 0x20;
        let var_80_2: i64 = rax_5;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    if rbx != 0 && core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        result_1 = &data_c83dd8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        let rax_7: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83e18);
        var_a0 = "alacritty::renderer::text::gles2…";
        let var_98_3: i64 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        let var_88_3: i64 = 0x20;
        let var_80_3: i64 = rax_7;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    alacritty::renderer::text::gles2::TextShaderProgram::new::hb8d7a57899d23c48(&result_1, rbx);
    let result: *mut *mut [i8; 0xc0] = result_1;
    let rdx_3: i32 = var_d0;
    
    if result != 4
    {
        *arg1.byte_offset(0x24) = *var_c0[4];
        *arg1.byte_offset(0x1c) = var_c8;
        *arg1.byte_offset(8) = result;
        arg1[1] = rdx_3;
        *arg1.byte_offset(0x14) = var_d0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_e4: i32 = 0;
    let mut var_e0: i32 = 0;
    let mut var_dc: i32 = 0;
    let mut rax_8: i64;
    let mut rdx_4: i64;
    rax_8 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(0x17ffa, 2, 2);
    let mut var_78: i64 = rax_8;
    let var_68_1: i64 = 0;
    let mut r12_1: i32 = 0;
    let mut rbp_1: i32 = 0;
    
    while rbp_1 != 0x3fff
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1 + 1);
        let r14_1: i16 = r12_1 + 3;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r14_1);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1 + 1);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1 + 2);
        r12_1 += 4;
        rbp_1 += 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r14_1);
    }
    
    *alacritty::gl::storage::Enable::hc33911a3f611e19c.0(0xbe2);
    *alacritty::gl::storage::DepthMask::h5bafd1e2e308f05c.0(0);
    *alacritty::gl::storage::GenVertexArrays::h4e7aa93504329e19.0(1, &var_e4);
    *alacritty::gl::storage::GenBuffers::h4563f51a284cec65.0(1, &var_dc);
    *alacritty::gl::storage::GenBuffers::h4563f51a284cec65.0(1, &var_e0);
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(var_e4);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8893, var_dc);
    *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8893, var_78 * 2, rdx_4, 0x88e4);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, var_e0);
    *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 0x17ffa0, 0, 0x88e0);
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(0, 2, 0x1402, 0, 0x18, 0, 
        rdx_3);
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(0);
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(1, 2, 0x1402, 0, 0x18, 4);
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(1);
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(2, 2, 0x1406, 0, 0x18, 8);
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(2);
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(3, 4, 0x1401, 0, 0x18, 0x10);
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(3);
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0(4, 4, 0x1401, 0, 0x18, 0x14);
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0(4);
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(0);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8893, 0);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, 0);
    let rbx_2: i32 = var_e4;
    let rbp_2: i32 = var_e0;
    let r15_1: i32 = var_dc;
    let rax_9: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x1c, 0);
    
    if rax_9 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&result_1, arg3);
    let zmm0_1: i128 = result_1;
    *(rax_9 + 0xc) = *var_d0[4];
    *rax_9 = zmm0_1;
    let var_48_1: i64 = 1;
    let var_40_1: u64 = rax_9;
    let var_38_1: i64 = 1;
    alacritty::renderer::text::gles2::Batch::new::h4d382938e71c57f0(&var_a0);
    let zmm0_2: i128 = var_48_1;
    result_1 = zmm0_2;
    let var_c0_1: i128 = var_a0;
    arg1[3] = *var_90[8];
    arg1[2] = var_c0_1;
    arg1[1] = var_38_1;
    *arg1.byte_offset(0x18) = var_c0_1;
    *arg1 = zmm0_2;
    *arg1.byte_offset(0x38) = 0;
    arg1[4] = rdx_3;
    *arg1.byte_offset(0x44) = var_d0;
    *arg1.byte_offset(0x4c) = rbx_2;
    arg1[5] = rbp_2;
    *arg1.byte_offset(0x54) = r15_1;
    *arg1.byte_offset(0x58) = 0;
    *arg1.byte_offset(0x5c) = rbx;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u16$GT$$GT$::hbd38f3de4748e35f(var_78, rdx_4)
}
