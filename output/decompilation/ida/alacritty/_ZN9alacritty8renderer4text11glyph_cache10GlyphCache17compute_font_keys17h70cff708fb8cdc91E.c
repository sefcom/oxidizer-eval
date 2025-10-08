__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // r13d
  int v6; // ebp
  int v7; // r15d
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v12; // [rsp+8h] [rbp-160h] BYREF
  int v13; // [rsp+Ch] [rbp-15Ch] BYREF
  _BYTE v14[60]; // [rsp+10h] [rbp-158h] BYREF
  int v15; // [rsp+4Ch] [rbp-11Ch]
  _QWORD v16[4]; // [rsp+58h] [rbp-110h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-F0h] BYREF
  _OWORD v18[3]; // [rsp+A8h] [rbp-C0h] BYREF
  _OWORD v19[3]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v20[96]; // [rsp+108h] [rbp-60h] BYREF

  v12 = *(_DWORD *)(a2 + 192);
  alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(v20, a2, 0LL, 0LL);
  alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font(v14, a3, v20, v12);
  v4 = *(_QWORD *)v14;
  v5 = *(_DWORD *)&v14[8];
  if ( *(_QWORD *)v14 == 7LL )
  {
    v13 = *(_DWORD *)&v14[8];
    v16[0] = v20;
    v16[1] = &v13;
    v16[2] = a3;
    v16[3] = &v12;
    alacritty::config::font::Font::bold((__int64)v14, a2);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(v17, v14, 0LL, 1LL);
    core::ptr::drop_in_place<alacritty::config::font::FontDescription>(v14);
    *(_OWORD *)&v14[32] = v17[2];
    *(_OWORD *)&v14[16] = v17[1];
    *(_OWORD *)v14 = v17[0];
    v6 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::{{closure}}(v16, v14);
    alacritty::config::font::Font::italic((__int64)v14, a2);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(v18, v14, 1LL, 0LL);
    core::ptr::drop_in_place<alacritty::config::font::FontDescription>(v14);
    *(_OWORD *)&v14[32] = v18[2];
    *(_OWORD *)&v14[16] = v18[1];
    *(_OWORD *)v14 = v18[0];
    v7 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::{{closure}}(v16, v14);
    alacritty::config::font::Font::bold_italic((__int64)v14, a2);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc(v19, v14, 1LL, 1LL);
    core::ptr::drop_in_place<alacritty::config::font::FontDescription>(v14);
    *(_OWORD *)&v14[32] = v19[2];
    *(_OWORD *)&v14[16] = v19[1];
    *(_OWORD *)v14 = v19[0];
    v8 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::{{closure}}(v16, v14);
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 20) = v8;
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    *(_DWORD *)(a1 + 60) = v15;
    v9 = *(_OWORD *)&v14[12];
    v10 = *(_OWORD *)&v14[28];
    *(_OWORD *)(a1 + 44) = *(_OWORD *)&v14[44];
    *(_OWORD *)(a1 + 28) = v10;
    *(_OWORD *)(a1 + 12) = v9;
    *(_QWORD *)a1 = v4;
    *(_DWORD *)(a1 + 8) = v5;
  }
  return core::ptr::drop_in_place<crossfont::FontDesc>(v20);
}