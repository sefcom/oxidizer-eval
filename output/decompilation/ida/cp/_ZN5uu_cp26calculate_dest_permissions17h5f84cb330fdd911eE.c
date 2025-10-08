__int64 __fastcall uu_cp::calculate_dest_permissions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8)
{
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 dest; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+18h] [rbp-D0h]
  unsigned int v20; // [rsp+40h] [rbp-A8h]

  std::fs::metadata(&dest);
  v9 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2);
  if ( v9 == 2 )
  {
    v10 = uu_cp::handle_no_preserve_mode(a5, a6, a4);
    v12 = v10 & ~(unsigned int)uucore::features::mode::get_umask(a5, a6, v11);
  }
  else
  {
    std::fs::symlink_metadata(&dest);
    if ( (_DWORD)dest == 2 )
    {
      v13 = v18;
      dest = a7;
      v18 = a8;
      v19 = v13;
      return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a1, &dest);
    }
    v12 = v20;
  }
  *(_DWORD *)(a1 + 8) = v12;
  result = 0x800000000000000CLL;
  *(_QWORD *)a1 = 0x800000000000000CLL;
  return result;
}