void *__fastcall meilitool::upgrade::v1_12::IndexStats::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // kr00_16
  __int64 v5; // rbp
  __int64 v6; // r13
  void *result; // rax
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // [rsp+0h] [rbp-1D8h] BYREF
  void *v11; // [rsp+10h] [rbp-1C8h]
  __int64 v12; // [rsp+18h] [rbp-1C0h]
  __int128 v13; // [rsp+20h] [rbp-1B8h]
  __int128 v14; // [rsp+30h] [rbp-1A8h]
  __int128 v15; // [rsp+40h] [rbp-198h]
  __int128 v16; // [rsp+50h] [rbp-188h]
  _OWORD v17[23]; // [rsp+60h] [rbp-178h] BYREF

  milli::index::Index::number_of_documents(v17);
  v4 = v17[0];
  if ( *(_QWORD *)&v17[0] != 93LL )
  {
    result = memcpy((void *)(a1 + 16), &v17[1], 0x130uLL);
    *(_OWORD *)a1 = v4;
    return result;
  }
  milli::index::Index::on_disk_size(v17, a2);
  v6 = *((_QWORD *)&v17[0] + 1);
  v5 = *(_QWORD *)&v17[0];
  if ( *(_QWORD *)&v17[0] != 93LL
    || (v12 = *((_QWORD *)&v17[0] + 1),
        milli::index::Index::used_size(v17, a2),
        v6 = *((_QWORD *)&v17[0] + 1),
        v5 = *(_QWORD *)&v17[0],
        *(_QWORD *)&v17[0] != 93LL) )
  {
    result = memcpy((void *)(a1 + 16), &v17[1], 0x130uLL);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
    return result;
  }
  milli::index::Index::field_distribution(v17, a2, a3);
  v10 = *(_OWORD *)((char *)v17 + 8);
  v11 = (void *)*((_QWORD *)&v17[1] + 1);
  if ( LODWORD(v17[0]) == 1 )
  {
    *(_QWORD *)&v17[1] = v11;
    v17[0] = v10;
    return (void *)<milli::error::Error as core::convert::From<heed::Error>>::from(a1, v17);
  }
  milli::index::Index::created_at(v17, a2, a3);
  v13 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] == 93LL )
  {
    milli::index::Index::updated_at(v17, a2, a3);
    v8 = *(_QWORD *)&v17[0];
    v14 = *(_OWORD *)((char *)v17 + 8);
    if ( *(_QWORD *)&v17[0] == 93LL )
    {
      v16 = v14;
      result = v11;
      *(_QWORD *)(a1 + 80) = v11;
      *(_OWORD *)(a1 + 64) = v10;
      v15 = v13;
      *(_OWORD *)(a1 + 8) = v13;
      *(_OWORD *)(a1 + 24) = v16;
      *(_QWORD *)(a1 + 40) = *((_QWORD *)&v4 + 1);
      *(_QWORD *)(a1 + 48) = v4;
      *(_QWORD *)(a1 + 56) = v6;
      *(_QWORD *)a1 = 93LL;
      return result;
    }
    memcpy((void *)(a1 + 24), (char *)&v17[1] + 8, 0x128uLL);
    v9 = v14;
  }
  else
  {
    v8 = *(_QWORD *)&v17[0];
    memcpy((void *)(a1 + 24), (char *)&v17[1] + 8, 0x128uLL);
    v9 = v13;
  }
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v8;
  return (void *)core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>(&v10);
}