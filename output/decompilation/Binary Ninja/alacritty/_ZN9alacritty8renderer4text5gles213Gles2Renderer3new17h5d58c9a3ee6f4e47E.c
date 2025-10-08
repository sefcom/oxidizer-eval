
  char const (** const )[0xc0] alacritty::renderer::text::gles2::Gles2Renderer::new::h5d58c9a3ee6f4e47(int128_t* arg1, char arg2, char arg3)

{
    char const (** const result_1)[0xc0];
    int64_t var_d0;
    int64_t var_c8;
    int64_t var_c0;
    char const* const var_a0;
    char const* const var_90;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        result_1 = &data_c83db8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c83de8);
        var_a0 = "alacritty::renderer::text::gles2…";
        int64_t var_98_1 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        int64_t var_88_1 = 0x20;
        int64_t var_80_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    char rbx;
    
    if (!arg2)
        rbx = 0;
    else
    {
        rbx = 1;
        
        if (!alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
                "GL_EXT_blend_func_extendedGL_ARB…", 0x1a))
            rbx = alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
                "GL_ARB_blend_func_extendedvaryin…", 0x1a);
    }
    
    if (arg3 && core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        result_1 = &data_c83dc8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c83e00);
        var_a0 = "alacritty::renderer::text::gles2…";
        int64_t var_98_2 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        int64_t var_88_2 = 0x20;
        int64_t var_80_2 = rax_5;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    if (rbx && core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        result_1 = &data_c83dd8;
        var_d0 = 1;
        var_c8 = 8;
        var_c0 = {0};
        int64_t rax_7 = log::__private_api::loc::h250021ea1f26630a(&data_c83e18);
        var_a0 = "alacritty::renderer::text::gles2…";
        int64_t var_98_3 = 0x20;
        var_90 = "alacritty::renderer::text::gles2…";
        int64_t var_88_3 = 0x20;
        int64_t var_80_3 = rax_7;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_a0);
    }
    
    alacritty::renderer::text::gles2::TextShaderProgram::new::hb8d7a57899d23c48(&result_1, rbx);
    char const (** const result)[0xc0] = result_1;
    int32_t rdx_3 = var_d0;
    
    if (result != 4)
    {
        *(arg1 + 0x24) = *var_c0[4];
        *(arg1 + 0x1c) = var_c8;
        *(arg1 + 8) = result;
        arg1[1] = rdx_3;
        *(arg1 + 0x14) = var_d0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int32_t var_e4 = 0;
    int32_t var_e0 = 0;
    int32_t var_dc = 0;
    int64_t rax_8;
    int64_t rdx_4;
    rax_8 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(0x17ffa, 2, 2);
    int64_t var_78 = rax_8;
    int64_t var_68_1 = 0;
    int32_t r12_1 = 0;
    int32_t rbp_1 = 0;
    
    while (rbp_1 != 0x3fff)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h4f07dbb9e4bb57d1(&var_78, r12_1 + 1);
        int16_t r14_1 = r12_1 + 3;
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
    int32_t rbx_2 = var_e4;
    int32_t rbp_2 = var_e0;
    int32_t r15_1 = var_dc;
    uint64_t rax_9 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x1c, 0);
    
    if (!rax_9)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&result_1, arg3);
    int128_t zmm0_1 = result_1;
    *(rax_9 + 0xc) = *var_d0[4];
    *rax_9 = zmm0_1;
    int64_t var_48_1 = 1;
    uint64_t var_40_1 = rax_9;
    int64_t var_38_1 = 1;
    alacritty::renderer::text::gles2::Batch::new::h4d382938e71c57f0(&var_a0);
    int128_t zmm0_2 = var_48_1;
    result_1 = zmm0_2;
    int128_t var_c0_1 = var_a0;
    arg1[3] = *var_90[8];
    arg1[2] = var_c0_1;
    arg1[1] = var_38_1;
    *(arg1 + 0x18) = var_c0_1;
    *arg1 = zmm0_2;
    *(arg1 + 0x38) = 0;
    arg1[4] = rdx_3;
    *(arg1 + 0x44) = var_d0;
    *(arg1 + 0x4c) = rbx_2;
    arg1[5] = rbp_2;
    *(arg1 + 0x54) = r15_1;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x5c) = rbx;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u16$GT$$GT$::hbd38f3de4748e35f(var_78, 
        rdx_4);
}
