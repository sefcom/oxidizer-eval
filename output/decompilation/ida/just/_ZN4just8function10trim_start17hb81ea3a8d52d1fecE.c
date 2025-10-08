__int64 __fastcall just::function::trim_start(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 started; // rax
  __int128 v6; // [rsp+8h] [rbp-20h] BYREF
  __int64 v7; // [rsp+18h] [rbp-10h]

  started = core::str::<impl str>::trim_start_matches(a3, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, started);
  *(_QWORD *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = 0LL;
  return a1;
}