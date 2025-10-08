int *__fastcall alacritty_terminal::grid::Grid<T>::reset_region(__int64 a1, int a2)
{
  int *result; // rax
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rax
  _DWORD v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v8[0] = a2;
  result = (int *)<core::ops::range::RangeTo<T> as core::ops::range::RangeBounds<T>>::end_bound(v8);
  v3 = *result;
  if ( *result > 0 )
  {
    v4 = *(_DWORD *)(a1 + 76);
    v5 = 0LL;
    do
    {
      v6 = v5 + 1;
      v7 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
             a1,
             v5,
             &off_877338);
      result = (int *)alacritty_terminal::grid::row::Row<T>::reset(v7, v4);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v3 != v6 );
  }
  return result;
}