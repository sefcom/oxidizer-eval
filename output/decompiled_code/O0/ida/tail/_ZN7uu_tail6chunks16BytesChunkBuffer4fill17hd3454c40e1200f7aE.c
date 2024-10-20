_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  _OWORD *v23; // rax
  _OWORD *v24; // r14
  __int128 v25; // xmm0
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r13
  size_t v36; // r12
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r13
  _QWORD *v39; // rax
  _QWORD *v40; // r12
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  char **v47; // rdx
  _OWORD s[512]; // [rsp+0h] [rbp-4030h] BYREF
  _QWORD dest[1024]; // [rsp+2000h] [rbp-2030h] BYREF

  dest[512] = 0LL;
  dest[0] = 0LL;
  *(_QWORD *)&s[256] = 0LL;
  *(_QWORD *)&s[0] = 0LL;
  v4 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
  if ( !v4 )
    goto LABEL_54;
LABEL_2:
  v5 = v4;
  memset(v4, 0, 0x2008uLL);
  while ( 1 )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(a2[1] + 24LL))(*a2, v5, 0x2000LL) )
    {
      *(_QWORD *)&s[0] = 0x8000000000000000LL;
      *((_QWORD *)&s[1] + 1) = v6;
      v23 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v24 = v23;
      if ( !v23 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v25 = s[0];
      v23[1] = s[1];
      *v23 = v25;
      goto LABEL_40;
    }
    v5[1024] = v6;
    if ( !v6 )
      break;
    if ( ((unsigned __int8)v5 & 7) != 0 )
    {
      v47 = &off_189D68;
      goto LABEL_58;
    }
    v7 = a1[5];
    v8 = __CFADD__(v6, v7);
    v9 = v6 + v7;
    if ( v8 )
      core::panicking::panic_const::panic_const_add_overflow(&off_189D80);
    a1[5] = v9;
    v10 = *a1;
    v11 = a1[3];
    if ( v11 == *a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v10 = *a1;
      v11 = a1[3];
    }
    v12 = a1[2] + v11;
    v13 = 0LL;
    if ( v12 >= v10 )
      v13 = v10;
    *(_QWORD *)(a1[1] + 8 * (v12 - v13)) = v5;
    v14 = a1[3];
    a1[3] = v14 + 1;
    if ( v14 == -1LL )
      core::option::expect_failed(anon_b4db73deccd4c3fb4917fbadd2f6109b_0_llvm_12929045902270977932, 20LL, &off_189D98);
    v15 = a1[2];
    v16 = *a1;
    v17 = a1[1];
    v18 = 0LL;
    if ( v15 >= *a1 )
      v18 = *a1;
    v19 = *(_QWORD *)(v17 + 8 * (v15 - v18));
    if ( (v19 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v19, &off_189DB0);
    v20 = a1[5];
    if ( v20 < *(_QWORD *)(v19 + 0x2000) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189DC8);
    if ( v20 - *(_QWORD *)(v19 + 0x2000) <= a1[4] )
    {
      v4 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
      if ( v4 )
        goto LABEL_2;
LABEL_54:
      alloc::alloc::handle_alloc_error(8LL, 8200LL);
    }
    v21 = 0LL;
    if ( v15 + 1 >= v16 )
      v21 = *a1;
    a1[2] = v15 + 1 - v21;
    a1[3] = v14;
    if ( v14 >= v16 )
      goto LABEL_55;
    v5 = *(_QWORD **)(v17 + 8 * v15);
    if ( !v5 )
      core::option::unwrap_failed(&off_189DE0);
    if ( ((unsigned __int8)v5 & 7) != 0 )
    {
      v47 = &off_189DF8;
LABEL_58:
      core::panicking::panic_misaligned_pointer_dereference(8LL, v5, v47);
    }
    v8 = v20 < v5[1024];
    v22 = v20 - v5[1024];
    if ( v8 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189E10);
    a1[5] = v22;
  }
  v26 = a1[3];
  if ( !v26 )
  {
    v24 = 0LL;
LABEL_40:
    _rust_dealloc(v5, 8200LL, 8LL);
    return v24;
  }
  v27 = *a1;
  v28 = a1[2];
  v29 = 0LL;
  if ( v28 + 1 >= *a1 )
    v29 = *a1;
  a1[2] = v28 - v29 + 1;
  v30 = v26 - 1;
  a1[3] = v30;
  if ( v30 >= v27 )
LABEL_55:
    core::panicking::panic_nounwind(anon_37f358f21d19bbdcba75229624af5009_17_llvm_13195312316341825492, 104LL);
  v31 = *(_QWORD *)(a1[1] + 8 * v28);
  if ( !v31 )
    core::option::unwrap_failed(&off_189D50);
  v32 = a1[5];
  v33 = 0LL;
  v8 = v32 < a1[4];
  v34 = v32 - a1[4];
  if ( !v8 )
    v33 = v34;
  v35 = *(_QWORD *)(v31 + 0x2000);
  v36 = v35 - v33;
  if ( v35 <= v33 )
  {
    v38 = 0LL;
    memset(dest, 0, sizeof(dest));
  }
  else
  {
    memset(s, 0, sizeof(s));
    if ( v35 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        v35,
        0x2000LL,
        &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
    core::intrinsics::copy_nonoverlapping::precondition_check(v31 + v33, s, 1LL, 1LL, v36);
    memcpy(s, (const void *)(v31 + v33), v36);
    v37 = *(_QWORD *)(v31 + 0x2000);
    v8 = v37 < v33;
    v38 = v37 - v33;
    if ( v8 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189D08);
    memcpy(dest, s, sizeof(dest));
  }
  v39 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8200LL, 0LL);
  v40 = v39;
  if ( !v39 )
    alloc::alloc::handle_alloc_error(8LL, 8200LL);
  memcpy(v39, dest, 0x2000uLL);
  v40[1024] = v38;
  v41 = *a1;
  v42 = a1[3];
  if ( v42 == *a1 )
  {
    alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
    v41 = *a1;
    v42 = a1[3];
  }
  v43 = a1[1];
  v44 = a1[2] - 1;
  v8 = __CFADD__(v44, v41);
  v45 = v44 + v41;
  if ( !v8 )
    v45 = a1[2] - 1;
  a1[2] = v45;
  a1[3] = v42 + 1;
  *(_QWORD *)(v43 + 8 * v45) = v40;
  _rust_dealloc(v31, 8200LL, 8LL);
  _rust_dealloc(v5, 8200LL, 8LL);
  return 0LL;
}
