undefined8 _ZN10uu_logname6uumain6uumain17h0e2eb17c6cf25f91E(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *local_368;
  code *local_360;
  undefined local_358 [16];
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  
  (*(code *)PTR__ZN10uu_logname6uu_app17h0a5118412066b45cE_001dba60)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd08ffb3d93990f3cE
            (local_358,&local_2e8,param_1,param_2);
  local_2f0 = local_328;
  local_300 = local_338;
  uStack_2fc = uStack_334;
  uStack_2f8 = uStack_330;
  uStack_2f4 = uStack_32c;
  local_310 = (undefined4)local_348;
  uStack_30c = local_348._4_4_;
  uStack_308 = uStack_340;
  uStack_304 = uStack_33c;
  local_320 = local_358._0_8_;
  uStack_318 = local_358._8_8_;
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hfe0f27db66830307E
            (&local_320);
  (*(code *)PTR__ZN10uu_logname13get_userlogin17h108c28e9a29e3387E_001dba70)(&local_320);
  local_368 = (undefined8 *)local_358;
  if (local_320 == -0x8000000000000000) {
    local_358 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001dba38)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001dba40;
    local_360 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0778c180f68d165fE;
    local_2e8 = (undefined **)&DAT_001d4e38;
    local_2e0 = 2;
    uStack_2c8 = 0;
    local_2d0 = 1;
    local_2d8 = (undefined *)&local_368;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001dba40)(&local_2e8);
    local_2e8 = &PTR_s_no_login_name_001d4eb0;
    local_2e0 = 1;
    local_2d8 = (undefined *)0x8;
    local_2d0 = 0;
    uStack_2c8 = 0;
    (*(code *)puVar1)(&local_2e8);
  }
  else {
    local_348 = CONCAT44(uStack_30c,local_310);
    local_358._0_8_ = local_320;
    local_358._8_8_ = uStack_318;
    local_360 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_2e8 = (undefined **)&DAT_001d4e58;
    local_2e0 = 2;
    uStack_2c8 = 0;
    local_2d0 = 1;
                    /* try { // try from 0014b139 to 0014b146 has its CatchHandler @ 0014b167 */
    local_2d8 = (undefined *)&local_368;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001dba78)(&local_2e8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd9d4e38b452bce0aE
              (local_358._0_8_,local_358._8_8_);
  }
  return 0;
}