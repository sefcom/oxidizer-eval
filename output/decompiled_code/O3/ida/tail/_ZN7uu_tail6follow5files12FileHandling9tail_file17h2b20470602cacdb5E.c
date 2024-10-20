        char a5)
{
  __int64 mut; // rax
  void **v11; // rdi
  void **v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 i; // r13
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdi
  size_t v27; // r13
  __int64 v28; // rbp
  __int64 *v29; // r14
  __int64 v30; // rax
  void **v31; // r13
  __int64 v32; // rax
  const char *v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  void **v38; // rbp
  __int64 v39; // r13
  _QWORD *v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // r15
  __int64 v45; // rbp
  __int64 v46; // r13
  __int64 j; // rbx
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdi
  __int64 *s2; // [rsp+8h] [rbp-2E0h]
  _QWORD *s2a; // [rsp+8h] [rbp-2E0h]
  void *s1; // [rsp+10h] [rbp-2D8h]
  void *s1a; // [rsp+10h] [rbp-2D8h]
  unsigned __int64 v55; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v56; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v57; // [rsp+20h] [rbp-2C8h] BYREF
  __int64 v58; // [rsp+28h] [rbp-2C0h]
  __int128 v59; // [rsp+30h] [rbp-2B8h]
  __int64 v60; // [rsp+40h] [rbp-2A8h]
  __int64 v61; // [rsp+48h] [rbp-2A0h]
  void **v62; // [rsp+50h] [rbp-298h] BYREF
  _BYTE v63[25]; // [rsp+58h] [rbp-290h]
  _BYTE v64[23]; // [rsp+71h] [rbp-277h]
  __int16 v65; // [rsp+88h] [rbp-260h]
  char v66; // [rsp+8Ah] [rbp-25Eh]
  void **v67; // [rsp+90h] [rbp-258h] BYREF
  size_t n; // [rsp+98h] [rbp-250h]
  unsigned __int8 v69; // [rsp+A0h] [rbp-248h]
  __int128 v70; // [rsp+A1h] [rbp-247h]
  _BYTE v71[23]; // [rsp+B1h] [rbp-237h]
  __int16 v72; // [rsp+C8h] [rbp-220h]
  char v73; // [rsp+CAh] [rbp-21Eh]
  __int128 v74; // [rsp+D0h] [rbp-218h] BYREF
  _BYTE v75[23]; // [rsp+E0h] [rbp-208h]
  __int128 v76; // [rsp+100h] [rbp-1E8h]
  _BYTE v77[23]; // [rsp+110h] [rbp-1D8h]
  _QWORD v78[3]; // [rsp+128h] [rbp-1C0h] BYREF
  char v79; // [rsp+140h] [rbp-1A8h]
  __int64 v80; // [rsp+148h] [rbp-1A0h]
  __int128 v81; // [rsp+150h] [rbp-198h] BYREF
  __int64 v82; // [rsp+160h] [rbp-188h]
  void **v83; // [rsp+168h] [rbp-180h] BYREF
  __int64 v84; // [rsp+170h] [rbp-178h]
  _QWORD src[20]; // [rsp+178h] [rbp-170h] BYREF
  _QWORD dest[26]; // [rsp+218h] [rbp-D0h] BYREF

  v60 = -1LL;
  v61 = 0LL;
  v57 = 0LL;
  v58 = 8LL;
  v59 = 0LL;
  mut = uu_tail::follow::files::FileHandling::get_mut(a2, a3, a4);
  if ( !*(_QWORD *)(mut + 200) )
    goto LABEL_29;
  v11 = (void **)&v57;
  v12 = (void **)(mut + 200);
  v13 = uu_tail::chunks::BytesChunkBuffer::fill(&v57, mut + 200);
  if ( v13 )
  {
LABEL_3:
    *a1 = v13;
    s2 = a1;
    a1[1] = v14;
    if ( *((_QWORD *)&v59 + 1) )
    {
      v15 = v58;
      v16 = v57;
      if ( (unsigned __int64)v59 < v57 )
        v16 = 0LL;
      v17 = v59 - v16;
      v18 = v59 - v16 + *((_QWORD *)&v59 + 1);
      s1 = (void *)*((_QWORD *)&v59 + 1);
      v55 = v57 - (v59 - v16);
      v19 = *((_QWORD *)&v59 + 1) - v55;
      if ( *((_QWORD *)&v59 + 1) < v55 )
        v19 = 0LL;
      if ( *((_QWORD *)&v59 + 1) > v57 - ((_QWORD)v59 - v16) )
        v18 = v57;
      v20 = v18 - v17;
      if ( v20 )
      {
        v21 = v58 + 8 * v17;
        for ( i = 0LL; i != v20; ++i )
        {
          v23 = *(_QWORD *)(v21 + 8 * i);
          _rust_dealloc(v23, 8200LL, 8LL);
        }
      }
      if ( v55 < (unsigned __int64)s1 )
      {
        v24 = 0LL;
        do
        {
          v25 = *(_QWORD *)(v15 + 8 * v24++);
          _rust_dealloc(v25, 8200LL, 8LL);
        }
        while ( v19 != v24 );
      }
    }
    if ( v57 )
      _rust_dealloc(v58, 8 * v57, 8LL);
    return s2;
  }
  if ( !*((_QWORD *)&v59 + 1) )
  {
LABEL_29:
    *((_BYTE *)a1 + 8) = 0;
    v29 = a1;
    *a1 = 0LL;
    goto LABEL_30;
  }
  if ( !a5 )
    goto LABEL_49;
  if ( *a2 == 0x8000000000000000LL )
  {
LABEL_43:
    v30 = uu_tail::follow::files::FileHandling::get(a2, a3, a4);
    v11 = (void **)&v62;
    <alloc::string::String as core::clone::Clone>::clone(&v62, v30 + 176);
    v31 = *(void ***)v63;
    v74 = *(_OWORD *)v63;
    if ( *((_BYTE *)a2 + 72) )
    {
      v32 = *((unsigned __int8 *)a2 + 73);
      v33 = (_BYTE *)(&dword_0 + 1);
      if ( !*((_BYTE *)a2 + 73) )
        v33 = anon_c568fa996e9b1afffbd2fe86e67742f4_18_llvm_893476530518564186;
      v67 = (void **)v33;
      n = v32 ^ 1;
      dest[0] = &v67;
      dest[1] = <&T as core::fmt::Display>::fmt;
      dest[2] = &v74;
      dest[3] = <&T as core::fmt::Display>::fmt;
      v83 = (void **)&anon_c568fa996e9b1afffbd2fe86e67742f4_21_llvm_893476530518564186;
      v84 = 3LL;
      src[2] = 0LL;
      src[0] = dest;
      src[1] = 2LL;
      v11 = (void **)&v83;
      std::io::stdio::_print(&v83);
      *((_BYTE *)a2 + 73) = 0;
    }
    v12 = v62;
    if ( v62 )
    {
      v11 = v31;
      _rust_dealloc(v31, v62, 1LL);
    }
    goto LABEL_49;
  }
  std::path::Path::components(&v67, a2[1], a2[2]);
  std::path::Path::components(&v62, a3, a4);
  v11 = v67;
  v27 = n;
  v12 = v62;
  v28 = *(_QWORD *)v63;
  if ( n != *(_QWORD *)v63 || (_BYTE)v72 != (_BYTE)v65 || HIBYTE(v72) != 2 || HIBYTE(v65) != 2 )
  {
LABEL_38:
    if ( v69 != 6 )
    {
      *(_QWORD *)&v77[15] = *(_QWORD *)&v71[15];
      *(_OWORD *)v77 = *(_OWORD *)v71;
      v76 = v70;
    }
    dest[0] = v11;
    dest[1] = v27;
    LOBYTE(dest[2]) = v69;
    *(_OWORD *)((char *)&dest[2] + 1) = v76;
    *(_OWORD *)((char *)&dest[4] + 1) = *(_OWORD *)v77;
    dest[6] = *(_QWORD *)&v77[15];
    LOWORD(dest[7]) = v72;
    BYTE2(dest[7]) = v73;
    if ( v63[8] != 6 )
    {
      *(_QWORD *)&v75[15] = *(_QWORD *)&v64[15];
      *(_OWORD *)v75 = *(_OWORD *)v64;
      v74 = *(_OWORD *)&v63[9];
    }
    v83 = v12;
    v84 = v28;
    LOBYTE(src[0]) = v63[8];
    *(_OWORD *)((char *)src + 1) = v74;
    *(_OWORD *)((char *)&src[2] + 1) = *(_OWORD *)v75;
    src[4] = *(_QWORD *)&v75[15];
    LOWORD(src[5]) = v65;
    BYTE2(src[5]) = v66;
    v11 = (void **)dest;
    v12 = (void **)&v83;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(dest, &v83) )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( v69 == 6 )
  {
    if ( v63[8] < 3u )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( v63[8] == 6 )
  {
    if ( v69 < 3u )
      goto LABEL_38;
  }
  else if ( v69 < 3u != v63[8] < 3u )
  {
    goto LABEL_38;
  }
LABEL_37:
  v11 = v67;
  v12 = v62;
  if ( bcmp(v67, v62, n) )
    goto LABEL_38;
LABEL_49:
  v62 = (void **)std::io::stdio::stdout(v11, v12);
  v34 = std::io::stdio::Stdout::lock(&v62);
  v35 = _rust_alloc(0x2000LL, 1LL);
  if ( !v35 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v78[0] = 0x2000LL;
  v78[1] = v35;
  v78[2] = 0LL;
  v79 = 0;
  v80 = v34;
  v13 = uu_tail::chunks::BytesChunkBuffer::print(&v57, v78);
  if ( v13 )
    goto LABEL_3;
  std::path::Path::to_path_buf(&v81, a3, a4);
  v36 = *a2;
  v37 = a2[1];
  a2[2] = v82;
  *(_OWORD *)a2 = v81;
  if ( 2 * v36 )
    _rust_dealloc(v37, v36, 1LL);
  std::sys::pal::unix::fs::stat(&v83);
  v38 = v83;
  v39 = v84;
  if ( v83 == (void **)((char *)&dword_0 + 2) )
    core::ptr::drop_in_place<std::io::error::Error>(v84);
  else
    memcpy(dest, src, 0xA0uLL);
  v40 = (_QWORD *)uu_tail::follow::files::FileHandling::get_mut(a2, a3, a4);
  *v40 = v38;
  v40[1] = v39;
  memcpy(v40 + 2, dest, 0xA0uLL);
  *((_BYTE *)a1 + 8) = 1;
  v29 = a1;
  *a1 = 0LL;
  if ( *((_QWORD *)&v59 + 1) )
  {
    s2a = (_QWORD *)v58;
    v41 = v57;
    if ( (unsigned __int64)v59 < v57 )
      v41 = 0LL;
    v42 = v59 - v41;
    v43 = v59 - v41 + *((_QWORD *)&v59 + 1);
    s1a = (void *)*((_QWORD *)&v59 + 1);
    v56 = v57 - (v59 - v41);
    v44 = *((_QWORD *)&v59 + 1) - v56;
    if ( *((_QWORD *)&v59 + 1) < v56 )
      v44 = 0LL;
    if ( *((_QWORD *)&v59 + 1) > v57 - ((_QWORD)v59 - v41) )
      v43 = v57;
    v45 = v43 - v42;
    if ( v45 )
    {
      v46 = v58 + 8 * v42;
      for ( j = 0LL; j != v45; ++j )
      {
        v48 = *(_QWORD *)(v46 + 8 * j);
        _rust_dealloc(v48, 8200LL, 8LL);
      }
    }
    if ( v56 < (unsigned __int64)s1a )
    {
      v49 = 0LL;
      do
      {
        v50 = s2a[v49++];
        _rust_dealloc(v50, 8200LL, 8LL);
      }
      while ( v44 != v49 );
    }
  }
LABEL_30:
  if ( v57 )
    _rust_dealloc(v58, 8 * v57, 8LL);
  return v29;
}
