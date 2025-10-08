
  fn alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let zmm0: f32 = *arg2.byte_offset(0x20);
    let mut rax: i32 = zmm0;
    
    if zmm0 > 2.14748352e+09f
    {
        rax = 0x7fffffff;
    }
    
    if FCMP_UO(zmm0, zmm0)
    {
        rax = 0;
    }
    
    *arg2.byte_offset(0x24);
    *arg2.byte_offset(0x10);
    *arg2.byte_offset(0x14);
    *alacritty::gl::storage::Viewport::h10fb47e81d67ad16.0(rax);
    
    if *arg1 != 1
    {
        /* tailcall */
        return alacritty::renderer::text::TextRenderer::resize::h4301adbe248d70e5(&arg1[2], arg2);
    }
    
    /* tailcall */
    alacritty::renderer::text::TextRenderer::resize::h29ae557e2ecc5169(&arg1[2], arg2)
}
