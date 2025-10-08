__int64 __fastcall linera_exporter::storage::CanonicalState<C>::new(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // [rsp+0h] [rbp-C8h]
  __int64 v11; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-B8h]
  __int128 v13; // [rsp+18h] [rbp-B0h]
  __int128 v14; // [rsp+28h] [rbp-A0h]
  __int128 v15; // [rsp+38h] [rbp-90h]
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+60h] [rbp-68h] BYREF
  __int128 v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+80h] [rbp-48h]
  __int128 v21; // [rsp+90h] [rbp-38h]
  __int64 v22; // [rsp+A0h] [rbp-28h]

  if ( *((_BYTE *)a3 + 80) )
    v4 = *((_QWORD *)a3 + 8);
  else
    v4 = *((_QWORD *)a3 + 9) + *((_QWORD *)a3 + 8);
  quick_cache::sync::Cache<Key,Val,We>::with_weighter(
    &v18,
    (unsigned __int64)((0x5B87DDAD0CDF1B2DLL * (unsigned __int128)(unsigned __int64)(a2 << 20)) >> 64) >> 8,
    a2 << 20);
  v11 = 1LL;
  v12 = 1LL;
  v13 = v18;
  v14 = v19;
  v15 = v20;
  *(_QWORD *)&v16 = v21;
  v10 = alloc::boxed::Box<T>::new(&v11);
  v5 = std::thread::local::LocalKey<T>::with(&v11);
  papaya::map::HashMap<K,V,S>::with_capacity_and_hasher(&v18, v5);
  v11 = 1LL;
  v12 = 1LL;
  v13 = v18;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  v17 = v22;
  result = alloc::boxed::Box<T>::new(&v11);
  *(_QWORD *)(a1 + 80) = *((_QWORD *)a3 + 10);
  *(_OWORD *)(a1 + 64) = a3[4];
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  *(_OWORD *)(a1 + 48) = a3[3];
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 104) = v4;
  *(_QWORD *)(a1 + 88) = v10;
  *(_QWORD *)(a1 + 96) = result;
  return result;
}