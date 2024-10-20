_OWORD *__fastcall uu_truncate::file_truncate(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  _OWORD *result; // rax
  __int128 v7; // xmm0
  __int64 v8; // r15
  int v9; // ebp
  int fd[4]; // [rsp+8h] [rbp-120h] BYREF
  __int128 v11; // [rsp+18h] [rbp-110h]
  _QWORD v12[3]; // [rsp+28h] [rbp-100h] BYREF
  char v13; // [rsp+40h] [rbp-E8h]
  _QWORD v14[2]; // [rsp+48h] [rbp-E0h] BYREF
  __int64 dest; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-C8h]
  _QWORD *v17; // [rsp+68h] [rbp-C0h]
  __int64 v18; // [rsp+70h] [rbp-B8h]
  __int64 v19; // [rsp+78h] [rbp-B0h]
  int v20; // [rsp+90h] [rbp-98h]

  std::sys::pal::unix::fs::stat(&dest);
  if ( (_DWORD)dest == 2 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v16, a1);
    goto LABEL_6;
  }
  if ( (v20 & 0xF000) != 0x1000 )
  {
LABEL_6:
    dest = 0x1B600000000LL;
    LODWORD(v16) = 256;
    WORD2(v16) = a3;
    std::fs::OpenOptions::_open(fd, &dest, a1, a2);
    if ( fd[0] )
    {
      v8 = *(_QWORD *)&fd[2];
      if ( !(unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&fd[2]) && !a3 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v8, &dest);
        return 0LL;
      }
    }
    else
    {
      v9 = fd[1];
      LODWORD(v12[0]) = fd[1];
      v8 = std::fs::File::set_len(v12, a4);
      close(v9);
      if ( !v8 )
        return 0LL;
    }
    return (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                       v8,
                       a1,
                       a2);
  }
  v12[0] = 0LL;
  v12[1] = a1;
  v12[2] = a2;
  v13 = 1;
  v14[0] = v12;
  v14[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  dest = (__int64)&off_E07C8;
  v16 = 2LL;
  v19 = 0LL;
  v17 = v14;
  v18 = 1LL;
  alloc::fmt::format::format_inner(fd, &dest);
  DWORD2(v11) = 1;
  result = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v7 = *(_OWORD *)fd;
  result[1] = v11;
  *result = v7;
  return result;
}
