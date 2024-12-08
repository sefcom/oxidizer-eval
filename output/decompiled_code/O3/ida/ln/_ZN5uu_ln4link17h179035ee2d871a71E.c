__int64 __fastcall uu_ln::link(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int128 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // bl
  __int128 v21; // rax
  _BYTE v22[24]; // [rsp+10h] [rbp-188h] BYREF
  char v23; // [rsp+28h] [rbp-170h]
  __int128 v24; // [rsp+30h] [rbp-168h] BYREF
  __int64 v25; // [rsp+40h] [rbp-158h]
  char v26; // [rsp+48h] [rbp-150h]
  _BYTE v27[24]; // [rsp+58h] [rbp-140h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-128h] BYREF
  __int128 v29; // [rsp+78h] [rbp-120h]
  __int64 v30; // [rsp+88h] [rbp-110h]
  _BYTE v31[24]; // [rsp+90h] [rbp-108h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-F0h]
  __int64 v33; // [rsp+B8h] [rbp-E0h]
  __int128 *v34; // [rsp+140h] [rbp-58h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+148h] [rbp-50h]
  _BYTE *v36; // [rsp+150h] [rbp-48h]
  __int64 (__fastcall *v37)(); // [rsp+158h] [rbp-40h]
  void *v38; // [rsp+160h] [rbp-38h] BYREF

  *(_QWORD *)v27 = 0x8000000000000000LL;
  v7 = *(_BYTE *)(a4 + 49) == 0;
  v30 = a1;
  if ( v7 )
  {
    v29 = a1;
    v8 = *((_QWORD *)&a1 + 1);
    v28 = 0x8000000000000000LL;
  }
  else
  {
    v8 = *((_QWORD *)&a1 + 1);
    uu_ln::relative_path(&v28, a1, *((__int64 *)&a1 + 1), a2, a3);
  }
  v9 = v8;
  if ( (unsigned __int8)std::path::Path::is_symlink(a2, a3) )
  {
    switch ( *(_BYTE *)(a4 + 55) )
    {
      case 0:
        goto LABEL_9;
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_10;
      case 3:
        goto LABEL_11;
    }
  }
  std::fs::metadata(v31, a2, a3);
  if ( *(_QWORD *)v31 == 2LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&v31[8]);
    goto LABEL_28;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
    *(_QWORD *)v31,
    *(_QWORD *)&v31[8]);
  switch ( *(_BYTE *)(a4 + 55) )
  {
    case 0:
LABEL_9:
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27);
      *(_QWORD *)v27 = 0x8000000000000000LL;
      goto LABEL_18;
    case 1:
LABEL_14:
      uu_ln::simple_backup_path(v31, a2, a3, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      v10 = *(_QWORD *)v31;
      *(_OWORD *)v22 = *(_OWORD *)&v31[8];
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27);
      goto LABEL_15;
    case 2:
LABEL_10:
      uu_ln::numbered_backup_path(v31, a2, a3);
      v10 = *(_QWORD *)v31;
      *(_OWORD *)v22 = *(_OWORD *)&v31[8];
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27);
LABEL_15:
      *(_QWORD *)v27 = v10;
      *(_OWORD *)&v27[8] = *(_OWORD *)v22;
      goto LABEL_16;
    case 3:
LABEL_11:
      uu_ln::existing_backup_path(v31, a2, a3, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      v10 = *(_QWORD *)v31;
      *(_OWORD *)v22 = *(_OWORD *)&v31[8];
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27);
      *(_QWORD *)v27 = v10;
      *(_OWORD *)&v27[8] = *(_OWORD *)v22;
      if ( *(_BYTE *)(a4 + 48) )
      {
LABEL_16:
        if ( v10 == 0x8000000000000000LL )
          goto LABEL_18;
        goto LABEL_17;
      }
      if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v30, v9, a2, a3, 1LL) )
      {
LABEL_13:
        std::path::Path::to_path_buf(&v24, v30, v9);
        std::path::Path::to_path_buf(v22, a2, a3);
        *(_QWORD *)&v31[16] = v25;
        *(_OWORD *)v31 = v24;
        v32 = *(_OWORD *)v22;
        v33 = *(_QWORD *)&v22[16];
        v11 = alloc::boxed::Box<T>::new(v31);
LABEL_43:
        v13 = v11;
        goto LABEL_44;
      }
      if ( *(_QWORD *)v27 != 0x8000000000000000LL )
      {
LABEL_17:
        v12 = std::fs::rename(a2, a3, v27);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                v12,
                a2,
                a3);
        if ( v13 )
          goto LABEL_44;
      }
