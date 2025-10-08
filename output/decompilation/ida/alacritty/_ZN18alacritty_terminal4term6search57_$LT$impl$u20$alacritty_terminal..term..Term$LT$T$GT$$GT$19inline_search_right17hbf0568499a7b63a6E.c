__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_right(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  int v11; // esi
  bool v12; // cf
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r12
  __int64 result; // rax
  _QWORD v23[2]; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-60h]
  _QWORD v25[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]
  int v28; // [rsp+50h] [rbp-38h]

  v8 = a2 + 5;
  v9 = a2[10];
  v10 = a2[24];
  v11 = 0;
  v12 = v9 < v10;
  v13 = v9 - v10;
  if ( !v12 )
    v11 = v13;
  v14 = core::cmp::Ord::max(a4, (unsigned int)-v11);
  v15 = v14;
  v16 = a2[23] - 1LL;
  if ( a3 == v16 )
  {
    v17 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            v8,
            v14,
            &off_877AC0);
    v18 = *(_QWORD *)(v17 + 16);
    if ( a3 >= v18 )
      core::panicking::panic_bounds_check(a3, v18, &off_877AC0);
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 8) + 24 * a3 + 20) & 0x10) == 0 )
      goto LABEL_14;
  }
  v25[0] = v8;
  v25[1] = a3;
  v26 = v15;
  v27 = v16;
  v28 = v10 - 1;
  <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v23, v25);
  v19 = v23[0];
  if ( v23[0] )
  {
    while ( 1 )
    {
      a3 = v23[1];
      v15 = v24;
      if ( (*(_WORD *)(v19 + 20) & 0x440) == 0 )
      {
        if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(
                                *(unsigned int *)(v19 + 16),
                                a5,
                                a6) )
          break;
      }
      if ( a3 == v16 && (*(_BYTE *)(v19 + 20) & 0x10) == 0 )
      {
        a3 = v16;
        goto LABEL_14;
      }
      <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v23, v25);
      v19 = v23[0];
      if ( !v23[0] )
        goto LABEL_14;
    }
    result = a1;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
LABEL_14:
    result = a1;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}