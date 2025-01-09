undefined8 __rustcall
uu_sort::format_error_message
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  undefined8 *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = (undefined *)&local_88;
  if (*param_2 == 0) {
    local_48 = &PTR_s_invalid_suffix_in____argument_002ffff0;
  }
  else {
    if ((int)*param_2 != 1) {
      local_48 = &PTR_s____too_largeline_numberOpenFaile_00300030;
      local_40 = 3;
      goto LAB_00224e74;
    }
    local_48 = &PTR_s_invalid____00300010;
  }
  local_40 = 2;
LAB_00224e74:
  local_78 = &local_68;
  local_88 = &local_18;
  local_50 = 1;
  local_68 = 0;
  local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_80 = _<&T_as_core::fmt::Display>::fmt;
  local_28 = 0;
  local_30 = 2;
  local_60 = param_3;
  local_58 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  core::option::Option<T>::map_or_else(param_1,&local_48);
  return param_1;
}