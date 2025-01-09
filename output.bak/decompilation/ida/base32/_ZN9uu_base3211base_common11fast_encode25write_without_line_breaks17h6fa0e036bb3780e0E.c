__int64 __fastcall uu_base32::base_common::fast_encode::write_without_line_breaks(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, const char *, __int64),
        char a4)
{
  __int64 contiguous; // rax
  __int64 result; // rax

  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
  result = ((__int64 (__fastcall *)(__int64, __int64))a3)(a2, contiguous);
  if ( !result )
  {
    if ( a4 )
    {
      return a3(a2, asc_1A0C8, 1LL);
    }
    else
    {
      alloc::collections::vec_deque::VecDeque<T,A>::truncate(a1, 0LL);
      result = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  return result;
}
