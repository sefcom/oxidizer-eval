        __int64 a6)
{
  __int128 v6; // xmm0
  _OWORD v8[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 3);
    *(_OWORD *)a1 = *(__int128 *)((char *)a2 + 8);
  }
  else
  {
    v6 = *a2;
    v8[1] = a2[1];
    v8[0] = v6;
    ((void (__fastcall *)(__int64, _OWORD *, __int64, __int64, __int64, __int64))<T as alloc::string::ToString>::to_string)(
      a1,
      v8,
      a3,
      a4,
      a5,
      a6);
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v8);
  }
  return a1;
}
