_OWORD *__fastcall uu_ln::link(void *a1, size_t a2, void *a3, size_t a4, _BYTE *a5)
{
  __int128 *v7; // rbx
  __int64 (__fastcall *v8)(); // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  size_t v12; // rcx
  void *v13; // r8
  _BYTE *v14; // rsi
  unsigned __int64 v15; // r14
  size_t v16; // rbx
  __int64 v17; // rax
  _OWORD *result; // rax
  __int64 v19; // r15
  void *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rbp
  size_t v24; // rbx
  __int64 v25; // rax
  __int128 v26; // xmm0
  void *v27; // r14
  void *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // r13
  unsigned __int64 v31; // r13
  char v32; // bl
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rbx
  _OWORD *v37; // r15
  unsigned __int64 v38; // rsi
  _OWORD *v39; // r14
  void *v40; // rdx
  unsigned __int64 v41; // [rsp+8h] [rbp-190h]
  __int64 v42; // [rsp+8h] [rbp-190h]
  void *v44; // [rsp+18h] [rbp-180h]
  void *v45[2]; // [rsp+20h] [rbp-178h] BYREF
  size_t v46; // [rsp+30h] [rbp-168h]
  char v47; // [rsp+38h] [rbp-160h]
  _BYTE *v48; // [rsp+40h] [rbp-158h]
  __int128 v49; // [rsp+48h] [rbp-150h] BYREF
  size_t v50; // [rsp+58h] [rbp-140h]
  char v51; // [rsp+60h] [rbp-138h]
  unsigned __int64 v52; // [rsp+68h] [rbp-130h] BYREF
  void *src; // [rsp+70h] [rbp-128h]
  size_t v54; // [rsp+78h] [rbp-120h]
  void *dest[2]; // [rsp+80h] [rbp-118h] BYREF
  __m256i v56; // [rsp+90h] [rbp-108h]
  __int128 *v57; // [rsp+138h] [rbp-60h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+140h] [rbp-58h]
  void **v59; // [rsp+148h] [rbp-50h]
  __int64 (__fastcall *v60)(); // [rsp+150h] [rbp-48h]
  size_t v61; // [rsp+158h] [rbp-40h]
  void *v62; // [rsp+160h] [rbp-38h] BYREF

  v48 = a5;
  if ( !a5[49] )
  {
    src = a1;
    v54 = a2;
LABEL_10:
    v52 = 0x8000000000000000LL;
    goto LABEL_11;
  }
  uucore::features::fs::canonicalize(&v57, a1, a2, 2LL, 1LL);
  v7 = v57;
  v8 = v58;
  if ( v57 == (__int128 *)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v58);
LABEL_9:
    src = a1;
    v54 = a2;
    goto LABEL_10;
  }
  v9 = (__int64)v59;
  v10 = std::path::Path::parent(a3, a4);
  if ( !v10 )
    core::option::unwrap_failed(&off_EFAA8);
  uucore::features::fs::canonicalize(&v49, v10, v11, 2LL, 1LL);
  if ( (_QWORD)v49 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v49 + 1));
    if ( v7 )
      _rust_dealloc(v8, v7, 1LL);
    goto LABEL_9;
  }
  v46 = v50;
  *(_OWORD *)v45 = v49;
  dest[0] = v7;
  dest[1] = v8;
  v56.m256i_i64[0] = v9;
  uucore::features::fs::make_path_relative_to(&v52, dest, v45);
