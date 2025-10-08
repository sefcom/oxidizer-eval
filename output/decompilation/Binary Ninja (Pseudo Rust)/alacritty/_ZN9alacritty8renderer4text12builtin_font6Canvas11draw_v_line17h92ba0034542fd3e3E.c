
  fn alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(arg1: *mut c_void, arg2: i64, arg3: f32, arg4: i32 @ zmm1, arg5: i128 @ zmm2) -> i64

{
    let var_c: i32 = arg5;
    let mut zmm0: i128;
    let mut zmm1: i128;
    zmm0 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(
        *arg1.byte_offset(0x18), arg2, arg3);
    arg5 = zmm1 - zmm0;
    /* tailcall */
    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(arg1, zmm0, arg4, 
        arg5, var_c)
}
