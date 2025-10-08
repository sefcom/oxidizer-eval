
  int64_t alacritty::renderer::rects::RectRenderer::draw::h05f0911b3e695cab(void* arg1, void* arg2, void* arg3, int64_t* arg4)

{
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(*(arg1 + 0x150));
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, *(arg1 + 0x154));
    float zmm0[0x4] = 0x3f000000;
    float zmm1[0x4] = *(arg2 + 0x10);
    zmm1[0] = zmm1[0] * 0.5f;
    float var_48 = zmm1[0];
    zmm0[0] = 0.5f * *(arg2 + 0x14);
    float var_44 = zmm0[0];
    _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::for_each::h63f0595415f0a681(arg1);
    int64_t* r14 = arg4[1];
    void* rbp = &r14[arg4[2] * 3];
    int64_t* rsi_2 = r14;
    
    while (true)
    {
        int64_t* rbx_1 = &rsi_2[3];
        
        if (rsi_2 == rbp)
            rbx_1 = rsi_2;
        
        if (rsi_2 == rbp)
            break;
        
        uint64_t rax_2 = *(rsi_2 + 0x17);
        
        if (rax_2 >= 4)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(4, 4);
            /* no return */
        }
        
        alacritty::renderer::rects::RectRenderer::add_rect::h35912be66eb425f4(arg1 + rax_2 * 0x18, 
            rsi_2, var_48, var_44);
        rsi_2 = rbx_1;
    }
    
    if (*(arg1 + 0x58))
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*(arg1 + 0x14c));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1 + 0x114, arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, *(arg1 + 0x58) * 0xc, 
            *(arg1 + 0x50), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *(arg1 + 0x58));
    }
    
    if (*(arg1 + 0x40))
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*(arg1 + 0x110));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1 + 0xd8, arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, *(arg1 + 0x40) * 0xc, 
            *(arg1 + 0x38), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *(arg1 + 0x40));
    }
    
    if (*(arg1 + 0x28))
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*(arg1 + 0xd4));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1 + 0x9c, arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, *(arg1 + 0x28) * 0xc, 
            *(arg1 + 0x20), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *(arg1 + 0x28));
    }
    
    if (*(arg1 + 0x10))
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*(arg1 + 0x98));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1 + 0x60, arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, *(arg1 + 0x10) * 0xc, 
            *(arg1 + 8), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *(arg1 + 0x10));
    }
    
    *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(0);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, 0);
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(0);
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..renderer..rects..RenderRect$GT$$GT$::h94ef7d2648f7c2a7(*arg4, r14);
}