LABEL_11:
  if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
  {
    v14 = v48;
    v15 = 0x8000000000000000LL;
    switch ( v48[55] )
    {
      case 0:
        goto LABEL_31;
      case 1:
        goto LABEL_16;
      case 2:
        goto LABEL_17;
      case 3:
        goto LABEL_21;
    }
  }
  std::sys::pal::unix::fs::stat(dest);
  if ( LODWORD(dest[0]) == 2 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(dest[1]);
    v41 = 0x8000000000000000LL;
    goto LABEL_45;
  }
  v14 = v48;
  v15 = 0x8000000000000000LL;
  switch ( v48[55] )
  {
    case 0:
      goto LABEL_31;
    case 1:
LABEL_16:
      uu_ln::simple_backup_path(dest, a3, a4, *((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2));
      goto LABEL_18;
    case 2:
LABEL_17:
      uu_ln::numbered_backup_path(dest, a3, a4);
LABEL_18:
      v15 = (unsigned __int64)dest[0];
      v13 = dest[1];
      v12 = v56.m256i_i64[0];
      if ( dest[0] != (void *)0x8000000000000000LL )
        goto LABEL_19;
      goto LABEL_30;
    case 3:
LABEL_21:
      v19 = *((_QWORD *)v14 + 1);
      v42 = *((_QWORD *)v14 + 2);
      uu_ln::simple_backup_path(v45, a3, a4, ::a1, 4LL);
      v20 = v45[1];
      std::sys::pal::unix::fs::stat(dest);
      if ( LODWORD(dest[0]) == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(dest[1]);
        uu_ln::simple_backup_path(dest, a3, a4, v19, v42);
      }
      else
      {
        uu_ln::numbered_backup_path(dest, a3, a4);
      }
      if ( v45[0] )
        _rust_dealloc(v20, v45[0], 1LL);
      v15 = (unsigned __int64)dest[0];
      v13 = dest[1];
      v12 = v56.m256i_i64[0];
      if ( v48[48] )
      {
        if ( dest[0] == (void *)0x8000000000000000LL )
        {
LABEL_30:
          v15 = 0x8000000000000000LL;
          v14 = v48;
          goto LABEL_31;
        }
      }
      else
      {
        v36 = v56.m256i_i64[0];
        v44 = dest[1];
        if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, a2, a3, a4, 1LL) )
        {
          std::path::Path::to_path_buf(&v49, a1, a2);
          std::path::Path::to_path_buf(v45, a3, a4);
          v56.m256i_i64[0] = v50;
          *(_OWORD *)dest = v49;
          *(_OWORD *)&v56.m256i_u64[1] = *(_OWORD *)v45;
          v56.m256i_i64[3] = v46;
          result = (_OWORD *)_rust_alloc(48LL, 8LL);
          if ( !result )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
LABEL_76:
          v33 = *(_OWORD *)dest;
          v34 = *(_OWORD *)v56.m256i_i8;
          v35 = *(_OWORD *)&v56.m256i_u64[2];
LABEL_77:
          result[2] = v35;
          result[1] = v34;
          *result = v33;
LABEL_78:
          if ( v52 != 0x8000000000000000LL && v52 )
          {
            v37 = result;
            _rust_dealloc(src, v52, 1LL);
            result = v37;
          }
          if ( 2 * v15 )
          {
            v38 = v15;
            v39 = result;
            _rust_dealloc(v44, v38, 1LL);
            return v39;
          }
          return result;
        }
        v13 = v44;
        v12 = v36;
        if ( v15 == 0x8000000000000000LL )
          goto LABEL_30;
      }
LABEL_19:
      v44 = v13;
      v16 = v12;
      v17 = std::sys::pal::unix::fs::rename(a3, a4, v13, v12);
      if ( v17 )
      {
        result = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                             v17,
                             a3,
                             a4);
        goto LABEL_78;
      }
      v13 = v44;
      v14 = v48;
      v12 = v16;
LABEL_31:
      v61 = v12;
      v44 = v13;
      if ( !v14[54] )
      {
LABEL_38:
        v41 = v15;
        goto LABEL_45;
      }
      if ( v14[54] != 1 )
      {
        if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4)
          || !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, a2, a3, a4, 1LL) )
        {
          v22 = std::sys::pal::unix::fs::unlink(a3, a4);
          if ( !v22 )
            goto LABEL_38;
          goto LABEL_44;
        }
        std::path::Path::to_path_buf(&v49, a1, a2);
        std::path::Path::to_path_buf(v45, a3, a4);
        v56.m256i_i64[0] = v50;
        *(_OWORD *)dest = v49;
        *(_OWORD *)&v56.m256i_u64[1] = *(_OWORD *)v45;
        v56.m256i_i64[3] = v46;
        result = (_OWORD *)_rust_alloc(48LL, 8LL);
        if ( !result )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        goto LABEL_76;
      }
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)v45 = xmmword_F4AE0;
      *(_QWORD *)&v49 = v45;
      *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
      dest[0] = &unk_EF9E8;
      dest[1] = &dword_0 + 2;
      v56.m256i_i64[0] = (__int64)&v49;
      *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(dest);
      v45[0] = &dword_0 + 1;
      v45[1] = a3;
      v46 = a4;
      v47 = 1;
      *(_QWORD *)&v49 = v45;
      *((_QWORD *)&v49 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      dest[0] = &off_EFAC0;
      dest[1] = &dword_0 + 2;
      v56.m256i_i64[0] = (__int64)&v49;
      *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(dest);
      dest[0] = &off_EFAE0;
      dest[1] = &dword_0 + 1;
      v56.m256i_i64[0] = 8LL;
      *(_OWORD *)&v56.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(dest);
      v62 = &std::io::stdio::stderr::INSTANCE;
      v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v62);
      if ( v21 )
      {
        v57 = (__int128 *)v21;
        v45[0] = (void *)uucore::util_name();
        v45[1] = v40;
        *(_QWORD *)&v49 = v45;
        *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
        dest[0] = &unk_EF9E8;
        dest[1] = &dword_0 + 2;
        v56.m256i_i64[0] = (__int64)&v49;
        *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(dest);
        v45[0] = &v57;
        v45[1] = <std::io::error::Error as core::fmt::Display>::fmt;
        dest[0] = &unk_EFA88;
        dest[1] = &dword_0 + 2;
        v56.m256i_i64[0] = (__int64)v45;
        *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(dest);
        std::process::exit(1);
      }
      if ( !(unsigned __int8)uucore::read_yes() )
      {
        v56.m256i_i64[1] = 0x8000000000000001LL;
        result = (_OWORD *)_rust_alloc(48LL, 8LL);
        if ( !result )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v33 = *(_OWORD *)dest;
        v34 = *(_OWORD *)v56.m256i_i8;
        v35 = *(_OWORD *)&v56.m256i_u64[2];
        goto LABEL_77;
      }
      v22 = std::sys::pal::unix::fs::unlink(a3, a4);
      if ( !v22 )
        goto LABEL_38;
