volatile signed __int64 *__fastcall linera_exporter::state::DestinationStates::load_state(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int64 **v3; // rdx
  volatile signed __int64 *v4; // r14
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v7[4]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2;
  seize::guard::LocalGuard::enter(v7, *(_QWORD *)(a1 + 32));
  v2 = v8;
  if ( !papaya::raw::HashMap<K,V,S>::get(a1 + 16, a2, v7[0], v8) )
  {
    v9[0] = &v6;
    v9[1] = <&T as core::fmt::Debug>::fmt;
    v7[0] = &unk_13F1E78;
    v7[1] = 2LL;
    v8 = 0LL;
    v7[2] = v9;
    v7[3] = 1LL;
    core::panicking::panic_fmt(v7, &off_13F1E98);
  }
  if ( _InterlockedIncrement64(*v3) <= 0 )
    BUG();
  v4 = *v3;
  core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v2);
  return v4;
}