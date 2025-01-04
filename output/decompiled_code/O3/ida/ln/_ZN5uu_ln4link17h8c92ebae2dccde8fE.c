__int64 __fastcall uu_ln::link(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // bp
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int128 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // bl
  __int128 v22; // rax
  char v23; // [rsp+Bh] [rbp-18Dh]
  _BYTE v24[24]; // [rsp+10h] [rbp-188h] BYREF
  char v25; // [rsp+28h] [rbp-170h]
  __int128 v26; // [rsp+30h] [rbp-168h] BYREF
  __int64 v27; // [rsp+40h] [rbp-158h]
  char v28; // [rsp+48h] [rbp-150h]
  _BYTE v29[24]; // [rsp+58h] [rbp-140h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp-128h] BYREF
  __int128 v31; // [rsp+78h] [rbp-120h]
  __int64 v32; // [rsp+88h] [rbp-110h]
  _BYTE v33[24]; // [rsp+90h] [rbp-108h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-F0h]
  __int64 v35; // [rsp+B8h] [rbp-E0h]
  __int128 *v36; // [rsp+140h] [rbp-58h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+148h] [rbp-50h]
  _BYTE *v38; // [rsp+150h] [rbp-48h]
  __int64 (__fastcall *v39)(); // [rsp+158h] [rbp-40h]
  void *v40; // [rsp+160h] [rbp-38h] BYREF

  *(_QWORD *)v29 = 0x8000000000000000LL;
  v7 = *(_BYTE *)(a4 + 49) == 0;
  v32 = a1;
  if ( v7 )
  {
    v31 = a1;
    v8 = *((_QWORD *)&a1 + 1);
    v30 = 0x8000000000000000LL;
  }
  else
  {
    v8 = *((_QWORD *)&a1 + 1);
    uu_ln::relative_path(&v30, a1, *((__int64 *)&a1 + 1), a2, a3);
  }
  v9 = v8;
  if ( (unsigned __int8)std::path::Path::is_symlink(a2, a3) )
  {
    v10 = *(_BYTE *)(a4 + 55);
    v11 = 0x8000000000000000LL;
    switch ( v10 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_9;
      case 2:
        goto LABEL_10;
      case 3:
        goto LABEL_11;
    }
  }
  else
  {
    std::fs::metadata(v33, a2, a3);
    if ( *(_QWORD *)v33 == 2LL )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&v33[8]);
      v23 = *(_BYTE *)(a4 + 48);
      goto LABEL_30;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
      *(_QWORD *)v33,
      *(_QWORD *)&v33[8]);
    v10 = *(_BYTE *)(a4 + 55);
    v11 = 0x8000000000000000LL;
    switch ( v10 )
    {
      case 0:
        break;
      case 1:
LABEL_9:
        uu_ln::simple_backup_path(v33, a2, a3, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
        goto LABEL_12;
      case 2:
LABEL_10:
        uu_ln::numbered_backup_path(v33, a2, a3);
        goto LABEL_12;
      case 3:
LABEL_11:
        uu_ln::existing_backup_path(v33, a2, a3, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
LABEL_12:
        v11 = *(_QWORD *)v33;
        *(_OWORD *)v24 = *(_OWORD *)&v33[8];
        break;
    }
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v29);
  *(_QWORD *)v29 = v11;
  *(_OWORD *)&v29[8] = *(_OWORD *)v24;
  v23 = *(_BYTE *)(a4 + 48);
  if ( v10 == 3 && !*(_BYTE *)(a4 + 48) )
  {
    if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v32, v9, a2, a3, 1LL) )
    {
LABEL_16:
      std::path::Path::to_path_buf(&v26, v32, v9);
      std::path::Path::to_path_buf(v24, a2, a3);
      *(_QWORD *)&v33[16] = v27;
      *(_OWORD *)v33 = v26;
      v34 = *(_OWORD *)v24;
      v35 = *(_QWORD *)&v24[16];
      v12 = alloc::boxed::Box<T>::new(v33);
LABEL_45:
      v14 = v12;
      goto LABEL_46;
    }
    v11 = *(_QWORD *)v29;
  }
  if ( v11 != 0x8000000000000000LL )
  {
    v13 = std::fs::rename(a2, a3, v29);
    v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v13,
            a2,
            a3);
    if ( v14 )
      goto LABEL_46;
  }
  if ( *(_BYTE *)(a4 + 54) )
  {
    if ( *(_BYTE *)(a4 + 54) == 1 )
    {
      *(_QWORD *)&v15 = uucore::util_name();
      *(_OWORD *)v24 = v15;
      *(_QWORD *)&v26 = v24;
      *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &unk_12CF68;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[16] = &v26;
      v34 = 1uLL;
      std::io::stdio::_eprint(v33);
      *(_QWORD *)v24 = 1LL;
      *(_QWORD *)&v24[8] = a2;
      *(_QWORD *)&v24[16] = a3;
      v25 = 1;
      *(_QWORD *)&v26 = v24;
      *((_QWORD *)&v26 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &off_12D058;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[16] = &v26;
      v34 = 1uLL;
      std::io::stdio::_eprint(v33);
      *(_QWORD *)v33 = &off_12D078;
      *(_QWORD *)&v33[8] = 1LL;
      *(_QWORD *)&v33[16] = 8LL;
      v34 = 0LL;
      std::io::stdio::_eprint(v33);
      v40 = &std::io::stdio::stderr::INSTANCE;
      v16 = <std::io::stdio::Stderr as std::io::Write>::flush(&v40);
      if ( v16 )
      {
        v36 = (__int128 *)v16;
        *(_QWORD *)&v22 = uucore::util_name();
        *(_OWORD *)v24 = v22;
        *(_QWORD *)&v26 = v24;
        *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v33 = &unk_12CF68;
        *(_QWORD *)&v33[8] = 2LL;
        *(_QWORD *)&v33[16] = &v26;
        v34 = 1uLL;
        std::io::stdio::_eprint(v33);
        *(_QWORD *)v24 = &v36;
        *(_QWORD *)&v24[8] = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)v33 = &unk_12D008;
        *(_QWORD *)&v33[8] = 2LL;
        *(_QWORD *)&v33[16] = v24;
        v34 = 1uLL;
        std::io::stdio::_eprint(v33);
        std::process::exit(1);
      }
      if ( !(unsigned __int8)uucore::read_yes() )
      {
        *(_QWORD *)&v34 = 0x8000000000000001LL;
        v12 = alloc::boxed::Box<T>::new(v33);
        goto LABEL_45;
      }
      v17 = std::fs::remove_file(a2, a3);
    }
    else
    {
      if ( !(unsigned __int8)std::path::Path::is_symlink(a2, a3)
        && (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v32, v9, a2, a3, 1LL) )
      {
        goto LABEL_16;
      }
      v17 = std::fs::remove_file(a2, a3);
    }
    if ( v17 )
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v17);
  }
