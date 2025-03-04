undefined8 *
_ZN9uu_base3211base_common19parse_base_cmd_args17h94218dbfb2ea4ba6E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined auVar1 [16];
  long local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined local_2e8 [712];
  
  (*(code *)PTR__ZN9uu_base3211base_common8base_app17ha21d2a66676032efE_0024df48)
            (local_2e8,param_4,param_5,param_6,param_7);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd471734dc146ea72E
            (&local_320,local_2e8,param_2,param_3);
  if (local_320 == -0x8000000000000000) {
    auVar1 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0024df50
             )();
    *(undefined (*) [16])(param_1 + 1) = auVar1;
    *param_1 = 2;
  }
  else {
    local_328 = local_2f0;
    local_338 = local_300;
    uStack_334 = uStack_2fc;
    uStack_330 = uStack_2f8;
    uStack_32c = uStack_2f4;
    local_348 = local_310;
    uStack_344 = uStack_30c;
    uStack_340 = uStack_308;
    uStack_33c = uStack_304;
    local_358 = local_320;
    local_350 = local_318;
                    /* try { // try from 00178d43 to 00178d4e has its CatchHandler @ 00178d69 */
    (*(code *)PTR__ZN9uu_base3211base_common6Config4from17h8f03cd9b16c9529cE_0024df58)
              (param_1,&local_358);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hcb9c8c91441f9e13E
              (&local_358);
  }
  return param_1;
}