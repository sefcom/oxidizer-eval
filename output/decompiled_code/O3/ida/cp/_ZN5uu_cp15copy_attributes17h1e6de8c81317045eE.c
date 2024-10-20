_QWORD *__fastcall uu_cp::copy_attributes(_QWORD *a1, __int64 a2, size_t a3, void *a4, size_t a5, _BYTE *a6)
{
  __int64 v8; // r15
  char *v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  void *v12; // rbx
  int v13; // ebx
  int v14; // r13d
  int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rax
  char v21; // bp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  char v25; // bl
  __int64 v26; // rax
  char v27; // bp
  unsigned __int64 v28; // rdi
  char *v29; // rsi
  char *v30; // rsi
  unsigned __int64 v31; // r13
  char *v32; // rax
  unsigned __int64 v33; // r15
  void *v34; // r14
  size_t v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  char *v38; // rbx
  void *v39; // rbx
  void *v40; // rdi
  void *v41; // rsi
  __int16 v42; // r12
  __int16 v43; // dx
  __int16 v44; // bp
  char v46; // [rsp+Fh] [rbp-259h]
  void *src; // [rsp+10h] [rbp-258h]
  void *srca; // [rsp+10h] [rbp-258h]
  char *v52; // [rsp+30h] [rbp-238h]
  char *v53; // [rsp+30h] [rbp-238h]
  void *v54; // [rsp+40h] [rbp-228h]
  char v55; // [rsp+40h] [rbp-228h]
  int v56; // [rsp+48h] [rbp-220h]
  char *v57; // [rsp+48h] [rbp-220h]
  __int128 v58; // [rsp+50h] [rbp-218h] BYREF
  size_t v59; // [rsp+60h] [rbp-208h]
  char v60; // [rsp+68h] [rbp-200h]
  void **v61; // [rsp+70h] [rbp-1F8h] BYREF
  void *v62; // [rsp+78h] [rbp-1F0h]
  int v63; // [rsp+84h] [rbp-1E4h]
  unsigned __int64 v64; // [rsp+88h] [rbp-1E0h]
  __int128 *v65; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+98h] [rbp-1D0h]
  void **v67; // [rsp+A0h] [rbp-1C8h]
  __int64 (__fastcall *v68)(); // [rsp+A8h] [rbp-1C0h]
  void *v69; // [rsp+B0h] [rbp-1B8h] BYREF
  void *value; // [rsp+B8h] [rbp-1B0h]
  size_t size[2]; // [rsp+C0h] [rbp-1A8h]
  _QWORD dest[18]; // [rsp+D0h] [rbp-198h] BYREF
  char *v73; // [rsp+160h] [rbp-108h] BYREF
  char *v74; // [rsp+168h] [rbp-100h]
  __int128 v75; // [rsp+170h] [rbp-F8h]
  _QWORD v76[18]; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+210h] [rbp-58h]
  size_t v78; // [rsp+218h] [rbp-50h]
  __int64 v79; // [rsp+220h] [rbp-48h] BYREF
  void *v80; // [rsp+228h] [rbp-40h]
  size_t n; // [rsp+230h] [rbp-38h]

  *(_QWORD *)&v58 = 1LL;
  *((_QWORD *)&v58 + 1) = a2;
  v59 = a3;
  v60 = 1;
  v69 = &dword_0 + 1;
  value = a4;
  size[0] = a5;
  LOBYTE(size[1]) = 1;
  v65 = &v58;
  v66 = <os_display::Quoted as core::fmt::Display>::fmt;
  v67 = &v69;
  v68 = <os_display::Quoted as core::fmt::Display>::fmt;
  v73 = (char *)&anon_7947dff69a24cd925ba6dc87d49388a5_176_llvm_6903499209109998583;
  v74 = (_BYTE *)(&dword_0 + 2);
  v76[0] = 0LL;
  *(_QWORD *)&v75 = &v65;
  *((_QWORD *)&v75 + 1) = 2LL;
  alloc::fmt::format::format_inner(&v79, &v73);
  src = v80;
  v8 = n;
  v77 = a2;
  v78 = a3;
  std::sys::pal::unix::fs::lstat(&v73);
  if ( (_DWORD)v73 == 2 )
  {
    v9 = v74;
    v73 = v74;
    if ( v8 )
    {
      if ( v8 < 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = 1LL;
        v11 = _rust_alloc(v8, 1LL);
        if ( v11 )
        {
          v12 = (void *)v11;
LABEL_13:
          memcpy(v12, src, v8);
LABEL_14:
          *a1 = 3LL;
          a1[1] = v8;
          a1[2] = v12;
          a1[3] = v8;
          v19 = a1;
          v20 = 4LL;
          goto LABEL_74;
        }
      }
      alloc::raw_vec::handle_error(v10, v8);
    }
    v12 = &dword_0 + 1;
    goto LABEL_13;
  }
  v13 = v76[3];
  v54 = (void *)v76[9];
  v62 = (void *)v76[10];
  v64 = v76[11];
  v56 = v76[12];
  if ( *a6 )
  {
    v14 = HIDWORD(v76[3]);
    v15 = v76[4];
    v46 = a6[1];
    std::sys::pal::unix::fs::lstat(&v73);
    v63 = v13;
    if ( v73 != (_BYTE *)&dword_0 + 2 )
    {
      memcpy(dest, v76, sizeof(dest));
      v69 = v73;
      value = v74;
      *(_OWORD *)size = v75;
      uucore::features::perms::wrap_chown(
        (unsigned int)&v58,
        (_DWORD)a4,
        a5,
        (unsigned int)&v69,
        1,
        v14,
        1,
        v15,
        0,
        0,
        0);
      if ( *((_QWORD *)&v58 + 1) )
        _rust_dealloc(v59, *((_QWORD *)&v58 + 1), 1LL);
      goto LABEL_23;
    }
    v52 = v74;
    v73 = v74;
    if ( v8 )
    {
      if ( v8 < 0 )
      {
        v16 = 0LL;
      }
      else
      {
        v16 = 1LL;
        v17 = _rust_alloc(v8, 1LL);
        if ( v17 )
        {
          v18 = (void *)v17;
LABEL_18:
          memcpy(v18, src, v8);
          if ( v46 )
          {
            v19 = a1;
            *a1 = 3LL;
            a1[1] = v8;
            a1[2] = v18;
            a1[3] = v8;
            v20 = 4LL;
            v9 = v52;
            goto LABEL_74;
          }
          v73 = (_BYTE *)(&dword_0 + 3);
          v74 = (char *)v8;
          *(_QWORD *)&v75 = v18;
          *((_QWORD *)&v75 + 1) = v8;
          v76[0] = v52;
          v61 = (void **)&v73;
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v58 = xmmword_15C040;
          v65 = &v58;
          v66 = <&T as core::fmt::Display>::fmt;
          v69 = &unk_155318;
          value = &dword_0 + 2;
          dest[0] = 0LL;
          size[0] = (size_t)&v65;
          size[1] = 1LL;
          std::io::stdio::_eprint(&v69);
          *(_QWORD *)&v58 = &v61;
          *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
          v69 = &unk_155338;
          value = &dword_0 + 2;
          dest[0] = 0LL;
          size[0] = (size_t)&v58;
          size[1] = 1LL;
          std::io::stdio::_eprint(&v69);
          core::ptr::drop_in_place<uu_cp::Error>(&v73);
          goto LABEL_23;
        }
      }
      alloc::raw_vec::handle_error(v16, v8);
    }
    v18 = &dword_0 + 1;
    goto LABEL_18;
  }
