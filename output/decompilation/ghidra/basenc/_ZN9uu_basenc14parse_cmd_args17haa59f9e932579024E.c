void _ZN9uu_basenc14parse_cmd_args17haa59f9e932579024E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  long lVar2;
  undefined **local_370;
  undefined **local_368;
  undefined local_358 [16];
  undefined4 local_348;
  undefined8 uStack_33c;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined8 uStack_304;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long local_2c0;
  
  (*(code *)PTR__ZN9uu_basenc6uu_app17hfbf1ac7160545103E_00254028)(&local_2e8);
                    /* try { // try from 0017cd64 to 0017cd73 has its CatchHandler @ 0017cef3 */
  _ZN6uucore4Args13collect_lossy17h59613048ab61941cE(&local_370,param_2,param_3);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd3fa77ff50e7945cE
            (&local_320,&local_2e8,&local_370);
  if (CONCAT44(uStack_31c,local_320) == -0x8000000000000000) {
    lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h52e31e1a4412d689E();
    param_1[1] = lVar2;
    param_1[2] = (long)&
                       PTR__ZN4core3ptr58drop_in_place_LT_uucore__mods__error__ClapErrorWrapper_GT_17h1994b3fe3caa76b7E_0024cd90
    ;
    *param_1 = 2;
    return;
  }
  uStack_33c = uStack_304;
  local_334 = local_2fc;
  uStack_330 = uStack_2f8;
  uStack_32c = uStack_2f4;
  uStack_328 = uStack_2f0;
  local_324 = local_2ec;
  local_348 = local_310;
  local_370 = &PTR_s_base64same_as__base64__programba_0024cb70;
  local_368 = &
              PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h71d2944a8867f33eE_0024ccb0
  ;
                    /* try { // try from 0017ce0d to 0017ce9b has its CatchHandler @ 0017cf05 */
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h0ca1d326b6d409faE
                    (&local_370,local_358);
  if (lVar2 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17heaa6d59ecfaf3b76E(&local_320)
    ;
    local_2e8 = local_320;
    uStack_2e4 = uStack_31c;
    uStack_2e0 = uStack_318;
    uStack_2dc = uStack_314;
    local_2d0 = 1;
    lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h92a545b9430b9ec5E(&local_2e8);
    param_1[1] = lVar2;
    param_1[2] = (long)&
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h71d2944a8867f33eE_0024cce8
    ;
  }
  else {
    uVar1 = *(undefined *)(lVar2 + 0x10);
    (*(code *)PTR__ZN9uu_base3211base_common6Config4from17h8f03cd9b16c9529cE_00254030)
              (&local_2e8,local_358);
    if (CONCAT44(uStack_2e4,local_2e8) != 2) {
      param_1[5] = local_2c0;
      *(undefined4 *)(param_1 + 3) = local_2d0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_2cc;
      *(undefined4 *)(param_1 + 4) = uStack_2c8;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_2c4;
      *param_1 = CONCAT44(uStack_2e4,local_2e8);
      param_1[1] = CONCAT44(uStack_2dc,uStack_2e0);
      param_1[2] = local_2d8;
      *(undefined *)(param_1 + 6) = uVar1;
      goto LAB_0017cedb;
    }
    param_1[1] = CONCAT44(uStack_2dc,uStack_2e0);
    param_1[2] = local_2d8;
  }
  *param_1 = 2;
LAB_0017cedb:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h232bb017e5ec51f0E
            (local_358);
  return;
}