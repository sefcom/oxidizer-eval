        __int64 a4)
{
  unsigned __int64 v4; // r13
  volatile signed __int64 *v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // r13
  char v12; // al
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  __int128 v16; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-A8h]
  __int128 v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  volatile signed __int64 *v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  __int128 *v25; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall **v26)(); // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+88h] [rbp-50h]
  char v28; // [rsp+90h] [rbp-48h]
  volatile signed __int64 *v29; // [rsp+98h] [rbp-40h] BYREF
  char v30; // [rsp+A0h] [rbp-38h]

  if ( *a2 == 0x8000000000000000LL )
  {
    v6 = 0x8000000000000000LL;
LABEL_3:
    *a1 = v6;
    a1[1] = (unsigned __int64)v5;
    a1[2] = v4;
    return a1;
  }
  v20 = *(_OWORD *)a2;
  v7 = a2[2];
  v21 = v7;
  if ( !*((_QWORD *)&v20 + 1) || v7 < 0 )
    goto LABEL_30;
  v8 = a3;
  uucore::features::fs::canonicalize(&v18, *((_QWORD *)&v20 + 1), v7, (unsigned __int8)a3, (unsigned __int8)a4);
  v5 = (volatile signed __int64 *)*((_QWORD *)&v18 + 1);
  if ( (_QWORD)v18 == 0x8000000000000000LL )
    goto LABEL_12;
  v9 = v19;
  v16 = v18;
  v17 = v19;
  if ( v8 != 1 )
    goto LABEL_11;
  if ( !*((_QWORD *)&v18 + 1) || (__int64)v19 < 0 )
LABEL_30:
    core::panicking::panic_nounwind(anon_3f82f01e3ba563847365fa446bc88cdd_30_llvm_12311298718025117761, 162LL, a3, a4);
  if ( !(unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v18 + 1), v19) )
  {
    std::sys::pal::unix::fs::readdir(&v22, v5, v9);
    v5 = v22;
    if ( (_BYTE)v23 == 2 )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v22, &v16);
      a3 = v23;
      if ( v23 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v17, v22, v23, v24);
      goto LABEL_12;
    }
    v29 = v22;
    v30 = v23 & 1;
    if ( !_InterlockedDecrement64(v22) )
      alloc::sync::Arc<T,A>::drop_slow(&v29);
  }
LABEL_11:
  v5 = (volatile signed __int64 *)*((_QWORD *)&v16 + 1);
  v6 = v16;
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    v4 = v17;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v22, &v20);
    if ( v23 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v21, v22, v23, v24);
    goto LABEL_3;
  }
LABEL_12:
  v29 = v5;
  v10 = *((_QWORD *)&v20 + 1);
  if ( !*((_QWORD *)&v20 + 1) )
    goto LABEL_30;
  v11 = v21;
  if ( v21 < 0 )
    goto LABEL_30;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 1LL;
  v17 = 0LL;
  v27 = 32LL;
  v28 = 3;
  v22 = 0LL;
  v24 = 0LL;
  v25 = &v16;
  v26 = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
  std::sys::os_str::bytes::Slice::to_str(&v18, *((_QWORD *)&v20 + 1), v21);
  if ( (_QWORD)v18 || !*((_QWORD *)&v18 + 1) )
    v12 = os_display::unix::write_escaped(&v22, v10, v11);
  else
    v12 = os_display::unix::write(&v22, *((_QWORD *)&v18 + 1), v19, 0LL);
  if ( v12 )
    core::result::unwrap_failed(
      anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
      55LL,
      &v18,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
  v18 = v16;
  *(_QWORD *)&v19 = v17;
  *((_QWORD *)&v19 + 1) = v5;
  v13 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v13 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v14 = v18;
  v13[1] = v19;
  *v13 = v14;
  a1[1] = (unsigned __int64)v13;
  a1[2] = (unsigned __int64)&off_10DF88;
  *a1 = 0x8000000000000001LL;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v22, &v20);
  if ( v23 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v21, v22, v23, v24);
  return a1;
}
