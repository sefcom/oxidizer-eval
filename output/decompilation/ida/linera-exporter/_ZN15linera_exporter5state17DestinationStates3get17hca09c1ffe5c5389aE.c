volatile signed __int64 *__fastcall linera_exporter::state::DestinationStates::get(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int64 **v3; // rdx
  volatile signed __int64 *v4; // r14
  _QWORD v6[4]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]

  seize::guard::LocalGuard::enter(v6, *(_QWORD *)(a1 + 32));
  v2 = v7;
  if ( papaya::raw::HashMap<K,V,S>::get(a1 + 16, a2, v6[0], v7) )
  {
    if ( _InterlockedIncrement64(*v3) <= 0 )
      BUG();
    v4 = *v3;
  }
  else
  {
    v4 = 0LL;
  }
  core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v2);
  return v4;
}