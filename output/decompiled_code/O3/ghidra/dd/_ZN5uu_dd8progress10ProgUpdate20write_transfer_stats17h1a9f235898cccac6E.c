void __rustcall
uu_dd::progress::ProgUpdate::write_transfer_stats(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_3 != 0) {
    local_40 = &PTR_s__00262e58;
    local_38 = 1;
    local_30 = 8;
    local_28 = 0;
    uStack_20 = 0;
    lVar1 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_40);
    if (lVar1 != 0) goto LAB_001f253a;
  }
  lVar1 = write_io_lines(param_1,param_2);
  if (lVar1 == 0) {
    write_prog_line(param_1,param_2,0);
    return;
  }
LAB_001f253a:
  uucore::mods::error::
  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
  ::from(lVar1);
  return;
}