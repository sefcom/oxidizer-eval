__int64 __fastcall alacritty_terminal::grid::storage::Storage<T>::replace_inner(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
  core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>(a1);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}