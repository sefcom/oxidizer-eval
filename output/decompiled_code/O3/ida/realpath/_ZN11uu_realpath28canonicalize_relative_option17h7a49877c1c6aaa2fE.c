        unsigned __int8 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-50h]
  unsigned __int64 v11; // [rsp+30h] [rbp-48h]
  _BYTE v12[64]; // [rsp+38h] [rbp-40h] BYREF

  if ( *a2 == 0x8000000000000000LL )
  {
    v6 = 0x8000000000000000LL;
  }
  else
  {
    uu_realpath::canonicalize_relative(v12, a2[1], a2[2], a3, a4, a3, *a2, a2[1], a2[2]);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v9,
      v12,
      &v8);
    v6 = v9;
    v5 = v10;
    v4 = v11;
    if ( v9 == 0x8000000000000000LL )
    {
      a1[1] = v10;
      a1[2] = v4;
      *a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v8);
    }
    result = core::ptr::drop_in_place<std::path::PathBuf>(&v8);
  }
  *a1 = v6;
  a1[1] = v5;
  a1[2] = v4;
  return result;
}
