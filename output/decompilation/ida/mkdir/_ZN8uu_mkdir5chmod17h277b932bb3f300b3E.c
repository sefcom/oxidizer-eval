__int64 __fastcall uu_mkdir::chmod(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = std::fs::set_permissions(a1);
  return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
           v2,
           a1,
           a2);
}