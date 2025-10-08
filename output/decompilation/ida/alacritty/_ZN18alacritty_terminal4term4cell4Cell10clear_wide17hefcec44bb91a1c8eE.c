__int64 __fastcall alacritty_terminal::term::cell::Cell::clear_wide(__int64 a1)
{
  _QWORD *mut; // r14
  __int64 result; // rax

  *(_BYTE *)(a1 + 20) &= ~0x20u;
  if ( *(_QWORD *)a1 )
  {
    mut = (_QWORD *)alloc::sync::Arc<T,A>::make_mut(a1);
    result = core::ptr::drop_in_place<alloc::vec::Vec<char>>(*mut, mut[1]);
    *mut = 0LL;
    mut[1] = 4LL;
    mut[2] = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 32;
  return result;
}