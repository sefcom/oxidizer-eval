__int64 __fastcall uu_mv::handle_two_paths(
        char **a1,
        __int128 *a2,
        __int64 (__fastcall *a3)(),
        __int128 *a4,
        __int64 a5)
{
  char v8; // r13
  __int64 v9; // rax
  int v11; // r14d
  __int128 *v12; // r12
  __int64 v13; // rbp
  char v14; // al
  __int128 *v15; // r12
  char is_dir; // r13
  unsigned __int8 v17; // bl
  __int64 v18; // r15
  __int64 v19; // rax
  char v20; // al
  char **v21; // r15
  int v22; // r14d
  __int64 v23; // r12
  __int128 *v24; // r14
  __int128 v25; // rax
  __int64 v26; // rax
  char yes; // al
  __int64 v28; // rax
  char **v29; // r15
  __int64 v30; // rbx
  __int128 v31; // rax
  __int64 (__fastcall *v32)(); // [rsp+0h] [rbp-1B8h]
  _BYTE *v33; // [rsp+8h] [rbp-1B0h]
  __int128 v34; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 *v35; // [rsp+20h] [rbp-198h]
  char v36; // [rsp+28h] [rbp-190h]
  __int128 v37; // [rsp+50h] [rbp-168h] BYREF
  __int128 *v38; // [rsp+60h] [rbp-158h]
  char v39; // [rsp+68h] [rbp-150h]
  char **v40; // [rsp+70h] [rbp-148h]
  __int128 *v41; // [rsp+78h] [rbp-140h]
  __int128 v42; // [rsp+80h] [rbp-138h] BYREF
  __int64 v43; // [rsp+90h] [rbp-128h]
  __int128 v44; // [rsp+98h] [rbp-120h] BYREF
  __int128 *v45; // [rsp+A8h] [rbp-110h]
  __int64 (__fastcall *v46)(); // [rsp+B0h] [rbp-108h]
  __int128 *v47; // [rsp+B8h] [rbp-100h]
  char **v48; // [rsp+C0h] [rbp-F8h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v50[24]; // [rsp+D8h] [rbp-E0h]
  __int128 *v51; // [rsp+F0h] [rbp-C8h]
  _BYTE v52[72]; // [rsp+170h] [rbp-48h] BYREF

  v8 = *(_BYTE *)(a5 + 54);
  if ( v8 == 1
    && (unsigned __int8)uucore::features::backup_control::source_is_target_backup(
                          a1,
                          a2,
                          a3,
                          a4,
                          *(_QWORD *)(a5 + 8),
                          *(_QWORD *)(a5 + 16)) )
  {
    *(_QWORD *)&v37 = 1LL;
    *((_QWORD *)&v37 + 1) = a3;
    v38 = a4;
    v39 = 1;
    *(_QWORD *)&v34 = 1LL;
    *((_QWORD *)&v34 + 1) = a1;
    v35 = a2;
    v36 = 1;
    *(_QWORD *)&v44 = &v37;
    *((_QWORD *)&v44 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v45 = &v34;
    v46 = <os_display::Quoted as core::fmt::Display>::fmt;
    v48 = &off_187DE0;
    *(_QWORD *)&v49 = 3LL;
    *(_QWORD *)&v50[8] = 0LL;
    *((_QWORD *)&v49 + 1) = &v44;
    *(_QWORD *)v50 = 2LL;
    core::option::Option<T>::map_or_else(v52, &v48);
    v9 = std::io::error::Error::new(0LL, v52);
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
  }
  v32 = a3;
  v41 = a4;
  std::fs::symlink_metadata(&v48, a1, a2);
  v11 = (int)v48;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
  if ( v11 == 2 )
  {
    *(_QWORD *)&v34 = 1LL;
    *((_QWORD *)&v34 + 1) = a1;
    v35 = a2;
    v36 = 1;
    if ( (unsigned __int8)uucore::features::fs::path_ends_with_terminator(a1, a2) )
    {
      <T as alloc::string::ToString>::to_string(&v49, &v34);
      v48 = (char **)(&dword_0 + 1);
    }
    else
    {
      <T as alloc::string::ToString>::to_string(&v49, &v34);
      v48 = 0LL;
    }
    return alloc::boxed::Box<T>::new(&v48);
  }
  v33 = (_BYTE *)a5;
  v47 = a2;
  std::path::Path::components(&v34, a1, a2);
  v12 = v41;
  std::path::Path::components(&v48, v32, v41);
  v13 = (__int64)v47;
  v14 = <std::path::Components as core::cmp::PartialEq>::eq(&v34, &v48);
  v40 = a1;
  if ( v14 || (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a1, v13, v32, v12) )
  {
    if ( v8 )
      goto LABEL_11;
LABEL_23:
    v21 = v40;
    std::path::Path::components(&v34, v40, v13);
    std::path::Path::components(&v48, asc_26091, 1LL);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v34, &v48)
      || (unsigned __int8)std::path::Path::ends_with(v21, v13, asc_26B24, 2LL)
      || (unsigned __int8)std::path::Path::is_file(v21, v13) )
    {
      *(_QWORD *)&v37 = 1LL;
      *((_QWORD *)&v37 + 1) = v21;
      v38 = (__int128 *)v13;
      v39 = 1;
      <T as alloc::string::ToString>::to_string(&v42, &v37);
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = v32;
      v35 = v41;
      v36 = 1;
      <T as alloc::string::ToString>::to_string(&v44, &v34);
      *(_QWORD *)v50 = v43;
      v49 = v42;
      *(_OWORD *)&v50[8] = v44;
      v51 = v45;
      v48 = (char **)(&dword_0 + 2);
    }
    else
    {
      *(_QWORD *)&v34 = v21;
      *((_QWORD *)&v34 + 1) = v13;
      <T as alloc::string::ToString>::to_string(&v49, &v34);
      v48 = (char **)(&dword_0 + 3);
    }
    return alloc::boxed::Box<T>::new(&v48);
  }
  v20 = uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(a1, v13, v32, v12);
  if ( !v8 && v20 )
    goto LABEL_23;
