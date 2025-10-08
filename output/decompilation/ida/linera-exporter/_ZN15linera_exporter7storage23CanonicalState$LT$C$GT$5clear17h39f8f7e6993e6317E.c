__int64 __fastcall linera_exporter::storage::CanonicalState<C>::clear(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  seize::guard::LocalGuard::enter(v6, *(_QWORD *)(v2 + 32));
  v6[5] = v2 + 16;
  papaya::raw::HashMap<K,V,S>::clear(v2 + 16, v6);
  core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v6[4]);
  *(_BYTE *)(a1 + 80) = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  return core::ptr::drop_in_place<[linera_exporter::common::CanonicalBlock]>(v3, v4);
}