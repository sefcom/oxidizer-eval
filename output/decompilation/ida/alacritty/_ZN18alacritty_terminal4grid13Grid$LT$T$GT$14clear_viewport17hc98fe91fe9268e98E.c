__int64 __fastcall alacritty_terminal::grid::Grid<T>::clear_viewport(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // ebp
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // r15
  __int64 i; // rsi
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+10h] [rbp-58h]
  _QWORD v11[2]; // [rsp+18h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 152) - 1;
  v2 = *(_QWORD *)(a1 + 144);
  v11[0] = a1;
  v11[1] = v2;
  v12 = v1;
  v13 = v2 - 1;
  v14 = v1;
  <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v9, v11);
  while ( v9[0] )
  {
    v3 = v10;
    if ( !(unsigned __int8)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::is_empty() )
      break;
    if ( v3 < 0 )
      break;
    <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v9, v11);
  }
  v4 = v12 + 1;
  result = alacritty_terminal::grid::Grid<T>::scroll_up(a1, 0LL, *(unsigned int *)(a1 + 152), v4);
  v6 = *(_QWORD *)(a1 + 152) - v4;
  if ( v6 )
  {
    for ( i = 0LL; i != v6; ++i )
    {
      v8 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
             a1,
             i,
             &off_877350);
      result = alacritty_terminal::grid::row::Row<T>::reset(v8, *(unsigned int *)(a1 + 76));
    }
  }
  return result;
}