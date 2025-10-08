__int64 __fastcall uu_ls::is_hidden(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  int v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  std::fs::DirEntry::file_name(&v11, a1);
  v1 = v12;
  core::str::converts::from_utf8(&v8, v12, v13);
  if ( v8 == 1 )
  {
    v2 = 0;
  }
  else
  {
    v3 = v9;
    v4 = v10;
    v8 = 0;
    v5 = core::char::methods::encode_utf8_raw(46LL, &v8);
    v2 = core::slice::<impl [T]>::starts_with(v3, v4, v5, v6);
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v1);
  return v2;
}