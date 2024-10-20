char __fastcall uu_rm::remove_dir(void *src, __int128 **n, __int64 a3)
{
  char v6; // bp
  char v7; // dl
  __int64 v8; // rdi
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rax
  __int128 v11; // rax
  __int64 v12; // rax
  volatile signed __int64 *v13; // rax
  __int64 v14; // r14
  __int128 v16; // rax
  __int128 v17; // [rsp+8h] [rbp-1E0h] BYREF
  __int128 **v18; // [rsp+18h] [rbp-1D0h]
  __int64 (__fastcall *v19)(); // [rsp+20h] [rbp-1C8h]
  __int128 *v20; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-1B8h]
  volatile signed __int64 *v22; // [rsp+38h] [rbp-1B0h] BYREF
  char v23; // [rsp+40h] [rbp-1A8h]
  volatile signed __int64 *v24; // [rsp+48h] [rbp-1A0h] BYREF
  bool v25; // [rsp+50h] [rbp-198h]
  _QWORD srca[22]; // [rsp+58h] [rbp-190h] BYREF
  _OWORD dest[14]; // [rsp+108h] [rbp-E0h] BYREF

  v6 = *(_BYTE *)(a3 + 6);
  if ( v6 )
  {
    std::sys::pal::unix::fs::stat(srca);
    if ( LODWORD(srca[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = srca[1];
      *(_QWORD *)&dest[0] = 2LL;
LABEL_5:
      core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
      goto LABEL_6;
    }
    memcpy(dest, srca, 0xB0uLL);
    if ( *(_QWORD *)&dest[0] == 2LL )
      goto LABEL_5;
    if ( SBYTE8(dest[3]) < 0 )
    {
      if ( v6 != 2 )
        goto LABEL_6;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v17 = xmmword_F3390;
      v20 = &v17;
      v21 = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v20;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&v17 = 1LL;
      *((_QWORD *)&v17 + 1) = src;
      v18 = n;
      LOBYTE(v19) = 1;
      v20 = &v17;
      v21 = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE860;
      srca[1] = 2LL;
      srca[2] = &v20;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      srca[0] = &off_EE790;
      srca[1] = 1LL;
      srca[2] = 8LL;
      *(_OWORD *)&srca[3] = 0LL;
      std::io::stdio::_eprint(srca);
      v22 = (volatile signed __int64 *)&std::io::stdio::stderr::INSTANCE;
      v13 = (volatile signed __int64 *)<std::io::stdio::Stderr as std::io::Write>::flush(&v22);
      if ( v13 )
      {
        v24 = v13;
        *(_QWORD *)&v16 = uucore::util_name();
        v17 = v16;
        v20 = &v17;
        v21 = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v20;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&v17 = &v24;
        *((_QWORD *)&v17 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        srca[0] = &unk_EE7A0;
        srca[1] = 2LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        std::process::exit(1);
      }
    }
    else
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v17 = xmmword_F3390;
      v20 = &v17;
      v21 = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v20;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&v17 = 1LL;
      *((_QWORD *)&v17 + 1) = src;
      v18 = n;
      LOBYTE(v19) = 1;
      v20 = &v17;
      v21 = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE840;
      srca[1] = 2LL;
      srca[2] = &v20;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      srca[0] = &off_EE790;
      srca[1] = 1LL;
      srca[2] = 8LL;
      *(_OWORD *)&srca[3] = 0LL;
      std::io::stdio::_eprint(srca);
      v22 = (volatile signed __int64 *)&std::io::stdio::stderr::INSTANCE;
      v10 = (volatile signed __int64 *)<std::io::stdio::Stderr as std::io::Write>::flush(&v22);
      if ( v10 )
      {
        v24 = v10;
        *(_QWORD *)&v11 = uucore::util_name();
        v17 = v11;
        v20 = &v17;
        v21 = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v20;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&v17 = &v24;
        *((_QWORD *)&v17 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        srca[0] = &unk_EE7A0;
        srca[1] = 2LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        std::process::exit(1);
      }
    }
    if ( !(unsigned __int8)uucore::read_yes() )
      return 0;
  }
LABEL_6:
  std::sys::pal::unix::fs::readdir(srca, src, n);
  v7 = 2;
  if ( LOBYTE(srca[1]) != 2 )
    v7 = LOBYTE(srca[1]) != 0;
  v22 = (volatile signed __int64 *)srca[0];
  v23 = v7;
  if ( LOBYTE(srca[1]) != 2 )
  {
    v24 = (volatile signed __int64 *)srca[0];
    v25 = LOBYTE(srca[1]) != 0;
    if ( !*(_WORD *)(a3 + 3) )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      dest[0] = xmmword_F3390;
      *(_QWORD *)&v17 = dest;
      *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v17;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = src;
      *(_QWORD *)&dest[1] = n;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)&v17 = dest;
      *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE6D0;
      srca[1] = 2LL;
      srca[2] = &v17;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      goto LABEL_56;
    }
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(srca, &v24);
    if ( srca[0] )
    {
      if ( srca[1] )
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)srca[1]) )
          alloc::sync::Arc<T,A>::drop_slow(&srca[1]);
        v8 = srca[2];
        v9 = srca[3];
        *(_BYTE *)srca[2] = 0;
        if ( v9 )
          _rust_dealloc(v8, v9, 1LL);
      }
      else
      {
        core::ptr::drop_in_place<std::io::error::Error>(&srca[2]);
      }
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      dest[0] = xmmword_F3390;
      *(_QWORD *)&v17 = dest;
      *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
      srca[0] = &unk_EE5F8;
      srca[1] = 2LL;
      srca[2] = &v17;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = src;
      *(_QWORD *)&dest[1] = n;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)&v17 = dest;
      *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE710;
      srca[1] = 2LL;
      srca[2] = &v17;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_eprint(srca);
      goto LABEL_56;
    }
    v12 = std::sys::pal::unix::fs::rmdir(src, (size_t)n);
    if ( v12 )
    {
      v20 = (__int128 *)v12;
      if ( (unsigned __int8)std::io::error::Error::kind(v12) == 1 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        dest[0] = xmmword_F3390;
        *(_QWORD *)&v17 = dest;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&dest[0] = 1LL;
        *((_QWORD *)&dest[0] + 1) = src;
        *(_QWORD *)&dest[1] = n;
        BYTE8(dest[1]) = 1;
        *(_QWORD *)&v17 = dest;
        *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        srca[0] = &off_EE638;
        srca[1] = 2LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
      }
      else
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        dest[0] = xmmword_F3390;
        *(_QWORD *)&v17 = dest;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        srca[0] = &unk_EE5F8;
        srca[1] = 2LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 1uLL;
        std::io::stdio::_eprint(srca);
        *(_QWORD *)&dest[0] = 1LL;
        *((_QWORD *)&dest[0] + 1) = src;
        *(_QWORD *)&dest[1] = n;
        BYTE8(dest[1]) = 1;
        *(_QWORD *)&v17 = dest;
        *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = &v20;
        v19 = <std::io::error::Error as core::fmt::Display>::fmt;
        srca[0] = &off_EE658;
        srca[1] = 3LL;
        srca[2] = &v17;
        *(_OWORD *)&srca[3] = 2uLL;
        std::io::stdio::_eprint(srca);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v20);
