__int64 __fastcall uu_yes::exec(__dev_t a1, __ino_t a2)
{
  __ino_t v2; // r13
  __dev_t v3; // rbp
  __sighandler_t v4; // rax
  __int64 st_dev_high; // rax
  __dev_t v6; // rax
  __ino_t v7; // rbp
  __dev_t v8; // r13
  int v9; // eax
  ssize_t v10; // rax
  unsigned __int64 v11; // r12
  size_t v12; // r15
  bool v13; // zf
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  bool v17; // cf
  int *v18; // rax
  __int64 v19; // rax
  __dev_t v20; // r14
  __ino_t v21; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __dev_t st_dev; // [rsp+8h] [rbp-F0h] BYREF
  __dev_t v34; // [rsp+10h] [rbp-E8h]
  __ino_t v35; // [rsp+18h] [rbp-E0h]
  __int64 v36; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-C8h] BYREF
  stat buf; // [rsp+38h] [rbp-C0h] BYREF

  v2 = a2;
  v3 = a1;
  v37 = std::io::stdio::stdout();
  v36 = std::io::stdio::Stdout::lock(&v37);
  v4 = signal(13, 0LL);
  nix::errno::<impl nix::errno::consts::Errno>::result(&buf, v4);
  if ( LODWORD(buf.st_dev) )
  {
    st_dev_high = SHIDWORD(buf.st_dev);
    if ( SHIDWORD(buf.st_dev) != 134LL )
      goto LABEL_31;
  }
  if ( fstat(1, &buf) == -1 )
  {
    v18 = _errno_location();
    if ( ((unsigned __int8)v18 & 3) != 0 )
      goto LABEL_55;
LABEL_33:
    v6 = nix::errno::consts::from_i32((unsigned int)*v18);
    goto LABEL_34;
  }
  if ( (buf.st_mode & 0x1000) != 0 )
  {
    do
    {
LABEL_23:
      v20 = a1;
      v21 = a2;
    }
    while ( !a2 );
    while ( 1 )
    {
      buf.st_dev = v20;
      buf.st_ino = v21;
      v22 = vmsplice(1, (const struct iovec *)&buf, 1uLL, 0);
      if ( v22 == -1LL )
        break;
      if ( v21 < v22 )
        core::slice::index::slice_start_index_len_fail(v22, v21, &off_FC448);
      v20 += v22;
      v21 -= v22;
      if ( !v21 )
        goto LABEL_23;
    }
    v18 = _errno_location();
    if ( ((unsigned __int8)v18 & 3) != 0 )
LABEL_55:
      core::panicking::panic_misaligned_pointer_dereference(
        4LL,
        v18,
        &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
    st_dev_high = nix::errno::consts::from_i32((unsigned int)*v18);
    if ( (unsigned int)st_dev_high <= 0x26 )
    {
      v23 = 0x4000400200LL;
      if ( _bittest64(&v23, (unsigned int)st_dev_high) )
        goto LABEL_36;
    }
LABEL_31:
    result = (st_dev_high << 32) | 2;
    goto LABEL_37;
  }
  if ( pipe((int *)&buf) == -1 )
  {
    v18 = _errno_location();
    if ( ((unsigned __int8)v18 & 3) != 0 )
      goto LABEL_55;
    goto LABEL_33;
  }
  v6 = HIDWORD(buf.st_dev);
  if ( LODWORD(buf.st_dev) == -1 )
  {
LABEL_34:
    result = (v6 << 32) | 2;
    goto LABEL_35;
  }
  v34 = a1;
  v35 = a2;
  st_dev = buf.st_dev;
  do
  {
LABEL_8:
    v7 = v35;
    v8 = v34;
  }
  while ( !v35 );
  while ( 1 )
  {
    buf.st_dev = v8;
    buf.st_ino = v7;
    v9 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd((char *)&st_dev + 4);
    v10 = vmsplice(v9, (const struct iovec *)&buf, 1uLL, 0);
    if ( v10 == -1 )
    {
      v18 = _errno_location();
      if ( ((unsigned __int8)v18 & 3) == 0 )
      {
        v31 = nix::errno::consts::from_i32((unsigned int)*v18);
        v2 = v35;
        v3 = v34;
        if ( (unsigned int)v31 <= 0x26 && (v32 = 0x4000400200LL, _bittest64(&v32, (unsigned int)v31)) )
          v30 = 0LL;
        else
          v30 = (v31 << 32) | 2;
        goto LABEL_50;
      }
      goto LABEL_55;
    }
    v11 = v10;
    v12 = v10;
    v13 = v10 == 0;
    while ( 1 )
    {
      if ( v13 )
        goto LABEL_18;
      v14 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd(&st_dev);
      v15 = splice(v14, 0LL, 1, 0LL, v12, 0);
      if ( v15 == -1LL )
        break;
      if ( !v15 )
      {
        v38 = 0LL;
        buf.st_dev = (__dev_t)&off_FC408;
        buf.st_ino = 1LL;
        buf.st_nlink = 8LL;
        *(_OWORD *)&buf.st_mode = 0LL;
        core::panicking::assert_failed(1LL, &v38, &unk_17208, &buf, &off_FC418, v16);
      }
      v17 = v12 < v15;
      v12 -= v15;
      v13 = v12 == 0;
      if ( v17 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_FC3F0);
    }
    v18 = _errno_location();
    if ( ((unsigned __int8)v18 & 3) != 0 )
      goto LABEL_55;
    v19 = nix::errno::consts::from_i32((unsigned int)*v18);
    if ( (_DWORD)v19 != 134 )
      break;
LABEL_18:
    if ( v7 < v11 )
      core::slice::index::slice_start_index_len_fail(v11, v7, &off_FC430);
    v8 += v11;
    v7 -= v11;
    if ( !v7 )
      goto LABEL_8;
  }
  if ( (unsigned int)v19 <= 0x26 && (v29 = 0x4000400200LL, _bittest64(&v29, (unsigned int)v19)) )
    v30 = 0LL;
  else
    v30 = (v19 << 32) | 2;
  v2 = v35;
  v3 = v34;
LABEL_50:
  std::sys::pal::unix::fs::debug_assert_fd_is_open(HIDWORD(st_dev));
  close(SHIDWORD(st_dev));
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)st_dev);
  close(st_dev);
  result = v30;
LABEL_35:
  while ( !result )
LABEL_36:
    result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v36, v3, v2);
LABEL_37:
  v25 = v36;
  v13 = (*(_DWORD *)(v36 + 12))-- == 1;
  if ( v13 )
  {
    v26 = result;
    v27 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v25, v27, 0LL);
    result = v26;
    v28 = v36;
    if ( _InterlockedExchange((volatile __int32 *)(v36 + 8), 0) == 2 )
    {
      std::sys::sync::mutex::futex::Mutex::wake(v28 + 8);
      return v26;
    }
  }
  return result;
}
