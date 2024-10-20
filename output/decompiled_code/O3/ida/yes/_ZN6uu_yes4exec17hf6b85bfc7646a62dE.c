__int64 __fastcall uu_yes::exec(__dev_t a1, __ino_t a2)
{
  __int64 v2; // rbx
  __dev_t st_dev_high; // rax
  __dev_t v4; // r15
  __ino_t v5; // rbp
  int v6; // eax
  ssize_t v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  int *v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  bool v13; // zf
  int *v14; // rax
  __dev_t v15; // rbp
  __ino_t v16; // r13
  unsigned __int64 v17; // rax
  int *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __dev_t st_dev; // [rsp+0h] [rbp-E8h] BYREF
  __dev_t v27; // [rsp+8h] [rbp-E0h]
  __int64 v28; // [rsp+10h] [rbp-D8h] BYREF
  int v29; // [rsp+1Ch] [rbp-CCh] BYREF
  __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  stat buf; // [rsp+28h] [rbp-C0h] BYREF

  v27 = a1;
  v30 = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(&v30);
  v28 = v2;
  if ( signal(13, 0LL) == (__sighandler_t)-1LL )
  {
    v10 = _errno_location();
    v11 = nix::errno::consts::from_i32((unsigned int)*v10);
  }
  else
  {
    v29 = 1;
    if ( fstat(1, &buf) == -1 )
      goto LABEL_17;
    if ( (buf.st_mode & 0x1000) == 0 )
    {
      if ( pipe((int *)&buf) != -1 )
      {
        st_dev_high = HIDWORD(buf.st_dev);
        if ( LODWORD(buf.st_dev) != -1 )
        {
          st_dev = buf.st_dev;
          if ( !a2 )
          {
            while ( 1 )
              ;
          }
LABEL_7:
          v4 = v27;
          v5 = a2;
          while ( 1 )
          {
            buf.st_dev = v4;
            buf.st_ino = v5;
            v6 = <std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd((char *)&st_dev + 4);
            v7 = vmsplice(v6, (const struct iovec *)&buf, 1uLL, 0);
            if ( v7 == -1 )
              break;
            v8 = v7;
            v9 = uucore::features::pipes::splice_exact(&st_dev, &v29, v7);
            if ( (_BYTE)v9 != 0x86 )
            {
              if ( (unsigned __int8)v9 > 0x26u )
                goto LABEL_41;
              v20 = (unsigned __int8)v9;
              goto LABEL_39;
            }
            if ( v5 < v8 )
              core::slice::index::slice_start_index_len_fail(v8, v5, &off_D6EF0);
            v4 += v8;
            v5 -= v8;
            if ( !v5 )
              goto LABEL_7;
          }
          v23 = _errno_location();
          v9 = nix::errno::consts::from_i32((unsigned int)*v23);
          if ( (unsigned __int8)v9 > 0x26u )
            goto LABEL_41;
          v20 = (unsigned __int8)v9;
LABEL_39:
          v24 = 0x4000400200LL;
          if ( _bittest64(&v24, v20) )
          {
            v25 = 0LL;
            goto LABEL_42;
          }
LABEL_41:
          v25 = (v9 << 32) | 2;
LABEL_42:
          close(SHIDWORD(st_dev));
          close(st_dev);
          result = v25;
          if ( !v25 )
            goto LABEL_30;
          goto LABEL_19;
        }
LABEL_18:
        result = (st_dev_high << 32) | 2;
LABEL_19:
        v13 = (*(_DWORD *)(v2 + 12))-- == 1;
        if ( !v13 )
          return result;
        goto LABEL_32;
      }
LABEL_17:
      v14 = _errno_location();
      st_dev_high = nix::errno::consts::from_i32((unsigned int)*v14);
      goto LABEL_18;
    }
    if ( !a2 )
    {
      while ( 1 )
        ;
    }
LABEL_22:
    v15 = v27;
    v16 = a2;
    while ( 1 )
    {
      buf.st_dev = v15;
      buf.st_ino = v16;
      v17 = vmsplice(1, (const struct iovec *)&buf, 1uLL, 0);
      if ( v17 == -1LL )
        break;
      if ( v16 < v17 )
        core::slice::index::slice_start_index_len_fail(v17, v16, &off_D6F08);
      v15 += v17;
      v16 -= v17;
      if ( !v16 )
        goto LABEL_22;
    }
    v18 = _errno_location();
    v11 = nix::errno::consts::from_i32((unsigned int)*v18);
    if ( (unsigned __int8)v11 <= 0x26u )
    {
      v19 = 0x4000400200LL;
      if ( _bittest64(&v19, (unsigned __int8)v11) )
      {
        do
LABEL_30:
          result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v28, v27, a2);
        while ( !result );
        v2 = v28;
        v13 = (*(_DWORD *)(v28 + 12))-- == 1;
        if ( !v13 )
          return result;
        goto LABEL_32;
      }
    }
  }
  result = (v11 << 32) | 2;
  v13 = (*(_DWORD *)(v2 + 12))-- == 1;
  if ( !v13 )
    return result;
LABEL_32:
  *(_QWORD *)v2 = 0LL;
  if ( _InterlockedExchange((volatile __int32 *)(v2 + 8), 0) == 2 )
  {
    v21 = v2 + 8;
    v22 = result;
    std::sys::sync::mutex::futex::Mutex::wake(v21);
    return v22;
  }
  return result;
}