LABEL_18:
      if ( !*(_BYTE *)(a4 + 54) )
        goto LABEL_28;
      if ( *(_BYTE *)(a4 + 54) == 1 )
      {
        *(_QWORD *)&v14 = uucore::util_name();
        *(_OWORD *)v22 = v14;
        *(_QWORD *)&v24 = v22;
        *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v31 = &unk_12D6A8;
        *(_QWORD *)&v31[8] = 2LL;
        *(_QWORD *)&v31[16] = &v24;
        v32 = 1uLL;
        std::io::stdio::_eprint(v31);
        *(_QWORD *)v22 = 1LL;
        *(_QWORD *)&v22[8] = a2;
        *(_QWORD *)&v22[16] = a3;
        v23 = 1;
        *(_QWORD *)&v24 = v22;
        *((_QWORD *)&v24 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v31 = &off_12D780;
        *(_QWORD *)&v31[8] = 2LL;
        *(_QWORD *)&v31[16] = &v24;
        v32 = 1uLL;
        std::io::stdio::_eprint(v31);
        *(_QWORD *)v31 = &off_12D7A0;
        *(_QWORD *)&v31[8] = 1LL;
        *(_QWORD *)&v31[16] = 8LL;
        v32 = 0LL;
        std::io::stdio::_eprint(v31);
        v38 = &std::io::stdio::stderr::INSTANCE;
        v15 = <std::io::stdio::Stderr as std::io::Write>::flush(&v38);
        if ( v15 )
        {
          v34 = (__int128 *)v15;
          *(_QWORD *)&v21 = uucore::util_name();
          *(_OWORD *)v22 = v21;
          *(_QWORD *)&v24 = v22;
          *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v31 = &unk_12D6A8;
          *(_QWORD *)&v31[8] = 2LL;
          *(_QWORD *)&v31[16] = &v24;
          v32 = 1uLL;
          std::io::stdio::_eprint(v31);
          *(_QWORD *)v22 = &v34;
          *(_QWORD *)&v22[8] = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)v31 = &unk_12D748;
          *(_QWORD *)&v31[8] = 2LL;
          *(_QWORD *)&v31[16] = v22;
          v32 = 1uLL;
          std::io::stdio::_eprint(v31);
          std::process::exit(1);
        }
        if ( !(unsigned __int8)uucore::read_yes() )
        {
          *(_QWORD *)&v32 = 0x8000000000000001LL;
          v11 = alloc::boxed::Box<T>::new(v31);
          goto LABEL_43;
        }
        v16 = std::fs::remove_file(a2, a3);
      }
      else
      {
        if ( !(unsigned __int8)std::path::Path::is_symlink(a2, a3)
          && (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v30, v9, a2, a3, 1LL) )
        {
          goto LABEL_13;
        }
        v16 = std::fs::remove_file(a2, a3);
      }
      if ( v16 )
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v16);
LABEL_28:
      if ( *(_BYTE *)(a4 + 48) )
      {
        v17 = std::os::unix::fs::symlink(&v28, a2, a3);
        if ( v17 )
        {
          v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
LABEL_44:
          core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v28);
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v27);
          return v13;
        }
      }
      else
      {
        if ( *(_BYTE *)(a4 + 50) && (unsigned __int8)std::path::Path::is_symlink(v29, *((_QWORD *)&v29 + 1)) )
        {
          std::fs::canonicalize(v31, &v28);
          <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v22,
            v31,
            &v28);
          v13 = *(_QWORD *)&v22[8];
          if ( *(_QWORD *)v22 == 0x8000000000000000LL )
            goto LABEL_44;
          v24 = *(_OWORD *)v22;
          v25 = *(_QWORD *)&v22[16];
        }
        else
        {
          std::path::Path::to_path_buf(&v24, v29, *((_QWORD *)&v29 + 1));
        }
        *(_QWORD *)&v31[16] = v25;
        *(_OWORD *)v31 = v24;
        v18 = std::fs::hard_link(v31, a2, a3);
        *(_QWORD *)v31 = &v28;
        *(_QWORD *)&v31[8] = a2;
        *(_QWORD *)&v31[16] = a3;
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                v18,
                v31);
        if ( v13 )
          goto LABEL_44;
      }
      if ( *(_BYTE *)(a4 + 53) )
      {
        *(_QWORD *)&v24 = 1LL;
        *((_QWORD *)&v24 + 1) = a2;
        v25 = a3;
        v26 = 1;
        *(_QWORD *)v22 = 1LL;
        *(_OWORD *)&v22[8] = v29;
        v23 = 1;
        v34 = &v24;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v36 = v22;
        v37 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v31 = &unk_12D7B0;
        *(_QWORD *)&v31[8] = 2LL;
        *(_QWORD *)&v31[16] = &v34;
        v32 = 2uLL;
        std::io::stdio::_print(v31);
        if ( *(_QWORD *)v27 != 0x8000000000000000LL )
        {
          v25 = *(_QWORD *)&v27[16];
          v24 = *(_OWORD *)v27;
          *(_QWORD *)v22 = 1LL;
          *(_QWORD *)&v22[8] = *(_QWORD *)&v27[8];
          *(_QWORD *)&v22[16] = *(_QWORD *)&v27[16];
          v23 = 1;
          v34 = (__int128 *)v22;
          v35 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v31 = &off_12D7E0;
          *(_QWORD *)&v31[8] = 2LL;
          *(_QWORD *)&v31[16] = &v34;
          v32 = 1uLL;
          std::io::stdio::_print(v31);
          core::ptr::drop_in_place<std::path::PathBuf>(&v24);
          v19 = 1;
          goto LABEL_46;
        }
        *(_QWORD *)v31 = &off_12D7D0;
        *(_QWORD *)&v31[8] = 1LL;
        *(_QWORD *)&v31[16] = 8LL;
        v32 = 0LL;
        std::io::stdio::_print(v31);
      }
      v19 = 0;
LABEL_46:
      core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v28);
      if ( ((*(_QWORD *)v27 != 0x8000000000000000LL) & (unsigned __int8)~v19) != 0 )
        core::ptr::drop_in_place<std::path::PathBuf>(v27);
      return 0LL;
  }
}
