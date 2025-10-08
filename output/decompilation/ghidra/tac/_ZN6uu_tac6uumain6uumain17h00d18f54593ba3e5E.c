undefined  [16] _ZN6uu_tac6uumain6uumain17h00d18f54593ba3e5E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined uVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined auVar10 [16];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338 [8];
  undefined8 local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  
  (*(code *)PTR__ZN6uu_tac6uu_app17h1d932b9145e33582E_00361f00)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hb33f390c1f32f903E
            (&local_370,&local_2f8,param_1,param_2);
  local_378 = local_340;
  local_388 = local_350;
  uStack_384 = uStack_34c;
  uStack_380 = uStack_348;
  uStack_37c = uStack_344;
  local_398 = local_360;
  uStack_394 = uStack_35c;
  uStack_390 = uStack_358;
  uStack_38c = uStack_354;
  local_3a8 = local_370;
  local_3a0 = local_368;
                    /* try { // try from 0020cd59 to 0020ce3b has its CatchHandler @ 0020cf15 */
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00361f18
          )(&local_3a8,*(undefined8 *)PTR__ZN6uu_tac7options6BEFORE17he901c51c52bd38a8E_00361f10,
            *(undefined8 *)(PTR__ZN6uu_tac7options6BEFORE17he901c51c52bd38a8E_00361f10 + 8));
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00361f18
          )(&local_3a8,*(undefined8 *)PTR__ZN6uu_tac7options5REGEX17he1f2cca616d7d76cE_00361f20,
            *(undefined8 *)(PTR__ZN6uu_tac7options5REGEX17he1f2cca616d7d76cE_00361f20 + 8));
  uVar1 = *(undefined8 *)PTR__ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E_00361f28;
  uVar2 = *(undefined8 *)(PTR__ZN6uu_tac7options9SEPARATOR17h21d83d77c6ea9ab2E_00361f28 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h07ecadf5079fb1fbE
            (&local_2f8,&local_3a8,uVar1,uVar2);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2cad080dd3b4aa35E
                    (uVar1,uVar2,&local_2f8);
  if (lVar7 == 0) {
    pcVar9 = "\n";
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x10);
    if (lVar8 == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = *(char **)(lVar7 + 8);
    }
  }
  uVar1 = *(undefined8 *)PTR__ZN6uu_tac7options4FILE17hbfbba63fbacf671bE_00361f30;
  uVar2 = *(undefined8 *)(PTR__ZN6uu_tac7options4FILE17hbfbba63fbacf671bE_00361f30 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9798a6b9c8a3e4bcE
            (&local_2f8,&local_3a8,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hc924f32e3893dfd4E
            (local_338,uVar1,uVar2,&local_2f8);
  if (local_338[0] == 0) {
    local_2f0 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x10);
    if (local_2f0 == (undefined8 *)0x0) {
                    /* try { // try from 0020ceee to 0020cefd has its CatchHandler @ 0020cf15 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00361f40)(8,0x10);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *local_2f0 = 
    "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
    ;
    local_2f0[1] = 1;
    local_2f8 = 1;
    local_2e8 = 1;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h5c9d473316406584E(&local_2f8,local_338);
  }
                    /* try { // try from 0020cea2 to 0020ceb7 has its CatchHandler @ 0020cf00 */
  puVar4 = local_2f0;
  auVar10 = (*(code *)PTR__ZN6uu_tac3tac17h53155ed94a8f718fE_00361f38)
                      (local_2f0,local_2e8,uVar5,uVar6,pcVar9,lVar8 + (ulong)(lVar8 == 0));
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hb95745f1a61d8117E
            (local_2f8,puVar4);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hfbc977db24e201a3E
            (&local_3a8);
  return auVar10;
}