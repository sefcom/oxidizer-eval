__int64 __fastcall uu_cp::platform::linux::copy_fifo_contents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebp
  __mode_t v8; // eax
  __int16 v9; // r12
  int v10; // [rsp+8h] [rbp-120h] BYREF
  int fd; // [rsp+Ch] [rbp-11Ch] BYREF
  _DWORD v12[3]; // [rsp+10h] [rbp-118h] BYREF
  __int16 v13; // [rsp+1Ch] [rbp-10Ch]
  __int64 v14; // [rsp+20h] [rbp-108h] BYREF
  int v15; // [rsp+28h] [rbp-100h]
  __int16 v16; // [rsp+2Ch] [rbp-FCh]
  int v17; // [rsp+30h] [rbp-F8h] BYREF
  int v18; // [rsp+34h] [rbp-F4h]
  _DWORD v19[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+88h] [rbp-A0h]

  v14 = 0x1B600000000LL;
  v15 = 1;
  v16 = 0;
  std::fs::OpenOptions::_open(&v17, &v14, a1, a2);
  if ( v17 )
    return 1LL;
  v7 = v18;
  v10 = v18;
  v8 = umask(0);
  v9 = ~(_WORD)v8;
  umask(v8);
  v12[0] = 0;
  v13 = 1;
  v12[2] = 256;
  v12[1] = v9 & 0x192;
  std::fs::OpenOptions::_open(v19, v12, a3, a4);
  if ( v19[0] )
    goto LABEL_8;
  fd = v19[1];
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v10, &fd)
    || (std::fs::File::metadata(&v20, &v10), v20 == 2)
    || std::fs::File::set_permissions(&fd, v21) )
  {
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
    v7 = v10;
LABEL_8:
    std::sys::pal::unix::fs::debug_assert_fd_is_open(v7);
    close(v10);
    return 1LL;
  }
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
  close(fd);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v10);
  close(v10);
  return 0LL;
}
