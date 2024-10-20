        unsigned __int64 a5)
{
  __int64 input_size; // rax
  size_t v7; // rdx
  size_t v8; // rbp
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  _OWORD *v11; // r14
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbp
  size_t v16; // rbx
  char v17; // cl
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbp
  _BYTE *v20; // r13
  size_t v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  const void *v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned int v31; // eax
  unsigned int v32; // ecx
  _OWORD *v33; // rax
  _OWORD *v34; // r13
  __int128 v35; // xmm0
  __int64 v36; // rbp
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned __int8 v47; // [rsp+Fh] [rbp-139h]
  __int128 v49; // [rsp+18h] [rbp-130h] BYREF
  __int64 v50; // [rsp+28h] [rbp-120h]
  __int64 v51; // [rsp+30h] [rbp-118h]
  __int64 v52; // [rsp+38h] [rbp-110h] BYREF
  __int64 v53; // [rsp+40h] [rbp-108h] BYREF
  _BYTE *v54; // [rsp+48h] [rbp-100h]
  size_t v55; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+58h] [rbp-F0h]
  __int64 v57; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v59; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+78h] [rbp-D0h]
  __int64 v61; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+88h] [rbp-C0h]
  __int64 v63; // [rsp+90h] [rbp-B8h]
  __int128 v64; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-A0h]
  char v66; // [rsp+B8h] [rbp-90h]
  __int64 v67; // [rsp+C0h] [rbp-88h]
  __int64 v68; // [rsp+C8h] [rbp-80h]
  __int64 v69; // [rsp+D0h] [rbp-78h]
  size_t v70; // [rsp+D8h] [rbp-70h]
  __int128 v71; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v72; // [rsp+F0h] [rbp-58h]
  __int64 v73; // [rsp+100h] [rbp-48h] BYREF
  void *src; // [rsp+108h] [rbp-40h]
  size_t n; // [rsp+110h] [rbp-38h]

  v60 = a5;
  v61 = 0LL;
  v62 = 1LL;
  v63 = 0LL;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v61, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  v8 = v7;
  if ( input_size )
  {
    *(_QWORD *)&v64 = 0x8000000000000000LL;
    *((_QWORD *)&v65 + 1) = v7;
    v9 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v10 = v64;
    v9[1] = v65;
    v11 = v9;
    *v9 = v10;
    goto LABEL_4;
  }
  v59 = v62;
  v57 = v63;
  if ( !v7 )
  {
    v11 = 0LL;
    if ( a4 == 1 || *(_BYTE *)(a1 + 161) )
    {
LABEL_4:
      if ( v61 )
        _rust_dealloc(v62, v61, 1LL);
      return v11;
    }
  }
  *(_QWORD *)&v64 = std::io::stdio::stdout();
  v52 = std::io::stdio::Stdout::lock(&v64);
  *(_QWORD *)&v49 = 0LL;
  *((_QWORD *)&v49 + 1) = 8LL;
  v50 = 0LL;
  if ( !a3 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_10B8B8);
  v51 = a1;
  v70 = v8;
  if ( (a3 | v8) >> 32 )
  {
    v58 = v8 % a3;
    v13 = v8 / a3;
  }
  else
  {
    v58 = (unsigned int)v8 % (unsigned int)a3;
    v13 = (unsigned int)v8 / (unsigned int)a3;
  }
  if ( a4 == 1 )
  {
    v14 = v51;
    v47 = *(_BYTE *)(v51 + 161);
    v67 = 8LL;
    v56 = 0LL;
  }
  else
  {
    v47 = *(_BYTE *)(v51 + 161);
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v64, a3, v51, v47);
    v11 = (_OWORD *)*((_QWORD *)&v64 + 1);
    if ( (_QWORD)v64 == 0x8000000000000000LL )
    {
      v15 = 8LL;
LABEL_87:
      if ( (_QWORD)v49 )
        _rust_dealloc(v15, 80 * v49, 8LL);
      v46 = v52;
      v41 = (*(_DWORD *)(v52 + 12))-- == 1;
      if ( v41 )
      {
        *(_QWORD *)v46 = 0LL;
        if ( _InterlockedExchange((volatile __int32 *)(v46 + 8), 0) == 2 )
          std::sys::sync::mutex::futex::Mutex::wake(v46 + 8);
      }
      goto LABEL_4;
    }
    v49 = v64;
    v67 = *((_QWORD *)&v64 + 1);
    v50 = v65;
    v56 = v65;
    v14 = v51;
  }
  v16 = v13 - ((v58 == 0) - 1LL);
  v17 = *(_BYTE *)(v14 + 162);
  *(_QWORD *)&v64 = v59;
  *((_QWORD *)&v64 + 1) = v57;
  *(_QWORD *)&v65 = a2;
  BYTE8(v65) = 0;
  LOBYTE(v57) = v17;
  v66 = v17;
  v68 = *(_QWORD *)(v14 + 136);
  v18 = 1LL;
  v19 = 0LL;
  v59 = 0x8000000000000001LL;
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v73, &v64);
    if ( v73 == v59 )
      goto LABEL_58;
    v20 = src;
    if ( v73 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v71 = 0x8000000000000000LL;
      *((_QWORD *)&v72 + 1) = src;
      v33 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v33 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v34 = v33;
      v35 = v71;
      v33[1] = v72;
      *v33 = v35;
      goto LABEL_79;
    }
    v21 = n;
    v53 = v73;
    v54 = src;
    v55 = n;
    if ( n + v19 < v70 )
    {
      if ( n == v73 )
      {
        alloc::raw_vec::RawVec<T,A>::grow_one(&v53);
        v20 = v54;
      }
      v20[v21++] = v57;
      v55 = v21;
      v20 = v54;
    }
    if ( a4 )
    {
      if ( v18 == v60 )
      {
        v22 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v52, v20, v21);
        if ( v22 )
        {
          v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
          goto LABEL_76;
        }
      }
    }
    else
    {
      v23 = v18 - 1;
      if ( v56 <= v18 - 1 )
        core::panicking::panic_bounds_check(
          v18 - 1,
          v56,
          &anon_2e19d9ca8cfde55dfbddc481555861fa_29_llvm_12874152752476265872);
      v24 = *(_QWORD *)(v67 + 80 * v23 + 24);
      if ( v24 == 0x8000000000000000LL )
      {
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v71, &v49, v23, v51);
        v25 = *((_QWORD *)&v71 + 1);
        if ( (_QWORD)v71 )
        {
          v34 = (_OWORD *)v71;
          goto LABEL_77;
        }
        v24 = **((_QWORD **)&v71 + 1);
      }
      else
      {
        v25 = 80 * v23 + v67 + 24;
      }
      v26 = *(_QWORD *)(v25 + 16);
      if ( v24 - v26 <= v21 )
      {
        v29 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v25, v20, v21);
        v30 = v29;
        if ( v29 )
        {
          if ( (unsigned __int8)std::io::error::Error::kind(v29) != 11 || v68 == 0x8000000000000000LL )
          {
            v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
LABEL_76:
            v34 = (_OWORD *)v42;
LABEL_77:
            if ( v53 )
              _rust_dealloc(v54, v53, 1LL);
LABEL_79:
            v15 = *((_QWORD *)&v49 + 1);
            v43 = v50;
            if ( v50 )
            {
              v44 = *((_QWORD *)&v49 + 1) + 80LL;
              do
              {
                v45 = *(_QWORD *)(v44 - 80);
                if ( v45 )
                  _rust_dealloc(*(_QWORD *)(v44 - 72), v45, 1LL);
                if ( *(_QWORD *)(v44 - 56) != 0x8000000000000000LL )
                  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v44 - 56);
                v44 += 80LL;
                --v43;
              }
              while ( v43 );
            }
            v11 = v34;
            goto LABEL_87;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v30);
        }
      }
      else
      {
        v69 = v25;
        v27 = v20;
        v28 = v26;
        memcpy((void *)(v26 + *(_QWORD *)(v25 + 8)), v27, v21);
        *(_QWORD *)(v69 + 16) = v21 + v28;
      }
    }
    v19 += v21;
    if ( v16 > v19 )
      goto LABEL_98;
    v31 = -1;
    v32 = -2;
    do
    {
      v16 += v13 + (v18++ < v58);
      ++v31;
      ++v32;
    }
    while ( v16 <= v19 );
    if ( v47 && v32 < 0x7FFFFFFF )
    {
      if ( a4 != 1 )
      {
        v18 -= v31;
        goto LABEL_52;
      }
    }
    else
    {
LABEL_98:
      if ( a4 != 1 )
        goto LABEL_52;
    }
    if ( v18 > v60 )
      break;
LABEL_52:
    if ( v53 )
      _rust_dealloc(v54, v53, 1LL);
  }
  if ( v53 )
    _rust_dealloc(v54, v53, 1LL);
LABEL_58:
  v36 = *((_QWORD *)&v49 + 1);
  v37 = v50;
  if ( v50 )
  {
    v38 = *((_QWORD *)&v49 + 1) + 80LL;
    do
    {
      v39 = *(_QWORD *)(v38 - 80);
      if ( v39 )
        _rust_dealloc(*(_QWORD *)(v38 - 72), v39, 1LL);
      if ( *(_QWORD *)(v38 - 56) != 0x8000000000000000LL )
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v38 - 56);
      v38 += 80LL;
      --v37;
    }
    while ( v37 );
  }
  if ( (_QWORD)v49 )
    _rust_dealloc(v36, 80 * v49, 8LL);
  v40 = v52;
  v41 = (*(_DWORD *)(v52 + 12))-- == 1;
  if ( v41 )
  {
    *(_QWORD *)v40 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v40 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v40 + 8);
  }
  if ( v61 )
    _rust_dealloc(v62, v61, 1LL);
  return 0LL;
}
