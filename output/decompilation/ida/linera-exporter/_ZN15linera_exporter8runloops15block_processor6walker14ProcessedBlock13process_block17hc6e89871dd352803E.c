__int64 __fastcall linera_exporter::runloops::block_processor::walker::ProcessedBlock::process_block(
        __int64 a1,
        __int64 a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r13
  __int128 v4; // xmm0
  char v5; // al
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  __int64 v9; // r15
  __int64 v10; // r12
  char v11; // bp
  __int64 v12; // r12
  __int64 v13; // r15
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 result; // rax
  __int128 v18; // xmm1
  __int64 v19; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-1A0h]
  __int64 v21; // [rsp+10h] [rbp-198h]
  __int64 v22; // [rsp+18h] [rbp-190h]
  __int64 v23; // [rsp+20h] [rbp-188h]
  __int128 v24; // [rsp+28h] [rbp-180h] BYREF
  __int64 v25; // [rsp+38h] [rbp-170h]
  __int128 v26; // [rsp+40h] [rbp-168h] BYREF
  __int64 v27; // [rsp+50h] [rbp-158h]
  char v28; // [rsp+58h] [rbp-150h] BYREF
  __int128 v29; // [rsp+59h] [rbp-14Fh]
  __int128 v30; // [rsp+69h] [rbp-13Fh]
  __int128 v31; // [rsp+A0h] [rbp-108h]
  __int128 v32; // [rsp+B0h] [rbp-F8h]
  __int128 v33; // [rsp+C0h] [rbp-E8h]
  __int128 v34; // [rsp+D0h] [rbp-D8h]
  __int128 v35; // [rsp+E0h] [rbp-C8h]
  __int128 v36; // [rsp+F0h] [rbp-B8h]
  _OWORD v37[4]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+140h] [rbp-68h]
  _BYTE v39[24]; // [rsp+148h] [rbp-60h] BYREF
  _BYTE v40[72]; // [rsp+160h] [rbp-48h] BYREF

  v2 = *(_OWORD *)(a2 + 600);
  v32 = *(_OWORD *)(a2 + 616);
  v31 = v2;
  v3 = *(_QWORD *)(a2 + 512);
  v4 = *(_OWORD *)(a2 + 192);
  v34 = *(_OWORD *)(a2 + 208);
  v33 = v4;
  v19 = 0LL;
  v20 = 8LL;
  v21 = 0LL;
  if ( *(_BYTE *)(a2 + 565) == 1 )
  {
    if ( v3 )
    {
      *(_QWORD *)((char *)&v29 + 7) = v3 - 1;
      v5 = 0;
    }
    else
    {
      LOBYTE(v29) = 1;
      v5 = 1;
    }
    v28 = v5;
    v6 = core::result::Result<T,E>::expect(&v28);
    v7 = *(_OWORD *)(a2 + 582);
    v37[0] = *(_OWORD *)(a2 + 566);
    v37[1] = v7;
    v8 = *(_OWORD *)(a2 + 208);
    v37[2] = *(_OWORD *)(a2 + 192);
    v37[3] = v8;
    v38 = v6;
    alloc::vec::Vec<T,A>::push(&v19, v37);
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v9 + 120LL * *(_QWORD *)(a2 + 16);
  alloc::vec::Vec<T,A>::extend_desugared(&v19, v9, v10);
  v23 = v3;
  *(_QWORD *)&v24 = v9;
  *((_QWORD *)&v24 + 1) = v10;
  core::iter::traits::iterator::Iterator::try_fold(&v28, &v24);
  v11 = v28;
  if ( v28 != 7 )
  {
    v36 = v30;
    v35 = v29;
  }
  v12 = v19;
  v22 = v20;
  v13 = v21;
  <linera_chain::block::ValidatedBlock as linera_chain::certificate::CertificateValue>::required_blob_ids(v39, a2);
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28, v39);
  core::iter::traits::iterator::Iterator::collect(&v26, &v28);
  linera_chain::block::Block::created_blob_ids(v40, a2);
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28, v40);
  core::iter::traits::iterator::Iterator::collect(&v24, &v28);
  v14 = v31;
  v15 = v32;
  v16 = v33;
  *(_OWORD *)(a1 + 120) = v34;
  *(_OWORD *)(a1 + 104) = v16;
  *(_OWORD *)(a1 + 88) = v15;
  *(_OWORD *)(a1 + 72) = v14;
  *(_QWORD *)(a1 + 136) = v23;
  *(_OWORD *)a1 = v24;
  *(_QWORD *)(a1 + 16) = v25;
  *(_OWORD *)(a1 + 24) = v26;
  *(_QWORD *)(a1 + 40) = v27;
  *(_QWORD *)(a1 + 48) = v12;
  result = v22;
  *(_QWORD *)(a1 + 56) = v22;
  *(_QWORD *)(a1 + 64) = v13;
  *(_BYTE *)(a1 + 144) = v11;
  v18 = v36;
  *(_OWORD *)(a1 + 145) = v35;
  *(_OWORD *)(a1 + 161) = v18;
  return result;
}