LABEL_30:
  if ( v23 )
  {
    v18 = std::os::unix::fs::symlink(&v30, a2, a3);
    if ( v18 )
    {
      v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
LABEL_46:
      core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v30);
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v29);
      return v14;
    }
  }
  else
  {
    if ( *(_BYTE *)(a4 + 50) && (unsigned __int8)std::path::Path::is_symlink(v31, *((_QWORD *)&v31 + 1)) )
    {
      std::fs::canonicalize(v33, &v30);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v24,
        v33,
        &v30);
      v14 = *(_QWORD *)&v24[8];
      if ( *(_QWORD *)v24 == 0x8000000000000000LL )
        goto LABEL_46;
      v26 = *(_OWORD *)v24;
      v27 = *(_QWORD *)&v24[16];
    }
    else
    {
      std::path::Path::to_path_buf(&v26, v31, *((_QWORD *)&v31 + 1));
    }
    *(_QWORD *)&v33[16] = v27;
    *(_OWORD *)v33 = v26;
    v19 = std::fs::hard_link(v33, a2, a3);
    *(_QWORD *)v33 = &v30;
    *(_QWORD *)&v33[8] = a2;
    *(_QWORD *)&v33[16] = a3;
    v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v19,
            v33);
    if ( v14 )
      goto LABEL_46;
  }
  if ( *(_BYTE *)(a4 + 53) )
  {
    *(_QWORD *)&v26 = 1LL;
    *((_QWORD *)&v26 + 1) = a2;
    v27 = a3;
    v28 = 1;
    *(_QWORD *)v24 = 1LL;
    *(_OWORD *)&v24[8] = v31;
    v25 = 1;
    v36 = &v26;
    v37 = <os_display::Quoted as core::fmt::Display>::fmt;
    v38 = v24;
    v39 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v33 = &unk_12D088;
    *(_QWORD *)&v33[8] = 2LL;
    *(_QWORD *)&v33[16] = &v36;
    v34 = 2uLL;
    std::io::stdio::_print(v33);
    if ( *(_QWORD *)v29 != 0x8000000000000000LL )
    {
      v27 = *(_QWORD *)&v29[16];
      v26 = *(_OWORD *)v29;
      *(_QWORD *)v24 = 1LL;
      *(_QWORD *)&v24[8] = *(_QWORD *)&v29[8];
      *(_QWORD *)&v24[16] = *(_QWORD *)&v29[16];
      v25 = 1;
      v36 = (__int128 *)v24;
      v37 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &off_12D0B8;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[16] = &v36;
      v34 = 1uLL;
      std::io::stdio::_print(v33);
      core::ptr::drop_in_place<std::path::PathBuf>(&v26);
      v20 = 1;
      goto LABEL_49;
    }
    *(_QWORD *)v33 = &off_12D0A8;
    *(_QWORD *)&v33[8] = 1LL;
    *(_QWORD *)&v33[16] = 8LL;
    v34 = 0LL;
    std::io::stdio::_print(v33);
  }
  v20 = 0;
LABEL_49:
  core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v30);
  if ( ((*(_QWORD *)v29 != 0x8000000000000000LL) & (unsigned __int8)~v20) != 0 )
    core::ptr::drop_in_place<std::path::PathBuf>(v29);
  return 0LL;
}
