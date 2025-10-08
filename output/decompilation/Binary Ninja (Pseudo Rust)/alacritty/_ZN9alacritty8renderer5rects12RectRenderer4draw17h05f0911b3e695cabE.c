
  fn alacritty::renderer::rects::RectRenderer::draw::h05f0911b3e695cab(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(*arg1.byte_offset(0x150));
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, *arg1.byte_offset(0x154));
    let zmm0: [f32; 0x4] = 0x3f000000;
    let zmm1: [f32; 0x4] = *arg2.byte_offset(0x10);
    zmm1[0] = zmm1[0] * 0.5f;
    let var_48: f32 = zmm1[0];
    zmm0[0] = 0.5f * *arg2.byte_offset(0x14);
    let var_44: f32 = zmm0[0];
    _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::for_each::h63f0595415f0a681(arg1);
    let r14: *mut i64 = arg4[1];
    let rbp: *mut c_void = &r14[arg4[2] * 3];
    let mut rsi_2: *mut i64 = r14;
    
    loop
    {
        let mut rbx_1: *mut i64 = &rsi_2[3];
        
        if rsi_2 == rbp
        {
            rbx_1 = rsi_2;
        }
        
        if rsi_2 == rbp
        {
            break;
        }
        
        let rax_2: u64 = *rsi_2.byte_offset(0x17);
        
        if rax_2 >= 4
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(4, 4);
            /* no return */
        }
        
        alacritty::renderer::rects::RectRenderer::add_rect::h35912be66eb425f4(
            arg1.byte_offset(rax_2 * 0x18), rsi_2, var_48, var_44);
        rsi_2 = rbx_1;
    }
    
    if *arg1.byte_offset(0x58) != 0
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*arg1.byte_offset(0x14c));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1.byte_offset(0x114), arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 
            *arg1.byte_offset(0x58) * 0xc, *arg1.byte_offset(0x50), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *arg1.byte_offset(0x58));
    }
    
    if *arg1.byte_offset(0x40) != 0
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*arg1.byte_offset(0x110));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1.byte_offset(0xd8), arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 
            *arg1.byte_offset(0x40) * 0xc, *arg1.byte_offset(0x38), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *arg1.byte_offset(0x40));
    }
    
    if *arg1.byte_offset(0x28) != 0
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*arg1.byte_offset(0xd4));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1.byte_offset(0x9c), arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 
            *arg1.byte_offset(0x28) * 0xc, *arg1.byte_offset(0x20), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *arg1.byte_offset(0x28));
    }
    
    if *arg1.byte_offset(0x10) != 0
    {
        *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*arg1.byte_offset(0x98));
        alacritty::renderer::rects::RectShaderProgram::update_uniforms::hd47b20415d4b0768(
            arg1.byte_offset(0x60), arg2, arg3);
        *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0(0x8892, 
            *arg1.byte_offset(0x10) * 0xc, *arg1.byte_offset(8), 0x88e0);
        *alacritty::gl::storage::DrawArrays::ha51bda91551dee03.0(4, 0, *arg1.byte_offset(0x10));
    }
    
    *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(0);
    *alacritty::gl::storage::BindBuffer::h43fb2d60276f0a9b.0(0x8892, 0);
    *alacritty::gl::storage::BindVertexArray::h3d998acb574d7edf.0(0);
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..renderer..rects..RenderRect$GT$$GT$::h94ef7d2648f7c2a7(*arg4, r14)
}
