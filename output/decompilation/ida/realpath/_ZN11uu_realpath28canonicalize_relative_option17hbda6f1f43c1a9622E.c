__int64 __fastcall uu_realpath::canonicalize_relative_option(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 result; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-58h]
  unsigned __int64 v14; // [rsp+18h] [rbp-50h]
  _BYTE v15[72]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a2;
  result = -*a2;
  if ( __OFSUB__(result, 1LL) )
  {
    v8 = 0x8000000000000000LL;
  }
  else
  {
    v9 = a2[1];
    v10 = a2[2];
    uu_realpath::canonicalize_relative(v15, v9, v10, a3, a4);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v12,
      v15,
      v9,
      v10);
    v11 = v9;
    v8 = v12;
    v5 = v13;
    v4 = v14;
    if ( v12 == 0x8000000000000000LL )
    {
      a1[1] = v13;
      a1[2] = v4;
      *a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(v6, v11);
    }
    result = core::ptr::drop_in_place<std::path::PathBuf>(v6, v11);
  }
  *a1 = v8;
  a1[1] = v5;
  a1[2] = v4;
  return result;
}