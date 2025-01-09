__int64 __fastcall uu_join::State::reset(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v13[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  result = core::ptr::drop_in_place<[uu_join::Line]>(v4, v5);
  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v11 = *a2;
    v12 = a2[1];
    v13[2] = a2[2];
    v13[1] = v12;
    v13[0] = v11;
    return ((__int64 (__fastcall *)(__int64, _OWORD *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
             a1,
             v13,
             v7,
             v8,
             v9,
             v10);
  }
  return result;
}
