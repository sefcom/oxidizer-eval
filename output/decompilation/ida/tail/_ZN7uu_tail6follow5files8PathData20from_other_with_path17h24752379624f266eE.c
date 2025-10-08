__int64 __fastcall uu_tail::follow::files::PathData::from_other_with_path(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 (__fastcall **v5)(); // r12
  __int64 v6; // r15
  __int64 (__fastcall **v8)(); // [rsp+8h] [rbp-1A0h]
  _QWORD dest[22]; // [rsp+18h] [rbp-190h] BYREF
  _DWORD src[56]; // [rsp+C8h] [rbp-E0h] BYREF

  v4 = a2[25];
  v5 = (__int64 (__fastcall **)())a2[26];
  v8 = v5;
  v6 = v4;
  if ( !v4 )
  {
    std::fs::File::open(dest, a3, a4);
    if ( LODWORD(dest[0]) == 1 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(dest);
      v6 = 0LL;
    }
    else
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(src, HIDWORD(dest[0]));
      v6 = alloc::boxed::Box<T>::new(src);
    }
    v5 = &off_173408;
  }
  std::fs::metadata(src);
  if ( src[0] == 2 )
  {
    dest[0] = 2LL;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
  }
  uu_tail::follow::files::PathData::new(a1, v6, (__int64)v5, dest, a2[23], a2[24]);
  if ( !v4 )
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v8);
  return core::ptr::drop_in_place<alloc::string::String>(a2 + 22);
}