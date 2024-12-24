__int64 __fastcall uu_ls::is_hidden(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  std::fs::DirEntry::file_name(v8, a1);
  std::sys::os_str::bytes::Slice::to_str(v7, v9, v10);
  if ( v7[0] )
  {
    v1 = 0;
  }
  else
  {
    v2 = v7[1];
    v3 = v7[2];
    LODWORD(v7[0]) = 0;
    v4 = core::char::methods::encode_utf8_raw(46LL, v7);
    v1 = core::slice::<impl [T]>::starts_with(v2, v3, v4, v5);
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v8);
  return v1;
}
