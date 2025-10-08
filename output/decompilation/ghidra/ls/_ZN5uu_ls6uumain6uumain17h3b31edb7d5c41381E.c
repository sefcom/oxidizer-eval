undefined  [16] _ZN5uu_ls6uumain6uumain17h3b31edb7d5c41381E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  long local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined local_410 [240];
  long local_320 [8];
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN5uu_ls6uu_app17h9a6b851284402e3cE_0048f940)(local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h685e70cbec1a8c5dE
            (&local_538,local_2e0,param_1,param_2);
  local_578 = local_508;
  local_588 = local_518;
  uStack_584 = uStack_514;
  uStack_580 = uStack_510;
  uStack_57c = uStack_50c;
  local_598 = (undefined4)local_528;
  uStack_594 = local_528._4_4_;
  uStack_590 = uStack_520;
  uStack_58c = uStack_51c;
  local_5a8 = (undefined4)local_538;
  uStack_5a4 = local_538._4_4_;
  uStack_5a0 = (undefined4)uStack_530;
  uStack_59c = uStack_530._4_4_;
                    /* try { // try from 00274fb7 to 00274fc9 has its CatchHandler @ 002751ec */
  (*(code *)PTR__ZN5uu_ls6Config4from17h82af185516eb5913E_0048f950)(&local_538,&local_5a8);
  uVar2 = local_528;
  uVar1 = uStack_530;
  lVar3 = local_538;
  auVar4._8_8_ = local_528;
  auVar4._0_8_ = uStack_530;
  if (local_538 != -0x8000000000000000) {
    (*(code *)PTR_memcpy_0048f8f8)(local_410,&uStack_520,0xf0);
    local_428 = lVar3;
    uStack_420 = uVar1;
    local_418 = uVar2;
    uVar1 = *(undefined8 *)PTR__ZN5uu_ls7options5PATHS17h978caca964396fddE_0048f958;
    uVar2 = *(undefined8 *)(PTR__ZN5uu_ls7options5PATHS17h978caca964396fddE_0048f958 + 8);
                    /* try { // try from 00275036 to 0027508c has its CatchHandler @ 002751f1 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfbcc0c2063884afeE
              (&local_538,&local_5a8,uVar1,uVar2);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h38b2a52603c26d21E
              (local_320,uVar1,uVar2,&local_538);
    if (local_320[0] == 0) {
                    /* try { // try from 00275157 to 0027519d has its CatchHandler @ 002751f1 */
      _ZN5uu_ls6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hd8ca182971461fb3E(&local_5c0);
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator7collect17h922548e3af56ba0fE(&local_538,local_320);
      local_5b8 = (undefined4)uStack_530;
      uStack_5b4 = uStack_530._4_4_;
      uStack_5b0 = (undefined4)local_528;
      uStack_5ac = local_528._4_4_;
      local_5c0 = local_538;
    }
    local_528 = CONCAT44(uStack_5ac,uStack_5b0);
    local_538 = local_5c0;
    uStack_530 = CONCAT44(uStack_5b4,local_5b8);
    auVar4 = (*(code *)PTR__ZN5uu_ls4list17hbc04f019ee17b84aE_0048f960)(&local_538,&local_428);
                    /* try { // try from 0027519e to 002751b0 has its CatchHandler @ 002751ec */
    _ZN4core3ptr34drop_in_place_LT_uu_ls__Config_GT_17h98e9458fc2400b9cE(&local_428);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h9e0ce0f8c0d39563E
            (&local_5a8);
  return auVar4;
}