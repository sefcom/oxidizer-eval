__int64 __fastcall alacritty::message_bar::MessageBuffer::remove_target(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // xmm0
  _QWORD v8[7]; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = core::slice::index::range(v4);
  *(_QWORD *)(a1 + 24) = 0LL;
  v8[0] = a1;
  v8[1] = v5;
  v8[2] = 0LL;
  v8[3] = v4 - v5;
  v8[4] = v5;
  v8[5] = a2;
  v8[6] = a3;
  ((void (__fastcall *)(_OWORD *, _QWORD *))core::iter::traits::iterator::Iterator::collect)(v9, v8);
  result = core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alacritty::message_bar::Message>>(a1);
  v7 = v9[0];
  *(_OWORD *)(a1 + 16) = v9[1];
  *(_OWORD *)a1 = v7;
  return result;
}