
  fn alacritty::renderer::Renderer::draw_rects::h606367b22cf56106(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    if arg4[2] == 0
    {
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..renderer..rects..RenderRect$GT$$GT$::h94ef7d2648f7c2a7(*arg4, arg4[1]);
    }
    
    let zmm0: f32 = *arg2.byte_offset(0x10);
    let zmm1: f32 = *arg2.byte_offset(0x14);
    let mut rbx: i32 = zmm0;
    
    if zmm0 > 2.14748352e+09f
    {
        rbx = 0x7fffffff;
    }
    
    if FCMP_UO(zmm0, zmm0)
    {
        rbx = 0;
    }
    
    let mut rbp: i32 = zmm1;
    
    if zmm1 > 2.14748352e+09f
    {
        rbp = 0x7fffffff;
    }
    
    if FCMP_UO(zmm1, zmm1)
    {
        rbp = 0;
    }
    
    *alacritty::gl::storage::Viewport::h10fb47e81d67ad16.0(0, 0, rbx, rbp);
    *alacritty::gl::storage::BlendFuncSeparate::h7d481c558c32e51c.0(0x302, 0x303, 0x302, 1);
    alacritty::renderer::rects::RectRenderer::draw::h05f0911b3e695cab(arg1.byte_offset(0x68), arg2, 
        arg3, arg4);
    *alacritty::gl::storage::BlendFunc::ha142700221b021d9.0(0x88f9, 0x88fa);
    *arg2.byte_offset(0x20);
    *arg2.byte_offset(0x24);
    /* jump -> *alacritty::gl::storage::Viewport::h10fb47e81d67ad16.0 */
}
