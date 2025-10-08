__int64 __fastcall linera_exporter::storage::CanonicalState<C>::push(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // rax
  __int128 v9; // xmm0
  _OWORD v11[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-A8h]
  __int64 v13; // [rsp+28h] [rbp-A0h]
  __int128 v14; // [rsp+30h] [rbp-98h] BYREF
  __int128 v15; // [rsp+40h] [rbp-88h]
  __int128 v16; // [rsp+50h] [rbp-78h]

  v2 = a1[25];
  a1[25] = v2 + 1;
  v3 = a1[24];
  seize::guard::LocalGuard::enter(&v14, *(_QWORD *)(v3 + 32));
  v12 = v16;
  v11[1] = v15;
  v11[0] = v14;
  v13 = v3 + 16;
  *(_QWORD *)&v8 = <alloc::boxed::Box<[T],A> as core::clone::Clone>::clone(
                     *(_QWORD *)a2,
                     *(_QWORD *)(a2 + 8),
                     v4,
                     v5,
                     v6,
                     v7,
                     v14,
                     *((_QWORD *)&v14 + 1),
                     v15,
                     *((_QWORD *)&v15 + 1));
  v9 = *(_OWORD *)(a2 + 16);
  v16 = *(_OWORD *)(a2 + 32);
  v15 = v9;
  v14 = v8;
  papaya::map::HashMapRef<K,V,S,G>::insert(v11, v2, &v14);
  core::ptr::drop_in_place<papaya::map::HashMapRef<usize,linera_exporter::common::CanonicalBlock,std::hash::random::RandomState,seize::guard::LocalGuard>>(v12);
  quick_cache::sync::Cache<Key,Val,We,B,L>::insert_with_lifecycle(&v14, a1[23] + 16LL, v2, a2);
  return core::ptr::drop_in_place<[core::option::Option<(usize,linera_exporter::common::CanonicalBlock)>; 2]>(&v14);
}