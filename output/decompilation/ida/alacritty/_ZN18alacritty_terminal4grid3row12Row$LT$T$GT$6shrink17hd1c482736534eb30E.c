__int64 __fastcall alacritty_terminal::grid::row::Row<T>::shrink(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  __int128 v12; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a2 + 16) <= a3 )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    alloc::vec::Vec<T,A>::split_off(&v12, a2, a3, &off_877428);
    v5 = *((_QWORD *)&v12 + 1);
    v6 = v13;
    v14[0] = *((_QWORD *)&v12 + 1);
    v14[1] = *((_QWORD *)&v12 + 1) + 24 * v13;
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::rposition(v14);
    v9 = core::option::Option<T>::map_or(v7, v8);
    v10 = v6 - v9;
    if ( v6 >= v9 )
    {
      v13 = v9;
      v6 = v9;
      core::ptr::drop_in_place<[alacritty_terminal::term::cell::Cell]>(v5 + 24 * v9, v10);
    }
    *(_QWORD *)(a2 + 24) = core::cmp::Ord::min(*(_QWORD *)(a2 + 24), a3);
    if ( v6 )
    {
      result = v13;
      a1[2] = v13;
      *(_OWORD *)a1 = v12;
    }
    else
    {
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>(&v12);
    }
  }
  return result;
}