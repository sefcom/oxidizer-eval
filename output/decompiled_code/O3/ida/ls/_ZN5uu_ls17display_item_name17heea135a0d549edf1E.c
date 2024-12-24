        __int64 a9)
{
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r15
  bool v13; // bl
  int v14; // r14d
  unsigned int v15; // eax
  _DWORD *v16; // rax
  __int64 v17; // r14
  __int128 v18; // rax
  __int64 slice; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 result; // rax
  __int128 *v31; // rcx
  __int128 v32; // [rsp+10h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-2E8h]
  __int128 v34; // [rsp+28h] [rbp-2E0h] BYREF
  __int128 *v35; // [rsp+38h] [rbp-2D0h]
  __int64 (__fastcall *v36)(); // [rsp+40h] [rbp-2C8h]
  __int128 *v37; // [rsp+48h] [rbp-2C0h]
  __int128 v38; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-2A8h]
  __int128 v40; // [rsp+70h] [rbp-298h]
  __int64 v41; // [rsp+80h] [rbp-288h]
  __int128 v42; // [rsp+90h] [rbp-278h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-268h]
  __int64 v44; // [rsp+A8h] [rbp-260h]
  __int64 v45; // [rsp+B0h] [rbp-258h]
  __int64 v46; // [rsp+B8h] [rbp-250h]
  __int128 v47; // [rsp+C0h] [rbp-248h] BYREF
  __int128 *v48; // [rsp+D0h] [rbp-238h]
  __int64 (__fastcall *v49)(); // [rsp+D8h] [rbp-230h]
  __int64 v50; // [rsp+E0h] [rbp-228h]
  __int128 v51; // [rsp+170h] [rbp-198h] BYREF
  __int64 v52; // [rsp+180h] [rbp-188h]
  __int128 v53; // [rsp+188h] [rbp-180h] BYREF
  __int64 v54; // [rsp+198h] [rbp-170h]
  __int128 v55; // [rsp+1A0h] [rbp-168h] BYREF
  __int128 v56; // [rsp+1B0h] [rbp-158h]
  __int128 *v57; // [rsp+1C0h] [rbp-148h]
  __int64 v58; // [rsp+1C8h] [rbp-140h]
  unsigned __int8 v59; // [rsp+2C8h] [rbp-40h]

  v37 = a6;
  v44 = a5;
  v46 = a4;
  v45 = a1;
  uucore::features::quoting_style::escape_name(&v32, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3 + 245);
  if ( *(_BYTE *)(a3 + 239) )
  {
    uu_ls::create_hyperlink((__int64)&v55, *((__int64 *)&v32 + 1), v33, a2);
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v33 = v56;
    v32 = v55;
  }
  if ( *(_BYTE *)(a8 + 29) != 2 )
  {
    uu_ls::colors::color_name(
      (__int64)&v55,
      *((__int64 *)&v32 + 1),
      v33,
      a2,
      (_QWORD *)a8,
      a7,
      0LL,
      *(_WORD *)(a3 + 228) != 0LL && v33 + a9 > (unsigned __int64)*(unsigned __int16 *)(a3 + 228));
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v33 = v56;
    v32 = v55;
  }
  v12 = *(_BYTE *)(a3 + 248);
  v13 = v12 != 1 && *((_QWORD *)v37 + 2) != 0LL;
  if ( v13 )
  {
    *(_QWORD *)&v56 = *((_QWORD *)v37 + 2);
    v55 = *v37;
    <alloc::string::String as core::ops::arith::Add<&str>>::add(&v47, &v55, *((_QWORD *)&v32 + 1), v33);
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v33 = (__int64)v48;
    v32 = v47;
  }
  v14 = *(unsigned __int8 *)(a3 + 244);
  if ( *(_BYTE *)(a3 + 244) )
  {
    v15 = uu_ls::classify_file(a2, a7);
    if ( v14 != 3 )
    {
      if ( v14 != 2 )
      {
        if ( v15 != 47 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( v15 == 42 )
        goto LABEL_15;
    }
    if ( v15 == 1114112 )
      goto LABEL_15;
LABEL_14:
    alloc::string::String::push(&v32, v15);
  }
LABEL_15:
  if ( v12 == 1 && uu_ls::PathData::file_type(a2, a7) )
  {
    v16 = uu_ls::PathData::file_type(a2, a7);
    if ( !v16 )
      core::option::unwrap_failed(&off_212BB8);
    if ( (*v16 & 0xF000) == 0xA000 && !*(_BYTE *)(a2 + 296) )
    {
      std::fs::read_link(&v51, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      if ( (_QWORD)v51 == 0x8000000000000000LL )
      {
        v17 = *((_QWORD *)&v51 + 1);
        *(_QWORD *)&v34 = *((_QWORD *)&v51 + 1);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v47, a2 + 24);
        v57 = v48;
        v56 = v47;
        *((_QWORD *)&v55 + 1) = v17;
        LOWORD(v55) = 2;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v18 = uucore::util_name();
        v42 = v18;
        *(_QWORD *)&v34 = &v42;
        *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
        v35 = &v55;
        v36 = <uu_ls::LsError as core::fmt::Display>::fmt;
        *(_QWORD *)&v47 = &unk_212798;
        *((_QWORD *)&v47 + 1) = 3LL;
        v50 = 0LL;
        v48 = &v34;
        v49 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v47);
        core::ptr::drop_in_place<uu_ls::LsError>(&v55);
        goto LABEL_34;
      }
      v39 = v52;
      v38 = v51;
      alloc::vec::Vec<T,A>::append_elements(&v32, asc_2423C, 4LL);
      if ( *(_BYTE *)(a8 + 29) == 2 )
      {
        uucore::features::quoting_style::escape_name(&v55, *((_QWORD *)&v38 + 1), v39, a3 + 245);
        slice = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v55 + 1), *((_QWORD *)&v55 + 1) + v56);
        alloc::vec::Vec<T,A>::append_elements(&v32, slice, v20);
        core::ptr::drop_in_place<alloc::string::String>(&v55);
LABEL_33:
        core::ptr::drop_in_place<std::path::PathBuf>(&v38);
        goto LABEL_34;
      }
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v55, &v38);
      v41 = v56;
      v40 = v55;
      if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v38 + 1), v39) )
      {
        v21 = std::path::Path::parent(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        if ( v21 )
        {
          *(_QWORD *)&v56 = v41;
          v55 = v40;
          std::path::Path::join(&v47, v21, v22, &v55);
          v40 = v47;
          v41 = (__int64)v48;
        }
      }
      v43 = v41;
      v42 = v40;
      *(_QWORD *)&v47 = 0LL;
      *(_QWORD *)&v34 = 0x8000000000000000LL;
      uu_ls::PathData::new(
        (__int64)&v55,
        (__int64)&v42,
        (__int64)&v47,
        &v34,
        *(_BYTE *)(a3 + 235),
        *(_BYTE *)(a3 + 242),
        0);
      if ( !uu_ls::PathData::get_metadata(a2, a7) )
      {
        uu_ls::get_metadata_with_deref_opt((__int64)&v47, (__int64)v57, v58, v59);
        if ( (_DWORD)v47 == 2 )
        {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v47);
          std::fs::read_link(&v47, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
          core::result::Result<T,E>::unwrap(&v34, &v47);
          std::sys::os_str::bytes::Slice::to_string_lossy(&v47, *((_QWORD *)&v34 + 1));
          v23 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v47 + 1), (char *)v48 + *((_QWORD *)&v47 + 1));
          alloc::vec::Vec<T,A>::append_elements(&v32, v23, v24);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v47);
          core::ptr::drop_in_place<std::path::PathBuf>(&v34);
