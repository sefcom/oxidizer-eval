        __int64 a8)
{
  int v10; // r14d
  int v11; // ebp
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v16; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-D8h]
  __int64 v18; // [rsp+18h] [rbp-D0h]
  unsigned int v19; // [rsp+40h] [rbp-A8h]

  std::fs::metadata(&v16);
  v10 = v16;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v16);
  if ( v10 == 2 )
  {
    v11 = uu_cp::handle_no_preserve_mode(a5, a6, a4);
    result = v11 & ~(unsigned int)uucore::features::mode::get_umask();
  }
  else
  {
    std::fs::symlink_metadata(&v16, a2, a3);
    if ( (_DWORD)v16 == 2 )
    {
      v13 = v17;
      v16 = a7;
      v17 = a8;
      v18 = v13;
      return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a1, &v16);
    }
    result = v19;
  }
  *(_DWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = 13LL;
  return result;
}
