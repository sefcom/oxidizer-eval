__int64 __fastcall alacritty_terminal::selection::Selection::to_range(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v4; // r15
  int v5; // ebp
  unsigned __int64 v6; // rax
  int v7; // ecx
  bool v8; // cf
  __int64 result; // rax
  const char *v10; // r15
  signed int v11; // edx
  signed int v12; // r13d
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // ebp
  int v16; // r14d
  int v17; // edx
  __int128 v18; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-A8h]
  __int128 v20; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h]
  __int128 v22; // [rsp+40h] [rbp-78h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int128 v24; // [rsp+60h] [rbp-58h] BYREF
  __int64 v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp-38h]

  v4 = a3[23];
  v21 = *((_QWORD *)a2 + 2);
  v20 = *a2;
  v18 = *(__int128 *)((char *)a2 + 24);
  v19 = *((_QWORD *)a2 + 5);
  v5 = DWORD2(v18);
  if ( (char)<alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(v20, DWORD2(v20), v18, DWORD2(v18)) > 0 )
  {
    core::intrinsics::typed_swap_nonoverlapping(&v20, &v18);
    v5 = DWORD2(v18);
  }
  v6 = a3[10];
  v7 = 0;
  v8 = v6 < a3[24];
  result = v6 - a3[24];
  if ( !v8 )
    v7 = result;
  if ( v5 >= -v7 )
  {
    v26 = v4;
    v10 = (const char *)alacritty_terminal::index::Point::grid_clamp(v20, DWORD2(v20), a3, 1LL);
    v12 = v11;
    *(_QWORD *)&v20 = v10;
    DWORD2(v20) = v11;
    v13 = alacritty_terminal::index::Point::grid_clamp(v18, (unsigned int)v5, a3, 1LL);
    v15 = v14;
    *(_QWORD *)&v18 = v13;
    DWORD2(v18) = v14;
    switch ( *((_BYTE *)a2 + 48) )
    {
      case 0:
        v25 = v21;
        v24 = v20;
        v23 = v19;
        v22 = v18;
        result = alacritty_terminal::selection::Selection::range_simple(a1, a2, &v24, &v22, v26);
        break;
      case 1:
        v25 = v21;
        v24 = v20;
        v23 = v19;
        v22 = v18;
        result = alacritty_terminal::selection::Selection::range_block(a1, a2, &v24, &v22);
        break;
      case 2:
        result = alacritty_terminal::selection::Selection::range_semantic(a1, (__int64)a3, v10, v12, v13, v14);
        break;
      case 3:
        v16 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_left(a3, v12);
        result = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_right(
                   (__int64)a3,
                   v15);
        *(_QWORD *)a1 = 0LL;
        *(_DWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = result;
        *(_DWORD *)(a1 + 24) = v17;
        *(_BYTE *)(a1 + 32) = 0;
        break;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 2;
  }
  return result;
}