__int64 __fastcall uu_wc::count_fast::count_bytes_using_splice(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v5; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+Ch] [rbp-DCh] BYREF
  unsigned int v7; // [rsp+14h] [rbp-D4h]
  __int64 v8; // [rsp+18h] [rbp-D0h]
  __int64 v9; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v11; // [rsp+50h] [rbp-98h]

  v9 = 0x1B600000000LL;
  LODWORD(v10) = 256;
  WORD2(v10) = 0;
  std::fs::OpenOptions::open((char *)&v6 + 4, &v9, aDevNull, 9LL);
  if ( HIDWORD(v6) )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v8);
    return 1LL;
  }
  v1 = v7;
  v5 = v7;
  nix::sys::stat::fstat(&v9, v7);
  if ( (_DWORD)v9
    || (((unsigned int)v11 >> 8) & 0xFFF | HIDWORD(v11) & 0xFFFFF000) != 1
    || (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne((unsigned __int8)v11 | (unsigned int)(v11 >> 12) & 0xFFFFFF00)
    || (v2 = uucore::features::pipes::pipe(), (_DWORD)v2 == -1) )
  {
LABEL_12:
    core::ptr::drop_in_place<std::fs::File>(v1);
    return 1LL;
  }
  v6 = v2;
  v3 = 0LL;
  while ( 1 )
  {
    nix::fcntl::splice(&v9, a1, 0LL, (char *)&v6 + 4, 0LL, 0x20000LL, 0);
    if ( (_DWORD)v9 )
    {
LABEL_11:
      core::ptr::drop_in_place<std::fs::File>(HIDWORD(v6));
      core::ptr::drop_in_place<std::fs::File>((unsigned int)v6);
      v1 = v5;
      goto LABEL_12;
    }
    if ( !v10 )
      break;
    v3 += v10;
    if ( (unsigned int)uucore::features::pipes::splice_exact(&v6, &v5, v10) != 134 )
      goto LABEL_11;
  }
  core::ptr::drop_in_place<std::fs::File>(HIDWORD(v6));
  core::ptr::drop_in_place<std::fs::File>((unsigned int)v6);
  core::ptr::drop_in_place<std::fs::File>(v5);
  return 0LL;
}
