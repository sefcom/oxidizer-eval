__int64 __fastcall alacritty::display::hint::hyperlink_at(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned int v16; // ebp
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 result; // rax
  unsigned int v22; // [rsp+0h] [rbp-98h]
  int v23; // [rsp+4h] [rbp-94h]
  unsigned __int64 i; // [rsp+10h] [rbp-88h]
  __int64 *v25; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  unsigned int v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-60h]
  unsigned int v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  int v32; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+60h] [rbp-38h]

  v4 = a4;
  v7 = a2 + 40;
  v8 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a2 + 40,
         a4,
         &off_882240);
  v9 = *(_QWORD *)(v8 + 16);
  if ( a3 >= v9 )
    core::panicking::panic_bounds_check(a3, v9, &off_882240);
  v10 = alacritty_terminal::term::cell::Cell::hyperlink(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 24 * a3));
  if ( v10 )
  {
    v11 = v10;
    v34 = v10;
    v12 = *(_DWORD *)(a2 + 192) - 1;
    v13 = *(_QWORD *)(a2 + 184) - 1LL;
    v14 = v7;
    v28 = v7;
    v29 = a3;
    v30 = v4;
    v33 = v13;
    v31 = v13;
    v23 = v12;
    v32 = v12;
    v22 = v4;
    for ( i = a3; ; i = v15 )
    {
      <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(&v25, &v28);
      if ( !v25 )
        break;
      v15 = v26;
      v16 = v27;
      v17 = alacritty_terminal::term::cell::Cell::hyperlink(*v25);
      if ( !v17 || !(unsigned __int8)alacritty::display::hint::hyperlink_at::{{closure}}(v11, v17) )
        break;
      v22 = v16;
    }
    v28 = v14;
    v29 = a3;
    v30 = v4;
    v31 = v33;
    v32 = v23;
    while ( 1 )
    {
      <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(&v25, &v28);
      if ( !v25 )
        break;
      v18 = v26;
      v19 = v27;
      v20 = alacritty_terminal::term::cell::Cell::hyperlink(*v25);
      if ( !v20 || !(unsigned __int8)alacritty::display::hint::hyperlink_at::{{closure}}(v11, v20) )
        break;
      a3 = v18;
      v4 = v19;
    }
    result = a1;
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = i;
    *(_DWORD *)(a1 + 32) = v22;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    result = a1;
    *(_BYTE *)(a1 + 40) = 2;
  }
  return result;
}