        __int64 a5)
{
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rbx
  unsigned __int64 i; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r13d
  __int64 v18; // rbp
  void *v19; // rbx
  size_t v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r12
  char **v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rdi
  bool v34; // zf
  _OWORD *v35; // rax
  __int128 v36; // xmm0
  _OWORD *v37; // rax
  __int128 v38; // xmm0
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v43; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+8h] [rbp-C0h] BYREF
  void *src; // [rsp+10h] [rbp-B8h]
  size_t n; // [rsp+18h] [rbp-B0h]
  __int64 v47; // [rsp+20h] [rbp-A8h]
  unsigned int v48; // [rsp+2Ch] [rbp-9Ch]
  __int64 v49; // [rsp+30h] [rbp-98h]
  __int64 v50; // [rsp+38h] [rbp-90h] BYREF
  __int128 v51; // [rsp+40h] [rbp-88h] BYREF
  __int128 v52; // [rsp+50h] [rbp-78h]
  __int128 v53; // [rsp+60h] [rbp-68h] BYREF
  __int64 v54; // [rsp+70h] [rbp-58h]
  unsigned __int64 v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]
  __int64 v58; // [rsp+90h] [rbp-38h]

  v49 = a2;
  *(_QWORD *)&v51 = std::io::stdio::stdout();
  v50 = std::io::stdio::Stdout::lock(&v51);
  *(_QWORD *)&v53 = 0LL;
  *((_QWORD *)&v53 + 1) = 8LL;
  v54 = 0LL;
  if ( a4 == 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 162);
    if ( a3 )
    {
      v10 = a5 - 1;
      v47 = 0LL;
      for ( i = 0LL; ; ++i )
      {
        v44 = 0LL;
        src = &dword_0 + 1;
        n = 0LL;
        if ( std::io::read_until(v49, v9, &v44, v8) )
        {
          v29 = 8LL;
          v15 = 0LL;
          goto LABEL_67;
        }
        if ( !v12 )
        {
          v29 = 8LL;
          v15 = 0LL;
          goto LABEL_48;
        }
        if ( (a3 | i) >> 32 )
        {
          if ( i % a3 != v10 )
            goto LABEL_12;
        }
        else if ( (unsigned int)i % (unsigned int)a3 != v10 )
        {
          goto LABEL_12;
        }
        v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v50, src, n);
        if ( v13 )
        {
          *(_QWORD *)&v51 = 0x8000000000000000LL;
          *((_QWORD *)&v52 + 1) = v13;
          v29 = 8LL;
          v35 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v35 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v14 = (__int64)v35;
          v36 = v51;
          v35[1] = v52;
          *v35 = v36;
          v47 = 0LL;
          v15 = 0LL;
          goto LABEL_69;
        }
LABEL_12:
        if ( v44 )
          _rust_dealloc(src, v44, 1LL);
      }
    }
    v44 = 0LL;
    src = &dword_0 + 1;
    n = 0LL;
    if ( std::io::read_until(v49, v9, &v44, v8) )
    {
      v29 = 8LL;
      v47 = 0LL;
      v15 = 0LL;
      goto LABEL_67;
    }
    if ( !v12 )
    {
      v29 = 8LL;
      v47 = 0LL;
      v15 = 0LL;
      goto LABEL_48;
    }
    v30 = &off_10B8E8;
