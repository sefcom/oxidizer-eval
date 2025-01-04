__int64 __fastcall uu_join::State::reset(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  result = core::ptr::drop_in_place<[uu_join::Line]>(v4, v5);
  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v7 = *a2;
    v8 = a2[1];
    v9[2] = a2[2];
    v9[1] = v8;
    v9[0] = v7;
    return ((__int64 (__fastcall *)(__int64, _OWORD *))alloc::vec::Vec<T,A>::push)(a1, v9);
  }
  return result;
}
