
  int64_t alacritty::renderer::text::builtin_font::Canvas::draw_h_line::h7e564f7e99323f00(void* arg1, int64_t arg2, float arg3, float arg4, int128_t arg5 @ zmm2)

{
    int128_t zmm0;
    int128_t zmm1;
    zmm0 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(
        *(arg1 + 0x20), arg2, arg4);
    int128_t zmm3;
    zmm3 = zmm1 - zmm0;
    /* tailcall */
    return alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(arg1, 
        arg3, zmm0, arg5, zmm3);
}
