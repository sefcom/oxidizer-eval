        char a5)
{
  __int64 contiguous; // rax
  __int64 (__fastcall *v9)(__int64, __int64); // r14
  __int64 result; // rax
  size_t v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // r14
  size_t v15; // rbx
  size_t v16; // rbp
  __int64 v17; // rbx
  bool v18; // cf
  __int64 v19; // r15
  void *v20; // r15
  size_t v21; // r15
  char v22; // r13
  __int64 (__fastcall *v23)(__int64); // r14
  __int64 v24; // rbp
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  _QWORD *v31; // rdx
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-88h]
  __int64 (__fastcall *v38)(__int64, __int64); // [rsp+10h] [rbp-88h]
  _QWORD v41[3]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v42; // [rsp+50h] [rbp-48h]

  if ( *a1 == 0x8000000000000000LL )
  {
    contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(a4 + 56);
    result = v9(a3, contiguous);
    if ( result )
      return result;
    if ( a5 )
      return ((__int64 (__fastcall *)(__int64, const char *, __int64))v9)(a3, asc_24DDC, 1LL);
    v32 = a2;
    if ( a2[3] )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(v41, a2);
      v32 = a2;
      a2[3] = 0LL;
    }
    v32[2] = 0LL;
    return 0LL;
  }
  v11 = a1[3];
  v12 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
  if ( !v11 )
  {
    v41[0] = &anon_2e379de88427cfdda108dad8baf8b250_34_llvm_16806681140142669859;
    v41[1] = 1LL;
    v41[2] = 8LL;
    v42 = 0LL;
    core::panicking::panic_fmt(v41, &off_12C740);
  }
  v14 = (char *)v12;
  if ( (v11 | v13) >> 32 )
    v15 = v13 % v11;
  else
    v15 = (unsigned int)v13 % (unsigned int)v11;
  v16 = v13 - v15;
  core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL);
  core::slice::raw::from_raw_parts::precondition_check(&v14[v16], 1LL, 1LL);
  if ( v16 >= v11 )
  {
    v37 = 0LL;
    do
    {
      core::slice::raw::from_raw_parts::precondition_check(v14, 1LL, 1LL, v11);
      v16 -= v11;
      core::slice::raw::from_raw_parts::precondition_check(&v14[v11], 1LL, 1LL, v16);
      if ( !v14 )
        break;
      v18 = __CFADD__(v11, v37);
      v37 += v11;
      if ( v18 )
        core::panicking::panic_const::panic_const_add_overflow(&off_12C758);
      if ( (v11 & 0x8000000000000000LL) != 0LL )
        core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
      core::slice::raw::from_raw_parts::precondition_check(v14, 1LL, 1LL, v11);
      v19 = a1[2];
      if ( *a1 - v19 < v11 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, a1[2], v11);
        v19 = a1[2];
      }
      v20 = (void *)(a1[1] + v19);
      core::intrinsics::copy_nonoverlapping::precondition_check(v14, v20, 1LL, 1LL, v11);
      memcpy(v20, v14, v11);
      v21 = v11 + a1[2];
      a1[2] = v21;
      if ( v21 == *a1 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a1);
      *(_BYTE *)(a1[1] + v21) = 10;
      a1[2] = v21 + 1;
      v14 += v11;
    }
    while ( v16 >= v11 );
    v17 = v37;
  }
  else
  {
    v17 = 0LL;
  }
  v22 = a5;
  if ( !a1[1] || (__int64)a1[2] < 0 )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  v23 = *(__int64 (__fastcall **)(__int64))(a4 + 56);
  result = v23(a3);
  if ( !result )
  {
    v38 = (__int64 (__fastcall *)(__int64, __int64))v23;
    v24 = a3;
    v25 = core::slice::index::range(v17, a2[3], &anon_fab1997b4aa932db2117a172ac34a10e_31_llvm_952428305046595287);
    v27 = a2[3];
    v28 = v27 - v26;
    v29 = v26 - v25;
    a2[3] = v25;
    v30 = v27 - (v26 - v25);
    if ( v25 && v30 != v25 )
    {
      v33 = v25;
      <<alloc::collections::vec_deque::drain::Drain<T,A> as core::ops::drop::Drop>::drop::DropGuard<T,A> as core::ops::drop::Drop>::drop::join_head_and_tail_wrapping(
        a2,
        v26 - v25,
        v25,
        v28);
      v25 = v33;
      v22 = a5;
      if ( v27 == v29 )
      {
LABEL_27:
        a2[2] = 0LL;
        a2[3] = v30;
        v31 = a1;
        if ( v22 )
          return 0LL;
LABEL_40:
        if ( !v31[1] || (__int64)v31[2] < 0 )
          core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
        v31[2] = 0LL;
        return 0LL;
      }
    }
    else if ( v27 == v29 )
    {
      goto LABEL_27;
    }
    v31 = a1;
    if ( v25 < v28 )
    {
      v34 = a2[2] + v29;
      v35 = 0LL;
      if ( v34 >= *a2 )
        v35 = *a2;
      a2[2] = v34 - v35;
    }
    a2[3] = v30;
    if ( !v22 )
      goto LABEL_40;
    v36 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a2);
    result = v38(v24, v36);
    if ( !result )
      return ((__int64 (__fastcall *)(__int64, const char *, __int64))v38)(v24, asc_24DDC, 1LL);
  }
  return result;
}
