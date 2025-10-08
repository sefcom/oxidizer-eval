__int64 __fastcall uu_paste::DelimiterState::write_delimiter(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  _OWORD *v4; // r14

  result = *a1;
  if ( *a1 )
  {
    if ( (_DWORD)result == 1 )
    {
      return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
               a2,
               a1[1],
               a1[1] + a1[2]);
    }
    else
    {
      v3 = (_QWORD *)<core::iter::adapters::cycle::Cycle<I> as core::iter::traits::iterator::Iterator>::next(a1 + 5);
      if ( !v3 )
        core::option::unwrap_failed(&off_DEDB8);
      v4 = v3;
      result = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
                 a2,
                 *v3,
                 *v3 + v3[1]);
      *(_OWORD *)(a1 + 1) = *v4;
    }
  }
  return result;
}