__int64 __fastcall just::function::just_pid(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rax
  __int128 v4; // [rsp+8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+18h] [rbp-20h]
  _BYTE v6[18]; // [rsp+26h] [rbp-12h] BYREF

  v1 = std::process::id();
  v2 = core::fmt::num::imp::<impl u32>::_fmt(v1, v6, 10LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, v2);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 0LL;
  return a1;
}