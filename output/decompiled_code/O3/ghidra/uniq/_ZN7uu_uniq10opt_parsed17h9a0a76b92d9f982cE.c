undefined8 * __rustcall
uu_uniq::opt_parsed(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_d0;
  char local_cf;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined4 local_28;
  
  local_c0 = param_2;
  local_b8 = param_3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_70,param_4,param_2,param_3);
  lVar2 = clap_builder::parser::error::MatchesError::unwrap(param_2,param_3,&local_70);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  uVar3 = *(undefined8 *)(lVar2 + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_d0,uVar3,uVar1);
  if (local_d0 == '\0') {
    param_1[1] = 1;
    param_1[2] = local_c8;
  }
  else {
    if (local_cf != '\x02') {
      local_90 = 0;
      local_78 = 0;
      local_b0 = &local_c0;
      local_a8 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = &local_90;
      local_98 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_70 = &PTR_s_Invalid_argument_for___00230468;
      local_68 = 2;
      local_50 = 0;
      local_60 = &local_b0;
      local_58 = 2;
      local_88 = uVar3;
      local_80 = uVar1;
      core::option::Option<T>::map_or_else(local_40,&local_70);
      local_28 = 1;
      uVar3 = ::alloc::boxed::Box<T>::new(local_40);
      param_1[1] = uVar3;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002304c0;
      uVar3 = 1;
      goto LAB_001bd3ed;
    }
    param_1[1] = 1;
    param_1[2] = 0xffffffffffffffff;
  }
  uVar3 = 0;
LAB_001bd3ed:
  *param_1 = uVar3;
  return param_1;
}