__int64 __fastcall uu_pathchk::check_searchable(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  char v3; // al
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-110h] BYREF
  void *v7; // [rsp+10h] [rbp-108h] BYREF
  _QWORD v8[2]; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v9[6]; // [rsp+28h] [rbp-F0h] BYREF
  int dest; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-B8h]

  std::fs::symlink_metadata(&dest);
  LOBYTE(v1) = 1;
  if ( dest == 2 )
  {
    v2 = v11;
    v6 = v11;
    v3 = std::io::error::Error::kind(v11, a1);
    LOBYTE(v1) = v3 == 0;
    if ( v3 )
    {
      v7 = &std::io::stdio::stderr::INSTANCE;
      v8[0] = &v6;
      v8[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v9[0] = &unk_DEAE8;
      v9[1] = 2LL;
      v9[4] = 0LL;
      v9[2] = v8;
      v9[3] = 1LL;
      v4 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v7, v9);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v4);
      v2 = v6;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v2);
  }
  return v1;
}