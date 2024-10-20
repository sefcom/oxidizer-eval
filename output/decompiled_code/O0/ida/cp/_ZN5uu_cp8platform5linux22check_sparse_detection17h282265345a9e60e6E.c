__int64 __fastcall uu_cp::platform::linux::check_sparse_detection(__int64 a1, __int64 a2, __int64 a3)
{
  int fd; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v5; // [rsp+10h] [rbp-D8h] BYREF
  int v6; // [rsp+18h] [rbp-D0h]
  __int16 v7; // [rsp+1Ch] [rbp-CCh]
  _DWORD v8[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-C0h]
  _QWORD v10[23]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = 0x1B600000000LL;
  v6 = 1;
  v7 = 0;
  std::fs::OpenOptions::_open(v8, &v5, a2, a3);
  if ( v8[0] )
  {
    *(_QWORD *)(a1 + 8) = v9;
    *(_BYTE *)a1 = 1;
  }
  else
  {
    fd = v8[1];
    std::fs::File::metadata(v10, &fd);
    if ( v10[0] == 2LL )
    {
      *(_QWORD *)(a1 + 8) = v10[1];
      *(_BYTE *)a1 = 1;
    }
    else if ( v10[12] >= v10[10] >> 9 )
    {
      *(_WORD *)a1 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
    }
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
  }
  return a1;
}
