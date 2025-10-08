
  fn alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(arg1: *mut c_void, arg2: i64, arg3: f32, arg4: f32, arg5: i128 @ zmm2) -> i64

{
    let mut zmm0: i128;
    let mut zmm1: i128;
    zmm0 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(
        *arg1.byte_offset(0x20), arg2, arg4);
    let mut zmm3: i128;
    zmm3 = zmm1 - zmm0;
    /* tailcall */
    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(arg1, arg3, zmm0, 
        arg5, zmm3)
}
