_OWORD *__fastcall uu_cp::aligned_ancestors(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 *back; // r13
  __int64 *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  _OWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+8h] [rbp-D0h]
  __int64 v17; // [rsp+10h] [rbp-C8h]
  __int64 v18; // [rsp+18h] [rbp-C0h]
  __int128 v19; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-A8h]
  __int64 v21; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-98h] BYREF
  __int64 v23; // [rsp+48h] [rbp-90h]
  unsigned __int64 v24; // [rsp+50h] [rbp-88h]
  unsigned __int64 v25; // [rsp+58h] [rbp-80h] BYREF
  __int64 v26; // [rsp+60h] [rbp-78h]
  unsigned __int64 v27; // [rsp+68h] [rbp-70h]
  _QWORD v28[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v30; // [rsp+90h] [rbp-48h]
  __int64 v31; // [rsp+A0h] [rbp-38h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v22);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v25);
  if ( !v24 )
    core::panicking::panic_const::panic_const_sub_overflow(&off_182300);
  if ( v24 >> 59 || !v23 || (v23 & 7) != 0 )
    goto LABEL_31;
  if ( v24 == 1 )
    core::slice::index::slice_index_order_fail(1LL, 0LL, &off_182318);
  if ( !v26 || (v26 & 7) != 0 || v27 > 0x7FFFFFFFFFFFFFFLL )
LABEL_31:
    core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
  v21 = a1;
  if ( v24 - 2 >= v27 )
    core::slice::index::slice_end_index_len_fail(v24 - 1, v27, &off_182330);
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v28[0] = v23 + 16;
  v28[1] = v23 + 16 + 16 * (v24 - 2);
  v29[0] = v26 + 16;
  v29[1] = v26 + 16 * v24 - 16;
  while ( 1 )
  {
    back = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v28);
    if ( !back )
      break;
    v4 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v29);
    if ( !v4 )
      break;
    v5 = *back;
    v6 = back[1];
    v7 = *v4;
    v8 = v4[1];
    v9 = v20;
    if ( v20 == (_QWORD)v19 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v19);
    v1 = *((_QWORD *)&v19 + 1);
    v2 = 32 * v9;
    *(_QWORD *)(*((_QWORD *)&v19 + 1) + v2) = v5;
    *(_QWORD *)(v1 + v2 + 8) = v6;
    *(_QWORD *)(v1 + v2 + 16) = v7;
    *(_QWORD *)(v1 + v2 + 24) = v8;
    v20 = v9 + 1;
  }
  v10 = (_OWORD *)v21;
  *(_QWORD *)(v21 + 16) = v20;
  *v10 = v19;
  if ( v25 )
  {
    if ( v25 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_32;
    v11 = 16 * v25;
    v16 = v26;
    v17 = 8LL;
    v12 = 16LL;
  }
  else
  {
    v12 = 8LL;
    v11 = 0LL;
  }
  *(__int64 *)((char *)&v16 + v12) = v11;
  if ( v17 && v18 )
    _rust_dealloc(v16, v18, v17);
  if ( !v22 )
  {
    v14 = 8LL;
    v13 = 0LL;
    goto LABEL_27;
  }
  if ( v22 > 0xFFFFFFFFFFFFFFFLL )
LABEL_32:
    core::panicking::panic_nounwind(anon_66827f6b5e96d838f084441030a41a9e_17_llvm_16861867776640412384, 69LL);
  v13 = 16 * v22;
  v16 = v23;
  v17 = 8LL;
  v14 = 16LL;
LABEL_27:
  *(__int64 *)((char *)&v16 + v14) = v13;
  if ( v17 && v18 )
    _rust_dealloc(v16, v18, v17);
  return v10;
}
