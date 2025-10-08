unsigned __int64 __fastcall uu_cp::platform::linux::clone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __int64 v15; // [rsp+18h] [rbp-30h]
  int v16; // [rsp+20h] [rbp-28h] BYREF
  int fd; // [rsp+24h] [rbp-24h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  std::fs::File::open(&v16, &v12);
  if ( v16 == 1 )
    return v18;
  v7 = fd;
  std::fs::File::create(&v16, &v14);
  if ( v16 == 1 )
  {
    v6 = v18;
  }
  else
  {
    v8 = fd;
    if ( ioctl(fd, 0x40049409uLL, v7) )
    {
      switch ( a5 )
      {
        case 0:
          v6 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
          break;
        case 1:
          v6 = 0LL;
          if ( (std::fs::copy(v12, v13, v14, v15) & 1) != 0 )
            v6 = v10;
          break;
        case 2:
          v9 = uu_cp::platform::linux::sparse_copy(v12, v13, v14, v15);
          goto LABEL_11;
        case 3:
          v9 = uu_cp::platform::linux::sparse_copy_without_hole(v12, v13, v14, v15);
LABEL_11:
          v6 = v9;
          break;
      }
      core::ptr::drop_in_place<std::fs::File>(v8);
    }
    else
    {
      core::ptr::drop_in_place<std::fs::File>(v8);
      v6 = 0LL;
    }
  }
  core::ptr::drop_in_place<std::fs::File>(v7);
  return v6;
}