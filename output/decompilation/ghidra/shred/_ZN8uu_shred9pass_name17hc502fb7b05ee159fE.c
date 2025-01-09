void __rustcall uu_shred::pass_name(undefined8 param_1,char *param_2)

{
  char *local_f8;
  char *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  char **local_d0;
  undefined8 local_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  char *local_b0;
  char **local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  char **local_88;
  code *local_80;
  undefined local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  undefined local_8;
  
  local_f0 = (char *)&local_f8;
  local_98 = (undefined *)&local_f8;
  if (*param_2 == '\0') {
    local_f8 = param_2 + 1;
    local_e8 = _<&T_as_core::fmt::LowerHex>::fmt;
    local_a8 = (char **)0x2;
    local_98 = (undefined *)0x2;
    local_88 = (char **)0x0;
    local_80 = (code *)0x20;
    local_78 = 3;
    local_70 = 2;
    local_60 = 2;
    local_50 = 0;
    local_48 = 0x20;
    local_40 = 3;
    local_38 = 2;
    local_28 = 2;
    local_18 = 0;
    local_10 = 0x20;
    local_8 = 3;
    local_c0 = &local_a8;
    local_b8 = 3;
    local_d0 = &local_f0;
    local_c8 = 1;
  }
  else {
    if (*param_2 == '\x02') {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec();
      return;
    }
    local_b0 = param_2 + 1;
    local_f8 = param_2 + 2;
    local_f0 = param_2 + 3;
    local_a8 = &local_b0;
    local_a0 = _<&T_as_core::fmt::LowerHex>::fmt;
    local_90 = _<&T_as_core::fmt::LowerHex>::fmt;
    local_88 = &local_f0;
    local_80 = _<&T_as_core::fmt::LowerHex>::fmt;
    local_c0 = (char ***)0x0;
    local_d0 = (char **)&local_a8;
    local_c8 = 3;
  }
  local_d8 = 3;
  local_e0 = &DAT_0011f050;
  core::option::Option<T>::map_or_else(param_1,&local_e0);
  return;
}