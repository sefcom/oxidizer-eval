__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::skip_fullwidth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  result = *(unsigned __int16 *)(*(_QWORD *)a3 + 20LL);
  if ( a4 )
  {
    if ( (result & 0x20) != 0 && *(_QWORD *)(a2 + 8) < (unsigned __int64)(*(_QWORD *)(a1 + 184) - 1LL) )
      return <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v12, a2);
    if ( (result & 0x400) != 0 )
    {
      <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v12, a2);
      if ( v12[0] )
        *(_QWORD *)a3 = v12[0];
      return <alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next(v12, a2);
    }
  }
  else if ( (result & 0x40) != 0 )
  {
    <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(v12, a2);
    if ( v12[0] )
      *(_QWORD *)a3 = v12[0];
    v8 = alacritty_terminal::index::Point::sub(*(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 16), a1, 1LL);
    v10 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            a1 + 40,
            v9,
            &off_877A48);
    v11 = *(_QWORD *)(v10 + 16);
    if ( v8 >= v11 )
      core::panicking::panic_bounds_check(v8, v11, &off_877A48);
    result = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)(result + 24 * v8 + 21) & 4) != 0 )
      return <alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev(
               v12,
               a2);
  }
  return result;
}