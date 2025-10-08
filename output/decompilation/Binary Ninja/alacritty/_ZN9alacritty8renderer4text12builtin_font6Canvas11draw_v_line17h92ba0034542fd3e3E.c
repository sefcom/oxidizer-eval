
  int64_t alacritty::renderer::text::builtin_font::Canvas::draw_v_line::h92ba0034542fd3e3(void* arg1, int64_t arg2, float arg3, int32_t arg4 @ zmm1, int128_t arg5 @ zmm2)

{
    int32_t var_c = arg5;
    int128_t zmm0;
    int128_t zmm1;
    zmm0 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(
        *(arg1 + 0x18), arg2, arg3);
    arg5 = zmm1 - zmm0;
    /* tailcall */
    return alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(arg1, 
        zmm0, arg4, arg5, var_c);
}
