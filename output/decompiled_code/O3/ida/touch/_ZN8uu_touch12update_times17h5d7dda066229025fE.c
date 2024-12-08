        unsigned int a9)
{
  __int64 v14; // rax
  char v15; // [rsp+Ch] [rbp-8Ch]
  __int64 v16; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  unsigned int v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  _BYTE v22[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( a5 )
  {
    if ( a5 != 1 )
      goto LABEL_10;
    v15 = a3;
    uu_touch::stat(v22, a1, a2, a4 == 0);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v16,
      v22,
      a1,
      a2);
    a7 = v18;
    if ( v16 )
      return v17;
    a6 = v17;
  }
  else
  {
    v15 = a3;
    v21 = a6;
    uu_touch::stat(v22, a1, a2, a4 == 0);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v16,
      v22,
      a1,
      a2);
    if ( v16 )
      return v17;
    a8 = v19;
    a9 = v20;
    a6 = v21;
  }
  a3 = v15;
LABEL_10:
  if ( !a4 || a3 )
    v14 = filetime::set_file_times(a1, a2, a6, a7, a8, a9);
  else
    v14 = filetime::set_symlink_file_times(a1, a2, a6, a7, a8, a9);
  return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
           v14,
           a1,
           a2);
}
