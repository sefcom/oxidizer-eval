        __int64 a8)
{
  int v10; // r14d
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v18; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-D8h]
  __int64 v20; // [rsp+18h] [rbp-D0h]
  unsigned int v21; // [rsp+40h] [rbp-A8h]

  std::fs::metadata(&v18);
  v10 = v18;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v18);
  if ( v10 == 2 )
  {
    v11 = uu_cp::handle_no_preserve_mode(a5, a6, a4);
    result = v11 & ~(unsigned int)uucore::features::mode::get_umask(a5, a6, v12, v13);
  }
  else
  {
    std::fs::symlink_metadata(&v18, a2, a3);
    if ( (_DWORD)v18 == 2 )
    {
      v15 = v19;
      v18 = a7;
      v19 = a8;
      v20 = v15;
      return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a1, &v18);
    }
    result = v21;
  }
  *(_DWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = 13LL;
  return result;
}
