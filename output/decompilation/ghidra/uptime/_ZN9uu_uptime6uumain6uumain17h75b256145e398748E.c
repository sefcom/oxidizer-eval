undefined  [16]
_ZN9uu_uptime6uumain6uumain17h75b256145e398748E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  
  (*(code *)PTR__ZN9uu_uptime6uu_app17hf423f0f417b5740eE_00210308)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc80c200f06e99637E
            (&local_318,&local_2e0,param_1,param_2);
  local_2b0 = local_2e8;
  local_2c0 = local_2f8;
  uStack_2bc = uStack_2f4;
  uStack_2b8 = uStack_2f0;
  uStack_2b4 = uStack_2ec;
  local_2d0 = local_308;
  uStack_2cc = uStack_304;
  uStack_2c8 = uStack_300;
  uStack_2c4 = uStack_2fc;
  local_2e0 = local_318;
  local_2d8 = local_310;
  uVar1 = *(undefined8 *)PTR__ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E_00210318;
  uVar2 = *(undefined8 *)(PTR__ZN9uu_uptime7options4PATH17h8432a602c5a8eb25E_00210318 + 8);
                    /* try { // try from 0016255a to 001625b8 has its CatchHandler @ 001625dc */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3183c26ce39a54d0E
            (&local_318,&local_2e0,uVar1,uVar2);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hdea74081ce6b7d63E
                    (uVar1,uVar2,&local_318);
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00210328
          )(&local_2e0,*(undefined8 *)PTR__ZN9uu_uptime7options5SINCE17h188f5410e8c83d61E_00210320,
            *(undefined8 *)(PTR__ZN9uu_uptime7options5SINCE17h188f5410e8c83d61E_00210320 + 8));
  if (cVar3 == '\0') {
    if (lVar4 == 0) {
      auVar5 = (*(code *)PTR__ZN9uu_uptime14default_uptime17h6894ccc3fb001882E_00210340)();
    }
    else {
      auVar5 = (*(code *)PTR__ZN9uu_uptime16uptime_with_file17he947cbe207c3e785E_00210338)(lVar4);
    }
  }
  else {
    auVar5 = (*(code *)PTR__ZN9uu_uptime12uptime_since17h394d6aa0daf3546aE_00210330)();
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he6050ef9d6f002e3E
            (&local_2e0);
  return auVar5;
}