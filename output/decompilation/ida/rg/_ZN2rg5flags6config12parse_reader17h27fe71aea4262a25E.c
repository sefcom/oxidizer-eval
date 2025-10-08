__int64 __fastcall rg::flags::config::parse_reader(_QWORD *a1)
{
  __int64 v1; // rax
  int v3; // [rsp+Ch] [rbp-ACh] BYREF
  __int128 v4; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v5; // [rsp+20h] [rbp-98h]
  __int128 v6; // [rsp+28h] [rbp-90h] BYREF
  __int64 v7; // [rsp+38h] [rbp-80h]
  __int128 v8; // [rsp+40h] [rbp-78h]
  __int64 v9; // [rsp+50h] [rbp-68h]
  __int128 v10; // [rsp+58h] [rbp-60h]
  __int64 v11; // [rsp+68h] [rbp-50h]
  _BYTE v12[64]; // [rsp+78h] [rbp-40h] BYREF

  std::io::buffered::bufreader::BufReader<R>::with_capacity(v12);
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  v5 = 0LL;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  v7 = 0LL;
  v3 = 0;
  v1 = bstr::io::BufReadExt::for_byte_record_with_terminator(v12, &v3, &v4);
  if ( v1 )
  {
    a1[1] = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v1);
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v6);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v4);
  }
  else
  {
    v9 = v5;
    v8 = v4;
    v11 = v7;
    v10 = v6;
    *(_OWORD *)a1 = v4;
    a1[4] = *((_QWORD *)&v10 + 1);
    a1[5] = v11;
    a1[2] = v9;
    a1[3] = v10;
  }
  return core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v12);
}