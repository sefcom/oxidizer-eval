void _ZN3bat12build_assets17h193b2c8b59bbddefE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined uVar3;
  long lVar4;
  undefined local_58 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (local_58,param_2,"source",6);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    ("source",6,local_58);
  puVar1 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0317c382272279baE_008079c0
  ;
  if (lVar4 != 0) {
    param_3 = *(undefined8 *)(lVar4 + 8);
    param_4 = *(undefined8 *)(lVar4 + 0x10);
  }
  bVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0317c382272279baE_008079c0
          )(param_2,"blank",5);
  uVar3 = (*(code *)puVar1)(param_2,"acknowledgements",0x10);
  (*(code *)PTR__ZN3bat6assets12build_assets5build17h804f4ffaa9aa359eE_00807ae0)
            (param_1,param_3,param_4,bVar2 ^ 1,uVar3,param_5,param_6,
             "0.25.0Clearing  ... okay\nskipped (not present)\n",6);
  return;
}