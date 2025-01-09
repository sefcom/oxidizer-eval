void __rustcall uu_dd::progress::ReadStat::report(long param_1,undefined8 param_2)

{
  long local_50;
  code *local_48;
  long local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = param_1 + 8;
  local_48 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
  local_38 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
  local_30 = &DAT_00262500;
  local_28 = 3;
  local_10 = 0;
  local_20 = &local_50;
  local_18 = 2;
  local_50 = param_1;
  _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_30);
  return;
}