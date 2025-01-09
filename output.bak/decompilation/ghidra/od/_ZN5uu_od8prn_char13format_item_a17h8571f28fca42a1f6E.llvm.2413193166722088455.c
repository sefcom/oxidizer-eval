undefined8 __rustcall uu_od::prn_char::format_item_a(undefined8 param_1,uint param_2)

{
  undefined1 *local_88;
  undefined *local_80;
  code *local_78;
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
  
  local_80 = (undefined *)&local_88;
  local_88 = A_CHARS + ((param_2 & 0x7f) << 4);
  local_78 = _<&T_as_core::fmt::Display>::fmt;
  local_40[0] = 2;
  local_30 = 0;
  local_28 = 4;
  local_20 = 0;
  local_18 = 0x20;
  local_10 = 1;
  local_70 = &DAT_0010dad0;
  local_68 = 1;
  local_50 = local_40;
  local_48 = 1;
  local_60 = &local_80;
  local_58 = 1;
  core::option::Option<T>::map_or_else(param_1,&local_70);
  return param_1;
}