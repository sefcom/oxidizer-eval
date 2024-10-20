__int64 __fastcall uu_tail::chunks::LinesChunkBuffer::fill(__int64 a1, __int64 a2)
{
  char v4; // bp
  void *v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int8 v8; // bp
  __int64 (__fastcall *v9)(_QWORD, __int64, unsigned __int64); // rax
  __int64 v10; // rax
  bool v11; // cf
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdx
  char v26; // r12
  void *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  void *v44; // rax
  void *v45; // r12
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  char **v52; // rdx
  char **v53; // rax
  char **v54; // [rsp+0h] [rbp-2068h]
  __int64 v55; // [rsp+8h] [rbp-2060h] BYREF
  __int64 v56; // [rsp+10h] [rbp-2058h]
  _QWORD src[1033]; // [rsp+20h] [rbp-2048h] BYREF

  src[515] = 0LL;
  src[3] = 0LL;
  v4 = *(_BYTE *)(a1 + 48);
  v5 = (void *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8216LL, 0LL);
  if ( !v5 )
LABEL_66:
    alloc::alloc::handle_alloc_error(8LL, 8216LL);
  v6 = (__int64)v5;
  memset(v5, 0, 0x2010uLL);
  *(_BYTE *)(v6 + 8208) = v4;
  v54 = &off_189ED0;
  while ( 1 )
  {
    uu_tail::chunks::BytesChunk::fill(&v55, v6, a2);
    if ( v55 )
    {
      v28 = v56;
LABEL_56:
      _rust_dealloc(v6, 8216LL, 8LL);
      return v28;
    }
    if ( !v56 )
      break;
    v7 = *(_QWORD *)(v6 + 0x2000);
    if ( v7 >= 0x2001 )
      goto LABEL_59;
    v8 = *(_BYTE *)(v6 + 8208);
    v9 = (__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64))core::sync::atomic::atomic_load(
                                                                      &memchr::arch::x86_64::memchr::count_raw::FN,
                                                                      0LL);
    v10 = v9(v8, v6, v6 + v7);
    *(_QWORD *)(v6 + 8200) = v10;
    if ( (v6 & 7) != 0 )
    {
      v52 = &off_189EB8;
      goto LABEL_69;
    }
    v11 = __CFADD__(*(_QWORD *)(a1 + 32), v10);
    v12 = *(_QWORD *)(a1 + 32) + v10;
    if ( v11 )
      goto LABEL_76;
    *(_QWORD *)(a1 + 32) = v12;
    v13 = *(_QWORD *)a1;
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 == *(_QWORD *)a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)(a1 + 24);
    }
    v15 = *(_QWORD *)(a1 + 16) + v14;
    v16 = 0LL;
    if ( v15 >= v13 )
      v16 = v13;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (v15 - v16)) = v6;
    v17 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v17 + 1;
    if ( v17 == -1LL )
      core::option::expect_failed(anon_b4db73deccd4c3fb4917fbadd2f6109b_0_llvm_12929045902270977932, 20LL, &off_189EE8);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)a1;
    v20 = *(_QWORD *)(a1 + 8);
    v21 = 0LL;
    if ( v18 >= *(_QWORD *)a1 )
      v21 = *(_QWORD *)a1;
    v22 = *(_QWORD *)(v20 + 8 * (v18 - v21));
    if ( (v22 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v22, &off_189F00);
    v23 = *(_QWORD *)(a1 + 32);
    if ( v23 < *(_QWORD *)(v22 + 8200) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189F18);
    if ( v23 - *(_QWORD *)(v22 + 8200) <= *(_QWORD *)(a1 + 40) )
    {
      v26 = *(_BYTE *)(a1 + 48);
      v27 = (void *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8216LL, 0LL);
      if ( !v27 )
        goto LABEL_66;
      v6 = (__int64)v27;
      memset(v27, 0, 0x2010uLL);
      *(_BYTE *)(v6 + 8208) = v26;
    }
    else
    {
      v24 = 0LL;
      if ( v18 + 1 >= v19 )
        v24 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 16) = v18 + 1 - v24;
      *(_QWORD *)(a1 + 24) = v17;
      if ( v17 >= v19 )
LABEL_58:
        core::panicking::panic_nounwind(anon_37f358f21d19bbdcba75229624af5009_17_llvm_13195312316341825492, 104LL);
      v6 = *(_QWORD *)(v20 + 8 * v18);
      if ( !v6 )
        core::option::unwrap_failed(&off_189F30);
      if ( (v6 & 7) != 0 )
      {
        v52 = &off_189F48;
LABEL_69:
        core::panicking::panic_misaligned_pointer_dereference(8LL, v6, v52);
      }
      v11 = v23 < *(_QWORD *)(v6 + 8200);
      v25 = v23 - *(_QWORD *)(v6 + 8200);
      if ( v11 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_189F60);
      *(_QWORD *)(a1 + 32) = v25;
    }
  }
  *(_QWORD *)(v6 + 8200) = 0LL;
  v29 = *(_QWORD *)(a1 + 24);
  if ( !v29 )
  {
    v28 = 0LL;
    goto LABEL_56;
  }
  v30 = v29 + *(_QWORD *)(a1 + 16) - 1;
  v31 = 0LL;
  if ( v30 >= *(_QWORD *)a1 )
    v31 = *(_QWORD *)a1;
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (v30 - v31));
  v7 = *(_QWORD *)(v32 + 0x2000);
  if ( v7 > 0x2000 )
