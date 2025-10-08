__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::next_match_left(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r12
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  __int64 result; // rax
  char v17; // al
  int v18; // ecx
  __int128 v19; // xmm0
  int v20; // ecx
  char v21; // [rsp+7h] [rbp-141h] BYREF
  _DWORD v22[2]; // [rsp+8h] [rbp-140h]
  __int64 v23; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-130h] BYREF
  __int128 v25; // [rsp+20h] [rbp-128h]
  __int128 v26; // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+40h] [rbp-108h]
  unsigned int v28; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-F8h] BYREF
  _OWORD v30[2]; // [rsp+70h] [rbp-D8h] BYREF
  char v31; // [rsp+90h] [rbp-B8h]
  _BYTE v32[7]; // [rsp+91h] [rbp-B7h]
  _OWORD v33[2]; // [rsp+98h] [rbp-B0h] BYREF
  char v34; // [rsp+B8h] [rbp-90h]
  _BYTE v35[7]; // [rsp+B9h] [rbp-8Fh]
  _BYTE v36[32]; // [rsp+C0h] [rbp-88h] BYREF
  char v37; // [rsp+E0h] [rbp-68h]
  __int64 v38; // [rsp+E8h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp-58h]
  __int64 v40; // [rsp+F8h] [rbp-50h]
  int v41; // [rsp+100h] [rbp-48h]
  __int64 v42; // [rsp+108h] [rbp-40h]
  __int64 v43; // [rsp+110h] [rbp-38h]
  __int16 v44; // [rsp+118h] [rbp-30h]

  v23 = a4;
  v24 = a5;
  v21 = a6;
  v9 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_right(a2, a5);
  v11 = v9;
  v12 = v10;
  v27 = v9;
  v28 = v10;
  if ( (a7 & 1) != 0 )
  {
    v13 = alacritty_terminal::index::Line::grid_clamp(
            v10 - (unsigned int)a8,
            *(_QWORD *)(a2 + 80),
            *(_QWORD *)(a2 + 192),
            2LL);
    v14 = 0LL;
  }
  else
  {
    v14 = alacritty_terminal::index::Point::add(v9, v10, a2, 2LL, 1LL);
    v13 = v15;
  }
  v38 = v11;
  v39 = v12;
  v40 = v14;
  v41 = v13;
  v42 = a3;
  v43 = a2;
  v44 = 0;
  v37 = 3;
  result = core::option::Option<T>::get_or_insert_with(v36, &v38);
  if ( v37 == 2 )
  {
    *(_BYTE *)(a1 + 32) = 2;
  }
  else
  {
    <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v30, v36);
    v29[0] = &v21;
    v29[1] = &v28;
    v29[2] = &v24;
    v29[3] = &v23;
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::try_fold(v33, v36, v29);
    v17 = v34;
    if ( v34 == 2 )
    {
      v25 = v30[0];
      v26 = v30[1];
      v17 = v31;
      v22[0] = *(_DWORD *)v32;
      v18 = *(_DWORD *)&v32[3];
    }
    else
    {
      v26 = v33[1];
      v25 = v33[0];
      v22[0] = *(_DWORD *)v35;
      v18 = *(_DWORD *)&v35[3];
    }
    *(_DWORD *)((char *)v22 + 3) = v18;
    v19 = v25;
    *(_OWORD *)(a1 + 16) = v26;
    *(_OWORD *)a1 = v19;
    *(_BYTE *)(a1 + 32) = v17;
    result = v22[0];
    v20 = *(_DWORD *)((char *)v22 + 3);
    *(_DWORD *)(a1 + 33) = v22[0];
    *(_DWORD *)(a1 + 36) = v20;
  }
  return result;
}