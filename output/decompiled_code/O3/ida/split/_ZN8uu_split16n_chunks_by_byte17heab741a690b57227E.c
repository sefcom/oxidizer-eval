__int64 __fastcall uu_split::n_chunks_by_byte(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 input_size; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  _OWORD *v12; // rax
  __int64 v13; // rbx
  __int128 v14; // xmm0
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbp
  size_t v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  bool v52; // zf
  __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // [rsp+0h] [rbp-158h]
  __int64 v61; // [rsp+8h] [rbp-150h] BYREF
  void *src; // [rsp+10h] [rbp-148h]
  size_t n; // [rsp+18h] [rbp-140h]
  __int64 v64; // [rsp+20h] [rbp-138h]
  __int64 v65; // [rsp+28h] [rbp-130h] BYREF
  __int128 v66; // [rsp+30h] [rbp-128h] BYREF
  __int128 v67; // [rsp+40h] [rbp-118h]
  __int64 v68; // [rsp+50h] [rbp-108h]
  unsigned __int64 v69; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v70; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v71; // [rsp+70h] [rbp-E8h]
  __int64 v72; // [rsp+78h] [rbp-E0h]
  __int128 v73; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+90h] [rbp-C8h]
  __int64 v75; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-B0h]
  __int64 v78; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-90h]
  _QWORD v81[3]; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v82; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-60h]
  char v84; // [rsp+100h] [rbp-58h]
  _QWORD v85[10]; // [rsp+108h] [rbp-50h] BYREF

  v76 = 0LL;
  v77 = 1uLL;
  v8 = *(_QWORD *)a1;
  v72 = a1;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v76, v8, *(_QWORD *)(a1 + 8));
  v11 = v10;
  if ( input_size )
  {
    *(_QWORD *)&v66 = 0x8000000000000000LL;
    *((_QWORD *)&v67 + 1) = v10;
    v12 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v12 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v13 = (__int64)v12;
    v14 = v66;
    v12[1] = v67;
    *v12 = v14;
    goto LABEL_69;
  }
  v82 = v77;
  v83 = a2;
  v84 = 0;
  if ( a4 == 1 )
  {
    if ( v10 && a3 )
      goto LABEL_7;
LABEL_14:
    v13 = 0LL;
LABEL_69:
    if ( v76 )
      _rust_dealloc(v77, v76, 1LL);
    return v13;
  }
  v17 = a3;
  if ( v10 < a3 )
    v17 = v10;
  if ( *(_BYTE *)(v72 + 161) )
    a3 = v17;
  if ( !a3 )
    goto LABEL_14;
