__int64 __fastcall linera_exporter::state::DestinationStates::insert(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD v5[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v6; // [rsp+30h] [rbp-58h]
  __int64 v7; // [rsp+38h] [rbp-50h]
  _OWORD v8[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]

  seize::guard::LocalGuard::enter(v8, *(_QWORD *)(a1 + 32));
  v6 = v9;
  v5[1] = v8[1];
  v5[0] = v8[0];
  v7 = a1 + 16;
  papaya::map::HashMapRef<K,V,S,G>::insert(v5, a2, a3);
  return core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v6);
}