__int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
        __int64 a1,
        __int64 a2,
        float a3,
        double a4,
        float a5)
{
  double v5; // xmm0_8
  double v6; // xmm3_8

  HIDWORD(v5) = HIDWORD(a4);
  *(float *)&v5 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(
                    *(_QWORD *)(a1 + 32),
                    a2,
                    *(float *)&a4);
  HIDWORD(v6) = HIDWORD(a4);
  *(float *)&v6 = *(float *)&a4 - *(float *)&v5;
  return alacritty::renderer::text::builtin_font::Canvas::draw_rect(
           a1,
           COERCE_DOUBLE((unsigned __int64)LODWORD(a3)),
           v5,
           COERCE_DOUBLE((unsigned __int64)LODWORD(a5)),
           v6);
}