LABEL_44:
      core::ptr::drop_in_place<std::io::error::Error>(v22);
      v41 = v15;
LABEL_45:
      if ( !v48[48] )
      {
        v23 = src;
        v24 = v54;
        if ( v48[50] && (unsigned __int8)std::path::Path::is_symlink(src, v54) )
        {
          std::sys::pal::unix::fs::canonicalize(dest, v23, v24);
          v27 = dest[0];
          v28 = dest[1];
          if ( dest[0] == (void *)0x8000000000000000LL )
          {
            result = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                                 dest[1],
                                 &v52);
            goto LABEL_58;
          }
          v29 = v56.m256i_i64[0];
          v45[0] = dest[0];
          v45[1] = dest[1];
          v46 = v56.m256i_i64[0];
        }
        else
        {
          std::path::Path::to_path_buf(v45, v23, v24);
          v27 = v45[0];
          v28 = v45[1];
          v29 = v46;
        }
        v30 = std::sys::pal::unix::fs::link(v28, v29, a3, a4);
        if ( v27 )
          _rust_dealloc(v28, v27, 1LL);
        if ( !v30 )
          goto LABEL_59;
        dest[0] = &v52;
        dest[1] = a3;
        v56.m256i_i64[0] = a4;
        result = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                             v30,
                             dest);
LABEL_58:
        v15 = v41;
        goto LABEL_78;
      }
      v23 = src;
      v24 = v54;
      v25 = std::sys::pal::unix::fs::symlink(src, v54, a3, a4);
      if ( v25 )
      {
        dest[0] = (void *)0x8000000000000000LL;
        v56.m256i_i64[1] = v25;
        result = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !result )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v26 = *(_OWORD *)dest;
        result[1] = *(_OWORD *)v56.m256i_i8;
        *result = v26;
        goto LABEL_58;
      }
LABEL_59:
      if ( v48[53] )
      {
        *(_QWORD *)&v49 = 1LL;
        *((_QWORD *)&v49 + 1) = a3;
        v50 = a4;
        v51 = 1;
        v45[0] = &dword_0 + 1;
        v45[1] = v23;
        v46 = v24;
        v47 = 1;
        v57 = &v49;
        v58 = <os_display::Quoted as core::fmt::Display>::fmt;
        v59 = v45;
        v60 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest[0] = &unk_EFAF0;
        dest[1] = &dword_0 + 2;
        v56.m256i_i64[0] = (__int64)&v57;
        *(_OWORD *)&v56.m256i_u64[1] = 2uLL;
        std::io::stdio::_print(dest);
        v31 = v41;
        if ( v41 != 0x8000000000000000LL )
        {
          v45[0] = &dword_0 + 1;
          v45[1] = v44;
          v46 = v61;
          v47 = 1;
          *(_QWORD *)&v49 = v45;
          *((_QWORD *)&v49 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          dest[0] = &off_EFB20;
          dest[1] = &dword_0 + 2;
          v56.m256i_i64[0] = (__int64)&v49;
          *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
          std::io::stdio::_print(dest);
          v32 = 1;
          if ( v41 )
            _rust_dealloc(v44, v41, 1LL);
          goto LABEL_67;
        }
        dest[0] = &off_EFB10;
        dest[1] = &dword_0 + 1;
        v56.m256i_i64[0] = 8LL;
        *(_OWORD *)&v56.m256i_u64[1] = 0LL;
        std::io::stdio::_print(dest);
      }
      v32 = 0;
      v31 = v41;
LABEL_67:
      if ( v52 != 0x8000000000000000LL && v52 )
        _rust_dealloc(src, v52, 1LL);
      if ( !v32 && 2 * v31 )
        _rust_dealloc(v44, v31, 1LL);
      return 0LL;
  }
}
