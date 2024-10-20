__int64 __fastcall uu_seq::number::PreciseNumber::one(__int64 a1)
{
  __int128 v2; // [rsp+0h] [rbp-28h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h]

  v3 = 0LL;
  v2 = anon_5d0f7ca1118428dd02f9d08135450e5e_1_llvm_5580948626553504273;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v2);
  **((_QWORD **)&v2 + 1) = 1LL;
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_BYTE *)(a1 + 24) = 2;
  *(_DWORD *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
