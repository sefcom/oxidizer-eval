__off_t __fastcall uu_wc::count_fast::count_bytes_fast(int *a1)
{
  int v1; // ebp
  __int16 st_mode; // r14
  __off_t v3; // r12
  __off_t st_size; // r15
  __blksize_t st_blksize; // rbx
  unsigned __int64 v6; // rax
  int *v7; // rax
  bool v8; // of
  __blksize_t v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __off_t v12; // rdx
  unsigned int v13; // ebp
  int v14; // r14d
  int v15; // eax
  ssize_t v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  char v22; // al
  __off_t result; // rax
  int v24; // [rsp+Ch] [rbp-410Ch] BYREF
  __dev_t st_dev; // [rsp+10h] [rbp-4108h] BYREF
  int *v26; // [rsp+18h] [rbp-4100h]
  __off_t v27; // [rsp+20h] [rbp-40F8h]
  __int64 v28; // [rsp+28h] [rbp-40F0h]
  unsigned __int64 v29; // [rsp+30h] [rbp-40E8h]
  __int64 v30; // [rsp+38h] [rbp-40E0h] BYREF
  int v31; // [rsp+40h] [rbp-40D8h]
  __int16 v32; // [rsp+44h] [rbp-40D4h]
  int v33; // [rsp+48h] [rbp-40D0h] BYREF
  int fd; // [rsp+4Ch] [rbp-40CCh]
  __int64 v35; // [rsp+50h] [rbp-40C8h]
  stat buf; // [rsp+58h] [rbp-40C0h] BYREF
  _QWORD s[2054]; // [rsp+E8h] [rbp-4030h] BYREF

  s[1536] = 0LL;
  s[1024] = 0LL;
  s[512] = 0LL;
  s[0] = 0LL;
  v26 = a1;
  v1 = *a1;
  if ( fstat(*a1, &buf) == -1 )
  {
    v7 = _errno_location();
    if ( ((unsigned __int8)v7 & 3) == 0 )
    {
      nix::errno::consts::from_i32((unsigned int)*v7);
LABEL_11:
      v3 = 0LL;
      goto LABEL_44;
    }
    goto LABEL_62;
  }
  st_mode = buf.st_mode;
  v3 = 0LL;
  if ( v1 > 0 && SLOWORD(buf.st_mode) < 0 )
  {
    st_size = buf.st_size;
    if ( buf.st_size > 0 )
    {
      st_blksize = buf.st_blksize;
      v6 = sysconf(30);
      if ( !v6 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_119018);
      if ( (st_size | v6) >> 32 )
      {
        if ( st_size % v6 )
          return st_size;
      }
      else if ( (unsigned int)st_size % (unsigned int)v6 )
      {
        return st_size;
      }
      v8 = __OFADD__(1LL, st_blksize);
      v9 = st_blksize + 1;
      if ( v8 )
        core::panicking::panic_const::panic_const_add_overflow(&off_119030);
      if ( !v9 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_119048);
      if ( (v9 | (unsigned __int64)st_size) >> 32 )
        v10 = st_size % v9;
      else
        v10 = (unsigned int)st_size % (unsigned int)v9;
      v11 = <std::fs::File as std::io::Seek>::seek(v26, 0LL, st_size - v10);
      v3 = v12;
      if ( v11 )
      {
        std::io::error::repr_bitpacked::decode_repr(&buf, v12);
        if ( LOBYTE(buf.st_dev) >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&buf.st_ino);
        v3 = 0LL;
      }
    }
  }
  if ( (st_mode & 0x1000) == 0 )
    goto LABEL_44;
  v30 = 0x1B600000000LL;
  v31 = 256;
  v32 = 0;
  std::fs::OpenOptions::_open(&v33, &v30, aDevNull, 9LL);
  if ( v33 )
  {
    std::io::error::repr_bitpacked::decode_repr(&buf, v35);
    if ( LOBYTE(buf.st_dev) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&buf.st_ino);
    goto LABEL_11;
  }
  v13 = fd;
  v24 = fd;
  if ( fstat(fd, &buf) == -1 )
  {
    v7 = _errno_location();
    if ( ((unsigned __int8)v7 & 3) == 0 )
      goto LABEL_41;
    goto LABEL_62;
  }
  v3 = 0LL;
  if ( ((LODWORD(buf.st_rdev) >> 8) & 0xFFF | HIDWORD(buf.st_rdev) & 0xFFFFF000) != 1
    || (LOBYTE(buf.st_rdev) | (buf.st_rdev >> 12) & 0xFFFFFF00) != 3 )
  {
    goto LABEL_43;
  }
  if ( pipe((int *)&buf) == -1 )
  {
    v7 = _errno_location();
    if ( ((unsigned __int8)v7 & 3) == 0 )
    {
LABEL_41:
      nix::errno::consts::from_i32((unsigned int)*v7);
      goto LABEL_42;
    }
LABEL_62:
    core::panicking::panic_misaligned_pointer_dereference(
      4LL,
      v7,
      &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
  }
  if ( LODWORD(buf.st_dev) == -1 )
  {
LABEL_42:
    v3 = 0LL;
LABEL_43:
    std::sys::pal::unix::fs::debug_assert_fd_is_open(v13);
    close(v24);
LABEL_44:
    memset(s, 0, 0x4000uLL);
    v27 = v3;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = <std::fs::File as std::io::Read>::read(v26, s, 0x4000LL);
        v20 = v18;
        v28 = v19;
        v29 = v18;
        if ( v19 )
          break;
        if ( !v18 )
          return v27;
        v17 = __CFADD__(v18, v27);
        v27 += v18;
        if ( v17 )
          core::panicking::panic_const::panic_const_add_overflow(&off_119060);
      }
      switch ( v18 & 3 )
      {
        case 0uLL:
          v21 = 16LL;
          goto LABEL_52;
        case 1uLL:
          v21 = 15LL;
LABEL_52:
          v22 = *(_BYTE *)(v18 + v21);
          break;
        case 2uLL:
          v22 = std::sys::pal::unix::decode_error_kind(HIDWORD(v18));
          break;
        case 3uLL:
          v22 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v18));
          if ( v22 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v22 != 35 )
        return v27;
      std::io::error::repr_bitpacked::decode_repr(&buf, v20);
      if ( LOBYTE(buf.st_dev) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&buf.st_ino);
    }
  }
  st_dev = buf.st_dev;
  v3 = 0LL;
  while ( 1 )
  {
    v14 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd(v26);
    v15 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd((char *)&st_dev + 4);
    v16 = splice(v14, 0LL, v15, 0LL, (size_t)&unk_20000, 0);
    nix::errno::<impl nix::errno::consts::Errno>::result(&buf, v16);
    if ( LODWORD(buf.st_dev) )
    {
LABEL_37:
      std::sys::pal::unix::fs::debug_assert_fd_is_open(HIDWORD(st_dev));
      close(SHIDWORD(st_dev));
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)st_dev);
      close(st_dev);
      v13 = v24;
      goto LABEL_43;
    }
    if ( !buf.st_ino )
      break;
    v17 = __CFADD__(buf.st_ino, v3);
    v3 += buf.st_ino;
    if ( v17 )
      core::panicking::panic_const::panic_const_add_overflow(&off_119000);
    if ( (unsigned int)uucore::features::pipes::splice_exact(&st_dev, &v24) != 134 )
      goto LABEL_37;
  }
  std::sys::pal::unix::fs::debug_assert_fd_is_open(HIDWORD(st_dev));
  close(SHIDWORD(st_dev));
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)st_dev);
  st_size = v3;
  close(st_dev);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v24);
  close(v24);
  return st_size;
}
