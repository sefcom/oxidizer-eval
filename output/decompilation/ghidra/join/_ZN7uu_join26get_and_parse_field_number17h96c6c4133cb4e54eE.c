void _ZN7uu_join26get_and_parse_field_number17h96c6c4133cb4e54eE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_40 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc8975813854a9a38E
            (local_40,param_2,param_3,1);
  auVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he70031129adfbfcbE
                     (param_3,1,local_40);
  uVar2 = auVar4._8_8_;
  lVar1 = auVar4._0_8_;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  _ZN7uu_join25parse_field_number_option17h48fa1297dd47f55bE(param_1,uVar3,uVar2);
  return;
}