LABEL_59:
    core::slice::index::slice_end_index_len_fail(
      v7,
      0x2000LL,
      &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
  if ( !v7 || *(_BYTE *)(a1 + 48) != *(_BYTE *)(v32 + v7 - 1) )
  {
    if ( (v32 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v32, &off_189E40);
    if ( *(_QWORD *)(v32 + 8200) == -1LL )
    {
      v53 = &off_189E40;
    }
    else
    {
      ++*(_QWORD *)(v32 + 8200);
      if ( *(_QWORD *)(a1 + 32) != -1LL )
      {
        ++*(_QWORD *)(a1 + 32);
        v29 = *(_QWORD *)(a1 + 24);
        if ( v29 )
          goto LABEL_38;
LABEL_46:
        core::option::unwrap_failed(&off_189E70);
      }
      v53 = &off_189E58;
    }
    v54 = v53;
LABEL_76:
    core::panicking::panic_const::panic_const_add_overflow(v54);
  }
  while ( 1 )
  {
LABEL_38:
    v33 = *(_QWORD *)a1;
    v34 = *(_QWORD *)(a1 + 16);
    v35 = *(_QWORD *)a1;
    if ( (unsigned __int64)(v34 + 1) < *(_QWORD *)a1 )
      v35 = 0LL;
    *(_QWORD *)(a1 + 16) = v34 - v35 + 1;
    v36 = v29 - 1;
    *(_QWORD *)(a1 + 24) = v36;
    if ( v36 >= v33 )
      goto LABEL_58;
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(v37 + 8 * v34);
    if ( !v38 )
      goto LABEL_46;
    if ( (v38 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, *(_QWORD *)(v37 + 8 * v34), &off_189E88);
    v39 = *(_QWORD *)(a1 + 32);
    v40 = v39 - *(_QWORD *)(v38 + 8200);
    if ( v39 < *(_QWORD *)(v38 + 8200) )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189EA0);
    v41 = *(_QWORD *)(a1 + 40);
    if ( v40 <= v41 )
      break;
    *(_QWORD *)(a1 + 32) = v40;
    _rust_dealloc(v38, 8216LL, 8LL);
    v29 = *(_QWORD *)(a1 + 24);
    if ( !v29 )
      goto LABEL_46;
  }
  v42 = 0LL;
  v11 = v39 < v41;
  v43 = v39 - v41;
  if ( !v11 )
    v42 = v43;
  uu_tail::chunks::LinesChunk::from_chunk(src, v38, v42);
  v44 = (void *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8216LL, 0LL);
  v45 = v44;
  if ( !v44 )
    alloc::alloc::handle_alloc_error(8LL, 8216LL);
  memcpy(v44, src, 0x2018uLL);
  v46 = *(_QWORD *)a1;
  v47 = *(_QWORD *)(a1 + 24);
  if ( v47 == *(_QWORD *)a1 )
  {
    alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
    v46 = *(_QWORD *)a1;
    v47 = *(_QWORD *)(a1 + 24);
  }
  v48 = *(_QWORD *)(a1 + 8);
  v49 = *(_QWORD *)(a1 + 16) - 1LL;
  v11 = __CFADD__(v49, v46);
  v50 = v49 + v46;
  if ( !v11 )
    v50 = *(_QWORD *)(a1 + 16) - 1LL;
  *(_QWORD *)(a1 + 16) = v50;
  *(_QWORD *)(a1 + 24) = v47 + 1;
  *(_QWORD *)(v48 + 8 * v50) = v45;
  _rust_dealloc(v38, 8216LL, 8LL);
  _rust_dealloc(v6, 8216LL, 8LL);
  return 0LL;
}
