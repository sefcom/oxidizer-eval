__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::inline_search_left(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // esi
  bool v12; // cf
  int v13; // eax
  int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // dx
  __int64 v19; // rbx
  int v20; // esi
  __int64 result; // rax
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  int v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  _QWORD v27[2]; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+50h] [rbp-38h]

  v25 = a6;
  v26 = a5;
  v8 = a2 + 5;
  v9 = a2[10];
  v10 = a2[24];
  v11 = 0;
  v12 = v9 < v10;
  v13 = v9 - v10;
  if ( !v12 )
    v11 = v13;
  v14 = core::cmp::Ord::max(a4, (unsigned int)-v11);
  v15 = a2[23] - 1LL;
  v27[0] = v8;
  v27[1] = a3;
  v28 = v14;
  v29 = v15;
  v30 = v10 - 1;
  <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(&v22, v27);
  v16 = v22;
  if ( !v22 || (v17 = v23, v18 = *(_WORD *)(v22 + 20), v19 = v25, (v18 & 0x10) == 0 && v23 == v15) )
  {
LABEL_10:
    result = a1;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 16) = v14;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v20 = v24;
    while ( 1 )
    {
      a3 = v17;
      v14 = v20;
      if ( (v18 & 0x440) == 0 )
      {
        if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(
                                *(unsigned int *)(v16 + 16),
                                v26,
                                v19) )
          break;
      }
      <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(&v22, v27);
      v16 = v22;
      if ( v22 )
      {
        v17 = v23;
        v20 = v24;
        v18 = *(_WORD *)(v22 + 20);
        if ( (v18 & 0x10) != 0 || v23 != v15 )
          continue;
      }
      goto LABEL_10;
    }
    result = a1;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 16) = v20;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}