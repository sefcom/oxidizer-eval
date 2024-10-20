__int64 __fastcall uu_ls::PathData::new(__int64 a1, const char *a2, __int64 a3, size_t *a4, __int64 a5, char a6)
{
  char v6; // r14
  const char *v8; // rbx
  char v10; // r12
  const char *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  const char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // al
  char v25; // al
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // rbx
  _OWORD *v30; // r14
  _OWORD *v31; // rsi
  _OWORD *v32; // rsi
  __int64 v33; // r12
  __int64 v34; // r15
  _BYTE *v35; // rax
  __int64 v36; // r14
  __int128 v37; // xmm0
  __int64 result; // rax
  bool v39; // [rsp+Ch] [rbp-24Ch]
  int v40; // [rsp+14h] [rbp-244h]
  char v41; // [rsp+18h] [rbp-240h]
  char v42; // [rsp+1Ch] [rbp-23Ch]
  char v43; // [rsp+1Ch] [rbp-23Ch]
  size_t v44; // [rsp+20h] [rbp-238h]
  int v45; // [rsp+2Ch] [rbp-22Ch]
  size_t n; // [rsp+30h] [rbp-228h]
  char *v47; // [rsp+38h] [rbp-220h]
  size_t v48; // [rsp+40h] [rbp-218h]
  const char *v49; // [rsp+48h] [rbp-210h]
  __int128 *v52; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v53[3]; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v54; // [rsp+80h] [rbp-1D8h] BYREF
  __int128 v55; // [rsp+90h] [rbp-1C8h]
  __int64 v56; // [rsp+A0h] [rbp-1B8h]
  _OWORD src[11]; // [rsp+B0h] [rbp-1A8h] BYREF
  _OWORD dest[11]; // [rsp+168h] [rbp-F0h] BYREF
  __int128 v59; // [rsp+218h] [rbp-40h] BYREF

  v6 = a6;
  v8 = a2;
  v49 = a2;
  v48 = *a4;
  if ( *a4 == 0x8000000000000000LL )
  {
    v10 = a6;
    if ( a6 )
    {
      v11 = (const char *)*((_QWORD *)a2 + 1);
      v12 = *((_QWORD *)a2 + 2);
      n = v12;
      if ( v12 )
      {
        if ( v12 < 0 )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = 1LL;
          v14 = _rust_alloc(v12, 1LL);
          if ( v14 )
          {
            v15 = (char *)v14;
            goto LABEL_13;
          }
        }
        alloc::raw_vec::handle_error(v13, n);
      }
      v15 = (char *)&dword_0 + 1;
LABEL_13:
      v47 = v15;
      a2 = v11;
      memcpy(v15, v11, n);
      v41 = 1;
      switch ( *(_BYTE *)(a5 + 242) )
      {
        case 0:
          v39 = 0;
          v44 = n;
          v6 = v10;
          break;
        case 1:
          v44 = n;
          v41 = *(_BYTE *)(a5 + 242);
          goto LABEL_26;
        case 2:
          v44 = n;
          v6 = v10;
          goto LABEL_21;
        case 3:
          v44 = n;
          v6 = v10;
          goto LABEL_23;
      }
      goto LABEL_31;
    }
    v16 = *((_QWORD *)a2 + 1);
    v17 = *((_QWORD *)a2 + 2);
    v18 = (const char *)std::path::Path::file_name(v16, v17);
    if ( !v18 )
    {
      std::path::Path::components(src, v16, v17);
      <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(dest, src);
      if ( LOBYTE(dest[0]) == 10 )
        core::option::unwrap_failed(&off_1AC6F8, src, v20, v21, v22, v23);
      v24 = LOBYTE(dest[0]) - 5;
      if ( (unsigned __int8)(LOBYTE(dest[0]) - 6) >= 4u )
        v24 = 0;
      v19 = v24;
      switch ( v24 )
      {
        case 0u:
          v18 = (const char *)*((_QWORD *)&dest[2] + 1);
          v19 = *(_QWORD *)&dest[3];
          break;
        case 1u:
          v18 = (const char *)&unk_2D85C;
          break;
        case 2u:
          v18 = asc_2D85D;
          v19 = 1LL;
          break;
        case 3u:
          v18 = asc_2D85E;
          v19 = 2LL;
          break;
        case 4u:
          v18 = (const char *)*((_QWORD *)&dest[0] + 1);
          v19 = *(_QWORD *)&dest[1];
          break;
      }
    }
    a2 = v18;
    std::sys::os_str::bytes::Slice::to_owned(src, v18, v19);
    v47 = (char *)*((_QWORD *)&src[0] + 1);
    v44 = *(_QWORD *)&src[0];
    n = *(_QWORD *)&src[1];
    v41 = 1;
    v39 = 0;
    v6 = v10;
    switch ( *(_BYTE *)(a5 + 242) )
    {
      case 0:
        break;
      case 1:
        goto LABEL_10;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_23;
    }
  }
  else
  {
    v47 = (char *)a4[1];
    n = a4[2];
    v41 = 0;
    v39 = 0;
    v44 = *a4;
    switch ( *(_BYTE *)(a5 + 242) )
    {
      case 0:
        break;
      case 1:
LABEL_10:
        if ( !v6 )
          goto LABEL_30;
        v10 = v6;
        v11 = (const char *)*((_QWORD *)v8 + 1);
LABEL_26:
        a2 = v11;
        std::sys::pal::unix::fs::stat(src);
        v6 = v10;
        if ( LODWORD(src[0]) == 2 )
        {
          *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
          *(_QWORD *)&dest[0] = 2LL;
        }
        else
        {
          a2 = (const char *)src;
          memcpy(dest, src, sizeof(dest));
          v39 = (WORD4(dest[3]) & 0xF000) == 0x4000;
          if ( *(_QWORD *)&dest[0] != 2LL )
            break;
        }
        core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, a2);
LABEL_30:
        v39 = 0;
        break;
      case 2:
LABEL_21:
        v25 = v6;
        goto LABEL_24;
      case 3:
LABEL_23:
        v25 = 1;
LABEL_24:
        v39 = v25;
        break;
    }
  }
