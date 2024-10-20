int __fastcall uu_cp::platform::linux::check_for_data(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __off_t v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int fd; // [rsp+4h] [rbp-E4h] BYREF
  _DWORD v16[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-D8h]
  __int64 v18; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-C8h]
  __int64 v20; // [rsp+68h] [rbp-80h]
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]

  v18 = 0x1B600000000LL;
  LODWORD(v19) = 1;
  WORD2(v19) = 0;
  std::fs::OpenOptions::_open(v16, &v18, a2, a3);
  if ( v16[0] )
  {
    result = v17;
    *(_QWORD *)a1 = v17;
    *(_BYTE *)(a1 + 8) = 2;
    return result;
  }
  fd = v16[1];
  std::fs::File::metadata(&v18, &fd);
  if ( (_DWORD)v18 == 2 )
  {
    v4 = v19;
LABEL_5:
    *(_QWORD *)a1 = v4;
    *(_BYTE *)(a1 + 8) = 2;
    return close(fd);
  }
  v5 = v20;
  if ( v20 )
  {
    v6 = v22;
    v7 = lseek(fd, 0LL, 3);
    if ( v7 == -1 )
    {
      *(_QWORD *)a1 = v5;
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v6;
      return close(fd);
    }
    if ( v7 >= 0 )
    {
      *(_QWORD *)a1 = v5;
      *(_BYTE *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = v6;
      return close(fd);
    }
    v4 = (std::sys::pal::unix::os::errno() << 32) | 2;
    goto LABEL_5;
  }
  v8 = v21;
  if ( !v21 )
  {
    v11 = 1LL;
    goto LABEL_18;
  }
  if ( v21 < 0 )
  {
    v9 = 0LL;
LABEL_27:
    alloc::raw_vec::handle_error(v9, v8);
  }
  v9 = 1LL;
  v10 = _rust_alloc_zeroed(v21, 1LL);
  if ( !v10 )
    goto LABEL_27;
  v11 = v10;
LABEL_18:
  if ( <std::fs::File as std::io::Read>::read(&fd, v11, v8) )
  {
    *(_QWORD *)a1 = v12;
    *(_BYTE *)(a1 + 8) = 2;
    if ( !v8 )
      return close(fd);
  }
  else
  {
    v13 = 0LL;
    do
    {
      v14 = v13;
      if ( v8 == v13 )
        break;
      ++v13;
    }
    while ( !*(_BYTE *)(v11 + v14) );
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = v8 != v14;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( !v8 )
      return close(fd);
  }
  _rust_dealloc(v11, v8, 1LL);
  return close(fd);
}
