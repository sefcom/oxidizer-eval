undefined8 * __rustcall
uu_dd::Input::new_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined auVar2 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_48 = 0x1b600000000;
  local_3c = 0;
  local_40 = 1;
  iVar1 = make_linux_iflags(param_4 + 0x40);
  if (iVar1 == 1) {
    local_48 = CONCAT44(local_48._4_4_,extraout_EDX);
  }
  std::fs::OpenOptions::open(&local_58,&local_48,param_2,param_3);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_38,&local_58,param_2);
  if (local_38 == 0) {
    local_54 = local_30;
    local_58 = 0;
    if (*(long *)(param_4 + 0x80) == 0) {
      local_58 = 0;
    }
    else {
                    /* try { // try from 001d6cc2 to 001d6cd7 has its CatchHandler @ 001d6d1f */
      auVar2 = Source::skip(&local_58);
      local_30 = local_54;
      if (auVar2._0_8_ != 0) {
        auVar2 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(auVar2._8_8_);
        *(undefined (*) [16])(param_1 + 1) = auVar2;
        *param_1 = 1;
        core::ptr::drop_in_place<uu_dd::Source>(local_54);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 1) = local_58;
    *(undefined4 *)((long)param_1 + 0xc) = local_30;
    param_1[2] = param_4;
    *param_1 = 0;
  }
  else {
    param_1[1] = local_38;
    param_1[2] = CONCAT44(uStack_2c,local_30);
    *param_1 = 1;
  }
  return param_1;
}