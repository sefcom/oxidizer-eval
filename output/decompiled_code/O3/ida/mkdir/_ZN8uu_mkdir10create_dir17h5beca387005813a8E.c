_OWORD *__fastcall uu_mkdir::create_dir(void *a1, size_t a2, char a3, unsigned __int8 a4, char a5, unsigned int a6)
{
  __int64 v10; // r12
  size_t v11; // rbp
  size_t v12; // r12
  void *v13; // r15
  __int64 (__fastcall *v14)(); // r13
  _OWORD *result; // rax
  __int128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r12
  int v22; // r12d
  __mode_t v23; // eax
  __int64 v24; // rax
  __int128 v25; // xmm0
  unsigned __int8 v26; // [rsp+Ch] [rbp-21Ch]
  char v27; // [rsp+1Ch] [rbp-20Ch]
  unsigned int v28; // [rsp+20h] [rbp-208h]
  void *s2; // [rsp+28h] [rbp-200h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+30h] [rbp-1F8h]
  _BYTE v31[17]; // [rsp+38h] [rbp-1F0h]
  _BYTE v32[23]; // [rsp+49h] [rbp-1DFh]
  __int16 v33; // [rsp+60h] [rbp-1C8h]
  char v34; // [rsp+62h] [rbp-1C6h]
  __int128 v35; // [rsp+68h] [rbp-1C0h] BYREF
  _BYTE v36[17]; // [rsp+78h] [rbp-1B0h]
  _BYTE v37[23]; // [rsp+89h] [rbp-19Fh]
  __int16 v38; // [rsp+A0h] [rbp-188h]
  char v39; // [rsp+A2h] [rbp-186h]
  size_t n[2]; // [rsp+A8h] [rbp-180h] BYREF
  unsigned __int8 v41; // [rsp+B8h] [rbp-170h]
  __int128 v42; // [rsp+B9h] [rbp-16Fh]
  _BYTE v43[23]; // [rsp+C9h] [rbp-15Fh]
  __int16 v44; // [rsp+E0h] [rbp-148h]
  char v45; // [rsp+E2h] [rbp-146h]
  __int64 v46; // [rsp+E8h] [rbp-140h]
  __int128 dest; // [rsp+F0h] [rbp-138h] BYREF
  _BYTE v48[40]; // [rsp+100h] [rbp-128h]
  __int16 v49; // [rsp+128h] [rbp-100h]
  char v50; // [rsp+12Ah] [rbp-FEh]
  __int128 v51; // [rsp+1A0h] [rbp-88h]
  _BYTE v52[23]; // [rsp+1B0h] [rbp-78h]
  __int128 v53; // [rsp+1D0h] [rbp-58h]
  _BYTE v54[23]; // [rsp+1E0h] [rbp-48h]

  std::sys::pal::unix::fs::stat(&dest);
  v10 = dest;
  if ( (_QWORD)dest == 2LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&dest + 1));
  }
  else if ( !a3 )
  {
    s2 = a1;
    v30 = (__int64 (__fastcall *)())a2;
    n[0] = (size_t)&s2;
    n[1] = (size_t)<std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_E5118;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v48[16] = 0LL;
    *(_QWORD *)v48 = n;
    *(_QWORD *)&v48[8] = 1LL;
    alloc::fmt::format::format_inner(&v35, &dest);
    *(_DWORD *)&v36[8] = 1;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v16 = v35;
    result[1] = *(_OWORD *)v36;
    *result = v16;
    return result;
  }
  v26 = a4;
  v46 = v10;
  v27 = a5;
  v28 = a6;
  std::path::Path::components(n, a1, a2);
  std::path::Path::components(&s2, 1LL, 0LL);
  v11 = n[0];
  v12 = n[1];
  v13 = s2;
  v14 = v30;
  if ( (__int64 (__fastcall *)())n[1] == v30 && (_BYTE)v44 == (_BYTE)v33 && HIBYTE(v44) == 2 && HIBYTE(v33) == 2 )
  {
    if ( v41 == 6 )
    {
      if ( v31[0] < 3u )
        goto LABEL_18;
LABEL_17:
      if ( !bcmp((const void *)n[0], s2, n[1]) )
        return 0LL;
      goto LABEL_18;
    }
    if ( v31[0] != 6 )
    {
      if ( v41 < 3u != v31[0] < 3u )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( v41 >= 3u )
      goto LABEL_17;
  }
LABEL_18:
  if ( v41 != 6 )
  {
    *(_QWORD *)&v52[15] = *(_QWORD *)&v43[15];
    *(_OWORD *)v52 = *(_OWORD *)v43;
    v51 = v42;
  }
  *(_QWORD *)&v35 = v11;
  *((_QWORD *)&v35 + 1) = v12;
  v36[0] = v41;
  *(_OWORD *)&v36[1] = v51;
  *(_OWORD *)v37 = *(_OWORD *)v52;
  *(_QWORD *)&v37[15] = *(_QWORD *)&v52[15];
  v38 = v44;
  v39 = v45;
  if ( v31[0] != 6 )
  {
    *(_QWORD *)&v54[15] = *(_QWORD *)&v32[15];
    *(_OWORD *)v54 = *(_OWORD *)v32;
    v53 = *(_OWORD *)&v31[1];
  }
  *(_QWORD *)&dest = v13;
  *((_QWORD *)&dest + 1) = v14;
  v48[0] = v31[0];
  *(_OWORD *)&v48[1] = v53;
  *(_OWORD *)&v48[17] = *(_OWORD *)v54;
  *(_QWORD *)&v48[32] = *(_QWORD *)&v54[15];
  v49 = v33;
  v50 = v34;
  if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(&v35, &dest) )
    return 0LL;
  if ( a3 )
  {
    v18 = std::path::Path::parent(a1, a2);
    if ( v18 )
    {
      result = (_OWORD *)uu_mkdir::create_dir(v18, v19, 1LL, v26, 1LL, v28);
      if ( result )
        return result;
    }
    else
    {
      v17 = _rust_no_alloc_shim_is_unstable;
    }
  }
  LODWORD(dest) = 511;
  BYTE4(dest) = 0;
  v20 = std::fs::DirBuilder::_create(&dest, a1, a2, v17);
  if ( v20 )
  {
    v21 = v20;
    if ( (unsigned __int8)std::path::Path::is_dir(a1, a2) )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v21);
      return 0LL;
    }
    *(_QWORD *)&dest = 0x8000000000000000LL;
    *(_QWORD *)&v48[8] = v21;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v25 = dest;
    result[1] = *(_OWORD *)v48;
    *result = v25;
  }
  else
  {
    v22 = v46;
    if ( v26 )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)n = xmmword_E9FB0;
      *(_QWORD *)&v35 = 1LL;
      *((_QWORD *)&v35 + 1) = a1;
      *(_QWORD *)v36 = a2;
      v36[8] = 1;
      s2 = n;
      v30 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v31 = &v35;
      *(_QWORD *)&v31[8] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_E51E0;
      *((_QWORD *)&dest + 1) = 3LL;
      *(_QWORD *)&v48[16] = 0LL;
      *(_QWORD *)v48 = &s2;
      *(_QWORD *)&v48[8] = 2LL;
      std::io::stdio::_print(&dest);
    }
    if ( v22 == 2 )
    {
      uucore::features::fsxattr::get_acl_perm_bits_from_xattr(a1, a2);
      if ( v27 )
      {
        v23 = umask(0);
        umask(v23);
      }
    }
    v24 = std::sys::pal::unix::fs::set_perm(a1, a2);
    if ( v24 )
      return (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                         v24,
                         a1,
                         a2);
    else
      return 0LL;
  }
  return result;
}
