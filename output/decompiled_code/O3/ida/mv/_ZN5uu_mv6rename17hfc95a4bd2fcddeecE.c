        __int64 a6)
{
  char v9; // r12
  char v10; // al
  __int64 v11; // rbx
  bool v13; // bl
  __int128 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rsi
  char v18; // cl
  char v19; // si
  __int128 v20; // rax
  __int64 v21; // rax
  __int128 v22; // rax
  __int128 v24; // [rsp+20h] [rbp-318h] BYREF
  __int64 v25; // [rsp+30h] [rbp-308h]
  __int64 v26; // [rsp+40h] [rbp-2F8h]
  __int128 *v27; // [rsp+48h] [rbp-2F0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-2E8h]
  __int128 *v29; // [rsp+58h] [rbp-2E0h]
  __int64 (__fastcall *v30)(); // [rsp+60h] [rbp-2D8h]
  unsigned int v31; // [rsp+6Ch] [rbp-2CCh]
  __int128 v32; // [rsp+70h] [rbp-2C8h] BYREF
  _QWORD src[20]; // [rsp+80h] [rbp-2B8h] BYREF
  __int128 v34; // [rsp+120h] [rbp-218h] BYREF
  _QWORD v35[20]; // [rsp+130h] [rbp-208h] BYREF
  __int128 v36; // [rsp+1D0h] [rbp-168h] BYREF
  __int64 v37; // [rsp+1E0h] [rbp-158h]
  __int64 v38; // [rsp+1E8h] [rbp-150h]
  _QWORD v39[3]; // [rsp+1F0h] [rbp-148h] BYREF
  char v40; // [rsp+208h] [rbp-130h]
  __int128 v41; // [rsp+210h] [rbp-128h] BYREF
  _QWORD dest[20]; // [rsp+220h] [rbp-118h] BYREF
  __int128 v43; // [rsp+2C0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+2D0h] [rbp-68h]
  __int128 v45; // [rsp+2D8h] [rbp-60h] BYREF
  __int64 v46; // [rsp+2E8h] [rbp-50h]
  _BYTE v47[72]; // [rsp+2F0h] [rbp-48h] BYREF

  v26 = a6;
  *(_QWORD *)&v24 = 0x8000000000000000LL;
  std::fs::metadata(&v32, a3, a4);
  if ( (_DWORD)v32 == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v32);
    goto LABEL_3;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v32);
  v9 = *(_BYTE *)(a5 + 53);
  v10 = *(_BYTE *)(a5 + 55);
  if ( v10 == 2 && v9 == 1 )
  {
LABEL_10:
    v11 = 0LL;
    goto LABEL_16;
  }
  switch ( v10 )
  {
    case 1:
      if ( *(_BYTE *)(a5 + 52) )
      {
        *(_QWORD *)&v34 = 1LL;
        *((_QWORD *)&v34 + 1) = a3;
        v35[0] = a4;
        LOBYTE(v35[1]) = 1;
        *(_QWORD *)&v41 = &v34;
        *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v32 = &off_1881A0;
        *((_QWORD *)&v32 + 1) = 2LL;
        src[0] = &v41;
        *(_OWORD *)&src[1] = 1uLL;
        std::io::stdio::_print(&v32);
      }
      goto LABEL_10;
    case 2:
      std::fs::metadata(&v32, a1, a2);
      v11 = *((_QWORD *)&v32 + 1);
      if ( (_QWORD)v32 == 2LL )
        goto LABEL_16;
      memcpy(dest, src, sizeof(dest));
      v41 = v32;
      std::fs::Metadata::modified(&v34, &v41);
      v11 = v34;
      v31 = DWORD2(v34);
      if ( DWORD2(v34) == 1000000000 )
        goto LABEL_16;
      std::fs::metadata(&v32, a3, a4);
      v14 = (__int128 *)*((_QWORD *)&v32 + 1);
      if ( (_QWORD)v32 == 2LL
        || (v38 = *((_QWORD *)&v32 + 1),
            memcpy(v35, src, sizeof(v35)),
            v34 = v32,
            std::fs::Metadata::modified(&v27, &v34),
            v14 = v27,
            (_DWORD)v28 == 1000000000) )
      {
        v11 = (__int64)v14;
        goto LABEL_16;
      }
      v18 = v11 != (_QWORD)v27;
      if ( v11 < (__int64)v27 )
        v18 = -1;
      v19 = v31 != (_DWORD)v28;
      if ( v31 < (unsigned int)v28 )
        v19 = -1;
      if ( v18 )
        v19 = v18;
      if ( v19 != 1 )
        goto LABEL_10;
      break;
    case 3:
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = a3;
      v35[0] = a4;
      LOBYTE(v35[1]) = 1;
      *(_QWORD *)&v41 = &v34;
      *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &off_1881C0;
      *((_QWORD *)&v32 + 1) = 1LL;
      src[0] = &v41;
      *(_OWORD *)&src[1] = 1uLL;
      core::option::Option<T>::map_or_else(v47, &v32);
      v15 = std::io::error::Error::new(39LL, v47);
LABEL_41:
      v11 = v15;
      goto LABEL_16;
  }
  if ( !v9 )
  {
    if ( *(_BYTE *)(a5 + 52) )
    {
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = a3;
      v35[0] = a4;
      LOBYTE(v35[1]) = 1;
      *(_QWORD *)&v41 = &v34;
      *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &off_1881A0;
      *((_QWORD *)&v32 + 1) = 2LL;
      src[0] = &v41;
      *(_OWORD *)&src[1] = 1uLL;
      std::io::stdio::_print(&v32);
    }
    goto LABEL_10;
  }
  if ( v9 == 1 )
  {
    *(_QWORD *)&v20 = uucore::util_name();
    v34 = v20;
    *(_QWORD *)&v41 = &v34;
    *((_QWORD *)&v41 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &unk_187E10;
    *((_QWORD *)&v32 + 1) = 2LL;
    src[0] = &v41;
    *(_OWORD *)&src[1] = 1uLL;
    std::io::stdio::_eprint(&v32);
    *(_QWORD *)&v34 = 1LL;
    *((_QWORD *)&v34 + 1) = a3;
    v35[0] = a4;
    LOBYTE(v35[1]) = 1;
    *(_QWORD *)&v41 = &v34;
    *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v32 = &off_1881D0;
    *((_QWORD *)&v32 + 1) = 2LL;
    src[0] = &v41;
    *(_OWORD *)&src[1] = 1uLL;
    std::io::stdio::_eprint(&v32);
    *(_QWORD *)&v32 = &off_187E50;
    *((_QWORD *)&v32 + 1) = 1LL;
    src[0] = 8LL;
    *(_OWORD *)&src[1] = 0LL;
    std::io::stdio::_eprint(&v32);
    v39[0] = &std::io::stdio::stderr::INSTANCE;
    v21 = <std::io::stdio::Stderr as std::io::Write>::flush(v39);
    if ( v21 )
    {
      v27 = (__int128 *)v21;
      *(_QWORD *)&v22 = uucore::util_name();
      v34 = v22;
      *(_QWORD *)&v41 = &v34;
      *((_QWORD *)&v41 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_187E10;
      *((_QWORD *)&v32 + 1) = 2LL;
      src[0] = &v41;
      *(_OWORD *)&src[1] = 1uLL;
      std::io::stdio::_eprint(&v32);
      *(_QWORD *)&v34 = &v27;
      *((_QWORD *)&v34 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_187E60;
      *((_QWORD *)&v32 + 1) = 2LL;
      src[0] = &v34;
      *(_OWORD *)&src[1] = 1uLL;
      std::io::stdio::_eprint(&v32);
      std::process::exit(1);
    }
    if ( !(unsigned __int8)uucore::read_yes() )
    {
      v17 = (_BYTE *)(&dword_0 + 1);
      v16 = 0LL;
LABEL_40:
      v15 = std::io::error::Error::new(39LL, v17, v16);
      goto LABEL_41;
    }
  }
  uucore::features::backup_control::get_backup_path(
    &v32,
    *(unsigned __int8 *)(a5 + 54),
    a3,
    a4,
    *(_QWORD *)(a5 + 8),
    *(_QWORD *)(a5 + 16));
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v24);
  v25 = src[0];
  v24 = v32;
  if ( (_QWORD)v32 != 0x8000000000000000LL )
  {
    v11 = uu_mv::rename_with_fallback(a3, a4, *((_QWORD *)&v24 + 1), v25, v26);
    if ( v11 )
      goto LABEL_16;
  }
LABEL_3:
  std::fs::metadata(&v32, a3, a4);
  if ( (_DWORD)v32 == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v32);
    goto LABEL_15;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v32);
  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) && (unsigned __int8)std::path::Path::is_dir(a1, a2) )
  {
    if ( (unsigned __int8)uu_mv::is_empty_dir(a3, a4) )
    {
      v11 = std::fs::remove_dir(a3, a4);
      if ( !v11 )
        goto LABEL_15;
LABEL_16:
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v24);
      return v11;
    }
    v16 = 19LL;
    v17 = aDirectoryNotEm;
    goto LABEL_40;
  }
