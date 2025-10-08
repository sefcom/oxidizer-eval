__int64 __fastcall uu_stat::Stater::find_mount_point(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 i; // rbp
  char v10; // al
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a3);
  std::fs::canonicalize(&v11, v3);
  v4 = v11;
  if ( __OFSUB__(-(__int64)v11, 1LL) )
  {
    result = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v11);
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v6 = *((_QWORD *)&v11 + 1);
    if ( a2[9] != 0x8000000000000000LL )
    {
      v7 = v12;
      v8 = a2[10];
      for ( i = 24LL * a2[11]; i; i -= 24LL )
      {
        v10 = std::path::Path::starts_with(v6, v7, v8);
        v8 += 24LL;
        if ( v10 )
        {
          <alloc::string::String as core::clone::Clone>::clone(&v11, v8 - 24);
          a1[2] = v12;
          *(_OWORD *)a1 = v11;
          return core::ptr::drop_in_place<std::path::PathBuf>(v4, v6);
        }
      }
    }
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<std::path::PathBuf>(v4, v6);
  }
  return result;
}