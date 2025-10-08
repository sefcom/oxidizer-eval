__int64 __fastcall alacritty::renderer::text::builtin_font::calculate_stroke_size(__int64 a1, double a2)
{
  double v2; // xmm0_8
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( a1 < 0 )
    *(float *)&a2 = (float)(int)(((unsigned __int64)a1 >> 1) | a1 & 1)
                  + (float)(int)(((unsigned __int64)a1 >> 1) | a1 & 1);
  else
    *(float *)&a2 = (float)(int)a1;
  *(float *)&a2 = *(float *)&a2 * 0.125;
  v2 = roundf(a2);
  v3 = 0LL;
  if ( *(float *)&v2 >= 0.0 )
    v3 = (unsigned int)(int)*(float *)&v2;
  v4 = -1LL;
  if ( *(float *)&v2 <= 1.8446743e19 )
    v4 = v3;
  return core::cmp::Ord::max(v4, 1LL);
}