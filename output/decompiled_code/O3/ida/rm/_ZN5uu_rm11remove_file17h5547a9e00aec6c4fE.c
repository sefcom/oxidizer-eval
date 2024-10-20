char __fastcall uu_rm::remove_file(__int64 *src, __int64 *n, char a3, char a4)
{
  char v7; // r13
  __int64 v8; // rax
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rsi
  char v12; // r13
  __int64 v13; // rax
  char v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int128 v19; // rax
  __int64 v20; // rax
  __int128 v21; // rax
  __int128 v22; // rax
  __int128 v23; // rax
  __int128 v24; // rax
  __int128 v25; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 *v26; // [rsp+10h] [rbp-1D8h]
  __int64 (__fastcall *v27)(); // [rsp+18h] [rbp-1D0h]
  __int64 v28; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+28h] [rbp-1C0h]
  void *v30; // [rsp+30h] [rbp-1B8h] BYREF
  int fd; // [rsp+3Ch] [rbp-1ACh] BYREF
  _QWORD srca[22]; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-F0h]
  void *v35; // [rsp+100h] [rbp-E8h] BYREF
  _OWORD dest[14]; // [rsp+108h] [rbp-E0h] BYREF

  if ( a4 )
  {
    if ( a4 == 2 )
    {
      std::sys::pal::unix::fs::lstat(srca);
      if ( LODWORD(srca[0]) == 2 )
      {
        *((_QWORD *)&dest[0] + 1) = srca[1];
        *(_QWORD *)&dest[0] = 2LL;
LABEL_6:
        core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
        goto LABEL_7;
      }
      memcpy(dest, srca, 0xB0uLL);
      if ( *(_QWORD *)&dest[0] == 2LL )
        goto LABEL_6;
      if ( (WORD4(dest[3]) & 0xF000) == 0xA000 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v25 = xmmword_F3390;
        v28 = (__int64)&v25;
        v29 = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v28;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&v25 = 1LL;
        *((_QWORD *)&v25 + 1) = src;
        v26 = n;
        LOBYTE(v27) = 1;
        v28 = (__int64)&v25;
        v29 = <os_display::Quoted as core::fmt::Display>::fmt;
        srca[0] = &off_EE770;
        srca[1] = 2LL;
        srca[2] = &v28;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        srca[0] = &off_EE790;
        srca[1] = 1LL;
        srca[2] = 8LL;
        *(_OWORD *)&srca[3] = 0LL;
        std::io::stdio::_eprint(srca);
        v30 = &std::io::stdio::stderr::INSTANCE;
        v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v30);
        if ( v10 )
        {
          v33 = v10;
          *(_QWORD *)&v23 = ((__int64 (*)(void))uucore::util_name)();
          v25 = v23;
          v28 = (__int64)&v25;
          v29 = <&T as core::fmt::Display>::fmt;
          srca[0] = &unk_EE5F8;
          srca[1] = 2LL;
          srca[2] = &v28;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          *(_QWORD *)&v25 = &v33;
          *((_QWORD *)&v25 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          srca[0] = &unk_EE7A0;
          srca[1] = 2LL;
          srca[2] = &v25;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          std::process::exit(1);
        }
        goto LABEL_23;
      }
    }
LABEL_7:
    v28 = 0x1B600000000LL;
    LODWORD(v29) = 257;
    WORD2(v29) = 0;
    std::fs::OpenOptions::_open(&v33, &v28, src, n);
    if ( (_DWORD)v33 )
    {
      srca[0] = v34;
      v7 = std::io::error::Error::kind(v34);
      core::ptr::drop_in_place<std::io::error::Error>(srca);
      if ( v7 != 1 )
        goto LABEL_42;
    }
    else
    {
      fd = HIDWORD(v33);
      std::fs::File::metadata(srca, &fd);
      if ( LODWORD(srca[0]) == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(&srca[1]);
        close(fd);
        goto LABEL_42;
      }
      if ( a4 == 2 && (srca[7] & 0x92) != 0 )
      {
        if ( srca[10] )
        {
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          dest[0] = xmmword_F3390;
          *(_QWORD *)&v25 = dest;
          *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
          srca[0] = &unk_EE5F8;
          srca[1] = 2LL;
          srca[2] = &v25;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          *(_QWORD *)&dest[0] = 1LL;
          *((_QWORD *)&dest[0] + 1) = src;
          *(_QWORD *)&dest[1] = n;
          BYTE8(dest[1]) = 1;
          *(_QWORD *)&v25 = dest;
          *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          srca[0] = &off_EE7E0;
          srca[1] = 2LL;
          srca[2] = &v25;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          srca[0] = &off_EE790;
          srca[1] = 1LL;
          srca[2] = 8LL;
          *(_OWORD *)&srca[3] = 0LL;
          std::io::stdio::_eprint(srca);
          v35 = &std::io::stdio::stderr::INSTANCE;
          v8 = <std::io::stdio::Stderr as std::io::Write>::flush(&v35);
          if ( v8 )
          {
            v30 = (void *)v8;
            *(_QWORD *)&v9 = ((__int64 (*)(void))uucore::util_name)();
            dest[0] = v9;
            *(_QWORD *)&v25 = dest;
            *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
            srca[0] = &unk_EE5F8;
            srca[1] = 2LL;
            srca[2] = &v25;
            *(_OWORD *)&srca[3] = 1uLL;
            std::io::stdio::_eprint(srca);
            *(_QWORD *)&dest[0] = &v30;
            *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
            srca[0] = &unk_EE7A0;
            srca[1] = 2LL;
            srca[2] = dest;
            *(_OWORD *)&srca[3] = 1uLL;
            std::io::stdio::_eprint(srca);
            std::process::exit(1);
          }
        }
        else
        {
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          dest[0] = xmmword_F3390;
          *(_QWORD *)&v25 = dest;
          *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
          srca[0] = &unk_EE5F8;
          srca[1] = 2LL;
          srca[2] = &v25;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          *(_QWORD *)&dest[0] = 1LL;
          *((_QWORD *)&dest[0] + 1) = src;
          *(_QWORD *)&dest[1] = n;
          BYTE8(dest[1]) = 1;
          *(_QWORD *)&v25 = dest;
          *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          srca[0] = &off_EE7C0;
          srca[1] = 2LL;
          srca[2] = &v25;
          *(_OWORD *)&srca[3] = 1uLL;
          std::io::stdio::_eprint(srca);
          srca[0] = &off_EE790;
          srca[1] = 1LL;
          srca[2] = 8LL;
          *(_OWORD *)&srca[3] = 0LL;
          std::io::stdio::_eprint(srca);
          v35 = &std::io::stdio::stderr::INSTANCE;
          v15 = <std::io::stdio::Stderr as std::io::Write>::flush(&v35);
          if ( v15 )
          {
            v30 = (void *)v15;
            *(_QWORD *)&v24 = ((__int64 (*)(void))uucore::util_name)();
            dest[0] = v24;
            *(_QWORD *)&v25 = dest;
            *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
            srca[0] = &unk_EE5F8;
            srca[1] = 2LL;
            srca[2] = &v25;
            *(_OWORD *)&srca[3] = 1uLL;
            std::io::stdio::_eprint(srca);
            *(_QWORD *)&dest[0] = &v30;
            *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
            srca[0] = &unk_EE7A0;
            srca[1] = 2LL;
            srca[2] = dest;
            *(_OWORD *)&srca[3] = 1uLL;
            std::io::stdio::_eprint(srca);
            std::process::exit(1);
          }
        }
        v14 = ((__int64 (*)(void))uucore::read_yes)();
        close(fd);
LABEL_41:
        if ( v14 )
          goto LABEL_42;
        return 0;
      }
      close(fd);
    }
    v11 = src;
    std::sys::pal::unix::fs::stat(srca);
    if ( LODWORD(srca[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = srca[1];
      *(_QWORD *)&dest[0] = 2LL;
      v12 = 1;
LABEL_29:
      if ( uucore::UTIL_NAME != 2 )
      {
        v11 = &uucore::UTIL_NAME;
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      }
      v25 = xmmword_F3390;
      v28 = (__int64)&v25;
      v29 = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v28;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&v25 = 1LL;
      *((_QWORD *)&v25 + 1) = src;
      v26 = n;
      LOBYTE(v27) = 1;
      v28 = (__int64)&v25;
      v29 = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE820;
      srca[1] = 2LL;
      srca[2] = &v28;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      srca[0] = &off_EE790;
      srca[1] = 1LL;
      srca[2] = 8LL;
      *(_OWORD *)&srca[3] = 0LL;
      std::io::stdio::_eprint(srca);
      v30 = &std::io::stdio::stderr::INSTANCE;
      v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v30);
      if ( v13 )
      {
        v33 = v13;
        *(_QWORD *)&v22 = uucore::util_name(&v30, v11);
        v25 = v22;
        v28 = (__int64)&v25;
        v29 = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v28;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&v25 = &v33;
        *((_QWORD *)&v25 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        srca[0] = &unk_EE7A0;
        srca[1] = 2LL;
        srca[2] = &v25;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        std::process::exit(1);
      }
      v14 = uucore::read_yes(&v30, v11);
      if ( v12 )
        core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
      goto LABEL_41;
    }
    v11 = srca;
    memcpy(dest, srca, 0xB0uLL);
    v12 = 1;
    if ( *(_QWORD *)&dest[0] == 2LL )
      goto LABEL_29;
    if ( (BYTE8(dest[3]) & 0x92) != 0 )
      goto LABEL_42;
    if ( *(_QWORD *)&dest[5] )
    {
      v12 = 0;
      goto LABEL_29;
    }
    *(_QWORD *)&v19 = ((__int64 (*)(void))uucore::util_name)();
    v25 = v19;
    v28 = (__int64)&v25;
    v29 = <&T as core::fmt::Display>::fmt;
    srca[0] = &unk_EE5F8;
    srca[1] = 2LL;
    srca[2] = &v28;
    *(_OWORD *)&srca[3] = 1uLL;
    std::io::stdio::_eprint(srca);
    *(_QWORD *)&v25 = 1LL;
    *((_QWORD *)&v25 + 1) = src;
    v26 = n;
    LOBYTE(v27) = 1;
    v28 = (__int64)&v25;
    v29 = <os_display::Quoted as core::fmt::Display>::fmt;
    srca[0] = &off_EE800;
    srca[1] = 2LL;
    srca[2] = &v28;
    *(_OWORD *)&srca[3] = 1uLL;
    std::io::stdio::_eprint(srca);
    srca[0] = &off_EE790;
    srca[1] = 1LL;
    srca[2] = 8LL;
    *(_OWORD *)&srca[3] = 0LL;
    std::io::stdio::_eprint(srca);
    v30 = &std::io::stdio::stderr::INSTANCE;
    v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&v30);
    if ( v20 )
    {
      v33 = v20;
      *(_QWORD *)&v21 = ((__int64 (*)(void))uucore::util_name)();
      v25 = v21;
      v28 = (__int64)&v25;
      v29 = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v28;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&v25 = &v33;
      *((_QWORD *)&v25 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      srca[0] = &unk_EE7A0;
      srca[1] = 2LL;
      srca[2] = &v25;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      std::process::exit(1);
    }
LABEL_23:
    if ( (unsigned __int8)((__int64 (*)(void))uucore::read_yes)() )
      goto LABEL_42;
    return 0;
  }
LABEL_42:
  v16 = std::sys::pal::unix::fs::unlink(src, (size_t)n);
  if ( !v16 )
  {
    if ( a3 )
    {
      uucore::features::fs::normalize_path(&v25, src, n);
      v17 = *((_QWORD *)&v25 + 1);
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&v25 + 1);
      *(_QWORD *)&dest[1] = v26;
      BYTE8(dest[1]) = 1;
      v28 = (__int64)dest;
      v29 = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE750;
      srca[1] = 2LL;
      srca[2] = &v28;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_print(srca);
      if ( (_QWORD)v25 )
        _rust_dealloc(v17, v25, 1LL);
    }
    return 0;
  }
  v28 = v16;
  if ( (unsigned __int8)std::io::error::Error::kind(v16) == 1 )
  {
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    dest[0] = xmmword_F3390;
    *(_QWORD *)&v25 = dest;
    *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
    srca[0] = &unk_EE5F8;
    srca[1] = 2LL;
    srca[2] = &v25;
    *(_OWORD *)&srca[3] = 1uLL;
    std::io::stdio::_eprint(srca);
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = src;
    *(_QWORD *)&dest[1] = n;
    BYTE8(dest[1]) = 1;
    *(_QWORD *)&v25 = dest;
    *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    srca[0] = &off_EE638;
    srca[1] = 2LL;
    srca[2] = &v25;
    *(_OWORD *)&srca[3] = 1uLL;
    std::io::stdio::_eprint(srca);
  }
  else
  {
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    dest[0] = xmmword_F3390;
    *(_QWORD *)&v25 = dest;
    *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
    srca[0] = &unk_EE5F8;
    srca[1] = 2LL;
    srca[2] = &v25;
    *(_OWORD *)&srca[3] = 1uLL;
    std::io::stdio::_eprint(srca);
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = src;
    *(_QWORD *)&dest[1] = n;
    BYTE8(dest[1]) = 1;
    *(_QWORD *)&v25 = dest;
    *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v26 = &v28;
    v27 = <std::io::error::Error as core::fmt::Display>::fmt;
    srca[0] = &off_EE658;
    srca[1] = 3LL;
    srca[2] = &v25;
    *(_OWORD *)&srca[3] = 2uLL;
    std::io::stdio::_eprint(srca);
  }
  core::ptr::drop_in_place<std::io::error::Error>(&v28);
  return 1;
}
