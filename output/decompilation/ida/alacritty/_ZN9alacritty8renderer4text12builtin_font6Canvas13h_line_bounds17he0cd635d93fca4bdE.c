float __fastcall alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(unsigned int a1, __int64 a2, float a3)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // rdi
  __int64 v7; // rdi
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]

  if ( a2 < 0 )
    v4 = (float)(int)(((unsigned __int64)a2 >> 1) | a2 & 1) + (float)(int)(((unsigned __int64)a2 >> 1) | a2 & 1);
  else
    v4 = (float)(int)a2;
  v9 = v4 * 0.5;
  v5 = a3 - (float)(v4 * 0.5);
  v6 = (unsigned int)(int)v5;
  if ( v5 > 2147483500.0 )
    v6 = 0x7FFFFFFFLL;
  v10 = (float)(int)core::cmp::Ord::max(v6, 0LL);
  v7 = (unsigned int)(int)(float)(v9 + a3);
  if ( (float)(v9 + a3) > 2147483500.0 )
    v7 = 0x7FFFFFFFLL;
  core::cmp::Ord::min(v7, a1);
  return v10;
}