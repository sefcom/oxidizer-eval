void _ZN9uu_basenc14parse_cmd_args17h179f17a9a715c835E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  long lVar2;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined **local_2f8;
  undefined **local_2f0;
  undefined local_2e8 [16];
  undefined4 local_2d8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  
  (*(code *)PTR__ZN9uu_basenc6uu_app17hf8773d6a5be336bdE_00218c18)(local_2e8);
                    /* try { // try from 00166ac1 to 00166ad0 has its CatchHandler @ 00166c35 */
  _ZN6uucore4Args13collect_lossy17hc1619b15e767c58dE(&local_310,param_2,param_3);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc7f9a554853dd5dcE
            (&local_348,local_2e8,&local_310);
  local_2c4 = uStack_324;
  uStack_2c0 = uStack_320;
  uStack_2bc = uStack_31c;
  uStack_2b8 = uStack_318;
  local_2b4 = local_314;
  local_2d8 = local_338;
  local_2f8 = &PTR_DAT_00210ad8;
  local_2f0 = &
              PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hf04614167921eb3bE_00210c18
  ;
                    /* try { // try from 00166b60 to 00166be3 has its CatchHandler @ 00166c44 */
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h8368b17440220354E
                    (&local_2f8,local_2e8);
  if (lVar2 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hef4f8f39a54bc1b8E
              (&local_310,&DAT_0011a463,0x15);
    local_338 = (undefined4)local_300;
    uStack_334 = (undefined4)((ulong)local_300 >> 0x20);
    local_348 = local_310;
    uStack_344 = uStack_30c;
    uStack_340 = uStack_308;
    uStack_33c = uStack_304;
    uStack_330 = 1;
    lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1050c4150b32dc44E(&local_348);
    param_1[1] = lVar2;
    param_1[2] = (long)&
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hf04614167921eb3bE_00210c38
    ;
    *param_1 = 2;
  }
  else {
    uVar1 = *(undefined *)(lVar2 + 0x10);
    (*(code *)PTR__ZN9uu_base3211base_common6Config4from17he8007e948e715e4fE_00218c20)
              (&local_348,local_2e8);
    if (CONCAT44(uStack_344,local_348) == 2) {
      param_1[1] = CONCAT44(uStack_33c,uStack_340);
      param_1[2] = CONCAT44(uStack_334,local_338);
      *param_1 = 2;
    }
    else {
      param_1[5] = CONCAT44(uStack_31c,uStack_320);
      *(undefined4 *)(param_1 + 3) = uStack_330;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_32c;
      *(undefined4 *)(param_1 + 4) = uStack_328;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_324;
      *param_1 = CONCAT44(uStack_344,local_348);
      param_1[1] = CONCAT44(uStack_33c,uStack_340);
      param_1[2] = CONCAT44(uStack_334,local_338);
      *(undefined *)(param_1 + 6) = uVar1;
    }
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h3cb77b187d077377E
            (local_2e8);
  return;
}