LABEL_11:
  v15 = v41;
  is_dir = std::path::Path::is_dir(v32, v41);
  v17 = std::path::Path::is_dir(v40, v13);
  if ( !(unsigned __int8)uucore::features::fs::path_ends_with_terminator(v32, v15) )
  {
    if ( !is_dir )
      goto LABEL_27;
LABEL_18:
    if ( v33[48] )
    {
      v18 = (__int64)v40;
      if ( (unsigned __int8)std::path::Path::is_dir(v40, v13) )
      {
        v19 = uu_mv::rename(v18, v13, v32, v15, (__int64)v33, 0LL);
        v48 = (char **)v18;
        *(_QWORD *)&v49 = v13;
        *((_QWORD *)&v49 + 1) = v32;
        *(_QWORD *)v50 = v15;
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                 v19,
                 &v48);
      }
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = v32;
      v35 = v15;
      v36 = 1;
      <T as alloc::string::ToString>::to_string(&v49, &v34);
      v48 = (char **)&byte_5;
    }
    else
    {
      v29 = v40;
      if ( !(unsigned __int8)std::path::Path::starts_with(v32, v15, v40, v13) )
      {
        std::path::Path::to_path_buf(&v48, v29, v13);
        v30 = uu_mv::move_files_into_dir((__int64)&v48, 1uLL, (__int64)v32, v15, (__int64)v33);
        core::ptr::drop_in_place<[std::path::PathBuf; 1]>(&v48);
        return v30;
      }
      *(_QWORD *)&v42 = v29;
      *((_QWORD *)&v42 + 1) = v13;
      <T as alloc::string::ToString>::to_string(&v37, &v42);
      *(_QWORD *)&v44 = v32;
      *((_QWORD *)&v44 + 1) = v15;
      <T as alloc::string::ToString>::to_string(&v34, &v44);
      *(_QWORD *)v50 = v38;
      v49 = v37;
      *(_OWORD *)&v50[8] = v34;
      v51 = v35;
      v48 = (char **)&byte_4;
    }
    return alloc::boxed::Box<T>::new(&v48);
  }
  if ( is_dir )
    goto LABEL_18;
  if ( !((v33[48] != 0) | v17) && v33[55] != 2 )
  {
    *(_QWORD *)&v34 = 1LL;
    *((_QWORD *)&v34 + 1) = v32;
    v35 = v15;
    v36 = 1;
    <T as alloc::string::ToString>::to_string(&v49, &v34);
    v48 = (char **)byte_9;
    return alloc::boxed::Box<T>::new(&v48);
  }
