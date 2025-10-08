__int64 __fastcall alacritty::display::hint::HintState::update_alphabet(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1[1], a1[2], a2, a3);
  if ( !(_BYTE)result )
  {
    result = alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into(a2, a3, a1);
    a1[11] = 0LL;
  }
  return result;
}