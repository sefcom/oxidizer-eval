__int64 uu_dd::is_stdout_redirected_to_seekable_file()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int fd; // [rsp+4h] [rbp-74h] BYREF
  __int128 v7; // [rsp+8h] [rbp-70h] BYREF
  __int64 v8; // [rsp+18h] [rbp-60h]
  _DWORD v9[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  std::sys::pal::unix::fs::canonicalize(&v13, aDevStdout, 11LL);
  if ( (_QWORD)v13 == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v7, aDevStdout, 11LL);
    v12 = v8;
    v11 = v7;
    if ( (_QWORD)v13 == 0x8000000000000000LL )
    {
      std::io::error::repr_bitpacked::decode_repr(&v7, *((_QWORD *)&v13 + 1));
      if ( (unsigned __int8)v7 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v7 + 8);
    }
  }
  else
  {
    v12 = v14;
    v11 = v13;
  }
  v0 = *((_QWORD *)&v11 + 1);
  v1 = v12;
  core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v11 + 1), 1LL, 1LL, v12);
  *(_QWORD *)&v7 = 0x1B600000000LL;
  DWORD2(v7) = 1;
  WORD6(v7) = 0;
  std::fs::OpenOptions::_open(v9, &v7, v0, v1);
  if ( v9[0] )
  {
    LODWORD(v0) = 0;
    goto LABEL_20;
  }
  fd = v9[1];
  if ( <std::fs::File as std::io::Seek>::seek(&fd, 2LL, 0LL) )
  {
    std::io::error::repr_bitpacked::decode_repr(&v7, v2);
    if ( (unsigned __int8)v7 >= 3u )
LABEL_17:
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v7 + 8);
  }
  else if ( <std::fs::File as std::io::Seek>::seek(&fd, 1LL, 0LL) )
  {
    std::io::error::repr_bitpacked::decode_repr(&v7, v3);
    if ( (unsigned __int8)v7 >= 3u )
      goto LABEL_17;
  }
  else
  {
    LOBYTE(v0) = 1;
    if ( !<std::fs::File as std::io::Seek>::seek(&fd, 0LL, 0LL) || !v4 )
      goto LABEL_19;
    std::io::error::repr_bitpacked::decode_repr(&v7, v4);
    if ( (unsigned __int8)v7 >= 3u )
      goto LABEL_17;
  }
  LODWORD(v0) = 0;
LABEL_19:
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
  close(fd);
LABEL_20:
  alloc::raw_vec::RawVec<T,A>::current_memory(&v7, &v11);
  if ( *((_QWORD *)&v7 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v12, v7, *((_QWORD *)&v7 + 1), v8);
  if ( v9[0] )
  {
    std::io::error::repr_bitpacked::decode_repr(&v7, v10);
    if ( (unsigned __int8)v7 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v7 + 8);
  }
  return (unsigned int)v0;
}
