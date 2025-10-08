__int64 __fastcall uu_touch::update_times(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned int v11; // r10d
  unsigned __int8 v13; // r12
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+10h] [rbp-78h]
  __int64 v19; // [rsp+18h] [rbp-70h]
  unsigned int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  _BYTE v22[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( a5 )
  {
    v11 = a9;
    v13 = a4 ^ 1;
    if ( a5 == 1 )
    {
      uu_touch::stat(v22, a1, a2, v13 & 1);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v16,
        v22,
        a1,
        a2);
      a7 = v18;
      if ( (v16[0] & 1) != 0 )
        return v17;
      a6 = v17;
      v11 = a9;
    }
  }
  else
  {
    v21 = a6;
    v13 = a4 ^ 1;
    uu_touch::stat(v22, a1, a2, (a4 ^ 1) & 1);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v16,
      v22,
      a1,
      a2);
    if ( (v16[0] & 1) != 0 )
      return v17;
    a8 = v19;
    v11 = v20;
    a6 = v21;
  }
  if ( ((v13 | a3) & 1) != 0 )
    v15 = filetime::set_file_times(a1, a2, a6, a7, a8, v11);
  else
    v15 = filetime::set_symlink_file_times(a1, a2, a6, a7, a8, v11);
  return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
           v15,
           a1,
           a2);
}