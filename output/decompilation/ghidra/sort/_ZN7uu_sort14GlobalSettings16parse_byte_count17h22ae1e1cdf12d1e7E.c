long * __rustcall
uu_sort::GlobalSettings::parse_byte_count(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_48;
  code *local_40;
  long lStack_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_78 = &PTR_s_bkmMgGtTPEZY_002ff7a8;
  local_70 = 0xd;
  local_68 = (undefined8 **)0x12edb2;
  local_60 = 1;
  local_58 = CONCAT53(local_58._3_5_,0x10000);
  auVar2 = core::str::_<impl_str>::trim_matches(param_2,param_3);
  uucore::parser::parse_size::Parser::parse(&local_48,&local_78,auVar2._0_8_,auVar2._8_8_);
  if (local_48 == (long *)0x3) {
    local_20 = local_30;
    local_28 = lStack_38;
    if (local_30 == 0) {
      param_1[1] = lStack_38;
      lVar1 = 3;
    }
    else {
      local_48 = &local_28;
      local_40 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
      local_78 = &PTR_s_Buffer_size_does_not_fit_in_addr_002ff788;
      local_70 = 2;
      local_58 = 0;
      local_60 = 1;
      local_68 = &local_48;
      core::option::Option<T>::map_or_else(param_1 + 1,&local_78);
      lVar1 = 2;
    }
    *param_1 = lVar1;
  }
  else {
    *param_1 = (long)local_48;
    param_1[1] = (long)local_40;
    param_1[2] = lStack_38;
    param_1[3] = local_30;
  }
  return param_1;
}