LABEL_91:
    core::panicking::panic_const::panic_const_rem_by_zero(v30);
  }
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v51, a3, a1, *(unsigned __int8 *)(a1 + 161));
  v14 = *((_QWORD *)&v51 + 1);
  v15 = v52;
  if ( (_QWORD)v51 == 0x8000000000000000LL )
  {
LABEL_81:
    v41 = v50;
    v34 = (*(_DWORD *)(v50 + 12))-- == 1;
    if ( v34 )
    {
      *(_QWORD *)v41 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v41 + 8), 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v41 + 8);
    }
    return v14;
  }
  v16 = v51;
  v47 = v51;
  v53 = v51;
  v43 = *((_QWORD *)&v51 + 1);
  v54 = v52;
  v17 = *(unsigned __int8 *)(a1 + 162);
  if ( a3 )
  {
    v58 = a1;
    v56 = *(_QWORD *)(a1 + 136);
    v55 = 0LL;
    v18 = 0LL;
    v48 = v17;
    v57 = a3;
    while ( 1 )
    {
      v44 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      if ( std::io::read_until(v49, v17, &v44, v16) )
        break;
      if ( !v12 )
        goto LABEL_45;
      v19 = src;
      v20 = n;
      if ( (a3 | v55) >> 32 )
      {
        v21 = v55 % a3;
        if ( v55 % a3 >= v15 )
          goto LABEL_88;
      }
      else
      {
        v21 = (unsigned int)v55 % (unsigned int)a3;
        if ( (unsigned int)v21 >= v15 )
LABEL_88:
          core::panicking::panic_bounds_check(
            v21,
            v15,
            &anon_2e19d9ca8cfde55dfbddc481555861fa_29_llvm_12874152752476265872);
      }
      v22 = *(_QWORD *)(v43 + 80 * v21 + 24);
      if ( v22 == 0x8000000000000000LL )
      {
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v51, &v53, v21, v58);
        v23 = *((_QWORD *)&v51 + 1);
        v14 = v51;
        if ( (_QWORD)v51 )
          goto LABEL_87;
        v22 = **((_QWORD **)&v51 + 1);
      }
      else
      {
        v23 = v43 + 80 * v21 + 24;
      }
      v24 = *(_QWORD *)(v23 + 16);
      if ( v22 - v24 <= v20 )
      {
        v27 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v23, v19, v20);
        v17 = v48;
        v28 = v27;
        if ( v27 )
        {
          if ( (unsigned __int8)std::io::error::Error::kind(v27) != 11 || v56 == 0x8000000000000000LL )
          {
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
LABEL_87:
            v29 = v43;
            goto LABEL_69;
          }
          v26 = 1LL;
          core::ptr::drop_in_place<std::io::error::Error>(v28);
        }
        else
        {
          v26 = 0LL;
        }
      }
      else
      {
        v25 = v23;
        memcpy((void *)(v24 + *(_QWORD *)(v23 + 8)), v19, v20);
        *(_QWORD *)(v25 + 16) = v20 + v24;
        a3 = v57;
        v26 = 0LL;
        v17 = v48;
      }
      v18 += v26;
      if ( v18 == a3 )
      {
LABEL_45:
        v29 = v43;
        goto LABEL_48;
      }
      if ( v44 )
        _rust_dealloc(src, v44, 1LL);
      ++v55;
    }
    v29 = v43;
    goto LABEL_67;
  }
  v44 = 0LL;
  src = &dword_0 + 1;
  n = 0LL;
  v29 = *((_QWORD *)&v51 + 1);
  if ( std::io::read_until(v49, v17, &v44, v51) )
  {
LABEL_67:
    *(_QWORD *)&v51 = 0x8000000000000000LL;
    *((_QWORD *)&v52 + 1) = v12;
    v37 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v37 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v14 = (__int64)v37;
    v38 = v51;
    v37[1] = v52;
    *v37 = v38;
LABEL_69:
    if ( v44 )
      _rust_dealloc(src, v44, 1LL);
    if ( v15 )
    {
      v39 = v29 + 80;
      do
      {
        v40 = *(_QWORD *)(v39 - 80);
        if ( v40 )
          _rust_dealloc(*(_QWORD *)(v39 - 72), v40, 1LL);
        if ( *(_QWORD *)(v39 - 56) != 0x8000000000000000LL )
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v39 - 56);
        v39 += 80LL;
        --v15;
      }
      while ( v15 );
      v47 = v53;
    }
    if ( v47 )
      _rust_dealloc(v29, 80 * v47, 8LL);
    goto LABEL_81;
  }
  if ( v12 )
  {
    v30 = &off_10B8D0;
    goto LABEL_91;
  }
LABEL_48:
  if ( v44 )
    _rust_dealloc(src, v44, 1LL);
  if ( v15 )
  {
    v31 = v29 + 80;
    do
    {
      v32 = *(_QWORD *)(v31 - 80);
      if ( v32 )
        _rust_dealloc(*(_QWORD *)(v31 - 72), v32, 1LL);
      if ( *(_QWORD *)(v31 - 56) != 0x8000000000000000LL )
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v31 - 56);
      v31 += 80LL;
      --v15;
    }
    while ( v15 );
    v47 = v53;
  }
  if ( v47 )
    _rust_dealloc(v29, 80 * v47, 8LL);
  v33 = v50;
  v34 = (*(_DWORD *)(v50 + 12))-- == 1;
  if ( v34 )
  {
    *(_QWORD *)v33 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v33 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v33 + 8);
  }
  return 0LL;
}
