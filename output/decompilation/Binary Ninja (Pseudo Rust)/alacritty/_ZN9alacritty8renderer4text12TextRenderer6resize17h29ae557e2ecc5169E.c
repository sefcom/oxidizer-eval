
  fn alacritty::renderer::text::TextRenderer::resize::h29ae557e2ecc5169(arg1: i64, arg2: *mut c_void) -> i64

{
    let rax: *mut i32 = _$LT$alacritty..renderer..text..glsl3..Glsl3Renderer$u20$as$u20$alacritty..renderer..text..TextRenderer$GT$::program::heb273d7928d7c1fb(arg1);
    *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0(*rax);
    alacritty::renderer::text::update_projection::h3b47cfa7fc1313de(rax[1], arg2);
    /* jump -> *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0 */
}
