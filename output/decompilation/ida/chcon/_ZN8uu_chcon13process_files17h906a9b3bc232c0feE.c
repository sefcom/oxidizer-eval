__int64 __fastcall uu_chcon::process_files(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 result; // rax
  __int128 v12; // [rsp+8h] [rbp-130h] BYREF
  __int64 v13; // [rsp+18h] [rbp-120h]
  __int128 v14; // [rsp+20h] [rbp-118h] BYREF
  __m256i v15; // [rsp+30h] [rbp-108h] BYREF
  __int128 v16; // [rsp+50h] [rbp-E8h]
  __int128 v17; // [rsp+60h] [rbp-D8h]
  __int64 v18; // [rsp+70h] [rbp-C8h]
  int v19; // [rsp+78h] [rbp-C0h] BYREF
  char v20; // [rsp+7Ch] [rbp-BCh]
  _DWORD v21[30]; // [rsp+C0h] [rbp-78h] BYREF

  uu_chcon::fts::FTS::new(
    (__int64)&v15,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)(a2 + 16),
    dword_19BD0[*(unsigned __int8 *)(a2 + 123)]);
  if ( v15.m256i_i32[0] == 18 )
  {
    v14 = *(_OWORD *)&v15.m256i_u64[1];
    *(_QWORD *)&v12 = 0LL;
    *((_QWORD *)&v12 + 1) = 8LL;
    v13 = 0LL;
    while ( 1 )
    {
      uu_chcon::fts::FTS::read_next_entry((__int64)&v19, (__int64)&v14);
      if ( v19 != 18 )
        break;
      if ( !v20 )
        goto LABEL_11;
      uu_chcon::process_file(v21, a2, a3, &v14, a4);
      if ( v21[0] == 18 )
        core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(v21);
      else
        alloc::vec::Vec<T,A>::push(&v12, v21, &off_F0428);
    }
    alloc::vec::Vec<T,A>::push(&v12, &v19, &off_F0440);
LABEL_11:
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    core::ptr::drop_in_place<uu_chcon::fts::FTS>(&v14);
    return a1;
  }
  else
  {
    v6 = alloc::alloc::Global::alloc_impl(8LL, 72LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 72LL);
    v7 = *(_OWORD *)v15.m256i_i8;
    v8 = *(_OWORD *)&v15.m256i_u64[2];
    v9 = v16;
    v10 = v17;
    *(_QWORD *)(v6 + 64) = v18;
    *(_OWORD *)(v6 + 48) = v10;
    *(_OWORD *)(v6 + 32) = v9;
    *(_OWORD *)(v6 + 16) = v8;
    *(_OWORD *)v6 = v7;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = v6;
    result = a1;
    *(_QWORD *)(a1 + 16) = 1LL;
  }
  return result;
}