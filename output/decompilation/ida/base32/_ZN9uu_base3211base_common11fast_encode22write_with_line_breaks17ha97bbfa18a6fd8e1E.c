__int64 __fastcall uu_base32::base_common::fast_encode::write_with_line_breaks(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD),
        char a5)
{
  __int64 v6; // rbx
  __int64 contiguous; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 i; // r13
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = a1[3];
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
  core::slice::<impl [T]>::chunks_exact(v18, contiguous, v8, v6, &off_10E200);
  v9 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v18);
  for ( i = 0LL; v9; v9 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v18) )
  {
    i += v10;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a1,
      v9,
      v9 + v10);
    alloc::vec::Vec<T,A>::push(a1, 10LL, &off_10E230);
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))a4)(a3, a1[1], a1[2]);
  if ( !result )
  {
    v13 = *(_QWORD *)(a2 + 24);
    v14 = core::slice::index::range(i, v13);
    *(_QWORD *)(a2 + 24) = 0LL;
    v18[0] = a2;
    v18[1] = v14;
    v18[2] = 0LL;
    v18[3] = v13 - v14;
    v18[4] = v14;
    core::ptr::drop_in_place<alloc::collections::vec_deque::drain::Drain<u8>>(v18);
    if ( a5 )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        v15 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
        result = a4(a3, v15);
        if ( !result )
          return ((__int64 (__fastcall *)(__int64, const char *, __int64))a4)(a3, asc_1C4BC, 1LL);
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