void _ZN7uu_join26get_and_parse_field_number17hff9b1fd9eb95d74dE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_40 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3493742de87d61ebE
            (local_40);
  auVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17haf5154e9dc375d47E(param_3,local_40)
  ;
  uVar2 = auVar4._8_8_;
  lVar1 = auVar4._0_8_;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  _ZN7uu_join25parse_field_number_option17hc351970518f2dd89E(param_1,uVar3,uVar2);
  return;
}