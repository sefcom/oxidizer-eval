__int64 __fastcall rg::flags::parse::find_similar_names(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r13
  _OWORD *v14; // rcx
  __int128 v16; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-98h]
  __int64 (__fastcall **v18)(_QWORD); // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  _BYTE v21[24]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v23[72]; // [rsp+60h] [rbp-48h] BYREF

  v19 = a1;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  rg::flags::parse::ngrams(v21);
  v1 = 0LL;
  do
  {
    v2 = *(_QWORD *)((char *)&unk_3E9308 + v1);
    v20 = v1;
    v18 = *(__int64 (__fastcall ***)(_QWORD))((char *)&unk_3E9308 + v1 + 8);
    v3 = v18[6](v2);
    v5 = v4;
    rg::flags::parse::ngrams(v22);
    if ( rg::flags::parse::jaccard_index(v21, v22) >= 0.4 )
      alloc::vec::Vec<T,A>::push(&v16, v3, v5, &off_3EB650);
    v7 = v18[8](v2);
    if ( v7 )
    {
      v8 = v6;
      rg::flags::parse::ngrams(v23);
      if ( rg::flags::parse::jaccard_index(v21, v23) >= 0.4 )
        alloc::vec::Vec<T,A>::push(&v16, v7, v8, &off_3EB668);
      core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::borrow::Cow<[u8]>>>(v23);
    }
    v9 = v18[7](v2);
    if ( v10 )
    {
      v11 = v9;
      v12 = 16 * v10;
      v13 = 0LL;
      do
      {
        rg::flags::parse::ngrams(v23);
        if ( rg::flags::parse::jaccard_index(v21, v23) >= 0.4 )
          alloc::vec::Vec<T,A>::push(&v16, *(_QWORD *)(v11 + v13), *(_QWORD *)(v11 + v13 + 8), &off_3EB680);
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::borrow::Cow<[u8]>>>(v23);
        v13 += 16LL;
      }
      while ( v12 != v13 );
    }
    core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::borrow::Cow<[u8]>>>(v22);
    v1 = v20 + 16;
  }
  while ( v20 != 1648 );
  v14 = (_OWORD *)v19;
  *(_QWORD *)(v19 + 16) = v17;
  *v14 = v16;
  return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::borrow::Cow<[u8]>>>(v21);
}