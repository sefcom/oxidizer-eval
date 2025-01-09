undefined8 * __rustcall
uu_dd::Input::new_fifo(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined auVar2 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_34 = 0;
  local_3c = 0x1000001b6;
  iVar1 = make_linux_iflags(param_4 + 0x40);
  local_40 = extraout_EDX;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  std::fs::OpenOptions::open(&local_30,&local_40,param_2,param_3);
  if (local_30 == 0) {
    local_44 = local_2c;
    local_48 = 2;
    if (*(long *)(param_4 + 0x80) == 0) {
      local_48 = 2;
    }
    else {
                    /* try { // try from 001d6dd1 to 001d6de6 has its CatchHandler @ 001d6e2f */
      auVar2 = Source::skip(&local_48);
      local_2c = local_44;
      if (auVar2._0_8_ != 0) {
        auVar2 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(auVar2._8_8_);
        *(undefined (*) [16])(param_1 + 1) = auVar2;
        *param_1 = 1;
        core::ptr::drop_in_place<uu_dd::Source>(local_44);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined4 *)((long)param_1 + 0xc) = local_2c;
    param_1[2] = param_4;
    *param_1 = 0;
  }
  else {
    auVar2 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(local_28);
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 1;
  }
  return param_1;
}