LABEL_32:
          core::ptr::drop_in_place<uu_ls::PathData>(&v55);
          goto LABEL_33;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v47);
      }
      uucore::features::quoting_style::escape_name(&v47, *((_QWORD *)&v38 + 1), v39, a3 + 245);
      uu_ls::colors::color_name(
        (__int64)&v34,
        *((__int64 *)&v47 + 1),
        (__int64)v48,
        a2,
        (_QWORD *)a8,
        a7,
        (__int64)&v55,
        *(_WORD *)(a3 + 228) != 0LL && v33 + a9 > (unsigned __int64)*(unsigned __int16 *)(a3 + 228));
      v25 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v34 + 1), (char *)v35 + *((_QWORD *)&v34 + 1));
      alloc::vec::Vec<T,A>::append_elements(&v32, v25, v26);
      core::ptr::drop_in_place<alloc::string::String>(&v34);
      core::ptr::drop_in_place<alloc::string::String>(&v47);
      goto LABEL_32;
    }
  }
LABEL_34:
  if ( v46 == 1 && *(_BYTE *)(a3 + 235) )
  {
    if ( v12 == 4 )
      <alloc::string::String as core::clone::Clone>::clone(&v34, a2 + 48);
    else
      uu_ls::pad_left((__int64)&v34, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), v44, v10, v11);
    *(_QWORD *)&v47 = &v34;
    *((_QWORD *)&v47 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v48 = &v32;
    v49 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v55 = &unk_2127E8;
    *((_QWORD *)&v55 + 1) = 2LL;
    v57 = 0LL;
    *(_QWORD *)&v56 = &v47;
    *((_QWORD *)&v56 + 1) = 2LL;
    core::option::Option<T>::map_or_else(&v53, &v55, v27, &v32, v28, v29);
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v33 = v54;
    v32 = v53;
    core::ptr::drop_in_place<alloc::string::String>(&v34);
  }
  result = v33;
  v31 = (__int128 *)v45;
  *(_QWORD *)(v45 + 16) = v33;
  *v31 = v32;
  if ( !v13 )
    return core::ptr::drop_in_place<alloc::string::String>(v37);
  return result;
}
