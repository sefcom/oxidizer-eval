undefined8 __rustcall uu_whoami::whoami(undefined8 param_1)

{
  undefined auStack_28 [24];
  
  platform::unix::get_username(auStack_28);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(param_1,auStack_28);
  return param_1;
}