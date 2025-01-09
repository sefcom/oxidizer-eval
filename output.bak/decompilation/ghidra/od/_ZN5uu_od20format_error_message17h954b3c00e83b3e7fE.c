void __rustcall
uu_od::format_error_message
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined8 *local_80;
  code *local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_2 == 0) {
    local_40 = &DAT_00241838;
  }
  else {
    if (param_2 != 1) {
      local_40 = &DAT_00241878;
      local_38 = 3;
      goto LAB_001c8584;
    }
    local_40 = &DAT_00241858;
  }
  local_38 = 2;
LAB_001c8584:
  local_70 = &local_60;
  local_80 = &local_10;
  local_48 = 1;
  local_60 = 0;
  local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_78 = _<&T_as_core::fmt::Display>::fmt;
  local_20 = 0;
  local_30 = &local_80;
  local_28 = 2;
  local_58 = param_3;
  local_50 = param_4;
  local_10 = param_5;
  local_8 = param_6;
  core::option::Option<T>::map_or_else(param_1,&local_40);
  return;
}