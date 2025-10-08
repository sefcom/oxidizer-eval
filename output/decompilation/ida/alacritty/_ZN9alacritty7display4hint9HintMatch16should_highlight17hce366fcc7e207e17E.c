char __fastcall alacritty::display::hint::HintMatch::should_highlight(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a4 )
    {
      v5 = (_QWORD *)*a4;
      if ( v4 == (_QWORD *)*a4
        || (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              v4[3],
                              v4[4],
                              v5[3],
                              v5[4])
        && (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              v4[6],
                              v4[7],
                              v5[6],
                              v5[7]) )
      {
        return 1;
      }
    }
    return 0;
  }
  if ( a4 )
    return 0;
  return core::ops::range::RangeBounds::contains(a1 + 2, a2, a3);
}