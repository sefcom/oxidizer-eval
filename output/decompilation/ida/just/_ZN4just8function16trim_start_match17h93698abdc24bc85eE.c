__int64 __fastcall just::function::trim_start_match(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int128 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+18h] [rbp-20h]

  v6 = a3;
  v7 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a5, a6, a3, a4);
  if ( v7 )
    v6 = v7;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v6);
  *(_QWORD *)(a1 + 24) = v10;
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = 0LL;
  return a1;
}