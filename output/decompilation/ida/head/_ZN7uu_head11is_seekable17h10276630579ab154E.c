__int64 __fastcall uu_head::is_seekable(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  _QWORD v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v1 = a1;
  v10[0] = <std::fs::File as std::io::Seek>::seek(a1, 2LL, 0LL);
  v10[1] = v2;
  if ( !v10[0] )
  {
    v3 = v2;
    v8 = <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL);
    v9 = v4;
    if ( !v8 )
    {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
      v6 = core::result::Result<T,E>::unwrap(v3);
      v8 = <std::fs::File as std::io::Seek>::seek(a1, 0LL, v6);
      v9 = v7;
      LOBYTE(v1) = v8 == 0;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
      return v1;
    }
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
  }
  core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v10);
  return 0;
}
