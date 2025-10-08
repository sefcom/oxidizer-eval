bool __fastcall uu_head::is_seekable(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  _QWORD v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v10[0] = <std::fs::File as std::io::Seek>::stream_position();
  v10[1] = v1;
  if ( v10[0] )
    goto LABEL_4;
  v2 = v1;
  v8 = <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL);
  v9 = v3;
  if ( v8 )
  {
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
LABEL_4:
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v10);
    return 0;
  }
  core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
  v5 = core::result::Result<T,E>::unwrap(0LL, v2);
  v6 = <std::fs::File as std::io::Seek>::seek(a1, 0LL, v5);
  v8 = v6;
  v9 = v7;
  core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v8);
  return v6 == 0;
}