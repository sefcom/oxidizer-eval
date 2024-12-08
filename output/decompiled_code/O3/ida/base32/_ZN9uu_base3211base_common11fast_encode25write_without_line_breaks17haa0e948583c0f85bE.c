        char a4)
{
  __int64 contiguous; // rax
  __int64 result; // rax

  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a1);
  result = a3(a2, contiguous);
  if ( !result )
  {
    if ( a4 )
    {
      return ((__int64 (__fastcall *)(__int64, const char *, __int64))a3)(a2, asc_19ED4, 1LL);
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
