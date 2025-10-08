void _ZN3bat20run_cache_subcommand17hfde70ac826b76eb1E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (&local_80,param_2,"target",6);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    ("target",6,&local_80);
  if (lVar2 != 0) {
    param_5 = *(undefined8 *)(lVar2 + 8);
    param_6 = *(undefined8 *)(lVar2 + 0x10);
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0317c382272279baE_008079c0
          )(param_2,"build",5);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0317c382272279baE_008079c0
            )(param_2,"clear",5);
    if (cVar1 != '\0') {
      _ZN3bat6assets12clear_assets17h259d7b4131bd5bbcE(param_5,param_6);
    }
  }
  else {
    _ZN3bat12build_assets17h193b2c8b59bbddefE(&local_80,param_2,param_3,param_4,param_5,param_6);
    if (local_80 != '\r') {
      param_1[8] = local_40;
      param_1[9] = uStack_38;
      param_1[6] = local_50;
      param_1[7] = uStack_48;
      param_1[4] = local_60;
      param_1[5] = uStack_58;
      param_1[2] = local_70;
      param_1[3] = uStack_68;
      *param_1 = CONCAT71(uStack_7f,local_80);
      param_1[1] = uStack_78;
      return;
    }
  }
  *(undefined *)param_1 = 0xd;
  return;
}