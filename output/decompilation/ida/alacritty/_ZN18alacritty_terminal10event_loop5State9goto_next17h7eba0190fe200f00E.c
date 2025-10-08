__int64 __fastcall alacritty_terminal::event_loop::State::goto_next(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-38h]
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF
  __int128 v5; // [rsp+18h] [rbp-20h]

  alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v4, a1);
  v1 = v4;
  if ( v4 != 0x8000000000000001LL )
    v3 = v5;
  result = core::ptr::drop_in_place<core::option::Option<alacritty_terminal::event_loop::Writing>>(a1 + 512);
  *(_QWORD *)(a1 + 512) = v1;
  *(_OWORD *)(a1 + 520) = v3;
  *(_QWORD *)(a1 + 536) = 0LL;
  return result;
}