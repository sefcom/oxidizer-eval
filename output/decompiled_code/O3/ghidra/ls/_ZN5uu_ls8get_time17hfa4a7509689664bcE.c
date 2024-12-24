void __rustcall uu_ls::get_time(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [12];
  
  auVar1 = get_system_time(param_2,param_3);
  if (auVar1._8_4_ == 1000000000) {
    *param_1 = 0;
    return;
  }
  _<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::convert::From<std::time::SystemTime>>
  ::from(param_1,auVar1._0_8_);
  return;
}