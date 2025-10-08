__int64 __fastcall uu_whoami::whoami(__int64 a1)
{
  unsigned __int64 v2[5]; // [rsp+0h] [rbp-28h] BYREF

  uu_whoami::platform::unix::get_username(v2);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    a1,
    v2);
  return a1;
}