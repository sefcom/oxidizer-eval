undefined  [16] _ZN7uu_stty6uumain6uumain17hc483f49143486963E(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  long local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  long local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  long local_2e0;
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
  
  (*(code *)PTR__ZN7uu_stty6uu_app17hd6e5ef485fb27574E_001eade0)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hf861ac69e92ddcccE
            (&local_348,&local_2e0,param_1,param_2);
  local_2b0 = local_318;
  local_2c0 = local_328;
  uStack_2bc = uStack_324;
  uStack_2b8 = uStack_320;
  uStack_2b4 = uStack_31c;
  local_2d0 = local_338;
  uStack_2cc = uStack_334;
  uStack_2c8 = uStack_330;
  uStack_2c4 = uStack_32c;
  local_2e0 = local_348;
  local_2d8 = local_340;
                    /* try { // try from 00154d32 to 00154d60 has its CatchHandler @ 00154dce */
  (*(code *)PTR__ZN7uu_stty7Options4from17h626d4b5746ed2b17E_001eadf0)(&local_348,&local_2e0);
  if (local_348 == -0x7fffffffffffffff) {
    auVar1 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001eadf8
             )();
  }
  else {
    local_2f0 = local_328;
    uStack_2ec = uStack_324;
    uStack_2e8 = uStack_320;
    uStack_2e4 = uStack_31c;
    local_300 = local_338;
    uStack_2fc = uStack_334;
    uStack_2f8 = uStack_330;
    uStack_2f4 = uStack_32c;
    local_310 = local_348;
    local_308 = local_340;
                    /* try { // try from 00154d87 to 00154d91 has its CatchHandler @ 00154dbf */
    auVar1 = (*(code *)PTR__ZN7uu_stty4stty17h530db3b548de0632E_001eae00)(&local_310);
    _ZN4core3ptr37drop_in_place_LT_uu_stty__Options_GT_17h51ede0328921a7e9E(&local_310);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h42cb8a1c6f87c0f4E
            (&local_2e0);
  return auVar1;
}