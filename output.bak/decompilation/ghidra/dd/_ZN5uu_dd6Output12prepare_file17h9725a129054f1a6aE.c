void __rustcall uu_dd::Output::prepare_file(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  bStack_2f = *(byte *)(param_3 + 0x90) ^ 1;
  local_30 = 1;
                    /* try { // try from 001d78ba to 001d78d0 has its CatchHandler @ 001d790c */
  uStack_2c = param_2;
  uVar1 = Dest::seek(&local_30,*(undefined8 *)(param_3 + 0x88));
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_20,uVar1);
  if (local_20 == 0) {
    *param_1 = CONCAT44(uStack_2c,CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30)));
    param_1[1] = uStack_28;
    local_18 = param_3;
  }
  else {
    param_1[1] = local_20;
    *(undefined *)param_1 = 4;
    core::ptr::drop_in_place<uu_dd::Dest>
              (CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30)),uStack_2c);
  }
  param_1[2] = local_18;
  return;
}