__int64 __fastcall alacritty_terminal::grid::row::Row<T>::reset(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[0] = v2;
  v4 = a1[2];
  v5 = v4 - 1;
  if ( !v4 )
    core::panicking::panic_bounds_check(v5, 0LL, &off_8773F8);
  v7 = a1[1];
  LODWORD(v13[0]) = *(_DWORD *)(v7 + 24 * v5 + 12);
  HIDWORD(v13[0]) = a2;
  if ( (unsigned __int8)core::cmp::PartialEq::ne(v13, (char *)v13 + 4) )
  {
    a1[3] = v4;
    v8 = v4;
  }
  else
  {
    v8 = a1[3];
  }
  result = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
             0LL,
             v8,
             v7,
             v4,
             &off_877410);
  if ( v10 )
  {
    v11 = result;
    v12 = 24 * v10;
    do
    {
      result = <alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::reset(v11, a2);
      v11 += 24LL;
      v12 -= 24LL;
    }
    while ( v12 );
  }
  a1[3] = 0LL;
  return result;
}