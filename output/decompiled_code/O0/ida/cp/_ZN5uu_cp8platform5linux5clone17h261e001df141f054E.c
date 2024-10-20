unsigned __int64 __fastcall uu_cp::platform::linux::clone(void *src, size_t n, void *a3, size_t a4, char a5)
{
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int fd; // [rsp+4h] [rbp-64h]
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  int v16; // [rsp+10h] [rbp-58h]
  __int16 v17; // [rsp+14h] [rbp-54h]
  _DWORD v18[2]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+28h] [rbp-40h] BYREF
  int v21; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v22; // [rsp+30h] [rbp-38h]

  v15 = 0x1B600000000LL;
  v16 = 1;
  v17 = 0;
  std::fs::OpenOptions::_open(v18, &v15, src, n);
  if ( v18[0] )
    return v19;
  fd = v18[1];
  v15 = 0x1B600000000LL;
  v16 = 16777472;
  v17 = 1;
  std::fs::OpenOptions::_open(&v20, &v15, a3, a4);
  if ( v20 )
  {
    v8 = v22;
LABEL_5:
    std::sys::pal::unix::fs::debug_assert_fd_is_open(fd);
    close(fd);
    return v8;
  }
  v9 = v21;
  if ( !ioctl(v21, 0x40049409uLL, fd) )
  {
    std::sys::pal::unix::fs::debug_assert_fd_is_open(v9);
    close(v9);
    v8 = 0LL;
    goto LABEL_5;
  }
  switch ( a5 )
  {
    case 0:
      v8 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
      break;
    case 1:
      v11 = std::sys::pal::unix::fs::copy(src, n, a3, a4);
      v8 = v12;
      if ( !v11 )
        v8 = 0LL;
      break;
    case 2:
      v10 = uu_cp::platform::linux::sparse_copy(src, n, a3, a4);
      goto LABEL_12;
    case 3:
      v10 = uu_cp::platform::linux::sparse_copy_without_hole(src, n, a3, a4);
LABEL_12:
      v8 = v10;
      break;
  }
  std::sys::pal::unix::fs::debug_assert_fd_is_open(v9);
  close(v9);
  std::sys::pal::unix::fs::debug_assert_fd_is_open(fd);
  close(fd);
  return v8;
}
