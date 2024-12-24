__int64 __fastcall uu_sort::chunks::Chunk::try_new(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // [rsp+8h] [rbp-100h] BYREF
  __m256i v14; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D8h]
  __int128 v16; // [rsp+40h] [rbp-C8h]
  __int128 v17; // [rsp+50h] [rbp-B8h]
  __int128 v18; // [rsp+60h] [rbp-A8h]
  _OWORD v19[7]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-28h]

  v4 = _rust_alloc(120LL, 8LL);
  if ( !v4 )
    core::option::unwrap_failed(&off_201AE8);
  v5 = v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v4 = *(_OWORD *)a2;
  v13 = v4;
  v20 = *((_QWORD *)a3 + 14);
  v19[6] = a3[6];
  v19[5] = a3[5];
  v19[4] = a3[4];
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v19[3] = a3[3];
  v19[2] = v8;
  v19[1] = v7;
  v19[0] = v6;
  uu_sort::chunks::read::{{closure}}(&v14, v19, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
  if ( v14.m256i_i64[0] == 0x8000000000000000LL )
  {
    *(_OWORD *)a1 = *(_OWORD *)&v14.m256i_u64[1];
    return core::ptr::drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>(&v13);
  }
  else
  {
    result = v5 + 24;
    *(_OWORD *)(v5 + 104) = v18;
    *(_OWORD *)(v5 + 88) = v17;
    v10 = *(_OWORD *)v14.m256i_i8;
    v11 = *(_OWORD *)&v14.m256i_u64[2];
    v12 = v15;
    *(_OWORD *)(v5 + 72) = v16;
    *(_OWORD *)(v5 + 56) = v12;
    *(_OWORD *)(v5 + 40) = v11;
    *(_OWORD *)(v5 + 24) = v10;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
