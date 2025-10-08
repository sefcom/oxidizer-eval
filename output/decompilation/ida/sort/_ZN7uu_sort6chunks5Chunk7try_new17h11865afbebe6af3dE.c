__int64 __fastcall uu_sort::chunks::Chunk::try_new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __m256i v10; // [rsp+0h] [rbp-98h] BYREF
  __int128 v11; // [rsp+20h] [rbp-78h]
  __int128 v12; // [rsp+30h] [rbp-68h]
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]

  v4 = __rustc::__rust_alloc(144LL, 8LL);
  if ( !v4 )
    core::option::unwrap_failed(&off_18D640);
  v5 = v4;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v4 = *(_OWORD *)a2;
  uu_sort::chunks::read::{{closure}}(&v10, a3, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
  if ( __OFSUB__(0LL, v10.m256i_i64[0]) )
  {
    *(_OWORD *)a1 = *(_OWORD *)&v10.m256i_u64[1];
    return core::ptr::drop_in_place<self_cell::unsafe_self_cell::OwnerAndCellDropGuard<alloc::vec::Vec<u8>,uu_sort::chunks::ChunkContents>>(v5);
  }
  else
  {
    result = v5 + 24;
    *(_QWORD *)(v5 + 136) = v16;
    *(_OWORD *)(v5 + 120) = v15;
    *(_OWORD *)(v5 + 104) = v14;
    *(_OWORD *)(v5 + 88) = v13;
    v7 = *(_OWORD *)v10.m256i_i8;
    v8 = *(_OWORD *)&v10.m256i_u64[2];
    v9 = v11;
    *(_OWORD *)(v5 + 72) = v12;
    *(_OWORD *)(v5 + 56) = v9;
    *(_OWORD *)(v5 + 40) = v8;
    *(_OWORD *)(v5 + 24) = v7;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}