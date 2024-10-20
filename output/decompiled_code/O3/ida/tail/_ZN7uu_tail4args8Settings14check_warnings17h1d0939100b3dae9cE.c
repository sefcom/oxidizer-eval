void __fastcall uu_tail::args::Settings::check_warnings(__int64 a1)
{
  char **v2; // rax
  __pid_t v3; // ebp
  char v4; // r15
  char **v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 p_fd; // rsi
  unsigned __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  char ***v14; // rbx
  bool v15; // al
  __int128 *v16; // [rsp+0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+8h] [rbp-F0h]
  __int128 v18; // [rsp+10h] [rbp-E8h] BYREF
  int fd; // [rsp+20h] [rbp-D8h] BYREF
  char v20; // [rsp+24h] [rbp-D4h]
  char **v21; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-C8h]
  __int128 **v23; // [rsp+38h] [rbp-C0h]
  _OWORD v24[2]; // [rsp+40h] [rbp-B8h]
  int v25; // [rsp+60h] [rbp-98h]

  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      if ( *(_BYTE *)(a1 + 76) != 2 )
        goto LABEL_11;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v18 = xmmword_163010;
      v16 = &v18;
      v17 = <&T as core::fmt::Display>::fmt;
      v21 = (char **)&unk_15BA60;
      v22 = 2LL;
      v23 = &v16;
      v24[0] = 1uLL;
      std::io::stdio::_eprint(&v21);
      v2 = &off_15BA90;
    }
    else
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v18 = xmmword_163010;
      v16 = &v18;
      v17 = <&T as core::fmt::Display>::fmt;
      v21 = (char **)&unk_15BA60;
      v22 = 2LL;
      v23 = &v16;
      v24[0] = 1uLL;
      std::io::stdio::_eprint(&v21);
      v2 = &off_15BA80;
    }
    v21 = v2;
    v22 = 1LL;
    v23 = (__int128 **)&byte_8;
    v24[0] = 0LL;
    std::io::stdio::_eprint(&v21);
  }
LABEL_11:
  v3 = *(_DWORD *)(a1 + 68);
  v4 = *(_BYTE *)(a1 + 76);
  if ( !v3 )
  {
    if ( v4 == 2 )
      return;
LABEL_23:
    v7 = 0x8000000000000000LL;
    v8 = *(_QWORD *)(a1 + 32);
    p_fd = 48LL * *(_QWORD *)(a1 + 40);
    do
    {
      if ( !p_fd )
        return;
      v10 = v8 + 48;
      p_fd -= 48LL;
      v11 = *(_QWORD *)(v8 + 24) == 0x8000000000000000LL;
      v8 += 48LL;
    }
    while ( !v11 );
    if ( !v3 && !v4 && *(_QWORD *)(a1 + 40) == 1LL )
    {
      LODWORD(v18) = 0;
      p_fd = (__int64)&v18;
      std::fs::File::metadata(&v21, &v18, v8, 0x8000000000000000LL);
      if ( (_DWORD)v21 != 2 )
      {
        v18 = *(_OWORD *)((char *)v24 + 8);
        p_fd = (__int64)&fd;
        fd = 0;
        v20 = 1;
        v10 = (unsigned __int64)&v21;
        std::fs::File::metadata(&v21, &fd, v12, v13);
        if ( (_DWORD)v21 == 2 )
        {
          v10 = v22;
          core::ptr::drop_in_place<std::io::error::Error>(v22);
          if ( !v20 )
          {
            v10 = (unsigned int)fd;
            if ( fd != -1 )
              close(fd);
            goto LABEL_27;
          }
          v15 = 0;
        }
        else
        {
          v15 = (v25 & 0xF000) != 0x8000;
        }
        v7 = (unsigned int)fd;
        fd = -1;
        if ( (_DWORD)v7 == -1 )
          core::option::unwrap_failed(&anon_ddeda120bd542e9b42a19f5271c530d9_1_llvm_10160828019337689542);
        if ( v15 )
          return;
        goto LABEL_27;
      }
      v14 = (char ***)v22;
      close(0);
      v10 = (unsigned __int64)v14;
      core::ptr::drop_in_place<std::io::error::Error>(v14);
    }
LABEL_27:
    std::io::stdio::stdin(v10, p_fd, v8, v7);
    if ( !isatty(0) )
      return;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v18 = xmmword_163010;
    v16 = &v18;
    v17 = <&T as core::fmt::Display>::fmt;
    v21 = (char **)&unk_15BA60;
    v22 = 2LL;
    v23 = &v16;
    v24[0] = 1uLL;
    std::io::stdio::_eprint(&v21);
    v5 = &off_15BAC0;
    goto LABEL_31;
  }
  if ( v4 != 2 )
  {
    if ( kill(v3, 0) )
    {
      v6 = (unsigned int)std::sys::pal::unix::os::errno();
      core::ptr::drop_in_place<std::io::error::Error>((v6 << 32) | 2);
      if ( (_DWORD)v6 == 38 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v18 = xmmword_163010;
        v16 = &v18;
        v17 = <&T as core::fmt::Display>::fmt;
        v21 = (char **)&unk_15BA60;
        v22 = 2LL;
        v23 = &v16;
        v24[0] = 1uLL;
        std::io::stdio::_eprint(&v21);
        v21 = &off_15BAA0;
        v22 = 1LL;
        v23 = (__int128 **)&byte_8;
        v24[0] = 0LL;
        std::io::stdio::_eprint(&v21);
      }
    }
    goto LABEL_23;
  }
  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v18 = xmmword_163010;
  v16 = &v18;
  v17 = <&T as core::fmt::Display>::fmt;
  v21 = (char **)&unk_15BA60;
  v22 = 2LL;
  v23 = &v16;
  v24[0] = 1uLL;
  std::io::stdio::_eprint(&v21);
  v5 = &off_15BAB0;
LABEL_31:
  v21 = v5;
  v22 = 1LL;
  v23 = (__int128 **)&byte_8;
  v24[0] = 0LL;
  std::io::stdio::_eprint(&v21);
}
