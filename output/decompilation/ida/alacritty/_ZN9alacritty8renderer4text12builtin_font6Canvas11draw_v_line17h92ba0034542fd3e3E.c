__int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::draw_v_line(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        float a5)
{
  double v5; // xmm2_8

  *(float *)&a3 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(
                    *(_QWORD *)(a1 + 24),
                    a2,
                    *(float *)&a3);
  HIDWORD(v5) = HIDWORD(a4);
  *(float *)&v5 = *(float *)&a4 - *(float *)&a3;
  return alacritty::renderer::text::builtin_font::Canvas::draw_rect(
           a1,
           a3,
           COERCE_DOUBLE((unsigned __int64)LODWORD(a4)),
           v5,
           COERCE_DOUBLE((unsigned __int64)LODWORD(a5)));
}