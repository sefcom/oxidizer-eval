undefined8 __rustcall uu_ls::dired::indent(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_30 = &PTR_s__00313318;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = std::io::Write::write_fmt(param_1,&local_30);
  if (lVar1 != 0) {
    uVar2 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar1);
    return uVar2;
  }
  return 0;
}