__int64 uu_nohup::replace_fds()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // ebx
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  int fd[2]; // [rsp+8h] [rbp-40h] BYREF
  int v9[2]; // [rsp+10h] [rbp-38h]
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+20h] [rbp-28h]

  std::io::stdio::stdin();
  if ( !(unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
  {
LABEL_7:
    std::io::stdio::stdout();
    if ( (unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
    {
      uu_nohup::find_stdout(fd);
      result = *(_QWORD *)fd;
      if ( *(_QWORD *)fd )
        return result;
      v1 = v9[0];
      if ( dup2(v9[0], 1) != 1 )
      {
        v6 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
        *(_QWORD *)v9 = aStdout;
        v10 = 6LL;
        v11 = v6;
        *(_QWORD *)fd = 0x8000000000000001LL;
        v3 = alloc::boxed::Box<T>::new(fd);
        goto LABEL_17;
      }
      core::ptr::drop_in_place<std::fs::File>(v1);
    }
    if ( !(unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() || dup2(1, 2) == 2 )
      return 0LL;
    v5 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
    *(_QWORD *)v9 = aStderr;
    v10 = 6LL;
    v11 = v5;
    *(_QWORD *)fd = 0x8000000000000001LL;
    return alloc::boxed::Box<T>::new(fd);
  }
  std::fs::File::open(fd);
  if ( (fd[0] & 1) != 0 )
  {
    v0 = *(_QWORD *)v9;
    *(_QWORD *)fd = 0x8000000000000001LL;
    *(_QWORD *)v9 = aStdin;
    v10 = 5LL;
    v11 = v0;
    return alloc::boxed::Box<T>::new(fd);
  }
  v1 = fd[1];
  if ( !dup2(fd[1], 0) )
  {
    core::ptr::drop_in_place<std::fs::File>(v1);
    goto LABEL_7;
  }
  v2 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
  *(_QWORD *)v9 = aStdin;
  v10 = 5LL;
  v11 = v2;
  *(_QWORD *)fd = 0x8000000000000001LL;
  v3 = alloc::boxed::Box<T>::new(fd);
LABEL_17:
  v7 = v3;
  core::ptr::drop_in_place<std::fs::File>(v1);
  return v7;
}