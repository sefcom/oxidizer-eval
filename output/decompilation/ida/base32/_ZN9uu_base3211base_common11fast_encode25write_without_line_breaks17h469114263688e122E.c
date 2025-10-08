__int64 __fastcall uu_base32::base_common::fast_encode::write_without_line_breaks(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        char a4,
        char a5)
{
  __int64 contiguous; // rax
  __int64 result; // rax

  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
  result = a3(a2, contiguous);
  if ( !result )
  {
    if ( a4 )
    {
      if ( !a5 )
        return ((__int64 (__fastcall *)(__int64, const char *, __int64))a3)(a2, asc_1C4BC, 1LL);
    }
    else
    {
      alloc::collections::vec_deque::VecDeque<T,A>::truncate(a1);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    return 0LL;
  }
  return result;
}