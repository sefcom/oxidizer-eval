__int64 __fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  void *v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r13
  size_t v34; // r12
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r13
  _QWORD *v37; // rax
  _QWORD *v38; // r12
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  char **v45; // rdx
  __int64 v46; // [rsp+0h] [rbp-4048h] BYREF
  __int64 v47; // [rsp+8h] [rbp-4040h]
  _QWORD s[1024]; // [rsp+18h] [rbp-4030h] BYREF
  _QWORD dest[1024]; // [rsp+2018h] [rbp-2030h] BYREF

  dest[512] = 0LL;
  dest[0] = 0LL;
  s[512] = 0LL;
  s[0] = 0LL;
  v4 = (void *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
  if ( !v4 )
LABEL_53:
    alloc::alloc::handle_alloc_error(8LL, 8200LL);
  v5 = (__int64)v4;
  memset(v4, 0, 0x2008uLL);
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(&v46, v5, a2);
    if ( v46 )
    {
      v23 = v47;
LABEL_39:
      _rust_dealloc(v5, 8200LL, 8LL);
      return v23;
    }
    if ( v47 != 1 )
      break;
    if ( (v5 & 7) != 0 )
    {
      v45 = &off_189D68;
      goto LABEL_56;
    }
    v6 = a1[5];
    v7 = __CFADD__(*(_QWORD *)(v5 + 0x2000), v6);
    v8 = *(_QWORD *)(v5 + 0x2000) + v6;
    if ( v7 )
      core::panicking::panic_const::panic_const_add_overflow(&off_189D80);
    a1[5] = v8;
    v9 = *a1;
    v10 = a1[3];
    if ( v10 == *a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v9 = *a1;
      v10 = a1[3];
    }
    v11 = a1[2] + v10;
    v12 = 0LL;
    if ( v11 >= v9 )
      v12 = v9;
    *(_QWORD *)(a1[1] + 8 * (v11 - v12)) = v5;
    v13 = a1[3];
    a1[3] = v13 + 1;
    if ( v13 == -1LL )
      core::option::expect_failed(anon_b4db73deccd4c3fb4917fbadd2f6109b_0_llvm_12929045902270977932, 20LL, &off_189D98);
    v14 = a1[2];
    v15 = *a1;
    v16 = a1[1];
    v17 = 0LL;
    if ( v14 >= *a1 )
      v17 = *a1;
    v18 = *(_QWORD *)(v16 + 8 * (v14 - v17));
    if ( (v18 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v18, &off_189DB0);
    v19 = a1[5];
    if ( v19 < *(_QWORD *)(v18 + 0x2000) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189DC8);
    if ( v19 - *(_QWORD *)(v18 + 0x2000) <= a1[4] )
    {
      v22 = (void *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
      if ( !v22 )
        goto LABEL_53;
      v5 = (__int64)v22;
      memset(v22, 0, 0x2008uLL);
    }
    else
    {
      v20 = 0LL;
      if ( v14 + 1 >= v15 )
        v20 = *a1;
      a1[2] = v14 + 1 - v20;
      a1[3] = v13;
      if ( v13 >= v15 )
        goto LABEL_54;
      v5 = *(_QWORD *)(v16 + 8 * v14);
      if ( !v5 )
        core::option::unwrap_failed(&off_189DE0);
      if ( (v5 & 7) != 0 )
      {
        v45 = &off_189DF8;
LABEL_56:
        core::panicking::panic_misaligned_pointer_dereference(8LL, v5, v45);
      }
      v7 = v19 < *(_QWORD *)(v5 + 0x2000);
      v21 = v19 - *(_QWORD *)(v5 + 0x2000);
      if ( v7 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_189E10);
      a1[5] = v21;
    }
  }
  v24 = a1[3];
  if ( !v24 )
  {
    v23 = 0LL;
    goto LABEL_39;
  }
  v25 = *a1;
  v26 = a1[2];
  v27 = 0LL;
  if ( v26 + 1 >= *a1 )
    v27 = *a1;
  a1[2] = v26 - v27 + 1;
  v28 = v24 - 1;
  a1[3] = v28;
  if ( v28 >= v25 )
LABEL_54:
    core::panicking::panic_nounwind(anon_37f358f21d19bbdcba75229624af5009_17_llvm_13195312316341825492, 104LL);
  v29 = *(_QWORD *)(a1[1] + 8 * v26);
  if ( !v29 )
    core::option::unwrap_failed(&off_189D50);
  v30 = a1[5];
  v31 = 0LL;
  v7 = v30 < a1[4];
  v32 = v30 - a1[4];
  if ( !v7 )
    v31 = v32;
  v33 = *(_QWORD *)(v29 + 0x2000);
  v34 = v33 - v31;
  if ( v33 <= v31 )
  {
    v36 = 0LL;
    memset(dest, 0, sizeof(dest));
  }
  else
  {
    memset(s, 0, sizeof(s));
    if ( v33 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        v33,
        0x2000LL,
        &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
    core::intrinsics::copy_nonoverlapping::precondition_check(v29 + v31, s, 1LL, 1LL, v34);
    memcpy(s, (const void *)(v29 + v31), v34);
    v35 = *(_QWORD *)(v29 + 0x2000);
    v7 = v35 < v31;
    v36 = v35 - v31;
    if ( v7 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189D08);
    memcpy(dest, s, sizeof(dest));
  }
  v37 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
  v38 = v37;
  if ( !v37 )
    alloc::alloc::handle_alloc_error(8LL, 8200LL);
  memcpy(v37, dest, 0x2000uLL);
  v38[1024] = v36;
  v39 = *a1;
  v40 = a1[3];
  if ( v40 == *a1 )
  {
    alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
    v39 = *a1;
    v40 = a1[3];
  }
  v41 = a1[1];
  v42 = a1[2] - 1;
  v7 = __CFADD__(v42, v39);
  v43 = v42 + v39;
  if ( !v7 )
    v43 = a1[2] - 1;
  a1[2] = v43;
  a1[3] = v40 + 1;
  *(_QWORD *)(v41 + 8 * v43) = v38;
  _rust_dealloc(v29, 8200LL, 8LL);
  _rust_dealloc(v5, 8200LL, 8LL);
  return 0LL;
}
