__int64 __fastcall uu_cp::platform::linux::clone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int64 v16; // [rsp+18h] [rbp-30h]
  int v17; // [rsp+20h] [rbp-28h] BYREF
  int fd; // [rsp+24h] [rbp-24h]
  __int64 v19; // [rsp+28h] [rbp-20h]

  v13 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  std::fs::File::open(&v17, &v13);
  if ( v17 )
    return v19;
  v7 = fd;
  std::fs::File::create(&v17, &v15);
  if ( v17 )
  {
    v8 = v19;
  }
  else
  {
    v9 = fd;
    if ( ioctl(fd, 0x40049409uLL, v7) )
    {
      switch ( a5 )
      {
        case 0:
          v8 = (std::sys::pal::unix::os::errno() << 32) | 2;
          goto LABEL_15;
        case 1:
          if ( !std::fs::copy(v13, v14, v15, v16) )
            v12 = 0LL;
          v8 = v12;
LABEL_15:
          v11 = v9;
          goto LABEL_16;
        case 2:
          v10 = uu_cp::platform::linux::sparse_copy(v13, v14, v15, v16);
          goto LABEL_11;
        case 3:
          v10 = uu_cp::platform::linux::sparse_copy_without_hole(v13, v14, v15, v16);
LABEL_11:
          v11 = v9;
          v8 = v10;
LABEL_16:
          core::ptr::drop_in_place<std::fs::File>(v11);
          break;
      }
    }
    else
    {
      core::ptr::drop_in_place<std::fs::File>(v9);
      v8 = 0LL;
    }
  }
  core::ptr::drop_in_place<std::fs::File>(v7);
  return v8;
}
