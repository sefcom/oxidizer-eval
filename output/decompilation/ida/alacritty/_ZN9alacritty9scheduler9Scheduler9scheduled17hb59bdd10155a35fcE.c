__int64 __fastcall alacritty::scheduler::Scheduler::scheduled(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+8h] [rbp-30h]
  _BYTE v6[40]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a2;
  v5 = 1;
  alloc::collections::vec_deque::VecDeque<T,A>::iter(v6, a1 + 32);
  v2 = <alloc::collections::vec_deque::iter::Iter<T> as core::iter::traits::iterator::Iterator>::try_fold(v6, &v4);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v2, 1LL);
}