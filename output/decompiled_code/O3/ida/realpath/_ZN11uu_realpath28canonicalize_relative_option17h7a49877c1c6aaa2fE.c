__int64 __fastcall uu_realpath::canonicalize_relative_option(unsigned __int64 *a1, _QWORD *a2, char a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r13
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  unsigned __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-50h]
  unsigned __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12[8]; // [rsp+38h] [rbp-40h] BYREF

  if ( *a2 == 0x8000000000000000LL )
  {
    v5 = 0x8000000000000000LL;
  }
  else
  {
    v8 = a2[2];
    v7 = *(_OWORD *)a2;
    uu_realpath::canonicalize_relative(v12, *((__int64 *)&v7 + 1), v8, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v9,
      v12,
      &v7);
    v5 = v9;
    v4 = v10;
    v3 = v11;
    if ( v9 == 0x8000000000000000LL )
    {
      a1[1] = v10;
      a1[2] = v3;
      *a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v7);
    }
    result = core::ptr::drop_in_place<std::path::PathBuf>(&v7);
  }
  *a1 = v5;
  a1[1] = v4;
  a1[2] = v3;
  return result;
}
