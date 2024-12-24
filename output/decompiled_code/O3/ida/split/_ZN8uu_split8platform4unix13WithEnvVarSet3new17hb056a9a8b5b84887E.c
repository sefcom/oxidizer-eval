__int64 __fastcall uu_split::platform::unix::WithEnvVarSet::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  _OWORD v6[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]

  std::env::var(v6, aFile, 4LL);
  std::env::set_var(aFile, 4LL, a2, a3);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v7, aFile, 4LL);
  result = v8;
  *(_QWORD *)(a1 + 48) = v8;
  *(_OWORD *)(a1 + 32) = v7;
  v5 = v6[0];
  *(_OWORD *)(a1 + 16) = v6[1];
  *(_OWORD *)a1 = v5;
  return result;
}
