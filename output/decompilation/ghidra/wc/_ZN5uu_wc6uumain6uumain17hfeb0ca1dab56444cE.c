undefined  [16] _ZN5uu_wc6uumain6uumain17hfeb0ca1dab56444cE(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_358;
  undefined8 local_350;
  long local_338;
  undefined8 local_330;
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
  
  (*(code *)PTR__ZN5uu_wc6uu_app17h2fb478d89b05fb4cE_001ffa00)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h22564bc8dca359b5E
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
                    /* try { // try from 0015b70b to 0015b718 has its CatchHandler @ 0015b7c2 */
  (*(code *)PTR__ZN5uu_wc8Settings3new17h23bd7857bdb7b414E_001ffa10)(&local_358,&local_2e0);
                    /* try { // try from 0015b719 to 0015b728 has its CatchHandler @ 0015b7af */
  (*(code *)PTR__ZN5uu_wc6Inputs3new17hed823cacb11525c8E_001ffa18)(&local_318,&local_2e0);
  auVar1._12_4_ = uStack_304;
  auVar1._8_4_ = local_308;
  auVar1._0_8_ = local_310;
  if (local_318 != 3) {
    local_338 = local_318;
    local_330 = local_310;
                    /* try { // try from 0015b757 to 0015b764 has its CatchHandler @ 0015b7a0 */
    auVar1 = (*(code *)PTR__ZN5uu_wc2wc17hc7d9f9fb029f4801E_001ffa20)(&local_338,&local_358);
    _ZN4core3ptr34drop_in_place_LT_uu_wc__Inputs_GT_17hb1413391f98ba4f8E(&local_338);
  }
  _ZN4core3ptr36drop_in_place_LT_uu_wc__Settings_GT_17hd65bd298243c0fbfE(local_358,local_350);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6290d764748214abE
            (&local_2e0);
  return auVar1;
}