__int64 __fastcall compat_core::esxi::main(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 *v12; // rdx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rax
  _QWORD *v18; // r15
  char v19; // bl
  _QWORD *v20; // rbp
  __int64 v21; // r12
  char v22; // bl
  _QWORD *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // r15
  void *v33; // r12
  char *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  char *v39; // rbp
  const void *v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rsi
  char *v45; // rbp
  __int64 v46; // rsi
  bool v48; // [rsp+Eh] [rbp-12Ah]
  bool v49; // [rsp+Fh] [rbp-129h] BYREF
  _BYTE v50[24]; // [rsp+10h] [rbp-128h] BYREF
  void *src[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v52; // [rsp+40h] [rbp-F8h]
  bool **v53; // [rsp+50h] [rbp-E8h]
  __int64 v54; // [rsp+58h] [rbp-E0h]
  __int128 v55; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v56; // [rsp+70h] [rbp-C8h]
  _QWORD *v57; // [rsp+80h] [rbp-B8h]
  _QWORD *v58; // [rsp+88h] [rbp-B0h]
  __int64 v59; // [rsp+90h] [rbp-A8h]
  unsigned int v60; // [rsp+98h] [rbp-A0h]
  unsigned int v61; // [rsp+9Ch] [rbp-9Ch] BYREF
  __int64 *v62; // [rsp+A0h] [rbp-98h]
  bool *v63; // [rsp+A8h] [rbp-90h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+B0h] [rbp-88h]
  __int64 v65; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-78h]
  __int64 v67; // [rsp+D0h] [rbp-68h]
  __int64 v68; // [rsp+D8h] [rbp-60h]
  __int64 v69; // [rsp+E0h] [rbp-58h]
  __int64 *v70; // [rsp+E8h] [rbp-50h]
  __int128 v71; // [rsp+F0h] [rbp-48h]

  v57 = a1;
  v68 = a2;
  compat_kernel::core::stats::Stats::render_thread(a2);
  v2 = 1;
  while ( 1 )
  {
    v48 = v2 > 1;
    v61 = v2;
    v60 = (v2 < 2) + v2;
    if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
    {
      *(_QWORD *)&v55 = &v61;
      *((_QWORD *)&v55 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      src[0] = &off_3E5EA0;
      src[1] = &dword_0 + 1;
      v52 = 0LL;
      v53 = (bool **)&v55;
      v54 = 1LL;
      log::__private_api_log(src, 3LL, &off_3E5EB0, 0LL);
    }
    compat_core::esxi::vm::remove_snapshots(src);
    if ( LOBYTE(src[0]) > 3u || LOBYTE(src[0]) == 2 )
    {
      v8 = src[1];
      (**((void (__fastcall ***)(_QWORD))src[1] + 1))(*(_QWORD *)src[1]);
      v9 = v8[1];
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
        _rust_dealloc(*v8, v10, *(_QWORD *)(v9 + 16));
      _rust_dealloc(v8, 24LL, 8LL);
      compat_core::esxi::vm::EsxiVM::get_running(&v65);
      if ( v65 )
      {
LABEL_7:
        if ( (unsigned __int8)v66 < 2u )
          goto LABEL_53;
        v3 = (__int64 *)*((_QWORD *)&v66 + 1);
        (**(void (__fastcall ***)(_QWORD))(*((_QWORD *)&v66 + 1) + 8LL))(**((_QWORD **)&v66 + 1));
        v4 = v3[1];
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
          _rust_dealloc(*v3, v5, *(_QWORD *)(v4 + 16));
        v6 = 24LL;
        v7 = v3;
        goto LABEL_52;
      }
    }
    else
    {
      compat_core::esxi::vm::EsxiVM::get_running(&v65);
      if ( v65 )
        goto LABEL_7;
    }
    *(_QWORD *)&v50[16] = v67;
    *(_OWORD *)v50 = v66;
    if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
    {
      *(_QWORD *)&v55 = v50;
      *((_QWORD *)&v55 + 1) = <alloc::vec::Vec<T> as core::fmt::Debug>::fmt;
      src[0] = &off_3E5F18;
      src[1] = &dword_0 + 1;
      v52 = 0LL;
      v53 = (bool **)&v55;
      v54 = 1LL;
      log::__private_api_log(src, 3LL, &off_3E5F28, 0LL);
    }
    v59 = *(_QWORD *)&v50[8];
    v11 = *(_QWORD *)v50 + 32LL * *(_QWORD *)&v50[16];
    v62 = *(__int64 **)v50;
    v12 = *(__int64 **)v50;
    if ( *(_QWORD *)&v50[16] )
    {
      v13 = v62;
      v69 = *(_QWORD *)v50 + 32LL * *(_QWORD *)&v50[16];
      while ( 1 )
      {
        v14 = *v13;
        v15 = v13[1];
        v16 = *((_OWORD *)v13 + 1);
        v12 = v13 + 4;
        *(_OWORD *)src = v16;
        if ( !v15 )
          goto LABEL_43;
        v70 = v12;
        v71 = *(_OWORD *)src;
        *(_QWORD *)&v55 = v14;
        *((_QWORD *)&v55 + 1) = v15;
        v56 = *(_OWORD *)src;
        v17 = v57[5];
        if ( v17 )
          break;
LABEL_41:
        if ( (_QWORD)v56 )
          _rust_dealloc(*((_QWORD *)&v55 + 1), v56, 1LL);
        v11 = v69;
        v13 = v70;
        if ( v70 == (__int64 *)v69 )
        {
          v26 = v59;
          goto LABEL_49;
        }
      }
      v18 = (_QWORD *)v57[3];
      v58 = &v18[3 * v17];
      while ( 1 )
      {
        wildmatch::WildMatch::new(src, *v18, v18[2]);
        v19 = wildmatch::WildMatch::matches(src, *((_QWORD *)&v55 + 1), *((_QWORD *)&v56 + 1));
        if ( src[1] && 8 * (__int64)src[1] )
          _rust_dealloc(src[0], 8 * (__int64)src[1], 4LL);
        v18 += 3;
        if ( !v19 )
          goto LABEL_22;
        v20 = (_QWORD *)v57[6];
        v21 = 24LL * v57[8];
        while ( v21 )
        {
          wildmatch::WildMatch::new(src, *v20, v20[2]);
          v22 = wildmatch::WildMatch::matches(src, *((_QWORD *)&v55 + 1), *((_QWORD *)&v56 + 1));
          if ( src[1] && 8 * (__int64)src[1] )
            _rust_dealloc(src[0], 8 * (__int64)src[1], 4LL);
          v20 += 3;
          v21 -= 24LL;
          if ( !v22 )
            goto LABEL_22;
        }
        compat_core::esxi::vm::EsxiVM::kill_ensure(src, &v55);
        v49 = LOBYTE(src[0]) == 3;
        if ( LOBYTE(src[0]) > 3u || LOBYTE(src[0]) == 2 )
          break;
        if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
          goto LABEL_40;
LABEL_22:
        if ( v18 == v58 )
          goto LABEL_41;
      }
      v23 = src[1];
      (**((void (__fastcall ***)(_QWORD))src[1] + 1))(*(_QWORD *)src[1]);
      v24 = v23[1];
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 )
        _rust_dealloc(*v23, v25, *(_QWORD *)(v24 + 16));
      _rust_dealloc(v23, 24LL, 8LL);
      if ( log::MAX_LOG_LEVEL_FILTER < 3uLL )
        goto LABEL_22;
LABEL_40:
      v63 = &v49;
      v64 = <bool as core::fmt::Display>::fmt;
      src[0] = &off_3E5F60;
      src[1] = &dword_0 + 1;
      v52 = 0LL;
      v53 = &v63;
      v54 = 1LL;
      log::__private_api_log(src, 3LL, &off_3E5F70, 0LL);
      goto LABEL_22;
    }
LABEL_43:
    v26 = v59;
    if ( (__int64 *)v11 != v12 )
    {
      do
      {
        v27 = v12 + 4;
        v28 = v12[2];
        if ( v28 )
        {
          _rust_dealloc(v12[1], v28, 1LL);
          v26 = v59;
        }
        v12 = v27;
      }
      while ( (__int64 *)v11 != v27 );
    }
LABEL_49:
    if ( v26 )
    {
      v29 = 32 * v26;
      if ( v29 )
      {
        v7 = v62;
        v6 = v29;
LABEL_52:
        _rust_dealloc(v7, v6, 8LL);
      }
    }
LABEL_53:
    *(_QWORD *)v50 = 8LL;
    *(_OWORD *)&v50[8] = 0LL;
    src[0] = &off_3E5EE8;
    src[1] = &dword_0 + 1;
    v52 = 0LL;
    v53 = (bool **)asc_19ABC0;
    v54 = 0LL;
    alloc::fmt::format(&v55, src);
    alloc::raw_vec::RawVec<T,A>::reserve(v50, *(_QWORD *)&v50[16], 1LL);
    v30 = *(_QWORD *)v50;
    v31 = 32LL * *(_QWORD *)&v50[16];
    *(_QWORD *)(*(_QWORD *)v50 + v31) = 2LL;
    *(_OWORD *)(v30 + v31 + 8) = v55;
    *(_QWORD *)(v30 + v31 + 24) = v56;
    ++*(_QWORD *)&v50[16];
    compat_core::esxi::utils::target_extensions(src);
    v32 = (char *)src[0];
    v33 = src[1];
    v34 = (char *)src[0] + 24 * v52;
    v58 = src[0];
    if ( v52 )
    {
      v32 = (char *)(v58 + 3);
      while ( 1 )
      {
        v35 = *((_QWORD *)v32 - 3);
        *(_OWORD *)src = *((_OWORD *)v32 - 1);
        if ( !v35 )
          break;
        v71 = *(_OWORD *)src;
        v65 = v35;
        v66 = *(_OWORD *)src;
        v63 = (bool *)&v65;
        v64 = <alloc::string::String as core::fmt::Display>::fmt;
        src[0] = &off_3E5EF8;
        src[1] = &dword_0 + 1;
        v52 = 0LL;
        v53 = &v63;
        v54 = 1LL;
        alloc::fmt::format(&v55, src);
        v36 = *(_QWORD *)&v50[16];
        if ( *(_QWORD *)&v50[16] == *(_QWORD *)&v50[8] )
        {
          alloc::raw_vec::RawVec<T,A>::reserve(v50, *(_QWORD *)&v50[16], 1LL);
          v36 = *(_QWORD *)&v50[16];
        }
        v37 = *(_QWORD *)v50;
        v38 = 32 * v36;
        *(_QWORD *)(*(_QWORD *)v50 + v38) = 2LL;
        *(_OWORD *)(v37 + v38 + 8) = v55;
        *(_QWORD *)(v37 + v38 + 24) = v56;
        ++*(_QWORD *)&v50[16];
        v39 = v32 - 24;
        if ( (_QWORD)v66 )
          _rust_dealloc(v65, v66, 1LL);
        v32 += 24;
        if ( v39 + 24 == v34 )
          goto LABEL_62;
      }
    }
    if ( v34 != v32 )
    {
      do
      {
        v45 = v32 + 24;
        v46 = *((_QWORD *)v32 + 1);
        if ( v46 )
          _rust_dealloc(*(_QWORD *)v32, v46, 1LL);
        v32 += 24;
      }
      while ( v34 != v45 );
    }
LABEL_62:
    if ( v33 && 24LL * (_QWORD)v33 )
      _rust_dealloc(v58, 24LL * (_QWORD)v33, 8LL);
    compat_kernel::core::platform_filters(src);
    v40 = src[0];
    v41 = v52;
    alloc::raw_vec::RawVec<T,A>::reserve(v50, *(_QWORD *)&v50[16], v52);
    memcpy((void *)(*(_QWORD *)v50 + 32LL * *(_QWORD *)&v50[16]), v40, 32 * v41);
    *(_QWORD *)&v50[16] += v41;
    v52 = 0LL;
    core::ptr::drop_in_place(src);
    src[0] = &off_3E5F08;
    src[1] = &dword_0 + 1;
    v52 = 0LL;
    v53 = (bool **)asc_19ABC0;
    v54 = 0LL;
    alloc::fmt::format(&v55, src);
    v42 = *(_QWORD *)&v50[16];
    if ( *(_QWORD *)&v50[16] == *(_QWORD *)&v50[8] )
    {
      alloc::raw_vec::RawVec<T,A>::reserve(v50, *(_QWORD *)&v50[16], 1LL);
      v42 = *(_QWORD *)&v50[16];
    }
    v43 = *(_QWORD *)v50;
    v44 = 32 * v42;
    *(_QWORD *)(*(_QWORD *)v50 + v44) = 3LL;
    *(_OWORD *)(v43 + v44 + 8) = v55;
    *(_QWORD *)(v43 + v44 + 24) = v56;
    v52 = ++*(_QWORD *)&v50[16];
    *(_OWORD *)src = *(_OWORD *)v50;
    if ( (unsigned int)compat_core::linux::search::default(v57, v68, aVmfs, 5LL, src) )
      return 1LL;
    v2 = v60;
    if ( v48 || v60 > 2 )
      return 0LL;
  }
}