LABEL_7:
  v71 = a3;
  *(_QWORD *)&v66 = std::io::stdio::stdout();
  v65 = std::io::stdio::Stdout::lock(&v66);
  *(_QWORD *)&v73 = 0LL;
  *((_QWORD *)&v73 + 1) = 8LL;
  v74 = 0LL;
  v15 = v71;
  if ( (v71 | v11) >> 32 )
  {
    v16 = v11 / v71;
    v70 = v11 % v71;
  }
  else
  {
    v16 = (unsigned int)v11 / (unsigned int)v71;
    v70 = (unsigned int)v11 % (unsigned int)v71;
  }
  v69 = v16;
  if ( a4 == 1 )
  {
    v18 = 1LL;
    v60 = 0LL;
    v19 = 1LL;
    v20 = v71;
    while ( 1 )
    {
      v19 += v18 < v20;
      v61 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      if ( !v11 )
        break;
      v21 = v20;
      v22 = (v18 - 1 < v70) + v69;
      if ( v18 == v21 )
        v22 = v11;
      *(_QWORD *)&v66 = &v82;
      *((_QWORD *)&v66 + 1) = v22;
      v23 = std::io::default_read_to_end(&v66, &v61, 0LL);
      v25 = v24;
      if ( v23 )
      {
        v78 = a1 + 112;
        v26 = 8LL;
        v27 = 0LL;
        goto LABEL_49;
      }
      if ( v18 == a5 )
      {
        v48 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v65, src, n);
        if ( v48 )
        {
          v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v48);
          v26 = 8LL;
          v47 = 0LL;
          v27 = 0LL;
          goto LABEL_54;
        }
        v56 = v61;
        if ( v61 )
        {
          v58 = (__int64)src;
          v57 = 1LL;
          goto LABEL_84;
        }
        break;
      }
      if ( v61 )
        _rust_dealloc(src, v61, 1LL);
      v20 = v71;
      if ( v18 < v71 )
      {
        v11 -= v25;
        v18 = v19;
        if ( v19 <= v71 )
          continue;
      }
      break;
    }
  }
  else
  {
    v78 = a1 + 112;
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v66, v71, v72, 0LL);
    v26 = *((_QWORD *)&v66 + 1);
    v27 = v67;
    if ( (_QWORD)v66 == 0x8000000000000000LL )
    {
      v13 = *((_QWORD *)&v66 + 1);
LABEL_66:
      v51 = v65;
      v52 = (*(_DWORD *)(v65 + 12))-- == 1;
      if ( v52 )
      {
        *(_QWORD *)v51 = 0LL;
        if ( _InterlockedExchange((volatile __int32 *)(v51 + 8), 0) == 2 )
          std::sys::sync::mutex::futex::Mutex::wake(v51 + 8);
      }
      goto LABEL_69;
    }
    v60 = v66;
    v73 = v66;
    v74 = v67;
    v28 = 1LL;
    v29 = 1LL;
    v64 = *((_QWORD *)&v66 + 1);
    v30 = v15;
    while ( 1 )
    {
      v31 = (v28 < v30) + v29;
      v61 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      if ( !v11 )
        break;
      v32 = v30;
      v79 = v31;
      v33 = v28 - 1;
      v34 = (v28 - 1 < v70) + v69;
      v80 = v28;
      if ( v28 == v32 )
        v34 = v11;
      *(_QWORD *)&v66 = &v82;
      *((_QWORD *)&v66 + 1) = v34;
      v35 = std::io::default_read_to_end(&v66, &v61, 0LL);
      v25 = v36;
      if ( v35 )
      {
LABEL_49:
        v42 = v26;
        v75 = v25;
        v85[0] = v78;
        v85[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v85[2] = &v75;
        v85[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v66 = &unk_10B898;
        *((_QWORD *)&v66 + 1) = 2LL;
        v68 = 0LL;
        *(_QWORD *)&v67 = v85;
        *((_QWORD *)&v67 + 1) = 2LL;
        alloc::fmt::format::format_inner(v81, &v66);
        v43 = v81[0];
        v44 = v81[1];
        v45 = v81[2];
        v46 = _rust_alloc(32LL, 8LL);
        if ( !v46 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v13 = v46;
        *(_QWORD *)v46 = v43;
        *(_QWORD *)(v46 + 8) = v44;
        *(_QWORD *)(v46 + 16) = v45;
        *(_DWORD *)(v46 + 24) = 1;
        core::ptr::drop_in_place<std::io::error::Error>(v75);
        v26 = v42;
LABEL_51:
        v47 = v60;
LABEL_54:
        v64 = v26;
        if ( v61 )
          _rust_dealloc(src, v61, 1LL);
        if ( v27 )
        {
          v49 = v64 + 80;
          do
          {
            v50 = *(_QWORD *)(v49 - 80);
            if ( v50 )
              _rust_dealloc(*(_QWORD *)(v49 - 72), v50, 1LL);
            if ( *(_QWORD *)(v49 - 56) != 0x8000000000000000LL )
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v49 - 56);
            v49 += 80LL;
            --v27;
          }
          while ( v27 );
          v47 = v73;
        }
        if ( v47 )
          _rust_dealloc(v64, 80 * v47, 8LL);
        goto LABEL_66;
      }
      if ( v33 >= v27 )
        core::panicking::panic_bounds_check(
          v33,
          v27,
          &anon_2e19d9ca8cfde55dfbddc481555861fa_29_llvm_12874152752476265872);
      v37 = *(_QWORD *)(v26 + 80 * v33 + 24);
      if ( v37 == 0x8000000000000000LL )
      {
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v66, &v73, v33, v72);
        v38 = *((_QWORD *)&v66 + 1);
        v13 = v66;
        if ( (_QWORD)v66 )
          goto LABEL_51;
        v37 = **((_QWORD **)&v66 + 1);
      }
      else
      {
        v38 = v26 + 80 * v33 + 24;
      }
      v39 = n;
      v40 = *(_QWORD *)(v38 + 16);
      if ( n >= v37 - v40 )
      {
        v41 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v38, src, n);
        v26 = v64;
        if ( v41 )
        {
          v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
          goto LABEL_51;
        }
      }
      else
      {
        memcpy((void *)(v40 + *(_QWORD *)(v38 + 8)), src, n);
        *(_QWORD *)(v38 + 16) = v39 + v40;
        v26 = v64;
      }
      if ( v61 )
        _rust_dealloc(src, v61, 1LL);
      v30 = v71;
      v29 = v79;
      if ( v80 < v71 )
      {
        v11 -= v25;
        v28 = v79;
        if ( v79 <= v71 )
          continue;
      }
      goto LABEL_73;
    }
    if ( v27 )
    {
LABEL_73:
      v54 = v26 + 80;
      do
      {
        v55 = *(_QWORD *)(v54 - 80);
        if ( v55 )
          _rust_dealloc(*(_QWORD *)(v54 - 72), v55, 1LL);
        if ( *(_QWORD *)(v54 - 56) != 0x8000000000000000LL )
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v54 - 56);
        v54 += 80LL;
        --v27;
      }
      while ( v27 );
      v60 = v73;
    }
    if ( v60 )
    {
      v56 = 80 * v60;
      v57 = 8LL;
      v58 = v26;
LABEL_84:
      _rust_dealloc(v58, v56, v57);
    }
  }
  v59 = v65;
  v52 = (*(_DWORD *)(v65 + 12))-- == 1;
  if ( v52 )
  {
    *(_QWORD *)v59 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v59 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v59 + 8);
  }
  if ( v76 )
    _rust_dealloc(v77, v76, 1LL);
  return 0LL;
}
