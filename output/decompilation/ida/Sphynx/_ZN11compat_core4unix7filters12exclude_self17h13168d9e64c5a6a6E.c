__int64 __fastcall compat_core::unix::filters::exclude_self(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int128 v26; // kr20_16
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 *v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r15
  __int128 v36; // kr30_16
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 v46; // r14
  __int64 v48; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v49; // [rsp+8h] [rbp-C0h]
  __int64 v50; // [rsp+18h] [rbp-B0h]
  _BYTE v51[24]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-90h]
  __int64 v53; // [rsp+40h] [rbp-88h]
  __int64 *v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h]
  __int64 v56; // [rsp+58h] [rbp-70h]
  __int64 v57; // [rsp+60h] [rbp-68h]
  __int64 v58; // [rsp+68h] [rbp-60h] BYREF
  __int64 v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  __int128 v61; // [rsp+80h] [rbp-48h]

  std::env::current_dir(&v48);
  compat_kernel::app::AppError::zero();
  if ( (_DWORD)v48 == 1 )
  {
    if ( (unsigned __int8)v49 >= 2u )
    {
      v1 = (_QWORD *)*((_QWORD *)&v49 + 1);
      (**(void (__fastcall ***)(_QWORD))(*((_QWORD *)&v49 + 1) + 8LL))(**((_QWORD **)&v49 + 1));
      v2 = v1[1];
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
        _rust_dealloc(*v1, v3, *(_QWORD *)(v2 + 16));
      _rust_dealloc(v1, 24LL, 8LL);
    }
    return 1;
  }
  v52 = *((_QWORD *)&v49 + 1);
  v5 = v49;
  v6 = v50;
  std::env::args_os(&v48);
  <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(v51, &v48);
  v7 = *(_QWORD *)v51;
  if ( !*(_QWORD *)v51 )
  {
    compat_kernel::app::AppError::zero();
    v20 = *((_QWORD *)&v49 + 1);
    if ( v50 != *((_QWORD *)&v49 + 1) )
    {
      v21 = 8 * ((v50 - *((_QWORD *)&v49 + 1)) >> 3);
      v22 = 0LL;
      do
      {
        v23 = *(_QWORD *)(v20 + v22 + 8);
        if ( v23 )
          _rust_dealloc(*(_QWORD *)(v20 + v22), v23, 1LL);
        v22 += 24LL;
      }
      while ( v21 != v22 );
    }
    if ( (_QWORD)v49 && 24LL * (_QWORD)v49 )
      _rust_dealloc(v48, 24 * v49, 8LL);
    v16 = v52;
    goto LABEL_34;
  }
  v54 = a1;
  v55 = v5;
  v61 = *(_OWORD *)&v51[8];
  compat_kernel::app::AppError::zero();
  v8 = *((_QWORD *)&v49 + 1);
  if ( v50 != *((_QWORD *)&v49 + 1) )
  {
    v9 = 8 * ((v50 - *((_QWORD *)&v49 + 1)) >> 3);
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v8 + v10 + 8);
      if ( v11 )
        _rust_dealloc(*(_QWORD *)(v8 + v10), v11, 1LL);
      v10 += 24LL;
    }
    while ( v9 != v10 );
  }
  if ( (_QWORD)v49 && 24LL * (_QWORD)v49 )
    _rust_dealloc(v48, 24 * v49, 8LL);
  v48 = v7;
  v49 = v61;
  v12 = <std::sys_common::wtf8::Wtf8Buf as core::ops::deref::Deref>::deref(&v48);
  v5 = v55;
  std::path::Path::_join(&v58, v55, v6, v12, v13);
  if ( (_QWORD)v49 )
    _rust_dealloc(v48, v49, 1LL);
  v14 = v58;
  v15 = v60;
  std::path::Path::canonicalize(&v48, v58, v60);
  compat_kernel::app::AppError::zero();
  if ( (_DWORD)v48 == 1 )
  {
    v16 = v52;
    if ( (unsigned __int8)v49 >= 2u )
    {
      v17 = (_QWORD *)*((_QWORD *)&v49 + 1);
      (**(void (__fastcall ***)(_QWORD))(*((_QWORD *)&v49 + 1) + 8LL))(**((_QWORD **)&v49 + 1));
      v18 = v17[1];
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
        _rust_dealloc(*v17, v19, *(_QWORD *)(v18 + 16));
      _rust_dealloc(v17, 24LL, 8LL);
    }
    if ( v59 )
      _rust_dealloc(v14, v59, 1LL);
LABEL_34:
    v4 = 1;
    if ( v16 )
      _rust_dealloc(v5, v16, 1LL);
    return v4;
  }
  v57 = *((_QWORD *)&v49 + 1);
  v53 = v49;
  v24 = v50;
  std::path::Path::to_string_lossy(&v48, v14, v15);
  v25 = v48;
  v26 = v49;
  v27 = *((_QWORD *)&v49 + 1);
  if ( v48 == 1 )
    v27 = v50;
  v56 = v24;
  if ( v27 )
  {
    v28 = _rust_alloc(v27, 1LL);
    if ( !v28 )
      alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(v27, 1LL);
    v29 = v27;
  }
  else
  {
    v28 = 1LL;
    v29 = 0LL;
  }
  *(_QWORD *)v51 = v28;
  *(_QWORD *)&v51[8] = v29;
  *(_QWORD *)&v51[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve(v51, 0LL, v27);
  v30 = *(_QWORD *)&v51[16];
  core::slice::<impl [T]>::copy_from_slice(*(_QWORD *)&v51[16] + *(_QWORD *)v51, v27, v26, v27);
  *(_QWORD *)&v51[16] = v27 + v30;
  v31 = v54;
  v32 = v54[2];
  if ( v32 == v54[1] )
  {
    alloc::raw_vec::RawVec<T,A>::reserve(v54, v32, 1LL);
    v32 = v31[2];
  }
  v33 = *v31;
  v34 = 32 * v32;
  *(_QWORD *)(v33 + v34) = 1LL;
  *(_OWORD *)(v33 + v34 + 8) = *(_OWORD *)v51;
  *(_QWORD *)(v33 + v34 + 24) = *(_QWORD *)&v51[16];
  ++v31[2];
  if ( v25 && *((_QWORD *)&v26 + 1) )
    _rust_dealloc(v26, *((_QWORD *)&v26 + 1), 1LL);
  std::path::Path::to_string_lossy(&v48, v53, v56);
  v35 = v48;
  v36 = v49;
  v37 = *((_QWORD *)&v49 + 1);
  if ( v48 == 1 )
    v37 = v50;
  if ( v37 )
  {
    v38 = _rust_alloc(v37, 1LL);
    if ( !v38 )
      alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(v37, 1LL);
    v39 = v37;
  }
  else
  {
    v38 = 1LL;
    v39 = 0LL;
  }
  *(_QWORD *)v51 = v38;
  *(_QWORD *)&v51[8] = v39;
  *(_QWORD *)&v51[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve(v51, 0LL, v37);
  v40 = *(_QWORD *)&v51[16];
  core::slice::<impl [T]>::copy_from_slice(*(_QWORD *)&v51[16] + *(_QWORD *)v51, v37, v36, v37);
  *(_QWORD *)&v51[16] = v37 + v40;
  v41 = v54;
  v42 = v54[2];
  if ( v42 == v54[1] )
  {
    alloc::raw_vec::RawVec<T,A>::reserve(v54, v42, 1LL);
    v42 = v41[2];
  }
  v43 = *v41;
  v44 = 32 * v42;
  *(_QWORD *)(v43 + v44) = 1LL;
  *(_OWORD *)(v43 + v44 + 8) = *(_OWORD *)v51;
  *(_QWORD *)(v43 + v44 + 24) = *(_QWORD *)&v51[16];
  ++v41[2];
  if ( v35 && *((_QWORD *)&v36 + 1) )
    _rust_dealloc(v36, *((_QWORD *)&v36 + 1), 1LL);
  v45 = v52;
  if ( v57 )
    _rust_dealloc(v53, v57, 1LL);
  v46 = v55;
  if ( v59 )
    _rust_dealloc(v14, v59, 1LL);
  v4 = 0;
  if ( v45 )
    _rust_dealloc(v46, v45, 1LL);
  return v4;
}
