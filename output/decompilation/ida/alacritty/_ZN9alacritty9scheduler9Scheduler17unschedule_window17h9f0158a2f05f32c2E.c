__int64 __fastcall alacritty::scheduler::Scheduler::unschedule_window(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = a2;
  alloc::collections::vec_deque::VecDeque<T,A>::retain(a1 + 32, &v3);
  return v3;
}