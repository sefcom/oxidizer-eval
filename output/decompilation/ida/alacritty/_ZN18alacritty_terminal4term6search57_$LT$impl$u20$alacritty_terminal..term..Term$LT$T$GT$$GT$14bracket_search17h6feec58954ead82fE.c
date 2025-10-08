__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::bracket_search(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned int a4)
{
  const char *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  int v11; // edx
  int v12; // ebp
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // r12d
  int v16; // eax
  int v17; // r12d
  int v18; // eax
  int v19; // ecx
  int v20; // [rsp+4h] [rbp-74h] BYREF
  __int64 v21; // [rsp+8h] [rbp-70h] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h]
  int v23; // [rsp+18h] [rbp-60h]
  const char *v24; // [rsp+20h] [rbp-58h] BYREF
  const char *v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+40h] [rbp-38h]

  v7 = (const char *)(a2 + 40);
  v8 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a2 + 40,
         a4,
         &off_877A30);
  v9 = *(_QWORD *)(v8 + 16);
  if ( (unsigned __int64)a3 >= v9 )
    core::panicking::panic_bounds_check(a3, v9, &off_877A30);
  v20 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 24LL * (_QWORD)a3 + 16);
  v24 = "(";
  v25 = "Failed to query XRandR extensioneglCreatePbufferFromClientBufferlibrary/std/src/thread/scoped.rstransition equiv"
        "alence classes: \xE6\x0A";
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v24, &v20);
  if ( v11 == (_DWORD)&unk_110000 )
    goto LABEL_3;
  v12 = v11;
  v13 = *(_DWORD *)(a2 + 192) - 1;
  v14 = *(_QWORD *)(a2 + 184) - 1LL;
  v24 = v7;
  v25 = a3;
  v26 = a4;
  v27 = v14;
  v28 = v13;
  if ( (result & 1) != 0 )
  {
    <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(&v21, &v24);
    result = v21;
    if ( v21 )
    {
      v15 = 0;
      do
      {
        v16 = *(_DWORD *)(result + 16);
        if ( v16 == v12 )
        {
          if ( !v15 )
            goto LABEL_25;
          if ( v12 == v20 )
          {
LABEL_14:
            ++v15;
            goto LABEL_8;
          }
          --v15;
        }
        else if ( v16 == v20 )
        {
          goto LABEL_14;
        }
LABEL_8:
        <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(&v21, &v24);
        result = v21;
      }
      while ( v21 );
    }
LABEL_3:
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(&v21, &v24);
  result = v21;
  if ( !v21 )
    goto LABEL_3;
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_DWORD *)(result + 16);
    if ( v18 == v12 )
      break;
    if ( v18 == v20 )
LABEL_24:
      ++v17;
LABEL_18:
    <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(&v21, &v24);
    result = v21;
    if ( !v21 )
      goto LABEL_3;
  }
  if ( v17 )
  {
    if ( v12 == v20 )
      goto LABEL_24;
    --v17;
    goto LABEL_18;
  }
LABEL_25:
  result = v22;
  v19 = v23;
  *(_QWORD *)(a1 + 8) = v22;
  *(_DWORD *)(a1 + 16) = v19;
  *(_QWORD *)a1 = 1LL;
  return result;
}