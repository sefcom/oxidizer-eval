void __rustcall uu_wc::files0_iter_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  std::fs::File::open(&local_68);
  if (local_68 == 0) {
                    /* try { // try from 001bd143 to 001bd153 has its CatchHandler @ 001bd182 */
    std::sys::os_str::bytes::Slice::to_owned(&local_38,param_2,param_3);
    local_48 = local_28;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    files0_iter(param_1,local_64,&local_58);
  }
  else {
    uVar1 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
            ::map_err_context(local_60,param_2,param_3);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar1;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_UIoError>_00231158;
  }
  return;
}