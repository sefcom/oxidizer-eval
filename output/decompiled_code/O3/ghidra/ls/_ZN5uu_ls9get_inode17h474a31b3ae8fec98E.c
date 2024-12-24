void __rustcall uu_ls::get_inode(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = (undefined *)&local_48;
  local_38 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
  local_30 = &DAT_00123d10;
  local_28 = 1;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  local_48 = param_2;
  core::option::Option<T>::map_or_else(param_1,&local_30);
  return;
}