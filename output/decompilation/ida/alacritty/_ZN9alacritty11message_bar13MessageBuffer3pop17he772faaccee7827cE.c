__int64 __fastcall alacritty::message_bar::MessageBuffer::pop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rax
  __int128 v4; // xmm0
  _QWORD v5[6]; // [rsp+0h] [rbp-D8h] BYREF
  _OWORD v6[3]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+60h] [rbp-78h]
  _OWORD v8[3]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v9; // [rsp+A0h] [rbp-38h]
  _OWORD v10[3]; // [rsp+A8h] [rbp-30h] BYREF

  alloc::collections::vec_deque::VecDeque<T,A>::pop_front(v8, a1);
  result = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)&v8[0]) )
  {
    v7 = v9;
    v6[2] = v8[2];
    v6[1] = v8[1];
    v6[0] = v8[0];
    v2 = *(_QWORD *)(a1 + 24);
    v3 = core::slice::index::range(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
    v5[0] = a1;
    v5[1] = v3;
    v5[2] = 0LL;
    v5[3] = v2 - v3;
    v5[4] = v3;
    v5[5] = v6;
    ((void (__fastcall *)(_OWORD *, _QWORD *))core::iter::traits::iterator::Iterator::collect)(v10, v5);
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alacritty::message_bar::Message>>(a1);
    v4 = v10[0];
    *(_OWORD *)(a1 + 16) = v10[1];
    *(_OWORD *)a1 = v4;
    return core::ptr::drop_in_place<alacritty::message_bar::Message>(v6);
  }
  return result;
}