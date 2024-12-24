void __rustcall
uu_ls::pad_right(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined local_8;
  
  local_88 = (undefined *)&local_98;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_70 = 0;
  local_38[0] = 2;
  local_28 = 1;
  local_20 = 1;
  local_18 = 0;
  local_10 = 0x20;
  local_8 = 0;
  local_68 = &DAT_00123d10;
  local_60 = 1;
  local_48 = local_38;
  local_40 = 1;
  local_58 = &local_88;
  local_50 = 2;
  local_98 = param_2;
  local_90 = param_3;
  local_78 = param_4;
  core::option::Option<T>::map_or_else(param_1,&local_68);
  return;
}