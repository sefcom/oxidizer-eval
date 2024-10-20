_OWORD *__fastcall uu_ln::exec(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 *v8; // rdi
  _OWORD *result; // rax
  const void *v10; // r15
  size_t v11; // rbx
  __int64 v12; // r14
  void *v13; // r12
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  const void *v17; // r15
  size_t v18; // rbx
  void *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-E0h]
  void *dest; // [rsp+10h] [rbp-D8h]
  _BYTE v27[8]; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-C8h]
  __int64 v29; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v30[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-B0h]
  __int64 v32; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v33[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-98h]
  __int64 v35; // [rsp+58h] [rbp-90h] BYREF
  __int128 v36; // [rsp+60h] [rbp-88h]
  __int128 v37; // [rsp+70h] [rbp-78h]
  __int128 v38; // [rsp+80h] [rbp-68h]
  __int128 v39; // [rsp+90h] [rbp-58h]
  __int128 v40; // [rsp+A0h] [rbp-48h]
  __int128 v41; // [rsp+B0h] [rbp-38h]

  if ( *(_QWORD *)(a3 + 24) != 0x8000000000000000LL )
  {
    if ( *(_QWORD *)(a3 + 32) )
    {
      if ( *(__int64 *)(a3 + 40) >= 0 )
      {
        std::sys::os_str::bytes::Slice::to_owned(v30);
        if ( v31 )
        {
          if ( v32 >= 0 )
          {
            v6 = uu_ln::link_files_in_dir(a1, a2, v31, v32, a3);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v24, v30);
            v7 = v25;
            if ( v25 )
            {
              v8 = &v32;
              goto LABEL_14;
            }
            return (_OWORD *)v6;
          }
        }
      }
    }
LABEL_47:
    core::panicking::panic_nounwind(anon_df683e64b8c9978a64b8f4e8e668b506_19_llvm_10436422061628228747, 162LL);
  }
  if ( (*(_BYTE *)(a3 + 51) & 1) == 0 )
  {
    v5 = a2 - 1;
    if ( a2 == 1 )
    {
      std::sys::os_str::bytes::Slice::to_owned(v33);
      if ( v34 && v35 >= 0 )
      {
        v6 = uu_ln::link_files_in_dir(a1, 1LL, v34, v35, a3);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v24, v33);
        v7 = v25;
        if ( v25 )
        {
          v8 = &v35;
LABEL_14:
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v8, v24, v7, dest);
          return (_OWORD *)v6;
        }
        return (_OWORD *)v6;
      }
      goto LABEL_47;
    }
    if ( !a2 || !a1 )
      core::option::unwrap_failed(&off_117938);
    if ( !a1[3 * v5 + 1] || (__int64)a1[3 * v5 + 2] < 0 )
      goto LABEL_47;
    std::sys::os_str::bytes::Slice::to_owned(v27);
    if ( a2 > 2 )
      goto LABEL_29;
    if ( !v28 || v29 < 0 )
      goto LABEL_47;
    if ( (unsigned __int8)std::path::Path::is_dir() )
    {
LABEL_29:
      if ( v28 && v29 >= 0 )
      {
        v6 = uu_ln::link_files_in_dir(a1, a2 - 1, v28, v29, a3);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v24, v27);
        v7 = v25;
        if ( !v25 )
          return (_OWORD *)v6;
        v8 = &v29;
        goto LABEL_14;
      }
      goto LABEL_47;
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v24, v27);
    if ( v25 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v29, v24, v25, dest);
    goto LABEL_41;
  }
  if ( a2 == 1 )
  {
    v10 = (const void *)a1[1];
    v11 = a1[2];
    core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, v11, 0LL);
    v12 = v25;
    if ( !v24 )
    {
      v13 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v10, dest, 1LL, 1LL, v11);
      memcpy(v13, v10, v11);
      *(_QWORD *)&v36 = v12;
      *((_QWORD *)&v36 + 1) = v13;
      *(_QWORD *)&v37 = v11;
      *((_QWORD *)&v37 + 1) = 0x8000000000000003LL;
      result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v14 = v36;
      v15 = v37;
      v16 = v38;
LABEL_36:
      result[2] = v16;
      result[1] = v15;
      *result = v14;
      return result;
    }
    goto LABEL_48;
  }
  if ( a2 > 2 )
  {
    v17 = (const void *)a1[7];
    v18 = a1[8];
    core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL, v18);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, v18, 0LL);
    v12 = v25;
    if ( !v24 )
    {
      v19 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v17, dest, 1LL, 1LL, v18);
      memcpy(v19, v17, v18);
      *(_QWORD *)&v39 = v12;
      *((_QWORD *)&v39 + 1) = v19;
      *(_QWORD *)&v40 = v18;
      *((_QWORD *)&v40 + 1) = 0x8000000000000004LL;
      result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v14 = v39;
      v15 = v40;
      v16 = v41;
      goto LABEL_36;
    }
LABEL_48:
    alloc::raw_vec::handle_error(v12, dest);
  }
  if ( !a2 )
    core::panicking::panic(aAssertionFaile_3, 35LL, &off_117950);
LABEL_41:
  v20 = a1[1];
  if ( !v20 )
    goto LABEL_47;
  v21 = a1[2];
  if ( v21 < 0 )
    goto LABEL_47;
  v22 = a1[4];
  if ( !v22 )
    goto LABEL_47;
  v23 = a1[5];
  if ( v23 < 0 )
    goto LABEL_47;
  return (_OWORD *)uu_ln::link(v20, v21, v22, v23, a3);
}