LABEL_23:
  if ( a6[2] )
  {
    v21 = a6[3];
    if ( !(unsigned __int8)std::path::Path::is_symlink(a4, a5) )
    {
      v22 = std::sys::pal::unix::fs::set_perm(a4, a5);
      v9 = (char *)v22;
      if ( v22 )
      {
        v73 = (char *)v22;
        if ( v8 )
        {
          if ( v8 < 0 )
          {
            v23 = 0LL;
          }
          else
          {
            v23 = 1LL;
            v24 = _rust_alloc(v8, 1LL);
            if ( v24 )
            {
              v12 = (void *)v24;
LABEL_31:
              memcpy(v12, src, v8);
              if ( v21 )
                goto LABEL_14;
              v73 = (_BYTE *)(&dword_0 + 3);
              v74 = (char *)v8;
              *(_QWORD *)&v75 = v12;
              *((_QWORD *)&v75 + 1) = v8;
              v76[0] = v9;
              v61 = (void **)&v73;
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v58 = xmmword_15C040;
              v65 = &v58;
              v66 = <&T as core::fmt::Display>::fmt;
              v69 = &unk_155318;
              value = &dword_0 + 2;
              dest[0] = 0LL;
              size[0] = (size_t)&v65;
              size[1] = 1LL;
              std::io::stdio::_eprint(&v69);
              *(_QWORD *)&v58 = &v61;
              *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
              v69 = &unk_155338;
              value = &dword_0 + 2;
              dest[0] = 0LL;
              size[0] = (size_t)&v58;
              size[1] = 1LL;
              std::io::stdio::_eprint(&v69);
              core::ptr::drop_in_place<uu_cp::Error>(&v73);
              goto LABEL_35;
            }
          }
          alloc::raw_vec::handle_error(v23, v8);
        }
        v12 = &dword_0 + 1;
        goto LABEL_31;
      }
    }
  }
