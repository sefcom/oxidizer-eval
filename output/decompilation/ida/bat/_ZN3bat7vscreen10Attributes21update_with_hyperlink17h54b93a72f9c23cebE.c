__int64 __fastcall bat::vscreen::Attributes::update_with_hyperlink(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, a8_1, 3LL);
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( !(_BYTE)result )
    return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
             a1 + 240,
             a2,
             a2 + a3);
  return result;
}