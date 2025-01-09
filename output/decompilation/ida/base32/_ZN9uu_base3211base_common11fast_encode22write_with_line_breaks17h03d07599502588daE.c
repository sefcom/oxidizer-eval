__int64 __fastcall uu_base32::base_common::fast_encode::write_with_line_breaks(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD),
        char a5)
{
  __int64 v7; // r13
  __int64 contiguous; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 i; // r13
  __int64 slice; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = a1[3];
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
  core::slice::<impl [T]>::chunks_exact(v20, contiguous, v9, v7, &off_149D00);
  v10 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v20);
  for ( i = 0LL; v10; v10 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v20) )
  {
    i += v11;
    slice = core::slice::iter::Iter<T>::make_slice(v10, v10 + v11);
    alloc::vec::Vec<T,A>::append_elements(a1, slice);
    alloc::vec::Vec<T,A>::push(a1, 10LL);
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))a4)(a3, a1[1], a1[2]);
  if ( !result )
  {
    v15 = core::slice::index::range(i, *(_QWORD *)(a2 + 24), &off_149D18);
    v16 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = v15;
    v20[0] = a2;
    v20[1] = v17 - v15;
    v20[2] = v15;
    v20[3] = v16 - (v17 - v15);
    v20[4] = v17 - v15;
    core::ptr::drop_in_place<alloc::collections::vec_deque::drain::Drain<u8>>(v20);
    if ( a5 )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        v18 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
        result = a4(a3, v18);
        if ( !result )
          return ((__int64 (__fastcall *)(__int64, const char *, __int64))a4)(a3, asc_1A0C8, 1LL);
        return result;
      }
    }
    else
    {
      a1[2] = 0LL;
    }
    return 0LL;
  }
  return result;
}
