__int64 __fastcall alacritty::display::color::List::fill_cube(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  char v5; // al
  char v6; // cl
  _BYTE *v7; // r12
  char v8; // r14
  __int64 v9; // r13
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  char v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+Ch] [rbp-6Ch]
  __int64 v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+18h] [rbp-60h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]

  v20 = 16LL;
  v24 = a2;
  v23 = a2 + 4 * a3;
  v25 = a1 + 17;
  v3 = 16LL;
  v4 = 0LL;
  do
  {
    v5 = v4;
    LOBYTE(v4) = v4 + 1;
    v26 = v4;
    v6 = 40 * v5 + 55;
    if ( !v5 )
      v6 = 0;
    v19 = v6;
    v7 = (_BYTE *)(v25 + 3 * v3);
    v8 = 55;
    v9 = 0LL;
    do
    {
      v11 = v3 + v9;
      v12 = v8;
      if ( !(_BYTE)v9 )
        v12 = 0;
      v21 = v24;
      v22 = v23;
      v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v13 )
      {
        if ( v11 >= 0x10D )
          goto LABEL_41;
        *(v7 - 15) = *(_BYTE *)(v13 + 2);
        *(_WORD *)(v7 - 17) = *(_WORD *)v13;
      }
      else
      {
        if ( v11 >= 0x10D )
          core::panicking::panic_bounds_check(v9 + v3, 269LL, &off_882028);
        *(v7 - 17) = v19;
        *(v7 - 16) = v12;
        *(v7 - 15) = 0;
      }
      v20 = v3 + v9 + 1;
      v21 = v24;
      v22 = v23;
      v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v14 )
      {
        if ( v11 > 0x10B )
          goto LABEL_40;
        *(v7 - 12) = *(_BYTE *)(v14 + 2);
        *((_WORD *)v7 - 7) = *(_WORD *)v14;
      }
      else
      {
        if ( v11 > 0x10B )
          goto LABEL_42;
        *(v7 - 14) = v19;
        *(v7 - 13) = v12;
        *(v7 - 12) = 95;
      }
      v20 = v3 + v9 + 2;
      v21 = v24;
      v22 = v23;
      v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v15 )
      {
        if ( v11 > 0x10A )
          goto LABEL_40;
        *(v7 - 9) = *(_BYTE *)(v15 + 2);
        *(_WORD *)(v7 - 11) = *(_WORD *)v15;
      }
      else
      {
        if ( v11 > 0x10A )
          goto LABEL_42;
        *(v7 - 11) = v19;
        *(v7 - 10) = v12;
        *(v7 - 9) = -121;
      }
      v20 = v3 + v9 + 3;
      v21 = v24;
      v22 = v23;
      v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v16 )
      {
        if ( v11 > 0x109 )
          goto LABEL_40;
        *(v7 - 6) = *(_BYTE *)(v16 + 2);
        *((_WORD *)v7 - 4) = *(_WORD *)v16;
      }
      else
      {
        if ( v11 > 0x109 )
          goto LABEL_42;
        *(v7 - 8) = v19;
        *(v7 - 7) = v12;
        *(v7 - 6) = -81;
      }
      v20 = v3 + v9 + 4;
      v21 = v24;
      v22 = v23;
      v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v17 )
      {
        if ( v11 > 0x108 )
          goto LABEL_40;
        *(v7 - 3) = *(_BYTE *)(v17 + 2);
        *(_WORD *)(v7 - 5) = *(_WORD *)v17;
      }
      else
      {
        if ( v11 > 0x108 )
LABEL_42:
          core::panicking::panic_bounds_check(269LL, 269LL, &off_882028);
        *(v7 - 5) = v19;
        *(v7 - 4) = v12;
        *(v7 - 3) = -41;
      }
      v20 = v3 + v9 + 5;
      v21 = v24;
      v22 = v23;
      v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v21, &v20);
      if ( v18 )
      {
        if ( v11 > 0x107 )
        {
LABEL_40:
          v11 = 269LL;
LABEL_41:
          core::panicking::panic_bounds_check(v11, 269LL, &off_882010);
        }
        *v7 = *(_BYTE *)(v18 + 2);
        *((_WORD *)v7 - 1) = *(_WORD *)v18;
      }
      else
      {
        if ( v11 > 0x107 )
          goto LABEL_42;
        *(v7 - 2) = v19;
        *(v7 - 1) = v12;
        *v7 = -1;
      }
      result = v3 + v9 + 6;
      v20 = result;
      v9 += 6LL;
      v8 += 40;
      v7 += 18;
    }
    while ( (_BYTE)v9 != 36 );
    v3 += v9;
    v4 = v26;
  }
  while ( (_BYTE)v26 != 6 );
  return result;
}