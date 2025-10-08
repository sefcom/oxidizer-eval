undefined8 _ZN8uu_users6uumain6uumain17h07bb24838e32d233E(undefined8 param_1,undefined8 param_2)

{
  undefined4 **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  byte extraout_DL;
  undefined8 uVar4;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 **local_608;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 local_5c8;
  undefined4 *local_5c0;
  code *local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 **local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined local_2e8 [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  
  (*(code *)PTR__ZN8uu_users6uu_app17h7da0e4a9ca0670f1E_001e2890)(local_2e8);
                    /* try { // try from 00152e82 to 00152e8a has its CatchHandler @ 00153085 */
  (*(code *)PTR__ZN8uu_users14get_long_usage17hee942914ad333b9fE_001e2898)(&local_618);
  _ZN12clap_builder7builder7command7Command10after_help17hc3c20dd38abcda9bE
            (&local_5b0,local_2e8,&local_618);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h17a13a32e7a961dcE
            (&local_5f8,&local_5b0,param_1,param_2);
  local_2b8 = local_5c8;
  local_2c8 = local_5d8;
  uStack_2c4 = uStack_5d4;
  uStack_2c0 = uStack_5d0;
  uStack_2bc = uStack_5cc;
  local_2d8 = (undefined4)local_5e8;
  uStack_2d4 = local_5e8._4_4_;
  uStack_2d0 = uStack_5e0;
  uStack_2cc = uStack_5dc;
  uVar3 = *(undefined8 *)PTR__ZN8uu_users8ARG_FILE17h5581d6ea30a34740E_001e28a8;
  uVar4 = *(undefined8 *)(PTR__ZN8uu_users8ARG_FILE17h5581d6ea30a34740E_001e28a8 + 8);
                    /* try { // try from 00152f1b to 00152f42 has its CatchHandler @ 00153073 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1c4b52964e8492beE
            (&local_5b0,local_2e8,uVar3,uVar4);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he47af87570a89762E
                    (uVar3,uVar4,&local_5b0);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)
             PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0;
    uVar4 = *(undefined8 *)
             (PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
  }
                    /* try { // try from 00152f60 to 00152f77 has its CatchHandler @ 00153071 */
  uVar3 = _ZN6uucore8features5utmpx5Utmpx21iter_all_records_from17hf3137ad6b0598685E(uVar3,uVar4);
  _ZN4core4iter6traits8iterator8Iterator7collect17h8ab246990a06ff93E
            (&local_5b0,uVar3,extraout_DL & 1);
  ppuVar1 = local_5a0;
  uVar3 = uStack_5a8;
  local_608 = local_5a0;
  local_618 = (undefined4)local_5b0;
  uStack_614 = local_5b0._4_4_;
  uStack_610 = (undefined4)uStack_5a8;
  uStack_60c = uStack_5a8._4_4_;
  if (local_5a0 != (undefined4 **)0x0) {
                    /* try { // try from 00152f99 to 00152fb3 has its CatchHandler @ 00153064 */
    _ZN5alloc5slice11stable_sort17hbde198f5ab0ed970E(uStack_5a8,local_5a0);
    _ZN5alloc3str17join_generic_copy17h5a982ba1478ea753E(&local_5b0,uVar3,ppuVar1);
    local_5e8 = local_5a0;
    local_5f8 = (undefined4)local_5b0;
    uStack_5f4 = local_5b0._4_4_;
    uStack_5f0 = (undefined4)uStack_5a8;
    uStack_5ec = uStack_5a8._4_4_;
    local_5b8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_5b0 = &DAT_001dbb40;
    uStack_5a8 = 2;
    local_590 = 0;
    local_5a0 = &local_5c0;
    local_598 = 1;
                    /* try { // try from 00153010 to 0015301a has its CatchHandler @ 00153050 */
    local_5c0 = &local_5f8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e28b8)(&local_5b0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hf4418ebee0ba8ac9E
              (CONCAT44(uStack_5f4,local_5f8),CONCAT44(uStack_5ec,uStack_5f0));
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h866ec0f130c99f19E
            (&local_618);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hbfcb6a5b4969a18cE
            (local_2e8);
  return 0;
}