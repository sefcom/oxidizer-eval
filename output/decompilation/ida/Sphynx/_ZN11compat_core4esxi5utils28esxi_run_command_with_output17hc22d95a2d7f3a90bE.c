__int64 __fastcall compat_core::esxi::utils::esxi_run_command_with_output(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _BYTE v14[36]; // [rsp+0h] [rbp-198h] BYREF
  int v15; // [rsp+24h] [rbp-174h]
  __int64 v16; // [rsp+30h] [rbp-168h]
  __int64 v17; // [rsp+38h] [rbp-160h]
  __int64 v18; // [rsp+40h] [rbp-158h]
  __int64 v19; // [rsp+48h] [rbp-150h]
  __m256i v20; // [rsp+50h] [rbp-148h]
  int v21; // [rsp+70h] [rbp-128h]
  __m256i v22; // [rsp+80h] [rbp-118h]
  int v23; // [rsp+A0h] [rbp-F8h]
  __int64 v24; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-E0h]
  __int64 v26; // [rsp+C0h] [rbp-D8h]
  __int64 v27; // [rsp+C8h] [rbp-D0h]
  __int64 v28; // [rsp+D0h] [rbp-C8h]
  __int64 v29; // [rsp+D8h] [rbp-C0h]

  std::sys::unix::process::process_common::Command::new(&v24, aSh, 2LL);
  std::sys::unix::process::process_common::Command::arg(
    &v24,
    anon_72dc3a396521a012288a77322dff36ea_1_llvm_3663384724368157838,
    2LL);
  v4 = std::process::Stdio::piped();
  std::sys::unix::process::process_common::Command::stdout(&v24, v4);
  std::sys::unix::process::process_common::Command::arg(&v24, a2, a3);
  std::process::Command::spawn(v14, &v24);
  v20 = *(__m256i *)&v14[4];
  v21 = v15;
  if ( *(_DWORD *)v14 == 1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)((char *)v20.m256i_i64 + 4);
    *(_QWORD *)a1 = 1LL;
    core::ptr::drop_in_place(&v24);
  }
  else
  {
    v23 = v21;
    v22 = v20;
    core::ptr::drop_in_place(&v24);
    *(_DWORD *)&v14[32] = v23;
    *(__m256i *)v14 = v22;
    ((void (__fastcall *)(__int64 *, _BYTE *))std::process::Child::wait_with_output)(&v24, v14);
    v5 = v25;
    v6 = v26;
    if ( v24 == 1 )
    {
      *(_QWORD *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 16) = v6;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      v17 = v28;
      v7 = v29;
      alloc::string::String::from_utf8_lossy(&v24, v25, v27);
      v16 = v25;
      v8 = v26;
      v9 = v26;
      v18 = v24;
      if ( v24 == 1 )
        v9 = v27;
      v19 = v7;
      if ( v9 )
      {
        v10 = _rust_alloc(v9, 1LL);
        if ( !v10 )
          alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(v9, 1LL);
        v11 = v9;
      }
      else
      {
        v10 = 1LL;
        v11 = 0LL;
      }
      *(_QWORD *)v14 = v10;
      *(_QWORD *)&v14[8] = v11;
      *(_QWORD *)&v14[16] = 0LL;
      alloc::raw_vec::RawVec<T,A>::reserve(v14, 0LL, v9);
      v12 = *(_QWORD *)&v14[16];
      core::slice::<impl [T]>::copy_from_slice(*(_QWORD *)&v14[16] + *(_QWORD *)v14, v9, v16, v9);
      *(_QWORD *)&v14[16] = v9 + v12;
      *(_QWORD *)(a1 + 24) = v9 + v12;
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v14;
      *(_QWORD *)a1 = 0LL;
      if ( v6 )
        _rust_dealloc(v5, v6, 1LL);
      if ( v19 )
        _rust_dealloc(v17, v19, 1LL);
      if ( v18 && v8 )
        _rust_dealloc(v16, v8, 1LL);
    }
  }
  return a1;
}
