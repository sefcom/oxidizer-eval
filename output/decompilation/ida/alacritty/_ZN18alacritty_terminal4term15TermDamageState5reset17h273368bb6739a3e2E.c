__int64 __fastcall alacritty_terminal::term::TermDamageState::reset(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = a2;
  *(_BYTE *)(a1 + 40) = 0;
  <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::for_each(
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 8) + 24LL * *(_QWORD *)(a1 + 16),
    &v3);
  return v3;
}