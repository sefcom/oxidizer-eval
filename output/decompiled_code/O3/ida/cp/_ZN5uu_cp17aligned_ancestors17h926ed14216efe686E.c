_QWORD *__fastcall uu_cp::aligned_ancestors(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rbx
  char **v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+10h] [rbp-88h]
  __int64 v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h]
  _QWORD *v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  _QWORD v19[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  _QWORD v21[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-38h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v19);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v21);
  if ( v20 == 1 )
    core::slice::index::slice_index_order_fail(1LL, 0LL, &off_155540);
  v17 = a1;
  if ( !v20 )
  {
    v11 = &off_155540;
    v1 = 0LL;
    goto LABEL_18;
  }
  v1 = v22;
  if ( v20 - 2 >= v22 )
  {
    v11 = &off_155558;
LABEL_18:
    core::slice::index::slice_end_index_len_fail(v20 - 1, v1, v11);
  }
  v16 = v19[1];
  v15 = v21[1];
  v12 = 0LL;
  v13 = 8LL;
  v14 = 0LL;
  if ( v20 != 2 )
  {
    v2 = 16 * (v20 - 2);
    v3 = 1LL;
    v4 = 24LL;
    do
    {
      if ( !v2 )
        break;
      v6 = *(_QWORD *)(v16 + v2);
      v7 = *(_QWORD *)(v16 + v2 + 8);
      v8 = *(_QWORD *)(v15 + v2);
      v18 = *(_QWORD *)(v15 + v2 + 8);
      if ( v3 - 1 == v12 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v12);
      v5 = v13;
      *(_QWORD *)(v13 + v4 - 24) = v6;
      *(_QWORD *)(v5 + v4 - 16) = v7;
      *(_QWORD *)(v5 + v4 - 8) = v8;
      *(_QWORD *)(v5 + v4) = v18;
      v14 = v3++;
      v4 += 32LL;
      v2 -= 16LL;
    }
    while ( v2 );
  }
  v9 = v17;
  v17[2] = v14;
  *v9 = v12;
  v9[1] = v13;
  if ( v21[0] )
    _rust_dealloc(v15, 16LL * v21[0], 8LL);
  if ( v19[0] )
    _rust_dealloc(v16, 16LL * v19[0], 8LL);
  return v9;
}
