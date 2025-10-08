
  char const (** const )[0x98] alacritty::renderer::text::glsl3::Glsl3Renderer::new::hfee88dad790d71d0(int128_t* arg1)

{
    char const (** const result_1)[0x98];
    int32_t var_80;
    char* var_7c;
    int64_t var_70;
    char const* const var_58;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        result_1 = &data_c83f50;
        var_80 = 1;
        var_7c = 8;
        var_70 = {0};
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c83f60);
        var_58 = "alacritty::renderer::text::glsl3…";
        int32_t var_50 = 0x20;
        char const* const var_48_1 = "alacritty::renderer::text::glsl3…";
        int64_t var_40_1 = 0x20;
        int64_t var_38_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_58);
    }
    
    alacritty::renderer::text::glsl3::TextShaderProgram::new::h33d0a0950f87c578(&result_1);
    char const (** const result)[0x98] = result_1;
    int32_t rbp = var_80;
    char* var_98 = var_7c;
    int32_t var_74;
    
    if (result != 4)
    {
        *(arg1 + 0x1c) = var_74;
        *(arg1 + 0x14) = var_98;
        *(arg1 + 8) = result;
        arg1[1] = rbp;
        arg1[2] = var_70;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        var_58 = var_98;
        int32_t var_a0 = 0;
        int32_t var_9c = 0;
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
        int32_t r15_1 = var_a0;
        int32_t r12_1 = var_9c;
        int32_t r13_1 = var_98;
        uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x1c, 0);
        
        if (!rax_4)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&result_1, 0);
        int128_t zmm0_1 = result_1;
        *(rax_4 + 0xc) = var_7c;
        *rax_4 = zmm0_1;
        result_1 = 1;
        var_80 = rax_4;
        var_7c = 1;
        int64_t rdx_3;
        result = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(0x10000, 
            4, 0x24);
        *(arg1 + 0x44) = var_74;
        *(arg1 + 0x3c) = var_58;
        *arg1 = result_1;
        arg1[1] = var_7c;
        *(arg1 + 0x18) = result;
        arg1[2] = rdx_3;
        *(arg1 + 0x28) = 0;
        arg1[3] = 0;
        *(arg1 + 0x38) = rbp;
        *(arg1 + 0x48) = 0;
        arg1[5] = r15_1;
        *(arg1 + 0x54) = r12_1;
        *(arg1 + 0x58) = r13_1;
        *(arg1 + 0x5c) = 0;
    }
    return result;
}
