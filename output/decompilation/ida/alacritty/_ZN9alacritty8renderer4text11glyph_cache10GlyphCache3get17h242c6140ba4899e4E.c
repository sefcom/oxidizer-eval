__int128 *__fastcall alacritty::renderer::text::glyph_cache::GlyphCache::get(
        _OWORD *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        char a5)
{
  __int128 *result; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 inner; // rax
  __int128 v12; // xmm0
  char v13; // bp
  __int128 v14; // xmm0
  _BYTE v15[12]; // [rsp+Ch] [rbp-17Ch] BYREF
  __int64 v16; // [rsp+18h] [rbp-170h]
  _BYTE v17[64]; // [rsp+20h] [rbp-168h] BYREF
  __int128 v18; // [rsp+60h] [rbp-128h] BYREF
  __int128 v19; // [rsp+70h] [rbp-118h]
  __int64 v20; // [rsp+88h] [rbp-100h] BYREF
  __int128 v21; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-E8h]
  __int128 v23; // [rsp+B0h] [rbp-D8h]
  __int128 v24; // [rsp+C0h] [rbp-C8h]
  __int128 v25; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-A8h]
  _OWORD v27[2]; // [rsp+F0h] [rbp-98h] BYREF
  _OWORD v28[7]; // [rsp+110h] [rbp-78h] BYREF

  result = (__int128 *)hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, a3);
  if ( result )
  {
    v9 = *(__int128 *)((char *)result + 12);
    a1[1] = *(__int128 *)((char *)result + 28);
    *a1 = v9;
  }
  else
  {
    v10 = 2LL;
    if ( *(_BYTE *)(a2 + 296) == 1 )
    {
      alacritty::renderer::text::builtin_font::builtin_glyph(
        &v20,
        *a3,
        a2 + 64,
        *(_DWORD *)(a2 + 292),
        *(_BYTE *)(a2 + 293),
        *(_BYTE *)(a2 + 294),
        *(_BYTE *)(a2 + 295));
      v10 = v20;
      *(_OWORD *)&v17[8] = v21;
      *(_OWORD *)&v17[24] = v22;
      *(_OWORD *)&v17[40] = v23;
      *(_QWORD *)&v17[56] = v24;
    }
    *(_QWORD *)v17 = v10;
    core::option::Option<T>::map_or_else(&v20, v17, a2 + 104, a3);
    v16 = v20;
    if ( v20 == 1 )
    {
      if ( a5 && (unsigned __int64)(v21 - 2) > 4 )
      {
        *(_DWORD *)v15 = 0;
        *(_QWORD *)&v15[4] = *(_QWORD *)(a3 + 1);
        inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, v15);
        if ( inner )
        {
          v12 = *(_OWORD *)(inner + 12);
          v26 = *(_OWORD *)(inner + 28);
          v25 = v12;
          core::ptr::drop_in_place<crossfont::RasterizedGlyph>(&v21);
        }
        else
        {
          *(_OWORD *)&v17[48] = v24;
          *(_OWORD *)&v17[32] = v23;
          *(_OWORD *)&v17[16] = v22;
          *(_OWORD *)v17 = v21;
          alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph(v27, a2, a4, v17);
          DWORD2(v18) = *(_DWORD *)&v15[8];
          *(_QWORD *)&v18 = *(_QWORD *)v15;
          hashbrown::map::HashMap<K,V,S,A>::insert(v17, a2, &v18, v27);
          v25 = v27[0];
          v26 = v27[1];
        }
        v13 = 0;
      }
      else
      {
        *(_DWORD *)&v17[40] = 32;
        *(_OWORD *)v17 = 0LL;
        *(_OWORD *)&v17[44] = 0LL;
        *(_QWORD *)&v17[16] = 1LL;
        *(_OWORD *)&v17[24] = 0LL;
        alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph(&v25, a2, a4, v17);
        v13 = 1;
      }
    }
    else
    {
      v28[3] = v24;
      v28[2] = v23;
      v28[1] = v22;
      v28[0] = v21;
      v13 = 1;
      alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph(&v25, a2, a4, v28);
    }
    DWORD2(v18) = a3[2];
    *(_QWORD *)&v18 = *(_QWORD *)a3;
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(v17, a2, &v18);
    if ( *(_DWORD *)&v17[16] == (_DWORD)&unk_110000 )
    {
      v18 = *(_OWORD *)v17;
      LODWORD(v19) = (_DWORD)&unk_110000;
    }
    else
    {
      v19 = *(_OWORD *)&v17[16];
      v18 = *(_OWORD *)v17;
    }
    result = (__int128 *)std::collections::hash::map::Entry<K,V>::or_insert(&v18, &v25);
    v14 = *result;
    a1[1] = result[1];
    *a1 = v14;
    if ( (_BYTE)v16 )
    {
      result = (__int128 *)(v21 - 2);
      if ( (unsigned __int64)(v21 - 2) <= 4 )
      {
        return (__int128 *)core::ptr::drop_in_place<crossfont::Error>(&v21, &v25);
      }
      else if ( v13 )
      {
        return (__int128 *)core::ptr::drop_in_place<crossfont::RasterizedGlyph>(&v21);
      }
    }
  }
  return result;
}