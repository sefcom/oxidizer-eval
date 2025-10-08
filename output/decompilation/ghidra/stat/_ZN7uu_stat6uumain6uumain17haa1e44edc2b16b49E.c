undefined  [16] _ZN7uu_stat6uumain6uumain17haa1e44edc2b16b49E(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined auVar3 [16];
  undefined8 local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  long local_5b0;
  undefined8 local_5a8;
  ulong local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  long local_2e8;
  undefined8 local_2e0;
  ulong local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  
  (*(code *)PTR__ZN7uu_stat6uu_app17hbfdb7614c9afe971E_00222040)(&local_2e8);
  _ZN12clap_builder7builder7command7Command10after_help17h689e169e1dadb085E(&local_5b0,&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5b338e1121cdf3cfE
            (&local_5e8,&local_5b0,param_1,param_2);
  local_5f0 = local_5b8;
  local_600 = local_5c8;
  uStack_5fc = uStack_5c4;
  uStack_5f8 = uStack_5c0;
  uStack_5f4 = uStack_5bc;
  local_610 = local_5d8;
  uStack_60c = uStack_5d4;
  uStack_608 = uStack_5d0;
  uStack_604 = uStack_5cc;
  local_620 = local_5e8;
  local_618 = local_5e0;
                    /* try { // try from 00169576 to 00169588 has its CatchHandler @ 00169672 */
  (*(code *)PTR__ZN7uu_stat6Stater3new17hf7bef9b18037fce5E_00222050)(&local_2e8,&local_620);
  auVar3._8_8_ = local_2d8;
  auVar3._0_8_ = local_2e0;
  if (local_2e8 != -0x8000000000000000) {
    local_558 = local_290;
    uStack_550 = uStack_288;
    local_568 = local_2a0;
    uStack_564 = uStack_29c;
    uStack_560 = uStack_298;
    uStack_55c = uStack_294;
    local_578 = local_2b0;
    uStack_574 = uStack_2ac;
    uStack_570 = uStack_2a8;
    uStack_56c = uStack_2a4;
    local_588 = local_2c0;
    uStack_584 = uStack_2bc;
    uStack_580 = uStack_2b8;
    uStack_57c = uStack_2b4;
    local_598 = local_2d0;
    uStack_594 = uStack_2cc;
    uStack_590 = uStack_2c8;
    uStack_58c = uStack_2c4;
    local_5b0 = local_2e8;
    local_5a8 = local_2e0;
    local_5a0 = local_2d8;
                    /* try { // try from 00169619 to 0016962f has its CatchHandler @ 00169663 */
    iVar2 = (*(code *)PTR__ZN7uu_stat6Stater4exec17h69251542c7e1d7abE_00222058)(&local_5b0);
    if (iVar2 == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_2d8;
      auVar3 = auVar1 << 0x40;
    }
    else {
      auVar3 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00222060
               )(iVar2);
    }
    _ZN4core3ptr36drop_in_place_LT_uu_stat__Stater_GT_17h03daa1cf463b0657E(&local_5b0);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h95c39aef9149518eE
            (&local_620);
  return auVar3;
}