LABEL_35:
  if ( a6[4] )
  {
    v25 = a6[5];
    if ( (unsigned __int8)std::path::Path::is_symlink(a4, a5) )
    {
      value = v54;
      LODWORD(size[0]) = (_DWORD)v62;
      v69 = &dword_0 + 1;
      v74 = (char *)v64;
      LODWORD(v75) = v56;
      v73 = (_BYTE *)(&dword_0 + 1);
      v26 = filetime::imp::linux::set_times(a4, a5, &v69, &v73, 1LL);
    }
    else
    {
      value = v54;
      LODWORD(size[0]) = (_DWORD)v62;
      v69 = &dword_0 + 1;
      v74 = (char *)v64;
      LODWORD(v75) = v56;
      v73 = (_BYTE *)(&dword_0 + 1);
      v26 = filetime::imp::linux::set_times(a4, a5, &v69, &v73, 0LL);
    }
    v9 = (char *)v26;
    if ( v26 )
    {
      if ( v25 )
      {
        v19 = a1;
        goto LABEL_73;
      }
      v73 = (_BYTE *)(&dword_0 + 2);
      v74 = (char *)v26;
      v61 = (void **)&v73;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v58 = xmmword_15C040;
      v65 = &v58;
      v66 = <&T as core::fmt::Display>::fmt;
      v69 = &unk_155318;
      value = &dword_0 + 2;
      dest[0] = 0LL;
      size[0] = (size_t)&v65;
      size[1] = 1LL;
      std::io::stdio::_eprint(&v69);
      *(_QWORD *)&v58 = &v61;
      *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
      v69 = &unk_155338;
      value = &dword_0 + 2;
      dest[0] = 0LL;
      size[0] = (size_t)&v58;
      size[1] = 1LL;
      std::io::stdio::_eprint(&v69);
      core::ptr::drop_in_place<uu_cp::Error>(&v73);
    }
  }
  if ( !a6[10] )
    goto LABEL_87;
  v27 = a6[11];
  xattr::sys::linux_macos::list_path(&v73, v77, v78, 0LL);
  v9 = v74;
  v57 = v73;
  if ( !v73 )
  {
    v19 = a1;
    if ( !v27 )
      goto LABEL_84;
    goto LABEL_73;
  }
  v55 = v27;
  v28 = v75;
  v53 = v74;
  if ( (unsigned __int64)v75 > (unsigned __int64)v74 )
