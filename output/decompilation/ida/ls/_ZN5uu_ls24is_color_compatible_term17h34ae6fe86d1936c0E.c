__int64 uu_ls::is_color_compatible_term()
{
  __int64 v0; // r12
  void *v1; // rbx
  __int64 v2; // r13
  _QWORD v4[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v5[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6; // [rsp+28h] [rbp-60h]
  __int64 v7; // [rsp+30h] [rbp-58h]
  _QWORD v8[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v9[16]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]

  std::env::var(v4, aTerm, 4LL);
  v0 = v4[0];
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v4);
  v1 = &unk_D2C7A;
  std::env::var(v4, &unk_D2C7A, 9LL);
  v2 = v4[0];
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v4);
  std::env::var(v4, aTerm, 4LL);
  core::result::Result<T,E>::unwrap_or_default(v5, v4);
  std::env::var(v4, &unk_D2C7A, 9LL);
  core::result::Result<T,E>::unwrap_or_default(v9, v4);
  if ( (v0 || v7 | v2 || v10)
    && (!v7
     || (v8[0] = v6,
         v8[1] = v7,
         v4[0] = &off_28BE90,
         v4[1] = &off_28BE90 + 54,
         (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v4, v8))) )
  {
    LOBYTE(v1) = 1;
  }
  else
  {
    LODWORD(v1) = 0;
  }
  core::ptr::drop_in_place<alloc::string::String>(v9);
  core::ptr::drop_in_place<alloc::string::String>(v5);
  return (unsigned int)v1;
}