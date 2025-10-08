char **__fastcall alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v6; // r12
  __int64 v7; // r13
  char **result; // rax
  int v9; // ebp
  int v10; // edi
  int v11; // esi
  int v12; // edx
  char v13; // cl
  signed int v14; // r12d
  float v15; // xmm0_4
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v20; // [rsp+8h] [rbp-E0h]
  float v21; // [rsp+Ch] [rbp-DCh] BYREF
  __int128 v22; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+20h] [rbp-C8h]
  __int64 v24; // [rsp+30h] [rbp-B8h]
  char **v25; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-A0h]
  __int128 v27; // [rsp+58h] [rbp-90h]
  _BYTE v28[24]; // [rsp+68h] [rbp-80h]
  _QWORD v29[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v30; // [rsp+90h] [rbp-58h]
  __int128 v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+B0h] [rbp-38h]

  v6 = *(_BYTE *)(a3 + 199);
  *(_DWORD *)(a2 + 292) = *(_DWORD *)(a3 + 196);
  v7 = a2 + 104;
  alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys((__int64)&v25, a3, a2 + 104);
  result = v25;
  v9 = v26;
  v10 = DWORD1(v26);
  v11 = DWORD2(v26);
  v12 = HIDWORD(v26);
  if ( v25 == (char **)&byte_7 )
  {
    v20 = HIDWORD(v26);
    v13 = v6;
    v14 = *(_DWORD *)(a3 + 192);
    alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics((__int64)&v25, v7, v14, v13, v26);
    result = v25;
    v22 = v26;
    v23 = v27;
    v24 = *(_QWORD *)v28;
    if ( v25 == (char **)&byte_7 )
    {
      v30 = v22;
      v31 = v23;
      v32 = v24;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
      {
        v15 = (double)v14 / 1000000.0;
        v21 = (float)(v15 * 96.0) / 72.0;
        v29[0] = &v21;
        v29[1] = core::fmt::float::<impl core::fmt::Debug for f32>::fmt;
        v25 = &off_883FC0;
        *(_QWORD *)&v26 = 2LL;
        *((_QWORD *)&v26 + 1) = v29;
        v27 = 1uLL;
        v16 = log::__private_api::loc(&off_883FE0);
        *(_QWORD *)&v22 = aAlacrittyRende_3;
        *((_QWORD *)&v22 + 1) = 38LL;
        *(_QWORD *)&v23 = aAlacrittyRende_3;
        *((_QWORD *)&v23 + 1) = 38LL;
        v24 = v16;
        log::__private_api::log(&v25, 3LL, &v22);
      }
      *(_DWORD *)(a2 + 288) = v14;
      *(_DWORD *)(a2 + 272) = v9;
      *(_DWORD *)(a2 + 276) = v10;
      *(_DWORD *)(a2 + 280) = v11;
      *(_DWORD *)(a2 + 284) = v20;
      v17 = v31;
      *(_OWORD *)(a2 + 64) = v30;
      *(_OWORD *)(a2 + 80) = v17;
      *(_QWORD *)(a2 + 96) = v32;
      result = (char **)*(unsigned __int8 *)(a3 + 201);
      *(_BYTE *)(a2 + 296) = (_BYTE)result;
      *(_QWORD *)a1 = 7LL;
    }
    else
    {
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v28[8];
      *(_QWORD *)(a1 + 40) = v24;
      v19 = v22;
      *(_OWORD *)(a1 + 24) = v23;
      *(_OWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = result;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v28[16];
    v18 = v27;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)v28;
    *(_OWORD *)(a1 + 24) = v18;
    *(_QWORD *)a1 = result;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 20) = v12;
  }
  return result;
}