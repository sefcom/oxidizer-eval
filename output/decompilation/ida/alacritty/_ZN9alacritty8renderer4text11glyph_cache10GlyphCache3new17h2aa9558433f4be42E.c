__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::new(char *dest, void *src, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r13d
  int v7; // r15d
  int v8; // edx
  __int64 v9; // rax
  __int16 v10; // r14
  char v11; // r12
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int64 result; // rax
  __int128 v15; // xmm0
  char v16; // [rsp+6h] [rbp-1F2h]
  unsigned __int8 v17; // [rsp+7h] [rbp-1F1h]
  unsigned int v18; // [rsp+8h] [rbp-1F0h]
  int v19; // [rsp+Ch] [rbp-1ECh]
  __int128 v20; // [rsp+10h] [rbp-1E8h]
  __int128 v21; // [rsp+20h] [rbp-1D8h]
  __int64 v22; // [rsp+30h] [rbp-1C8h]
  _OWORD srca[20]; // [rsp+B0h] [rbp-148h] BYREF

  alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys(srca, a3, src);
  v4 = *(_QWORD *)&srca[0];
  v5 = DWORD2(srca[0]);
  v6 = HIDWORD(srca[0]);
  v7 = srca[1];
  v8 = DWORD1(srca[1]);
  if ( *(_QWORD *)&srca[0] == 7LL )
  {
    v19 = DWORD1(srca[1]);
    v17 = *(_BYTE *)(a3 + 199);
    v18 = *(_DWORD *)(a3 + 192);
    alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics(srca, src, v18, v17, DWORD2(srca[0]));
    v9 = *(_QWORD *)&srca[0];
    v20 = *(_OWORD *)((char *)srca + 8);
    v21 = *(_OWORD *)((char *)&srca[1] + 8);
    v22 = *((_QWORD *)&srca[2] + 1);
    if ( *(_QWORD *)&srca[0] == 7LL )
    {
      ahash::random_state::RandomState::new(srca);
      memcpy((char *)&srca[6] + 8, src, 0xA8uLL);
      v10 = *(_WORD *)(a3 + 196);
      v16 = *(_BYTE *)(a3 + 198);
      v11 = *(_BYTE *)(a3 + 201);
      v12 = srca[0];
      v13 = srca[1];
      srca[0] = *(_OWORD *)&off_875358;
      srca[1] = xmmword_875368;
      srca[2] = v12;
      srca[3] = v13;
      srca[4] = v20;
      srca[5] = v21;
      *(_QWORD *)&srca[6] = v22;
      memcpy(dest, srca, 0x110uLL);
      *((_DWORD *)dest + 68) = v5;
      *((_DWORD *)dest + 69) = v6;
      *((_DWORD *)dest + 70) = v7;
      *((_DWORD *)dest + 71) = v19;
      *((_DWORD *)dest + 72) = v18;
      *((_WORD *)dest + 146) = v10;
      dest[294] = v16;
      result = v17;
      dest[295] = v17;
      dest[296] = v11;
      return result;
    }
    *((_OWORD *)dest + 3) = srca[3];
    *((_QWORD *)dest + 5) = v22;
    *(_OWORD *)(dest + 24) = v21;
    *(_OWORD *)(dest + 8) = v20;
    *(_QWORD *)dest = v9;
  }
  else
  {
    *((_QWORD *)dest + 7) = *((_QWORD *)&srca[3] + 1);
    v15 = *(_OWORD *)((char *)&srca[1] + 8);
    *(_OWORD *)(dest + 40) = *(_OWORD *)((char *)&srca[2] + 8);
    *(_OWORD *)(dest + 24) = v15;
    *(_QWORD *)dest = v4;
    *((_DWORD *)dest + 2) = v5;
    *((_DWORD *)dest + 3) = v6;
    *((_DWORD *)dest + 4) = v7;
    *((_DWORD *)dest + 5) = v8;
  }
  *((_DWORD *)dest + 66) = 1000000001;
  return core::ptr::drop_in_place<crossfont::ft::FreeTypeRasterizer>(src);
}