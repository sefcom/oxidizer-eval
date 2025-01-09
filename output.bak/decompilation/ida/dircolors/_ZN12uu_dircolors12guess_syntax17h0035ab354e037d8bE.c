__int64 __fastcall uu_dircolors::guess_syntax()
{
  __int64 v0; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  std::env::var(v5, aShell, 5LL);
  LOBYTE(v0) = 3;
  if ( !v5[0] && v5[3] )
  {
    v2 = std::path::Path::file_name(v5[2]);
    v0 = v2;
    if ( v2
      && ((v4 = v3, (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aCsh, 3LL))
       || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0, v4, aTcsh, 4LL)) )
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
