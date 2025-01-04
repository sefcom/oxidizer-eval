void __rustcall
uu_pr::parse_usize(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_90 = param_3;
  local_88 = param_4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_80);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap(param_3,param_4,&local_80);
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000006;
  }
  else {
    parse_usize::___closure__(&local_50,&local_90,lVar1);
    local_58 = local_28;
    local_68 = local_38;
    uStack_60 = uStack_30;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_80 = local_50;
    core::ops::function::FnOnce::call_once(param_1,&local_80);
  }
  return;
}