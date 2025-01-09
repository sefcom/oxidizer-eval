void __rustcall
uu_sort::KeySettings::check_compatibility
          (undefined8 *param_1,byte param_2,char param_3,char param_4)

{
  undefined4 local_54;
  char *local_50;
  code *local_48;
  undefined4 *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 < 4) {
    if (param_4 == '\0') {
      if (param_3 == '\0') goto LAB_0021e8ca;
      local_54 = *(undefined4 *)("n" + (ulong)param_2 * 4);
      local_50 = "i";
    }
    else {
      local_54 = *(undefined4 *)("n" + (ulong)param_2 * 4);
      local_50 = "d";
    }
    local_48 = _<char_as_core::fmt::Display>::fmt;
    local_40 = &local_54;
    local_38 = _<char_as_core::fmt::Display>::fmt;
    local_30 = &PTR_s_options_____are_incompatible_002ff878;
    local_28 = 3;
    local_10 = 0;
    local_20 = &local_50;
    local_18 = 2;
    core::option::Option<T>::map_or_else(param_1,&local_30);
    return;
  }
LAB_0021e8ca:
  *param_1 = 0x8000000000000000;
  return;
}