LABEL_15:
  v11 = uu_mv::rename_with_fallback(a1, a2, a3, a4, v26);
  if ( v11 )
    goto LABEL_16;
  if ( *(_BYTE *)(a5 + 49) )
  {
    v13 = (_QWORD)v24 != 0x8000000000000000LL;
    if ( (_QWORD)v24 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v41 = 1LL;
      *((_QWORD *)&v41 + 1) = a1;
      dest[0] = a2;
      LOBYTE(dest[1]) = 1;
      *(_QWORD *)&v34 = 1LL;
      *((_QWORD *)&v34 + 1) = a3;
      v35[0] = a4;
      LOBYTE(v35[1]) = 1;
      v27 = &v41;
      v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      v29 = &v34;
      v30 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &off_188230;
      *((_QWORD *)&v32 + 1) = 2LL;
      src[0] = &v27;
      *(_OWORD *)&src[1] = 2uLL;
      core::option::Option<T>::map_or_else(&v45, &v32);
      v34 = v45;
      v35[0] = v46;
    }
    else
    {
      v37 = v25;
      v36 = v24;
      v39[0] = 1LL;
      v39[1] = a1;
      v39[2] = a2;
      v40 = 1;
      v27 = (_OWORD *)(&dword_0 + 1);
      v28 = a3;
      v29 = a4;
      LOBYTE(v30) = 1;
      *(_QWORD *)&v41 = 1LL;
      *((_QWORD *)&v41 + 1) = *((_QWORD *)&v24 + 1);
      dest[0] = v25;
      LOBYTE(dest[1]) = 1;
      *(_QWORD *)&v32 = v39;
      *((_QWORD *)&v32 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      src[0] = &v27;
      src[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      src[2] = &v41;
      src[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_1881F0;
      *((_QWORD *)&v34 + 1) = 4LL;
      v35[2] = 0LL;
      v35[0] = &v32;
      v35[1] = 3LL;
      core::option::Option<T>::map_or_else(&v43, &v34);
      v34 = v43;
      v35[0] = v44;
      core::ptr::drop_in_place<std::path::PathBuf>(&v36);
    }
    if ( v26 )
    {
      indicatif::multi::MultiProgress::suspend(v26, &v34);
    }
    else
    {
      *(_QWORD *)&v41 = &v34;
      *((_QWORD *)&v41 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_187E60;
      *((_QWORD *)&v32 + 1) = 2LL;
      src[0] = &v41;
      *(_OWORD *)&src[1] = 1uLL;
      std::io::stdio::_print(&v32);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v34);
  }
  else
  {
    v13 = 0;
  }
  if ( !v13 && (_QWORD)v24 != 0x8000000000000000LL )
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
  return 0LL;
}
