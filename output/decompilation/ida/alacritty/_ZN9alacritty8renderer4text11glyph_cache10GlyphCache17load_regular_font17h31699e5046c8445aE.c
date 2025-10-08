__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _QWORD v6[6]; // [rsp+0h] [rbp-1A8h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-178h] BYREF
  __int128 v8; // [rsp+40h] [rbp-168h] BYREF
  __int128 v9; // [rsp+50h] [rbp-158h]
  __int128 v10; // [rsp+60h] [rbp-148h]
  __int128 v11; // [rsp+70h] [rbp-138h]
  _OWORD v12[4]; // [rsp+80h] [rbp-128h] BYREF
  _QWORD v13[29]; // [rsp+C0h] [rbp-E8h] BYREF

  result = <crossfont::ft::FreeTypeRasterizer as crossfont::Rasterize>::load_font(&v8);
  if ( (_DWORD)v8 == 7 )
  {
    v3 = v8;
    v4 = v9;
    v5 = v10;
    a1[3] = v11;
    a1[2] = v5;
    a1[1] = v4;
    *a1 = v3;
  }
  else
  {
    v12[3] = v11;
    v12[2] = v10;
    v12[1] = v9;
    v12[0] = v8;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v7[0] = v12;
      v7[1] = <crossfont::Error as core::fmt::Display>::fmt;
      v13[0] = &xmmword_E8B60;
      v13[1] = 1LL;
      v13[4] = 0LL;
      v13[2] = v7;
      v13[3] = 1LL;
      v6[0] = aAlacrittyRende_3;
      v6[1] = 38LL;
      v6[2] = aAlacrittyRende_3;
      v6[3] = 38LL;
      v6[4] = log::__private_api::loc(&off_883FA8);
      log::__private_api::log(v13, 1LL, v6);
    }
    <alacritty::config::font::Font as core::default::Default>::default(v13);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(v6, v13, 0LL, 0LL);
    core::ptr::drop_in_place<alacritty::config::font::Font>(v13);
    <crossfont::ft::FreeTypeRasterizer as crossfont::Rasterize>::load_font(a1);
    core::ptr::drop_in_place<crossfont::FontDesc>(v6);
    return core::ptr::drop_in_place<crossfont::Error>(v12, a2);
  }
  return result;
}