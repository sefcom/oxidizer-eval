__int64 uu_df::blocks::block_size_from_env()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  bool v2; // bp
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v5; // [rsp+8h] [rbp-B0h]
  __int64 v6; // [rsp+18h] [rbp-A0h]
  __int128 v7; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+30h] [rbp-88h]
  _QWORD v9[8]; // [rsp+40h] [rbp-78h] BYREF
  int v10; // [rsp+80h] [rbp-38h] BYREF

  v9[0] = aDfBlockSize;
  v9[1] = 13LL;
  v9[2] = aBlockSize_0;
  v9[3] = 10LL;
  v9[4] = aBlocksize;
  v9[5] = 9LL;
  v9[6] = 0LL;
  v9[7] = 3LL;
  while ( 1 )
  {
    v0 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(v9);
    if ( !v0 )
    {
      core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(v9);
      return 0LL;
    }
    std::env::var(&v4, v0);
    if ( !v4 )
      break;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v4);
  }
  v8 = v6;
  v7 = v5;
  uucore::parser::parse_size::parse_size_u64(&v10, *((_QWORD *)&v5 + 1), v6);
  v1 = 0LL;
  v2 = v10 == 3;
  core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(&v10);
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  if ( v4 )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v4);
  LOBYTE(v1) = v2;
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(v9);
  return v1;
}
