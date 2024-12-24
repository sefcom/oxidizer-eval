__int64 __fastcall uu_dircolors::guess_syntax()
{
  unsigned int v0; // ebp
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r14
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  std::env::var(v6, aShell, 5LL);
  LOBYTE(v0) = 3;
  if ( !v6[0] && v6[3] )
  {
    v2 = std::path::Path::file_name(v6[2]);
    v4 = v2;
    if ( v2 )
    {
      v5 = v3;
      LOBYTE(v0) = 1;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aCsh, 3LL) )
        v0 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aTcsh, 4LL);
    }
    else
    {
      v0 = 0;
    }
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v6);
  return v0;
}
