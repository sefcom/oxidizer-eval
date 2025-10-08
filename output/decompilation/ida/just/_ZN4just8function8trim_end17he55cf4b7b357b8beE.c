__int64 __fastcall just::function::trim_end(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+8h] [rbp-20h] BYREF
  __int64 v7; // [rsp+18h] [rbp-10h]

  v4 = core::str::<impl str>::trim_end_matches(a3, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, v4);
  *(_QWORD *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = 0LL;
  return a1;
}