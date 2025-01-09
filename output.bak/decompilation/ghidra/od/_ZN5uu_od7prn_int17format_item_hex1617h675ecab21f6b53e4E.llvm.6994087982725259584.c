undefined8 __rustcall uu_od::prn_int::format_item_hex16(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_98;
  undefined *local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined local_10;
  
  local_90 = (undefined *)&local_98;
  local_88 = core::fmt::num::_<impl_core::fmt::LowerHex_for_isize>::fmt;
  local_80 = 4;
  local_78 = 0;
  local_40[0] = 2;
  local_30 = 1;
  local_28 = 1;
  local_20 = 0;
  local_18 = 0x800000020;
  local_10 = 3;
  local_70 = &DAT_00241aa0;
  local_68 = 1;
  local_50 = local_40;
  local_48 = 1;
  local_60 = &local_90;
  local_58 = 2;
  local_98 = param_2;
  core::option::Option<T>::map_or_else(param_1,&local_70);
  return param_1;
}