LABEL_27:
  std::fs::metadata(&v48, v32, v15);
  v22 = (int)v48;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
  v23 = (__int64)v40;
  if ( v22 == 2 || !(unsigned __int8)std::path::Path::is_dir(v40, v13) )
  {
    v28 = uu_mv::rename(v23, v13, v32, v41, (__int64)v33, 0LL);
    if ( v28 )
      return uu_mv::handle_two_paths::{{closure}}(v28);
    else
      return 0LL;
  }
  else
  {
    if ( v33[53] )
    {
      v24 = v41;
      if ( v33[53] != 2 )
      {
        *(_QWORD *)&v25 = uucore::util_name();
        v34 = v25;
        *(_QWORD *)&v37 = &v34;
        *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
        v48 = (char **)&unk_187E10;
        *(_QWORD *)&v49 = 2LL;
        *(_QWORD *)&v50[8] = 0LL;
        *((_QWORD *)&v49 + 1) = &v37;
        *(_QWORD *)v50 = 1LL;
        std::io::stdio::_eprint(&v48);
        *(_QWORD *)&v34 = 1LL;
        *((_QWORD *)&v34 + 1) = v32;
        v35 = v24;
        v36 = 1;
        *(_QWORD *)&v37 = &v34;
        *((_QWORD *)&v37 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v48 = &off_187E30;
        *(_QWORD *)&v49 = 2LL;
        *(_QWORD *)&v50[8] = 0LL;
        *((_QWORD *)&v49 + 1) = &v37;
        *(_QWORD *)v50 = 1LL;
        std::io::stdio::_eprint(&v48);
        v48 = (char **)&off_187E50;
        *(_QWORD *)&v49 = 1LL;
        *((_QWORD *)&v49 + 1) = 8LL;
        *(_OWORD *)v50 = 0LL;
        std::io::stdio::_eprint(&v48);
        *(_QWORD *)&v42 = &std::io::stdio::stderr::INSTANCE;
        v26 = <std::io::stdio::Stderr as std::io::Write>::flush(&v42);
        if ( v26 )
        {
          *(_QWORD *)&v44 = v26;
          *(_QWORD *)&v31 = uucore::util_name();
          v34 = v31;
          *(_QWORD *)&v37 = &v34;
          *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
          v48 = (char **)&unk_187E10;
          *(_QWORD *)&v49 = 2LL;
          *(_QWORD *)&v50[8] = 0LL;
          *((_QWORD *)&v49 + 1) = &v37;
          *(_QWORD *)v50 = 1LL;
          std::io::stdio::_eprint(&v48);
          *(_QWORD *)&v34 = &v44;
          *((_QWORD *)&v34 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          v48 = (char **)&unk_187E60;
          *(_QWORD *)&v49 = 2LL;
          *(_QWORD *)&v50[8] = 0LL;
          *((_QWORD *)&v49 + 1) = &v34;
          *(_QWORD *)v50 = 1LL;
          std::io::stdio::_eprint(&v48);
          std::process::exit(1);
        }
        yes = uucore::read_yes();
        v13 = (__int64)v47;
        if ( !yes )
        {
          v9 = std::io::error::Error::new(39LL, 1LL, 0LL);
          return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        }
      }
      *(_QWORD *)&v37 = 1LL;
      *((_QWORD *)&v37 + 1) = v23;
      v38 = (__int128 *)v13;
      v39 = 1;
      <T as alloc::string::ToString>::to_string(&v42, &v37);
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = v32;
      v35 = v24;
      v36 = 1;
      <T as alloc::string::ToString>::to_string(&v44, &v34);
      *(_QWORD *)v50 = v43;
      v49 = v42;
      *(_OWORD *)&v50[8] = v44;
      v51 = v45;
      v48 = (char **)&byte_6;
      return alloc::boxed::Box<T>::new(&v48);
    }
    return 0LL;
  }
}
