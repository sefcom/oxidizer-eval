__int64 __fastcall uu_cp::platform::linux::clone(void *src, size_t n, void *a3, size_t a4, char a5)
{
  __int64 v10; // rbx
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int fd; // [rsp+4h] [rbp-54h]
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  int v17; // [rsp+10h] [rbp-48h]
  __int16 v18; // [rsp+14h] [rbp-44h]
  int v19; // [rsp+18h] [rbp-40h] BYREF
  int v20; // [rsp+1Ch] [rbp-3Ch]
  __int64 v21; // [rsp+20h] [rbp-38h]

  v16 = 0x1B600000000LL;
  v17 = 1;
  v18 = 0;
  std::fs::OpenOptions::_open(&v19, &v16, src, n);
  if ( v19 )
    return v21;
  fd = v20;
  v16 = 0x1B600000000LL;
  v17 = 16777472;
  v18 = 1;
  std::fs::OpenOptions::_open(&v19, &v16, a3, a4);
  if ( v19 )
  {
    v10 = v21;
  }
  else
  {
    v11 = v20;
    if ( ioctl(v20, 0x40049409uLL, fd) )
    {
      switch ( a5 )
      {
        case 0:
          v12 = v11;
          v10 = (std::sys::pal::unix::os::errno() << 32) | 2;
          break;
        case 1:
          v12 = v11;
          if ( !std::sys::pal::unix::fs::copy(src, n, a3, a4) )
            v14 = 0LL;
          v10 = v14;
          break;
        case 2:
          v13 = uu_cp::platform::linux::sparse_copy(src, n, a3, a4);
          goto LABEL_12;
        case 3:
          v13 = uu_cp::platform::linux::sparse_copy_without_hole(src, n, a3, a4);
LABEL_12:
          v12 = v11;
          v10 = v13;
          break;
      }
      close(v12);
      close(fd);
      return v10;
    }
    close(v11);
    v10 = 0LL;
  }
  close(fd);
  return v10;
}
