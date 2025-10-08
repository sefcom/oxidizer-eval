__int64 __fastcall alacritty::renderer::text::TextRenderApi::draw_cell(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        float a4,
        float a5)
{
  __int64 v6; // rbx
  __int16 v7; // r13
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r12d
  __int128 *v11; // rcx
  unsigned int i; // eax
  __int128 *v14; // [rsp+8h] [rbp-C0h]
  unsigned int v15[3]; // [rsp+14h] [rbp-B4h] BYREF
  __int128 v16; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-98h]
  _QWORD v18[3]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-70h] BYREF
  _OWORD v20[5]; // [rsp+78h] [rbp-50h] BYREF

  v6 = (__int64)a2;
  v7 = *((_WORD *)a2 + 16);
  v8 = *(_DWORD *)(a3 + qword_10F760[v7 & 6]);
  v9 = *((_DWORD *)a2 + 7);
  if ( v9 == 9 || (v7 & 0x100) != 0 )
  {
    *((_DWORD *)a2 + 7) = 32;
    v9 = 32;
  }
  v10 = *(_DWORD *)(a3 + 288);
  *(_QWORD *)&v16 = __PAIR64__(v8, v9);
  DWORD2(v16) = v10;
  alacritty::renderer::text::glyph_cache::GlyphCache::get(v20, a3, (unsigned int *)&v16, a1, 1);
  alacritty::renderer::text::TextRenderApi::add_render_item(a1, (__int64)a2, v20, a4, a5);
  v11 = (__int128 *)a2[2];
  v14 = v11;
  if ( v11 )
  {
    v17 = *((_QWORD *)v11 + 2);
    v16 = *v11;
    *(_QWORD *)v11 = 0x8000000000000000LL;
    core::option::Option<T>::filter(v18, &v16, HIBYTE(v7) & 1);
    if ( v18[0] == 0x8000000000000000LL )
    {
      a2 = (_QWORD *)v18[1];
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u32>>>(0x8000000000000000LL);
    }
    else
    {
      a2 = v18;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v19, v18);
      for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v19);
            i != (_DWORD)&unk_110000;
            i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v19) )
      {
        v15[0] = i;
        v15[1] = v8;
        v15[2] = v10;
        alacritty::renderer::text::glyph_cache::GlyphCache::get(&v16, a3, v15, a1, 0);
        a2 = (_QWORD *)v6;
        alacritty::renderer::text::TextRenderApi::add_render_item(a1, v6, &v16, a4, a5);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<char>>(v19);
    }
  }
  else
  {
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u32>>>(0x8000000000000000LL);
  }
  return core::ptr::drop_in_place<alacritty::display::content::RenderableCell>(v14, a2);
}