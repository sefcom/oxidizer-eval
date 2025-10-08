__int64 __fastcall uu_dircolors::guess_syntax()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r14
  _BYTE v5[16]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+20h] [rbp-18h]

  std::env::var(v5);
  LOBYTE(v0) = 3;
  if ( (v5[0] & 1) == 0 && v7 )
  {
    v1 = std::path::Path::file_name(v6);
    v0 = v1;
    if ( v1
      && ((v3 = v2, (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, aCsh, 3LL))
       || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v3, aTcsh, 4LL)) )
    {
      LOBYTE(v0) = 1;
    }
    else
    {
      LODWORD(v0) = 0;
    }
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v5);
  return (unsigned int)v0;
}