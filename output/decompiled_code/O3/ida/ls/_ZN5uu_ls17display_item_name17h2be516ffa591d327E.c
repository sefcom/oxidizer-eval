        __int64 a9)
{
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r15
  bool v14; // bl
  int v15; // r14d
  unsigned int v16; // eax
  _DWORD *v17; // rax
  __int64 v18; // r14
  __int128 v19; // rax
  __int64 slice; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 result; // rax
  _OWORD *v32; // rcx
  __int128 v33; // [rsp+10h] [rbp-2F8h] BYREF
  __int128 *v34; // [rsp+20h] [rbp-2E8h]
  __int128 v35; // [rsp+28h] [rbp-2E0h] BYREF
  __int128 *v36; // [rsp+38h] [rbp-2D0h]
  __int64 (__fastcall *v37)(); // [rsp+40h] [rbp-2C8h]
  __int128 *v38; // [rsp+48h] [rbp-2C0h]
  __int128 v39; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-2A8h]
  __int128 v41; // [rsp+70h] [rbp-298h]
  __int128 *v42; // [rsp+80h] [rbp-288h]
  __int128 v43; // [rsp+90h] [rbp-278h] BYREF
  __int128 *v44; // [rsp+A0h] [rbp-268h]
  __int64 v45; // [rsp+A8h] [rbp-260h]
  __int64 v46; // [rsp+B0h] [rbp-258h]
  __int64 v47; // [rsp+B8h] [rbp-250h]
  __int128 v48; // [rsp+C0h] [rbp-248h] BYREF
  __int128 *v49; // [rsp+D0h] [rbp-238h]
  __int64 (__fastcall *v50)(); // [rsp+D8h] [rbp-230h]
  __int64 v51; // [rsp+E0h] [rbp-228h]
  __int128 v52; // [rsp+170h] [rbp-198h] BYREF
  __int64 v53; // [rsp+180h] [rbp-188h]
  __int128 v54; // [rsp+188h] [rbp-180h] BYREF
  __int128 *v55; // [rsp+198h] [rbp-170h]
  __int128 v56; // [rsp+1A0h] [rbp-168h] BYREF
  __int128 v57; // [rsp+1B0h] [rbp-158h]
  __int128 *v58; // [rsp+1C0h] [rbp-148h]
  __int64 v59; // [rsp+1C8h] [rbp-140h]
  unsigned __int8 v60; // [rsp+2C8h] [rbp-40h]

  v38 = a6;
  v45 = a5;
  v47 = a4;
  v46 = a1;
  uucore::features::quoting_style::escape_name(&v33, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3 + 245);
  if ( *(_BYTE *)(a3 + 239) )
  {
    uu_ls::create_hyperlink(&v56, *((_QWORD *)&v33 + 1), v34, a2);
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    v34 = (__int128 *)v57;
    v33 = v56;
  }
  if ( *(_BYTE *)(a8 + 29) != 2 )
  {
    uu_ls::colors::color_name(
      (unsigned int)&v56,
      DWORD2(v33),
      (_DWORD)v34,
      a2,
      a8,
      a7,
      0LL,
      *(_WORD *)(a3 + 228) != 0LL && (unsigned __int64)v34 + a9 > *(unsigned __int16 *)(a3 + 228));
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    v34 = (__int128 *)v57;
    v33 = v56;
  }
  v13 = *(_BYTE *)(a3 + 248);
  v14 = v13 != 1 && *((_QWORD *)v38 + 2) != 0LL;
  if ( v14 )
  {
    *(_QWORD *)&v57 = *((_QWORD *)v38 + 2);
    v56 = *v38;
    <alloc::string::String as core::ops::arith::Add<&str>>::add(&v48, &v56, *((_QWORD *)&v33 + 1), v34);
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    v34 = v49;
    v33 = v48;
  }
  v15 = *(unsigned __int8 *)(a3 + 244);
  if ( *(_BYTE *)(a3 + 244) )
  {
    v16 = (unsigned int)uu_ls::classify_file(a2, a7);
    if ( v15 != 3 )
    {
      if ( v15 != 2 )
      {
        if ( v16 != 47 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( v16 == 42 )
        goto LABEL_15;
    }
    if ( v16 == (_DWORD)&loc_110000 )
      goto LABEL_15;
LABEL_14:
    alloc::string::String::push(&v33, v16);
  }
LABEL_15:
  if ( v13 == 1 && uu_ls::PathData::file_type(a2, a7) )
  {
    v17 = uu_ls::PathData::file_type(a2, a7);
    if ( !v17 )
      core::option::unwrap_failed(&off_2129B8);
    if ( (*v17 & 0xF000) == 0xA000 && !*(_BYTE *)(a2 + 296) )
    {
      std::fs::read_link(&v52, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      if ( (_QWORD)v52 == 0x8000000000000000LL )
      {
        v18 = *((_QWORD *)&v52 + 1);
        *(_QWORD *)&v35 = *((_QWORD *)&v52 + 1);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v48, a2 + 24);
        v58 = v49;
        v57 = v48;
        *((_QWORD *)&v56 + 1) = v18;
        LOWORD(v56) = 2;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v19 = uucore::util_name();
        v43 = v19;
        *(_QWORD *)&v35 = &v43;
        *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
        v36 = &v56;
        v37 = <uu_ls::LsError as core::fmt::Display>::fmt;
        *(_QWORD *)&v48 = &unk_212588;
        *((_QWORD *)&v48 + 1) = 3LL;
        v51 = 0LL;
        v49 = &v35;
        v50 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v48);
        core::ptr::drop_in_place<uu_ls::LsError>(&v56);
        goto LABEL_34;
      }
      v40 = v53;
      v39 = v52;
      alloc::vec::Vec<T,A>::append_elements(&v33, asc_23FD0, 4LL);
      if ( *(_BYTE *)(a8 + 29) == 2 )
      {
        uucore::features::quoting_style::escape_name(&v56, *((_QWORD *)&v39 + 1), v40, a3 + 245);
        slice = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v56 + 1), *((_QWORD *)&v56 + 1) + v57);
        alloc::vec::Vec<T,A>::append_elements(&v33, slice, v21);
        core::ptr::drop_in_place<alloc::string::String>(&v56);
LABEL_33:
        core::ptr::drop_in_place<std::path::PathBuf>(&v39);
        goto LABEL_34;
      }
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v56, &v39);
      v42 = (__int128 *)v57;
      v41 = v56;
      if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v39 + 1), v40) )
      {
        v22 = std::path::Path::parent(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        if ( v22 )
        {
          *(_QWORD *)&v57 = v42;
          v56 = v41;
          std::path::Path::join(&v48, v22, v23, &v56);
          v41 = v48;
          v42 = v49;
        }
      }
      v44 = v42;
      v43 = v41;
      *(_QWORD *)&v48 = 0LL;
      *(_QWORD *)&v35 = 0x8000000000000000LL;
      uu_ls::PathData::new(
        (__int64)&v56,
        (__int64)&v43,
        (__int64)&v48,
        &v35,
        *(_BYTE *)(a3 + 235),
        *(_BYTE *)(a3 + 242),
        0);
      if ( !uu_ls::PathData::get_metadata(a2, a7) )
      {
        uu_ls::get_metadata_with_deref_opt((__int64)&v48, (__int64)v58, v59, v60);
        if ( (_DWORD)v48 == 2 )
        {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
          std::fs::read_link(&v48, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
          core::result::Result<T,E>::unwrap(&v35, &v48);
          std::sys::os_str::bytes::Slice::to_string_lossy(&v48, *((_QWORD *)&v35 + 1));
          v24 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v48 + 1), (char *)v49 + *((_QWORD *)&v48 + 1));
          alloc::vec::Vec<T,A>::append_elements(&v33, v24, v25);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v48);
          core::ptr::drop_in_place<std::path::PathBuf>(&v35);
LABEL_32:
          core::ptr::drop_in_place<uu_ls::PathData>(&v56);
          goto LABEL_33;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
      }
      uucore::features::quoting_style::escape_name(&v48, *((_QWORD *)&v39 + 1), v40, a3 + 245);
      uu_ls::colors::color_name(
        (unsigned int)&v35,
        DWORD2(v48),
        (_DWORD)v49,
        a2,
        a8,
        a7,
        (__int64)&v56,
        *(_WORD *)(a3 + 228) != 0LL && (unsigned __int64)v34 + a9 > *(unsigned __int16 *)(a3 + 228));
      v26 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v35 + 1), (char *)v36 + *((_QWORD *)&v35 + 1));
      alloc::vec::Vec<T,A>::append_elements(&v33, v26, v27);
      core::ptr::drop_in_place<alloc::string::String>(&v35);
      core::ptr::drop_in_place<alloc::string::String>(&v48);
      goto LABEL_32;
    }
  }
LABEL_34:
  if ( v47 == 1 && *(_BYTE *)(a3 + 235) )
  {
    if ( v13 == 4 )
      <alloc::string::String as core::clone::Clone>::clone(&v35, a2 + 48);
    else
      uu_ls::pad_left((__int64)&v35, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), v45, v11, v12);
    *(_QWORD *)&v48 = &v35;
    *((_QWORD *)&v48 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v49 = &v33;
    v50 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &unk_2125E8;
    *((_QWORD *)&v56 + 1) = 2LL;
    v58 = 0LL;
    *(_QWORD *)&v57 = &v48;
    *((_QWORD *)&v57 + 1) = 2LL;
    core::option::Option<T>::map_or_else(&v54, &v56, v28, &v33, v29, v30);
    core::ptr::drop_in_place<alloc::string::String>(&v33);
    v34 = v55;
    v33 = v54;
    core::ptr::drop_in_place<alloc::string::String>(&v35);
  }
  result = (__int64)v34;
  v32 = (_OWORD *)v46;
  *(_QWORD *)(v46 + 16) = v34;
  *v32 = v33;
  if ( !v14 )
    return core::ptr::drop_in_place<alloc::string::String>(v38);
  return result;
}
