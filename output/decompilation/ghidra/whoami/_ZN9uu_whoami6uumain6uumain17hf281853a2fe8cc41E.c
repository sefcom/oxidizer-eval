void _ZN9uu_whoami6uumain6uumain17hf281853a2fe8cc41E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_330;
  undefined8 local_328;
  undefined8 local_320;
  long local_318;
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
  
  (*(code *)PTR__ZN9uu_whoami6uu_app17hf0a425c263ca9714E_001dead8)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h438e0e32edb5b8f4E
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
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h56f330c1f30662aaE
            (&local_2e0);
  (*(code *)PTR__ZN9uu_whoami6whoami17h857f327cfb28235aE_001deae8)(&local_2e0);
  local_320 = CONCAT44(uStack_2cc,local_2d0);
  if (local_2e0 != -0x8000000000000000) {
    local_330 = local_2e0;
    local_328 = local_2d8;
    uVar1 = _ZN6uucore4mods7display16println_verbatim17hc1d0b7d743017af8E(&local_330);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9c01be275b4dd4d3E
              (uVar1);
  }
  return;
}