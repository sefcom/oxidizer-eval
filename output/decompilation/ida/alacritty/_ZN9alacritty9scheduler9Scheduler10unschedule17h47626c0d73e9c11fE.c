__int64 __fastcall alacritty::scheduler::Scheduler::unschedule(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF
  char v7; // [rsp+18h] [rbp-40h]
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a4;
  alloc::collections::vec_deque::VecDeque<T,A>::iter(v8, a2 + 32);
  v5 = 0LL;
  result = <alloc::collections::vec_deque::iter::Iter<T> as core::iter::traits::iterator::Iterator>::try_fold(
             v8,
             &v6,
             &v5);
  if ( (result & 1) != 0 )
    return alloc::collections::vec_deque::VecDeque<T,A>::remove(a1, a2 + 32);
  *a1 = 2LL;
  return result;
}