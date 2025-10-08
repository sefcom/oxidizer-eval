undefined8 _ZN7uu_head6uumain6uumain17hacddb22773ff1028E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_368 [4];
  int local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined local_310 [16];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR__ZN7uu_head6uu_app17hf575c326a0d0e85dE_001fe6d0)(&local_2d8);
                    /* try { // try from 0015e40e to 0015e41b has its CatchHandler @ 0015e5c5 */
  _ZN7uu_head11arg_iterate17h9da41de1ba75f81aE(local_368,param_1,param_2);
  if (local_368[0] == -0x7ffffffffffffffb) {
    _ZN12clap_builder7builder7command7Command20try_get_matches_from17h8c087d59478e6a24E
              (&local_348,&local_2d8);
    if (CONCAT44(uStack_344,local_348) == -0x8000000000000000) {
      uVar1 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17he92a37de32738e67E_001fe6d8
              )();
      return uVar1;
    }
    local_2e0 = local_318;
    local_2f0 = local_328;
    uStack_2ec = uStack_324;
    uStack_2e8 = uStack_320;
    uStack_2e4 = uStack_31c;
    local_300 = local_338;
    uStack_2fc = uStack_334;
    uStack_2f8 = uStack_330;
    uStack_2f4 = uStack_32c;
                    /* try { // try from 0015e4df to 0015e525 has its CatchHandler @ 0015e5a4 */
    (*(code *)PTR__ZN7uu_head11HeadOptions8get_from17h77af4328ac91ca1fE_001fe6e0)
              (&local_2d8,local_310);
    if (local_2d8 != 4) {
      local_328 = local_2b8;
      uStack_324 = uStack_2b4;
      uStack_320 = uStack_2b0;
      uStack_31c = uStack_2ac;
      local_338 = uStack_2c8;
      uStack_334 = uStack_2c4;
      uStack_330 = uStack_2c0;
      uStack_32c = uStack_2bc;
      local_348 = local_2d8;
      uStack_344 = uStack_2d4;
      uStack_340 = uStack_2d0;
      uStack_33c = uStack_2cc;
                    /* try { // try from 0015e55f to 0015e569 has its CatchHandler @ 0015e595 */
      uVar1 = (*(code *)PTR__ZN7uu_head7uu_head17hda677bb53c9ed421E_001fe6e8)(&local_348);
      _ZN4core3ptr41drop_in_place_LT_uu_head__HeadOptions_GT_17h7e905e8b593b6877E(&local_348);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h692d21db3190224dE
                (local_310);
      return uVar1;
    }
    local_368[0] = -0x7ffffffffffffffc;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc380b46ec72eadf4E(local_368);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h692d21db3190224dE
              (local_310);
  }
  else {
                    /* try { // try from 0015e487 to 0015e48e has its CatchHandler @ 0015e5b3 */
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc380b46ec72eadf4E(local_368);
    _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h5b399977f55ae63fE
              (&local_2d8);
  }
  return uVar1;
}