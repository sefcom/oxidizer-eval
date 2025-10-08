__int64 __fastcall uu_ls::display_item_name(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int128 *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  char v12; // bl
  int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // r15
  __int128 v19; // rax
  __int128 v20; // kr00_16
  __int128 **v21; // rbx
  _OWORD *v22; // rcx
  __int64 result; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 metadata; // rax
  __int64 v28; // r15
  __int64 v29; // rsi
  unsigned __int8 v30; // al
  char v31; // [rsp+Ch] [rbp-2FCh]
  __int128 v32; // [rsp+10h] [rbp-2F8h] BYREF
  __int128 **v33; // [rsp+20h] [rbp-2E8h]
  __int128 *v34; // [rsp+28h] [rbp-2E0h]
  __int128 *v35; // [rsp+30h] [rbp-2D8h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+38h] [rbp-2D0h]
  _BYTE *v37; // [rsp+40h] [rbp-2C8h]
  __int64 (__fastcall *v38)(); // [rsp+48h] [rbp-2C0h]
  __int128 v39; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-2A8h]
  __int64 v41; // [rsp+70h] [rbp-298h]
  _QWORD *v42; // [rsp+78h] [rbp-290h]
  __int128 v43; // [rsp+80h] [rbp-288h] BYREF
  __int128 **v44; // [rsp+90h] [rbp-278h]
  __int64 v45; // [rsp+A0h] [rbp-268h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-260h]
  __int64 v47; // [rsp+B0h] [rbp-258h]
  __int64 v48; // [rsp+B8h] [rbp-250h]
  __int64 v49; // [rsp+C0h] [rbp-248h]
  __int128 v50; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-230h]
  _BYTE v52[24]; // [rsp+E0h] [rbp-228h] BYREF
  __int128 **v53; // [rsp+F8h] [rbp-210h]
  __int64 v54; // [rsp+100h] [rbp-208h]
  char v55; // [rsp+108h] [rbp-200h]
  __int128 v56; // [rsp+190h] [rbp-178h] BYREF
  __int128 **v57; // [rsp+1A0h] [rbp-168h]
  __int64 v58; // [rsp+1A8h] [rbp-160h]
  __int64 v59; // [rsp+1B0h] [rbp-158h]
  __int64 v60; // [rsp+1B8h] [rbp-150h]
  unsigned __int8 v61; // [rsp+2B8h] [rbp-50h]
  __int128 v62; // [rsp+2C0h] [rbp-48h] BYREF
  __int128 **v63; // [rsp+2D0h] [rbp-38h]

  v34 = a6;
  v46 = a5;
  v47 = a4;
  uucore::features::quoting_style::escape_name(&v32, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3 + 252);
  v48 = a1;
  if ( a3[247] )
  {
    v10 = *((_QWORD *)&v32 + 1);
    uu_ls::create_hyperlink(&v56, *((_QWORD *)&v32 + 1), v33, a2);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v32, v10);
    v33 = v57;
    v32 = v56;
  }
  v42 = (_QWORD *)(a7 + 104);
  if ( *(_BYTE *)(a7 + 133) != 2 )
  {
    v11 = uu_ls::display_item_name::{{closure}}(a3, a8, v33);
    uu_ls::colors::color_name((__int64)&v56, (__int64)&v32, a2, v42, a7, 0LL, v11);
    v33 = v57;
    v32 = v56;
  }
  v12 = a3[256];
  v31 = 1;
  if ( v12 != 1 && *((_QWORD *)v34 + 2) )
  {
    v57 = v33;
    v56 = v32;
    v32 = *v34;
    v33 = (__int128 **)*((_QWORD *)v34 + 2);
    std::ffi::os_str::OsString::push(&v32, &v56);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v56, *((_QWORD *)&v56 + 1));
    v31 = 0;
  }
  v13 = (unsigned __int8)a3[255];
  if ( a3[255] )
  {
    v14 = (unsigned int)uu_ls::classify_file(a2, a7);
    if ( v13 == 1 )
    {
      if ( v14 != 47 )
        goto LABEL_13;
    }
    else if ( v13 == 2 && v14 == 42 || v14 == (_DWORD)&unk_110000 )
    {
      goto LABEL_13;
    }
    LODWORD(v35) = 0;
    v15 = core::char::methods::encode_utf8_raw(v14, &v35);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v56, v15, v16);
    *(_QWORD *)&v52[16] = v57;
    *(_OWORD *)v52 = v56;
    std::ffi::os_str::OsString::push(&v32, *((_QWORD *)&v56 + 1));
    core::ptr::drop_in_place<alloc::string::String>(v52);
    if ( v12 != 1 )
      goto LABEL_23;
    goto LABEL_17;
  }
LABEL_13:
  if ( v12 != 1 )
    goto LABEL_23;
