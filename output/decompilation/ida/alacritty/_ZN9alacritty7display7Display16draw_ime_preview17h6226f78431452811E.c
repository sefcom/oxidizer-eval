__int64 __fastcall alacritty::display::Display::draw_ime_preview(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rax
  int v7; // r12d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // ebp
  __int64 v18; // r13
  unsigned __int64 v19; // r15
  int v20; // r12d
  __int128 v21; // xmm0
  unsigned __int64 v25; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v26; // [rsp+30h] [rbp-188h]
  int v27; // [rsp+38h] [rbp-180h]
  _BYTE v28[8]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v29; // [rsp+68h] [rbp-150h]
  __int64 v30; // [rsp+70h] [rbp-148h]
  __int64 v31; // [rsp+78h] [rbp-140h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-F8h]
  __int128 v33; // [rsp+D0h] [rbp-E8h]
  __int64 v34; // [rsp+E0h] [rbp-D8h]

  v5 = *(_QWORD *)(a1 + 720);
  if ( v5 != 2 )
  {
    v7 = a2;
    v8 = *(_QWORD *)(a1 + 1952);
    v26 = v8;
    if ( (v5 & 1) != 0 && (*(_BYTE *)(a1 + 744) & 1) != 0 && *(_QWORD *)(a1 + 752) > v8 )
    {
      v9 = *(_QWORD *)(a1 + 1952);
      v10 = *(_QWORD *)(a1 + 728);
      v11 = *(_QWORD *)(a1 + 776);
      v12 = *(_QWORD *)(a1 + 784);
      v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v10,
              v11,
              v12);
      if ( !v13 )
        core::str::slice_error_fail(v11, v12, v10, v12, &off_882710);
      v15 = v13;
      v8 = v9;
      v16 = 1LL;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 776);
      v14 = *(_QWORD *)(a1 + 784);
      v16 = 0LL;
    }
    alacritty::string::StrShortener::new(&v31, v15, v14, v8, v16);
    core::iter::traits::iterator::Iterator::collect(v28, &v31);
    v17 = v29;
    v18 = v29 + v30;
    v19 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v29, v29 + v30);
    v27 = v7;
    v20 = 0;
    v25 = core::cmp::Ord::min(v19 + a3, v26);
    if ( v25 >= v19 )
      v20 = v25 - v19;
    v34 = *(_QWORD *)(a1 + 1624);
    v21 = *(_OWORD *)(a1 + 1592);
    v33 = *(_OWORD *)(a1 + 1608);
    v32 = v21;
    alacritty::renderer::Renderer::draw_string(a1 + 224, v27, v20, a4, a5, v17, v18, a1 + 1944, a1 + 1528);
  }
  return alacritty::display::window::Window::update_ime_position(a1 + 800, a2, a3, (float *)(a1 + 1944));
}