__int64 __fastcall linera_exporter::storage::SharedStorage<C,S>::new(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm0
  __int64 v17; // [rsp+8h] [rbp-130h]
  __int128 v18; // [rsp+10h] [rbp-128h] BYREF
  __int128 v19; // [rsp+20h] [rbp-118h]
  __int128 v20; // [rsp+30h] [rbp-108h]
  __int128 v21; // [rsp+40h] [rbp-F8h]
  __int128 v22; // [rsp+50h] [rbp-E8h]
  __int64 v23; // [rsp+60h] [rbp-D8h]
  __int128 v24; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+78h] [rbp-C0h]
  __int128 v26; // [rsp+88h] [rbp-B0h]
  __int64 v27; // [rsp+98h] [rbp-A0h]
  _OWORD v28[9]; // [rsp+A0h] [rbp-98h] BYREF

  v8 = a5[7] / 3u;
  v23 = *((_QWORD *)a3 + 10);
  v22 = a3[4];
  v9 = *a3;
  v10 = a3[1];
  v11 = a3[2];
  v21 = a3[3];
  v20 = v11;
  v19 = v10;
  v18 = v9;
  linera_exporter::storage::CanonicalState<C>::new(v28, v8, &v18);
  quick_cache::sync::Cache<Key,Val,We>::with_weighter(&v24, a5[4], (unsigned __int64)a5[3] << 20);
  *(_QWORD *)&v18 = 1LL;
  *((_QWORD *)&v18 + 1) = 1LL;
  v19 = v24;
  v20 = v25;
  v21 = v26;
  *(_QWORD *)&v22 = v27;
  v17 = alloc::boxed::Box<T>::new(&v18);
  quick_cache::sync::Cache<Key,Val,We>::with_weighter(&v24, a5[6], (unsigned __int64)a5[5] << 20);
  *(_QWORD *)&v18 = 1LL;
  *((_QWORD *)&v18 + 1) = 1LL;
  v19 = v24;
  v20 = v25;
  v21 = v26;
  *(_QWORD *)&v22 = v27;
  result = alloc::boxed::Box<T>::new(&v18);
  *(_OWORD *)(a1 + 96) = v28[6];
  *(_OWORD *)(a1 + 80) = v28[5];
  *(_OWORD *)(a1 + 64) = v28[4];
  v13 = v28[0];
  v14 = v28[1];
  v15 = v28[2];
  *(_OWORD *)(a1 + 48) = v28[3];
  *(_OWORD *)(a1 + 32) = v15;
  *(_OWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  v16 = *a2;
  *(_OWORD *)(a1 + 128) = a2[1];
  *(_OWORD *)(a1 + 112) = v16;
  *(_QWORD *)(a1 + 144) = a4;
  *(_QWORD *)(a1 + 152) = v17;
  *(_QWORD *)(a1 + 160) = result;
  return result;
}