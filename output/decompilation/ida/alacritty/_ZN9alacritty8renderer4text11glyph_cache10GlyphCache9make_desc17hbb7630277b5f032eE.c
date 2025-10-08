__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4)
{
  unsigned __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  char v6; // [rsp+10h] [rbp-38h]
  char v7; // [rsp+11h] [rbp-37h]
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 24)) )
  {
    v7 = a3;
    v6 = a4;
    v5 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(&v5, a2 + 24);
  }
  <alloc::string::String as core::clone::Clone>::clone(v8, a2);
  return crossfont::FontDesc::new(a1, v8, &v5);
}