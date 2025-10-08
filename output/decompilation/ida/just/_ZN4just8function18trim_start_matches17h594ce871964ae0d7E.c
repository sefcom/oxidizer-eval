__int64 __fastcall just::function::trim_start_matches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 started; // rax
  __int128 v8; // [rsp+8h] [rbp-20h] BYREF
  __int64 v9; // [rsp+18h] [rbp-10h]

  started = core::str::<impl str>::trim_start_matches(a3, a4, a5, a6);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, started);
  *(_QWORD *)(a1 + 24) = v9;
  *(_OWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = 0LL;
  return a1;
}