LABEL_93:
    core::slice::index::slice_start_index_len_fail(
      v28,
      v53,
      &anon_cdb3177a050818a255ffdb6f9eaa830e_3_llvm_8838279859924697073);
  v64 = 0x8000000000000001LL;
  v29 = v74;
  while ( 1 )
  {
    v30 = &v29[-v28];
    if ( !v30 )
      goto LABEL_75;
    v31 = v28;
    v32 = &v57[v28];
    v33 = 0LL;
    while ( v32[v33] )
    {
      if ( v30 == (char *)++v33 )
        core::option::unwrap_failed(&anon_cdb3177a050818a255ffdb6f9eaa830e_1_llvm_8838279859924697073);
    }
    if ( v33 > (unsigned __int64)v30 )
      core::slice::index::slice_end_index_len_fail(
        v33,
        v30,
        &anon_cdb3177a050818a255ffdb6f9eaa830e_2_llvm_8838279859924697073);
    std::sys::os_str::bytes::Slice::to_owned(&v58, v32, v33);
    v34 = (void *)v58;
    if ( (_QWORD)v58 == 0x8000000000000000LL )
    {
LABEL_75:
      if ( v53 )
        _rust_dealloc(v57, v53, 1LL);
LABEL_87:
      v19 = a1;
      *a1 = 13LL;
      goto LABEL_88;
    }
    srca = (void *)*((_QWORD *)&v58 + 1);
    v35 = v59;
    if ( v59 )
    {
      if ( (v59 & 0x8000000000000000LL) != 0LL )
      {
        v36 = 0LL;
LABEL_95:
        alloc::raw_vec::handle_error(v36, v35);
      }
      v36 = 1LL;
      v37 = _rust_alloc(v59, 1LL);
      if ( !v37 )
        goto LABEL_95;
      v38 = (char *)v37;
    }
    else
    {
      v38 = (_BYTE *)(&dword_0 + 1);
    }
    memcpy(v38, srca, v35);
    v73 = (char *)v35;
    v74 = v38;
    *(_QWORD *)&v75 = v35;
    xattr::get(&v69, v77, v78, &v73);
    v39 = v69;
    if ( v69 == (void *)v64 )
      break;
    if ( v69 == (void *)0x8000000000000000LL )
    {
      if ( !v34 )
        goto LABEL_50;
      v40 = srca;
      v41 = v34;
    }
    else
    {
      v62 = value;
      v42 = rustix::fs::xattr::lsetxattr(a4, a5, srca, v35, value, size[0], 0);
      v44 = v43;
      if ( v34 )
        _rust_dealloc(srca, v34, 1LL);
      if ( v42 )
      {
        v9 = (char *)(2 - ((__int64)v44 << 32));
        if ( v39 )
          _rust_dealloc(v62, v39, 1LL);
        goto LABEL_81;
      }
      v40 = v62;
      if ( !v39 )
        goto LABEL_50;
      v41 = v39;
    }
    _rust_dealloc(v40, v41, 1LL);
LABEL_50:
    v28 = v33 + v31 + 1;
    v29 = v53;
    if ( v28 > (unsigned __int64)v53 )
    {
      v28 = v33 + v31 + 1;
      goto LABEL_93;
    }
  }
  v9 = (char *)value;
  if ( v34 )
    _rust_dealloc(srca, v34, 1LL);
LABEL_81:
  v19 = a1;
  if ( v53 )
    _rust_dealloc(v57, v53, 1LL);
  if ( !v55 )
  {
LABEL_84:
    v73 = (_BYTE *)(&dword_0 + 2);
    v74 = v9;
    v61 = (void **)&v73;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v58 = xmmword_15C040;
    v65 = &v58;
    v66 = <&T as core::fmt::Display>::fmt;
    v69 = &unk_155318;
    value = &dword_0 + 2;
    dest[0] = 0LL;
    size[0] = (size_t)&v65;
    size[1] = 1LL;
    std::io::stdio::_eprint(&v69);
    *(_QWORD *)&v58 = &v61;
    *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
    v69 = &unk_155338;
    value = &dword_0 + 2;
    dest[0] = 0LL;
    size[0] = (size_t)&v58;
    size[1] = 1LL;
    std::io::stdio::_eprint(&v69);
    core::ptr::drop_in_place<uu_cp::Error>(&v73);
    goto LABEL_87;
  }
LABEL_73:
  *v19 = 2LL;
  v20 = 1LL;
LABEL_74:
  v19[v20] = v9;
LABEL_88:
  if ( v79 )
    _rust_dealloc(v80, v79, 1LL);
  return v19;
}
