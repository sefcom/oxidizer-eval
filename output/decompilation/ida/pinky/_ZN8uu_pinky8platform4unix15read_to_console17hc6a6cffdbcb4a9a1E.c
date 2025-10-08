__int64 __fastcall uu_pinky::platform::unix::read_to_console(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v5; // [rsp+8h] [rbp-A0h]
  __int64 v6; // [rsp+10h] [rbp-98h]
  _QWORD v7[2]; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v8[6]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v9[24]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v10[56]; // [rsp+70h] [rbp-38h] BYREF

  std::io::buffered::bufreader::BufReader<R>::with_capacity(v10, a1);
  v4 = 0LL;
  v5 = 1LL;
  v6 = 0LL;
  v1 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(v10, &v4);
  if ( v1 )
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v1, v2);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v2);
    alloc::string::String::from_utf8_lossy(v9, v5, v6);
    v7[0] = v9;
    v7[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v8[0] = &unk_19240;
    v8[1] = 1LL;
    v8[4] = 0LL;
    v8[2] = v7;
    v8[3] = 1LL;
    std::io::stdio::_print(v8);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v9);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v4, v5);
  return core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v10);
}