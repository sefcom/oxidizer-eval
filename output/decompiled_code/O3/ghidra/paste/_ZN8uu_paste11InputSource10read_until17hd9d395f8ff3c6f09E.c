void __rustcall
uu_paste::InputSource::read_until
          (undefined (*param_1) [16],long *param_2,undefined param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined extraout_DL;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_30;
  uint local_28;
  
  if (*param_2 == 0) {
    auVar2 = core::cell::RefCell<T>::try_borrow(param_2[1] + 0x10);
    if (auVar2._0_8_ == 0) {
      uVar1 = read_until::___closure__();
      *(undefined8 *)*param_1 = uVar1;
      *(undefined ***)(*param_1 + 8) = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00214540;
      return;
    }
                    /* try { // try from 001ac9e9 to 001ac9f4 has its CatchHandler @ 001acaa0 */
    local_30 = std::io::stdio::Stdin::lock(auVar2._0_8_);
    local_28 = CONCAT31(local_28._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 001aca01 to 001aca20 has its CatchHandler @ 001aca87 */
    auVar3 = _<std::io::stdio::StdinLock_as_std::io::BufRead>::read_until(&local_30,param_3,param_4)
    ;
    uVar1 = auVar3._8_8_;
    if (auVar3._0_8_ != 0) {
      auVar3 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(uVar1);
      *param_1 = auVar3;
                    /* try { // try from 001aca31 to 001aca35 has its CatchHandler @ 001acaa0 */
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(local_30,local_28);
      core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(auVar2._8_8_);
      return;
    }
                    /* try { // try from 001aca61 to 001aca65 has its CatchHandler @ 001acaa0 */
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(local_30,local_28);
    core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(auVar2._8_8_);
  }
  else {
    auVar2 = std::io::read_until(param_2,param_3,param_4);
    uVar1 = auVar2._8_8_;
    if (auVar2._0_8_ != 0) {
      auVar2 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(uVar1);
      *param_1 = auVar2;
      return;
    }
  }
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)*param_1 = 0;
  return;
}