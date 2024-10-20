__int64 __fastcall uu_dd::is_stdout_redirected_to_seekable_file()
{
  unsigned int v0; // ebp
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // r15d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int fd; // [rsp+4h] [rbp-54h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF

  std::sys::pal::unix::fs::canonicalize(&v12, aDevStdout, 11LL);
  v1 = v12;
  if ( v12 == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v10, aDevStdout, 11LL);
    v1 = v10;
    v2 = v11[0];
    v3 = v11[1];
    core::ptr::drop_in_place<std::io::error::Error>(v13);
  }
  else
  {
    v2 = v13[0];
    v3 = v13[1];
  }
  v10 = 0x1B600000000LL;
  LODWORD(v11[0]) = 1;
  WORD2(v11[0]) = 0;
  std::fs::OpenOptions::_open(&v12, &v10, v2, v3);
  v4 = v12;
  if ( (_DWORD)v12 )
  {
    v0 = 0;
    if ( !v1 )
      goto LABEL_7;
    goto LABEL_6;
  }
  fd = HIDWORD(v12);
  v10 = <std::fs::File as std::io::Seek>::seek(&fd, 2LL, 0LL);
  v11[0] = v6;
  if ( v10 || (v10 = <std::fs::File as std::io::Seek>::seek(&fd, 1LL, 0LL), v11[0] = v7, v10) )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v11);
    v0 = 0;
  }
  else
  {
    if ( !<std::fs::File as std::io::Seek>::seek(&fd, 0LL, 0LL) )
      v8 = 0LL;
    v10 = v8;
    LOBYTE(v0) = v8 == 0;
    if ( v8 )
      core::ptr::drop_in_place<std::io::error::Error>(&v10);
  }
  close(fd);
  if ( v1 )
LABEL_6:
    _rust_dealloc(v2, v1, 1LL);
LABEL_7:
  if ( v4 )
    core::ptr::drop_in_place<std::io::error::Error>(v13);
  return v0;
}
