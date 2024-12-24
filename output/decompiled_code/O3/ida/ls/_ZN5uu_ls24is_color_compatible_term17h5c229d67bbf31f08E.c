char uu_ls::is_color_compatible_term()
{
  __int64 v0; // r12
  __int64 v1; // r13
  _QWORD v3[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v4[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+28h] [rbp-60h]
  __int64 v6; // [rsp+30h] [rbp-58h]
  _BYTE v7[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v8; // [rsp+48h] [rbp-40h]
  _QWORD v9[7]; // [rsp+50h] [rbp-38h] BYREF

  std::env::var(v3, aTerm, 4LL);
  v0 = v3[0];
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v3);
  std::env::var(v3, &unk_34DE6, 9LL);
  v1 = v3[0];
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v3);
  std::env::var(v3, aTerm, 4LL);
  core::result::Result<T,E>::unwrap_or_default(v4, v3);
  std::env::var(v3, &unk_34DE6, 9LL);
  core::result::Result<T,E>::unwrap_or_default(v7, v3);
  if ( v6 | v0 )
  {
    if ( v6 )
    {
      v9[0] = v5;
      v9[1] = v6;
      v3[0] = &anon_82c3ed8cdb07ba982e54791b0c97d0cf_64_llvm_541762227079851447;
      v3[1] = &off_216DF0;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v3, v9) )
        goto LABEL_4;
    }
  }
  else if ( !(v8 | v1) )
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::string::String>(v7);
    core::ptr::drop_in_place<alloc::string::String>(v4);
    return 0;
  }
  core::ptr::drop_in_place<alloc::string::String>(v7);
  core::ptr::drop_in_place<alloc::string::String>(v4);
  return 1;
}
