__int64 __fastcall uu_cp::platform::linux::copy_fifo_contents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __mode_t v8; // eax
  __int16 v9; // bp
  int v10; // [rsp+8h] [rbp-F0h] BYREF
  int fd; // [rsp+Ch] [rbp-ECh] BYREF
  int v12; // [rsp+10h] [rbp-E8h] BYREF
  int v13; // [rsp+14h] [rbp-E4h]
  __int64 v14; // [rsp+20h] [rbp-D8h] BYREF
  int v15; // [rsp+28h] [rbp-D0h]
  __int16 v16; // [rsp+2Ch] [rbp-CCh]
  unsigned int v17; // [rsp+58h] [rbp-A0h]

  v14 = 0x1B600000000LL;
  v15 = 1;
  v16 = 0;
  std::fs::OpenOptions::_open(&v12, &v14, a1, a2);
  if ( v12 )
    return 1LL;
  v7 = v13;
  v10 = v13;
  v8 = umask(0);
  v9 = ~(_WORD)v8;
  umask(v8);
  LODWORD(v14) = 0;
  v16 = 1;
  v15 = 256;
  HIDWORD(v14) = v9 & 0x192;
  std::fs::OpenOptions::_open(&v12, &v14, a3, a4);
  if ( v12 )
    goto LABEL_8;
  fd = v13;
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v10, &fd)
    || (std::fs::File::metadata(&v14, &v10), (_DWORD)v14 == 2)
    || std::fs::File::set_permissions(&fd, v17) )
  {
    close(fd);
    v7 = v10;
LABEL_8:
    close(v7);
    return 1LL;
  }
  close(fd);
  close(v10);
  return 0LL;
}
