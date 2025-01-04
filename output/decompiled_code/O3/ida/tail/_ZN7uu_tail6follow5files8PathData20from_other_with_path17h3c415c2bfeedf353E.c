        __int64 a4)
{
  __int64 (__fastcall **v6)(); // r15
  __int64 v7; // r14
  _QWORD desta[22]; // [rsp+18h] [rbp-190h] BYREF
  _QWORD src[28]; // [rsp+C8h] [rbp-E0h] BYREF

  v6 = (__int64 (__fastcall **)())a2[26];
  v7 = a2[25];
  if ( !v7 )
  {
    std::fs::File::open(desta, a3, a4);
    if ( LODWORD(desta[0]) )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(desta);
      v7 = 0LL;
    }
    else
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(src, 0x2000LL, HIDWORD(desta[0]));
      v7 = alloc::boxed::Box<T>::new(src);
    }
    v6 = &off_1BC4C8;
  }
  std::fs::metadata(src, a3, a4);
  if ( LODWORD(src[0]) == 2 )
  {
    desta[0] = 2LL;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src[1]);
  }
  else
  {
    memcpy(desta, src, sizeof(desta));
  }
  uu_tail::follow::files::PathData::new(dest, v7, (__int64)v6, desta, a2[23], a2[24]);
  core::ptr::drop_in_place<alloc::string::String>(a2 + 22);
  return dest;
}
