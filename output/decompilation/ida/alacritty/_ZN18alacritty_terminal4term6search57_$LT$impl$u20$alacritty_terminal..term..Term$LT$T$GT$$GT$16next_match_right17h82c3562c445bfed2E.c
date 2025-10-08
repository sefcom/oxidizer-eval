__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::next_match_right(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  __int64 result; // rax
  char v15; // al
  int v16; // ecx
  __int128 v17; // xmm0
  int v18; // ecx
  char v19; // [rsp+7h] [rbp-141h] BYREF
  _DWORD v20[2]; // [rsp+8h] [rbp-140h]
  __int64 v21; // [rsp+10h] [rbp-138h] BYREF
  int v22; // [rsp+18h] [rbp-130h] BYREF
  __int128 v23; // [rsp+20h] [rbp-128h]
  __int128 v24; // [rsp+30h] [rbp-118h]
  __int64 v25; // [rsp+40h] [rbp-108h]
  unsigned int v26; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v27[4]; // [rsp+50h] [rbp-F8h] BYREF
  _OWORD v28[2]; // [rsp+70h] [rbp-D8h] BYREF
  char v29; // [rsp+90h] [rbp-B8h]
  _BYTE v30[7]; // [rsp+91h] [rbp-B7h]
  _OWORD v31[2]; // [rsp+98h] [rbp-B0h] BYREF
  char v32; // [rsp+B8h] [rbp-90h]
  _BYTE v33[7]; // [rsp+B9h] [rbp-8Fh]
  _BYTE v34[32]; // [rsp+C0h] [rbp-88h] BYREF
  char v35; // [rsp+E0h] [rbp-68h]
  __int64 v36; // [rsp+E8h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+F0h] [rbp-58h]
  __int64 v38; // [rsp+F8h] [rbp-50h]
  int v39; // [rsp+100h] [rbp-48h]
  __int64 v40; // [rsp+108h] [rbp-40h]
  _QWORD *v41; // [rsp+110h] [rbp-38h]
  __int16 v42; // [rsp+118h] [rbp-30h]

  v21 = a4;
  v22 = a5;
  v19 = a6;
  v9 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_left(a2, a5);
  v10 = v9;
  v25 = 0LL;
  v26 = v9;
  if ( (a7 & 1) != 0 )
  {
    v11 = alacritty_terminal::index::Line::grid_clamp((unsigned int)a8 + v9, a2[10], a2[24], 2LL);
    v12 = a2[23] - 1LL;
  }
  else
  {
    v12 = alacritty_terminal::index::Point::sub(0LL, v9, a2, 2LL);
    v11 = v13;
  }
  v36 = 0LL;
  v37 = v10;
  v38 = v12;
  v39 = v11;
  v40 = a3;
  v41 = a2;
  v42 = 1;
  v35 = 3;
  result = core::option::Option<T>::get_or_insert_with(v34, &v36);
  if ( v35 == 2 )
  {
    *(_BYTE *)(a1 + 32) = 2;
  }
  else
  {
    <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v28, v34);
    v27[0] = &v19;
    v27[1] = &v26;
    v27[2] = &v22;
    v27[3] = &v21;
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::try_fold(v31, v34, v27);
    v15 = v32;
    if ( v32 == 2 )
    {
      v23 = v28[0];
      v24 = v28[1];
      v15 = v29;
      v20[0] = *(_DWORD *)v30;
      v16 = *(_DWORD *)&v30[3];
    }
    else
    {
      v24 = v31[1];
      v23 = v31[0];
      v20[0] = *(_DWORD *)v33;
      v16 = *(_DWORD *)&v33[3];
    }
    *(_DWORD *)((char *)v20 + 3) = v16;
    v17 = v23;
    *(_OWORD *)(a1 + 16) = v24;
    *(_OWORD *)a1 = v17;
    *(_BYTE *)(a1 + 32) = v15;
    result = v20[0];
    v18 = *(_DWORD *)((char *)v20 + 3);
    *(_DWORD *)(a1 + 33) = v20[0];
    *(_DWORD *)(a1 + 36) = v18;
  }
  return result;
}