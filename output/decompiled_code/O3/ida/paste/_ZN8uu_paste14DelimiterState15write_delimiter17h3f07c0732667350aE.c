__int64 __fastcall uu_paste::DelimiterState::write_delimiter(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 slice; // rax
  __int64 *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax

  result = *a1;
  if ( *a1 )
  {
    if ( (_DWORD)result == 1 )
    {
      slice = core::slice::iter::Iter<T>::make_slice(a1[1], a1[1] + a1[2]);
      return alloc::vec::Vec<T,A>::append_elements(a2, slice);
    }
    else
    {
      v4 = (__int64 *)<core::iter::adapters::cycle::Cycle<I> as core::iter::traits::iterator::Iterator>::next(a1 + 5);
      if ( !v4 )
        core::option::unwrap_failed(&off_113628);
      v5 = *v4;
      v6 = v4[1];
      v7 = core::slice::iter::Iter<T>::make_slice(*v4, *v4 + v6);
      result = alloc::vec::Vec<T,A>::append_elements(a2, v7);
      a1[1] = v5;
      a1[2] = v6;
    }
  }
  return result;
}
