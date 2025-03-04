__int64 __fastcall compat_core::linux::search::default(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v8; // ebp
  const void *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  bool v12; // zf
  _QWORD *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  volatile signed __int64 *v20; // rbx
  _QWORD *v21; // r15
  _QWORD *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rt0
  char v25; // of
  __int64 v26; // rt0
  __int64 v27; // rt0
  _QWORD *v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // rsi
  signed __int64 v31; // rt0
  __int64 v33; // rdi
  __m256i v34; // [rsp+0h] [rbp-118h] BYREF
  __int64 v35; // [rsp+20h] [rbp-F8h]
  volatile signed __int64 *v36; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v37[24]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-C8h]
  __int64 v39; // [rsp+58h] [rbp-C0h]
  __int64 v40; // [rsp+60h] [rbp-B8h]
  __int64 v41; // [rsp+68h] [rbp-B0h]
  __int64 v42; // [rsp+70h] [rbp-A8h]
  __int64 v43; // [rsp+78h] [rbp-A0h]
  _QWORD *v44; // [rsp+80h] [rbp-98h] BYREF
  __int128 v45; // [rsp+88h] [rbp-90h]
  __m256i v46; // [rsp+98h] [rbp-80h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-60h]
  __int128 v48; // [rsp+C0h] [rbp-58h]
  _BYTE v49[72]; // [rsp+D0h] [rbp-48h] BYREF

  *(_QWORD *)v37 = 8LL;
  *(_OWORD *)&v37[8] = 0LL;
  if ( (unsigned int)compat_core::unix::filters::exclude_self(v37) )
  {
    core::ptr::drop_in_place(v37);
    v8 = 1;
    goto LABEL_32;
  }
  v43 = a2;
  v9 = *(const void **)a5;
  v10 = *(_QWORD *)(a5 + 16);
  alloc::raw_vec::RawVec<T,A>::reserve(v37, *(_QWORD *)&v37[16], v10);
  memcpy((void *)(*(_QWORD *)v37 + 32LL * *(_QWORD *)&v37[16]), v9, 32 * v10);
  *(_QWORD *)&v37[16] += v10;
  *(_QWORD *)(a5 + 16) = 0LL;
  v34.m256i_i64[2] = *(_QWORD *)&v37[16];
  *(_OWORD *)v34.m256i_i8 = *(_OWORD *)v37;
  v11 = _rust_alloc(40LL, 8LL);
  if ( !v11 )
  {
    v33 = 40LL;
    goto LABEL_36;
  }
  *(_OWORD *)v11 = xmmword_19A550;
  *(_OWORD *)(v11 + 16) = *(_OWORD *)v34.m256i_i8;
  *(_QWORD *)(v11 + 32) = v34.m256i_i64[2];
  v36 = (volatile signed __int64 *)v11;
  v12 = *a1 == 0LL;
  v42 = a5;
  if ( v12 )
  {
    v15 = _rust_alloc(24LL, 8LL);
    if ( v15 )
    {
      v16 = v15;
      v14 = 1LL;
      if ( a4 )
      {
        v17 = _rust_alloc(a4, 1LL);
        if ( !v17 )
          alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(a4, 1LL);
        v18 = a4;
      }
      else
      {
        v18 = 0LL;
        v17 = 1LL;
      }
      v34.m256i_i64[0] = v17;
      *(_OWORD *)&v34.m256i_u64[1] = v18;
      alloc::raw_vec::RawVec<T,A>::reserve(&v34, 0LL, a4);
      v19 = v34.m256i_i64[2];
      core::slice::<impl [T]>::copy_from_slice(v34.m256i_i64[2] + v34.m256i_i64[0], a4, a3, a4);
      v34.m256i_i64[2] = a4 + v19;
      v13 = (_QWORD *)v16;
      *(_QWORD *)(v16 + 16) = v34.m256i_i64[2];
      *(_OWORD *)v16 = *(_OWORD *)v34.m256i_i8;
      v44 = (_QWORD *)v16;
      v45 = xmmword_19A550;
      v39 = 1LL;
      goto LABEL_12;
    }
    v33 = 24LL;
LABEL_36:
    alloc::alloc::handle_alloc_error(v33, 8LL);
  }
  <alloc::vec::Vec<T> as core::clone::Clone>::clone(&v44, a1);
  v13 = v44;
  v14 = *((_QWORD *)&v45 + 1);
  v39 = v45;
LABEL_12:
  compat_kernel::core::request::RequestHandle::new(&v34);
  v41 = v34.m256i_i64[1];
  v20 = (volatile signed __int64 *)v34.m256i_i64[0];
  v40 = v34.m256i_i64[2];
  v21 = &v13[3 * v14];
  v22 = v13;
  if ( v14 )
  {
    v38 = v13;
    v22 = v13 + 3;
    while ( 1 )
    {
      v23 = *(v22 - 3);
      *(_OWORD *)v34.m256i_i8 = *((_OWORD *)v22 - 1);
      if ( !v23 )
        break;
      v48 = *(_OWORD *)v34.m256i_i8;
      v34.m256i_i64[0] = v23;
      *(_OWORD *)&v34.m256i_u64[1] = v48;
      <std::path::PathBuf as core::convert::From<alloc::string::String>>::from(v49, &v34);
      v24 = _InterlockedAdd64(v36, 1uLL);
      if ( (v24 < 0) ^ v25 | (v24 == 0)
        || (compat_file_search::query::QueryInput::new(&v46, v49, 1LL),
            v35 = v47,
            v34 = v46,
            v26 = _InterlockedAdd64(v20 + 2, 1uLL),
            (v26 < 0) ^ v25 | (v26 == 0))
        || (v27 = _InterlockedAdd64(v20, 1uLL), (v27 < 0) ^ v25 | (v27 == 0)) )
      {
        BUG();
      }
      compat_kernel::core::server::Server::send_query(v43, &v34, v20);
      v28 = v22 - 3;
      v22 += 3;
      if ( v28 + 3 == v21 )
      {
        v13 = v38;
        goto LABEL_26;
      }
    }
    v13 = v38;
  }
  if ( v21 != v22 )
  {
    do
    {
      v29 = v22 + 3;
      v30 = v22[1];
      if ( v30 )
        _rust_dealloc(*v22, v30, 1LL);
      v22 += 3;
    }
    while ( v21 != v29 );
  }
LABEL_26:
  if ( v39 && 24 * v39 )
    _rust_dealloc(v13, 24 * v39, 8LL);
  compat_kernel::frontend::console::start(v41, v40, v20);
  v31 = _InterlockedSub64(v36, 1uLL);
  a5 = v42;
  if ( !v31 )
    alloc::sync::Arc<T>::drop_slow(&v36);
  v8 = 0;
LABEL_32:
  core::ptr::drop_in_place(a5);
  return v8;
}
