void __rustcall
uu_pr::parse_usize(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [48];
  
  local_60 = param_3;
  local_58 = param_4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(local_50);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap(param_3,param_4,local_50);
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000006;
  }
  else {
    parse_usize::___closure__(local_50,&local_60,lVar1);
    core::ops::function::FnOnce::call_once(param_1,local_50);
  }
  return;
}