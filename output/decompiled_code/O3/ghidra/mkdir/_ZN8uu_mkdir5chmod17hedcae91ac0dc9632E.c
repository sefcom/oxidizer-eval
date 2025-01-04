void __rustcall uu_mkdir::chmod(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = std::fs::set_permissions();
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(uVar1,param_1,param_2);
  return;
}