LABEL_17:
  if ( uu_ls::PathData::file_type(a2, a7) )
  {
    v17 = (_DWORD *)uu_ls::PathData::file_type(a2, a7);
    if ( !v17 )
      core::option::unwrap_failed(&off_286D40);
    if ( (*v17 & 0xF000) == 0xA000 && *(_BYTE *)(a2 + 296) != 1 )
    {
      std::fs::read_link(&v50, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      if ( __OFSUB__(0LL, (_QWORD)v50) )
      {
        v18 = *((_QWORD *)&v50 + 1);
        v49 = *((_QWORD *)&v50 + 1);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v56, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        v53 = v57;
        *(_OWORD *)&v52[8] = v56;
        v54 = v18;
        v55 = 0;
        *(_QWORD *)v52 = 0x8000000000000002LL;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v19 = uucore::util_name();
        v39 = v19;
        v35 = &v39;
        v36 = <&T as core::fmt::Display>::fmt;
        v37 = v52;
        v38 = <uu_ls::LsError as core::fmt::Display>::fmt;
        *(_QWORD *)&v56 = &unk_286B10;
        *((_QWORD *)&v56 + 1) = 3LL;
        v59 = 0LL;
        v57 = &v35;
        v58 = 2LL;
        std::io::stdio::_eprint(&v56);
        core::ptr::drop_in_place<uu_ls::LsError>(v52);
        goto LABEL_23;
      }
      v40 = v51;
      v39 = v50;
      std::ffi::os_str::OsString::push(&v32, asc_CFE48, 4LL);
      if ( *(_BYTE *)(a7 + 133) == 2 )
      {
        uucore::features::quoting_style::escape_name(&v56, *((_QWORD *)&v39 + 1), v40, a3 + 252);
        std::ffi::os_str::OsString::push(&v32, &v56);
        goto LABEL_43;
      }
      v24 = v40;
      v41 = *((_QWORD *)&v39 + 1);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v56, *((_QWORD *)&v39 + 1), v40);
      v44 = v57;
      v43 = v56;
      v45 = v24;
      if ( !(unsigned __int8)std::path::Path::is_absolute(v41, v24) )
      {
        v25 = std::path::Path::parent(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        if ( v25 )
        {
          std::path::Path::join(&v56, v25, v26, &v43);
          v44 = v57;
          v43 = v56;
        }
      }
      *(_QWORD *)v52 = 0LL;
      v35 = (__int128 *)0x8000000000000000LL;
      uu_ls::PathData::new((__int64)&v56, (__int64)&v43, v52, (__int64 *)&v35, a3[243], a3[250], 0);
      metadata = uu_ls::PathData::get_metadata(a2, a7);
      v28 = v41;
      if ( !metadata )
      {
        v29 = v59;
        uu_ls::get_metadata_with_deref_opt(v52, v59, v60, v61);
        if ( *(_DWORD *)v52 == 2 )
        {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v52, v29);
          std::fs::read_link(v52, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
          core::result::Result<T,E>::unwrap(&v35, v52);
          std::ffi::os_str::OsString::push(&v32, &v35);
LABEL_42:
          core::ptr::drop_in_place<uu_ls::PathData>(&v56);
LABEL_43:
          core::ptr::drop_in_place<std::path::PathBuf>(&v39);
          if ( !a3[243] )
            goto LABEL_29;
          goto LABEL_24;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v52, v29);
      }
      uucore::features::quoting_style::escape_name(v52, v28, v45, a3 + 252);
      v30 = uu_ls::display_item_name::{{closure}}(a3, a8, v33);
      uu_ls::colors::color_name((__int64)&v35, (__int64)v52, a2, v42, a7, (__int64)&v56, v30);
      std::ffi::os_str::OsString::push(&v32, &v35);
      goto LABEL_42;
    }
  }
LABEL_23:
  if ( !a3[243] )
    goto LABEL_29;
LABEL_24:
  if ( (v47 & 1) != 0 )
  {
    if ( v12 == 4 )
      <alloc::string::String as core::clone::Clone>::clone(v52, a2 + 48);
    else
      uu_ls::pad_left((__int64)v52, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), v46);
    v20 = v32;
    v21 = v33;
    v35 = (__int128 *)v52;
    v36 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &unk_286678;
    *((_QWORD *)&v56 + 1) = 2LL;
    v59 = 0LL;
    v57 = &v35;
    v58 = 1LL;
    core::option::Option<T>::map_or_else(&v62, &v56);
    v32 = v62;
    v33 = v63;
    v56 = v20;
    v57 = v21;
    std::ffi::os_str::OsString::push(&v32, &v56);
    core::ptr::drop_in_place<alloc::string::String>(v52);
  }
LABEL_29:
  v22 = (_OWORD *)v48;
  *(_QWORD *)(v48 + 16) = v33;
  *v22 = v32;
  result = core::ptr::drop_in_place<core::cell::lazy::LazyCell<usize,alloc::boxed::Box<dyn core::ops::function::FnOnce<()>+Output = usize>>>(a8);
  if ( v31 )
    return core::ptr::drop_in_place<alloc::string::String>(v34);
  return result;
}