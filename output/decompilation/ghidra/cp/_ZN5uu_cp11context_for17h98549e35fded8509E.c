undefined8 __rustcall
uu_cp::context_for(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *local_98;
  code *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = (undefined *)&local_98;
  local_78 = 1;
  local_60 = 1;
  local_58 = 1;
  local_40 = 1;
  local_98 = &local_78;
  local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_88 = &local_58;
  local_80 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_38 = &DAT_002b5e68;
  local_30 = 2;
  local_18 = 0;
  local_20 = 2;
  local_70 = param_2;
  local_68 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  core::option::Option<T>::map_or_else(param_1,&local_38);
  return param_1;
}