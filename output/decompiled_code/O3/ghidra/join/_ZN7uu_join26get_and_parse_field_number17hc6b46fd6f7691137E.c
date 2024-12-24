void __rustcall
uu_join::get_and_parse_field_number(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_40 [40];
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(local_40,param_2,param_3,1);
  auVar4 = clap_builder::parser::error::MatchesError::unwrap(param_3,1,local_40);
  uVar2 = auVar4._8_8_;
  lVar1 = auVar4._0_8_;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  parse_field_number_option(param_1,uVar3,uVar2);
  return;
}