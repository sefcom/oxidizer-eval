__int64 __fastcall linera_exporter::runloops::block_processor::walker::Walker<S>::new(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-58h]
  _OWORD v6[4]; // [rsp+18h] [rbp-40h] BYREF

  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 8LL;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v6);
  v2 = v6[0];
  v3 = v6[1];
  *(_OWORD *)(a1 + 56) = v6[2];
  *(_OWORD *)(a1 + 40) = v3;
  *(_OWORD *)(a1 + 24) = v2;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = v5;
  *(_BYTE *)(a1 + 80) = 7;
  *(_QWORD *)(a1 + 72) = a2;
  return result;
}