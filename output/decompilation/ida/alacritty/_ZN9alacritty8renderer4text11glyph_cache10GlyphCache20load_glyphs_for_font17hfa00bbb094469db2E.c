__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v4; // r15d
  __int64 result; // rax
  unsigned __int8 v6; // dl
  __int16 v7; // [rsp+9h] [rbp-5Fh] BYREF
  char v8; // [rsp+Bh] [rbp-5Dh]
  _DWORD v9[3]; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v10[80]; // [rsp+18h] [rbp-50h] BYREF

  v4 = *(_DWORD *)(a1 + 288);
  v7 = 0x2000;
  v8 = 126;
  for ( result = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v7);
        (result & 1) != 0;
        result = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v7) )
  {
    v9[0] = v6;
    v9[1] = a2;
    v9[2] = v4;
    alacritty::renderer::text::glyph_cache::GlyphCache::get(v10, a1, v9, a3);
  }
  return result;
}