__int64 __fastcall uu_sort::chunks::RecycledChunk::new(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-88h]
  __int128 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+30h] [rbp-58h]
  __int128 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+60h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp-20h]
  __int64 v12; // [rsp+70h] [rbp-18h]

  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 8LL;
  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 8LL;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, a2, 1LL);
  v3 = v11;
  if ( v10 )
    alloc::raw_vec::handle_error(v11, v12);
  v4 = v12;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = v9;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = v3;
  *(_QWORD *)(a1 + 104) = v4;
  *(_QWORD *)(a1 + 112) = a2;
  return a1;
}
