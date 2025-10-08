__int64 __fastcall uu_cp::copy_extended_attrs(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-E0h] BYREF
  int dest; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-D0h]
  int v14; // [rsp+48h] [rbp-A0h]

  std::fs::symlink_metadata(&dest);
  if ( dest == 2 )
  {
    result = v13;
    goto LABEL_6;
  }
  if ( (v14 & 0x92) != 0 )
  {
    result = uucore::features::fsxattr::copy_xattrs(a2, a3, a4, a5);
    if ( result )
    {
LABEL_6:
      *a1 = 0x8000000000000001LL;
      a1[1] = result;
      return result;
    }
    goto LABEL_13;
  }
  result = std::fs::set_permissions(a4, a5, v14 | 0x92u);
  if ( result )
    goto LABEL_6;
  v9 = uucore::features::fsxattr::copy_xattrs(a2, a3, a4, a5);
  v11 = v9;
  std::fs::symlink_metadata(&dest);
  if ( dest == 2 )
  {
    v10 = v13;
LABEL_11:
    *a1 = 0x8000000000000001LL;
    a1[1] = v10;
    return core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v11);
  }
  v10 = std::fs::set_permissions(a4, a5, v14 & 0xFFFFFF6D);
  if ( v10 )
    goto LABEL_11;
  result = v9;
  if ( v9 )
    goto LABEL_6;
LABEL_13:
  *a1 = 0x800000000000000CLL;
  return result;
}