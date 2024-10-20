__int64 __fastcall uu_wc::count_fast::count_bytes_fast(__int64 a1)
{
  int *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  char v6; // al
  bool v7; // cf
  unsigned int v8; // ebp
  __int64 v9; // r13
  int v10; // eax
  ssize_t v11; // rax
  __int64 result; // rax
  int v13; // [rsp+Ch] [rbp-410Ch] BYREF
  __dev_t st_dev; // [rsp+10h] [rbp-4108h] BYREF
  __int64 v15; // [rsp+18h] [rbp-4100h]
  __int64 v16; // [rsp+20h] [rbp-40F8h]
  __int64 v17; // [rsp+28h] [rbp-40F0h]
  unsigned __int64 v18; // [rsp+30h] [rbp-40E8h]
  __int64 v19; // [rsp+38h] [rbp-40E0h] BYREF
  int v20; // [rsp+40h] [rbp-40D8h]
  __int16 v21; // [rsp+44h] [rbp-40D4h]
  int v22; // [rsp+48h] [rbp-40D0h] BYREF
  int fd; // [rsp+4Ch] [rbp-40CCh]
  __int64 v24; // [rsp+50h] [rbp-40C8h]
  struct stat buf; // [rsp+58h] [rbp-40C0h] BYREF
  _QWORD s[2054]; // [rsp+E8h] [rbp-4030h] BYREF

  s[1536] = 0LL;
  s[1024] = 0LL;
  s[512] = 0LL;
  s[0] = 0LL;
  v16 = a1;
  if ( fstat(0, &buf) == -1 )
  {
    v1 = _errno_location();
    if ( ((unsigned __int8)v1 & 3) != 0 )
      goto LABEL_43;
    nix::errno::consts::from_i32((unsigned int)*v1);
LABEL_8:
    v15 = 0LL;
    goto LABEL_9;
  }
  if ( (buf.st_mode & 0x1000) == 0 )
    goto LABEL_8;
  v19 = 0x1B600000000LL;
  v20 = 256;
  v21 = 0;
  std::fs::OpenOptions::_open(&v22, &v19, aDevNull, 9LL);
  if ( v22 )
  {
    std::io::error::repr_bitpacked::decode_repr(&buf, v24);
    if ( LOBYTE(buf.st_dev) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&buf.st_ino);
    goto LABEL_8;
  }
  v8 = fd;
  v13 = fd;
  if ( fstat(fd, &buf) == -1 )
  {
    v1 = _errno_location();
    if ( ((unsigned __int8)v1 & 3) == 0 )
      goto LABEL_39;
    goto LABEL_43;
  }
  v9 = 0LL;
  if ( ((LODWORD(buf.st_rdev) >> 8) & 0xFFF | HIDWORD(buf.st_rdev) & 0xFFFFF000) != 1
    || (LOBYTE(buf.st_rdev) | (buf.st_rdev >> 12) & 0xFFFFFF00) != 3 )
  {
    goto LABEL_41;
  }
  if ( pipe((int *)&buf) == -1 )
  {
    v1 = _errno_location();
    if ( ((unsigned __int8)v1 & 3) == 0 )
    {
LABEL_39:
      nix::errno::consts::from_i32((unsigned int)*v1);
      goto LABEL_40;
    }
LABEL_43:
    core::panicking::panic_misaligned_pointer_dereference(
      4LL,
      v1,
      &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
  }
  if ( LODWORD(buf.st_dev) == -1 )
  {
LABEL_40:
    v9 = 0LL;
LABEL_41:
    v15 = v9;
    std::sys::pal::unix::fs::debug_assert_fd_is_open(v8);
    close(v13);
LABEL_9:
    memset(s, 0, 0x4000uLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = <std::io::stdio::StdinLock as std::io::Read>::read(v16, s, 0x4000LL);
        v4 = v2;
        v17 = v3;
        v18 = v2;
        if ( v3 )
          break;
        if ( !v2 )
          return v15;
        v7 = __CFADD__(v2, v15);
        v15 += v2;
        if ( v7 )
          core::panicking::panic_const::panic_const_add_overflow(&off_119060);
      }
      switch ( v2 & 3 )
      {
        case 0uLL:
          v5 = 16LL;
          goto LABEL_17;
        case 1uLL:
          v5 = 15LL;
LABEL_17:
          v6 = *(_BYTE *)(v2 + v5);
          break;
        case 2uLL:
          v6 = std::sys::pal::unix::decode_error_kind(HIDWORD(v2));
          break;
        case 3uLL:
          v6 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v2));
          if ( v6 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v6 != 35 )
        return v15;
      std::io::error::repr_bitpacked::decode_repr(&buf, v4);
      if ( LOBYTE(buf.st_dev) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&buf.st_ino);
    }
  }
  st_dev = buf.st_dev;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd((char *)&st_dev + 4);
    v11 = splice(0, 0LL, v10, 0LL, (size_t)&unk_20000, 0);
    nix::errno::<impl nix::errno::consts::Errno>::result(&buf, v11);
    if ( LODWORD(buf.st_dev) )
    {
LABEL_34:
      std::sys::pal::unix::fs::debug_assert_fd_is_open(HIDWORD(st_dev));
      close(SHIDWORD(st_dev));
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)st_dev);
      close(st_dev);
      v8 = v13;
      goto LABEL_41;
    }
    if ( !buf.st_ino )
      break;
    v7 = __CFADD__(buf.st_ino, v9);
    v9 += buf.st_ino;
    if ( v7 )
      core::panicking::panic_const::panic_const_add_overflow(&off_119000);
    if ( (unsigned int)uucore::features::pipes::splice_exact(&st_dev, &v13) != 134 )
      goto LABEL_34;
  }
  std::sys::pal::unix::fs::debug_assert_fd_is_open(HIDWORD(st_dev));
  close(SHIDWORD(st_dev));
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)st_dev);
  close(st_dev);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v13);
  close(v13);
  return v9;
}