LABEL_56:
      if ( !_InterlockedDecrement64(v24) )
        alloc::sync::Arc<T,A>::drop_slow(&v24);
      if ( v23 != 2 )
        return 1;
      goto LABEL_59;
    }
    if ( *(_BYTE *)(a3 + 5) )
    {
      uucore::features::fs::normalize_path(&v17, src, n);
      v14 = *((_QWORD *)&v17 + 1);
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&v17 + 1);
      *(_QWORD *)&dest[1] = v18;
      BYTE8(dest[1]) = 1;
      v20 = dest;
      v21 = <os_display::Quoted as core::fmt::Display>::fmt;
      srca[0] = &off_EE730;
      srca[1] = 2LL;
      srca[2] = &v20;
      *(_OWORD *)&srca[3] = 1uLL;
      std::io::stdio::_print(srca);
      if ( (_QWORD)v17 )
        _rust_dealloc(v14, v17, 1LL);
    }
    if ( !_InterlockedDecrement64(v24) )
      alloc::sync::Arc<T,A>::drop_slow(&v24);
    if ( v23 == 2 )
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v22);
    return 0;
  }
  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  dest[0] = xmmword_F3390;
  *(_QWORD *)&v17 = dest;
  *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
  srca[0] = &unk_EE5F8;
  srca[1] = 2LL;
  srca[2] = &v17;
  *(_OWORD *)&srca[3] = 1uLL;
  std::io::stdio::_eprint(srca);
  *(_QWORD *)&dest[0] = 1LL;
  *((_QWORD *)&dest[0] + 1) = src;
  *(_QWORD *)&dest[1] = n;
  BYTE8(dest[1]) = 1;
  *(_QWORD *)&v17 = dest;
  *((_QWORD *)&v17 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  srca[0] = &off_EE710;
  srca[1] = 2LL;
  srca[2] = &v17;
  *(_OWORD *)&srca[3] = 1uLL;
  std::io::stdio::_eprint(srca);
  if ( v23 != 2 )
  {
    if ( !_InterlockedDecrement64(v22) )
      alloc::sync::Arc<T,A>::drop_slow(&v22);
    return 1;
  }
LABEL_59:
  core::ptr::drop_in_place<std::io::error::Error>(&v22);
  return 1;
}
