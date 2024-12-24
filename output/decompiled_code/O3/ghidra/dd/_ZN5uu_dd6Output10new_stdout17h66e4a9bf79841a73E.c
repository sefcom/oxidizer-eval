undefined8 * __rustcall uu_dd::Output::new_stdout(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  uStack_28 = std::io::stdio::stdout();
  local_30 = local_30 & 0xffffff00;
                    /* try { // try from 001d7844 to 001d785a has its CatchHandler @ 001d7897 */
  uVar1 = Dest::seek(&local_30,*(undefined8 *)(param_2 + 0x88));
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_20,uVar1);
  if (local_20 == 0) {
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[1] = uStack_28;
    local_18 = param_2;
  }
  else {
    param_1[1] = local_20;
    *(undefined *)param_1 = 4;
    core::ptr::drop_in_place<uu_dd::Dest>(local_30,uStack_2c);
  }
  param_1[2] = local_18;
  return param_1;
}