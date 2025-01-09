__int64 __fastcall uu_tail::follow::files::FileHandling::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // al
  _BYTE v7[56]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  std::thread::local::LocalKey<T>::try_with(v7, core::ops::function::FnOnce::call_once);
  v3 = core::result::Result<T,E>::expect(v7);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1 + 24, v2, v3, v4);
  v5 = *(_BYTE *)(a2 + 74);
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_BYTE *)(a1 + 72) = v5;
  *(_BYTE *)(a1 + 73) = 0;
  return a1;
}