LABEL_31:
  if ( *(_QWORD *)a3 )
  {
    v26 = *(_OWORD *)(a3 + 24);
    src[0] = *(_OWORD *)(a3 + 8);
    *(_QWORD *)&src[2] = *(_QWORD *)(a3 + 40);
    src[1] = v26;
    if ( *(_QWORD *)&src[0] )
    {
      v56 = *(_QWORD *)(a3 + 40);
      v27 = *(_OWORD *)(a3 + 8);
      v55 = *(_OWORD *)(a3 + 24);
      v54 = v27;
    }
    else
    {
      *(_QWORD *)&v54 = 0LL;
      core::ptr::drop_in_place<std::io::error::Error>((char *)src + 8, a2);
    }
    if ( (_QWORD)v54 )
    {
      v42 = v6;
      v30 = (_OWORD *)*((_QWORD *)v8 + 1);
      if ( v39 )
      {
        v31 = (_OWORD *)*((_QWORD *)v8 + 1);
        std::sys::pal::unix::fs::stat(src);
        if ( LODWORD(src[0]) == 2 )
        {
          *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
          *(_QWORD *)&dest[0] = 2LL;
        }
        else
        {
          v31 = src;
          memcpy(dest, src, sizeof(dest));
          if ( *(_QWORD *)&dest[0] != 2LL )
          {
            v45 = DWORD2(dest[3]);
            v40 = 1;
LABEL_53:
            v6 = v42;
            if ( *(_BYTE *)(a5 + 235) )
              goto LABEL_54;
LABEL_35:
            v28 = 1LL;
            v29 = 0LL;
            goto LABEL_60;
          }
        }
        core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v31);
      }
      std::fs::DirEntry::file_type(&v52, &v54);
      if ( !(_DWORD)v52 )
      {
        v40 = 1;
        v45 = HIDWORD(v52);
        goto LABEL_53;
      }
      v32 = v30;
      std::sys::pal::unix::fs::lstat(src);
      if ( LODWORD(src[0]) == 2 )
      {
        *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
        *(_QWORD *)&dest[0] = 2LL;
      }
      else
      {
        v32 = src;
        memcpy(dest, src, sizeof(dest));
        if ( *(_QWORD *)&dest[0] != 2LL )
        {
          v40 = 1;
          v45 = DWORD2(dest[3]);
          goto LABEL_52;
        }
      }
      core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v32);
      v40 = 2;
LABEL_52:
      core::ptr::drop_in_place<std::io::error::Error>(v53, v32);
      goto LABEL_53;
    }
    v40 = 2;
    if ( !*(_BYTE *)(a5 + 235) )
      goto LABEL_35;
  }
  else
  {
    *(_QWORD *)&v54 = 0LL;
    v40 = 2;
    if ( !*(_BYTE *)(a5 + 235) )
      goto LABEL_35;
  }
LABEL_54:
  v33 = *((_QWORD *)v8 + 1);
  v34 = *((_QWORD *)v8 + 2);
  v29 = 1LL;
  v35 = (_BYTE *)_rust_alloc(1LL, 1LL);
  if ( !v35 )
    alloc::raw_vec::handle_error(1LL, 1LL);
  v28 = (__int64)v35;
  *v35 = 63;
  if ( v39 )
  {
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      v43 = v6;
      v36 = *((_QWORD *)&src[0] + 1);
      v52 = (__int128 *)*((_QWORD *)&src[0] + 1);
      std::path::Path::to_path_buf(dest, v33, v34);
      *((_QWORD *)&src[0] + 1) = v36;
      src[1] = dest[0];
      *(_QWORD *)&src[2] = *(_QWORD *)&dest[1];
      LOWORD(src[0]) = 2;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v59 = xmmword_1B7CA8;
      v52 = &v59;
      v53[0] = <&T as core::fmt::Display>::fmt;
      v53[1] = src;
      v53[2] = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_1AC758;
      *((_QWORD *)&dest[0] + 1) = 3LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v52;
      *((_QWORD *)&dest[1] + 1) = 2LL;
      std::io::stdio::_eprint(dest);
      core::ptr::drop_in_place<uu_ls::LsError>(src);
      v6 = v43;
    }
  }
LABEL_60:
  *(_QWORD *)(a1 + 288) = v56;
  v37 = v54;
  *(_OWORD *)(a1 + 272) = v55;
  *(_OWORD *)(a1 + 256) = v37;
  *(_QWORD *)a1 = v44;
  *(_QWORD *)(a1 + 8) = v47;
  *(_QWORD *)(a1 + 16) = n;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v49;
  *(_QWORD *)(a1 + 40) = *((_QWORD *)v49 + 2);
  *(_QWORD *)(a1 + 72) = 3LL;
  *(_DWORD *)(a1 + 248) = v40;
  *(_DWORD *)(a1 + 252) = v45;
  *(_BYTE *)(a1 + 296) = v39;
  *(_QWORD *)(a1 + 48) = v29;
  *(_QWORD *)(a1 + 56) = v28;
  *(_QWORD *)(a1 + 64) = v29;
  *(_BYTE *)(a1 + 297) = v6;
  result = 0x8000000000000000LL;
  if ( v48 != 0x8000000000000000LL && v41 )
  {
    if ( v48 )
      return _rust_dealloc(a4[1], v48, 1LL);
  }
  return result;
}
