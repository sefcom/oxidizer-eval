__int64 uu_wc::count_fast::count_bytes_using_splice()
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+Ch] [rbp-DCh] BYREF
  unsigned int v6; // [rsp+14h] [rbp-D4h]
  __int64 v7; // [rsp+18h] [rbp-D0h]
  __int64 v8; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v10; // [rsp+50h] [rbp-98h]

  v8 = 0x1B600000000LL;
  LODWORD(v9) = 256;
  WORD2(v9) = 0;
  std::fs::OpenOptions::open((char *)&v5 + 4, &v8);
  if ( HIDWORD(v5) == 1 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v7);
    return 1LL;
  }
  else
  {
    v1 = v6;
    v4 = v6;
    nix::sys::stat::fstat(&v8, v6);
    if ( (v8 & 1) != 0
      || (((unsigned int)v10 >> 8) & 0xFFF | HIDWORD(v10) & 0xFFFFF000) != 1
      || ((unsigned __int8)v10 | (v10 >> 12) & 0xFFFFFF00) != 3
      || (v2 = uucore::features::pipes::pipe(), (_DWORD)v2 == -1) )
    {
LABEL_12:
      core::ptr::drop_in_place<std::fs::File>(v1);
      return 1LL;
    }
    else
    {
      v5 = v2;
      v3 = 0LL;
      while ( 1 )
      {
        nix::fcntl::splice(&v8, (char *)&v5 + 4);
        if ( (v8 & 1) != 0 )
        {
LABEL_11:
          core::ptr::drop_in_place<std::fs::File>(HIDWORD(v5));
          core::ptr::drop_in_place<std::fs::File>((unsigned int)v5);
          v1 = v4;
          goto LABEL_12;
        }
        if ( !v9 )
          break;
        v3 += v9;
        if ( (unsigned int)uucore::features::pipes::splice_exact(&v5, &v4, v9) != 134 )
          goto LABEL_11;
      }
      core::ptr::drop_in_place<std::fs::File>(HIDWORD(v5));
      core::ptr::drop_in_place<std::fs::File>((unsigned int)v5);
      core::ptr::drop_in_place<std::fs::File>(v4);
      return 0LL;
    }
  }
}