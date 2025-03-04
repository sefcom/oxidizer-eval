undefined  [16] _ZN11uu_printenv6uumain6uumain17h9c419dd350239eabE(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  char **local_448;
  long local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  long local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  char *local_3b8;
  code *pcStack_3b0;
  char **local_3a8;
  code *pcStack_3a0;
  char **local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  char *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  char **local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined local_330 [56];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  char **local_2e8;
  code *pcStack_2e0;
  char **local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR__ZN11uu_printenv6uu_app17hf1331131741036edE_00206468)(&local_2f8);
  _ZN12clap_builder7builder7command7Command16get_matches_from17h513927fcdb2d9a9aE
            (local_330,&local_2f8,param_1,param_2);
  uVar1 = *(undefined8 *)PTR__ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E_00206470;
  uVar2 = *(undefined8 *)(PTR__ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E_00206470 + 8);
                    /* try { // try from 00157caf to 00157d3c has its CatchHandler @ 00158185 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h147f1cf25fd8ae8eE
            (&local_2f8,local_330,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hbf01985c69d4c13eE
            (&local_3b8,uVar1,uVar2,&local_2f8);
  if (local_3b8 != (char *)0x0) {
    local_2c8 = local_388;
    uStack_2c4 = uStack_384;
    uStack_2c0 = uStack_380;
    uStack_2bc = uStack_37c;
    local_2d8 = local_398;
    uStack_2d0 = (code *)CONCAT44(uStack_38c,uStack_390);
    local_2e8 = local_3a8;
    pcStack_2e0 = pcStack_3a0;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h65e73dfc47f1c957E
              (&local_408,&local_2f8);
    local_2f8 = (char *)CONCAT44(uStack_3fc,uStack_400);
    uStack_2f0 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
    if (local_408 != -0x8000000000000000) {
      local_438 = CONCAT44(uStack_3fc,uStack_400);
      uStack_430 = CONCAT44(uStack_3f4,uStack_3f8);
      local_440 = local_408;
      goto LAB_00157d8d;
    }
  }
  local_440 = 0;
  local_438 = 8;
  uStack_430 = 0;
LAB_00157d8d:
                    /* try { // try from 00157d9b to 00157da8 has its CatchHandler @ 0015815a */
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00206480
          )(local_330,*(undefined8 *)PTR__ZN11uu_printenv8OPT_NULL17h6012a15648cb6e92E_00206478,
            *(undefined8 *)(PTR__ZN11uu_printenv8OPT_NULL17h6012a15648cb6e92E_00206478 + 8));
  local_378 = "\n";
  if (cVar5 != '\0') {
    local_378 = "";
  }
  local_370 = 1;
  if (uStack_430 == 0) {
                    /* try { // try from 00157f9c to 00157fa9 has its CatchHandler @ 0015815a */
    (*(code *)PTR__ZN3std3env4vars17h104f59bf3851ffdbE_00206490)(&local_350);
    puVar4 = PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00206488;
    local_3c8 = local_340;
    uStack_3c0 = uStack_338;
    local_3d8 = local_350;
    uStack_3d4 = uStack_34c;
    uStack_3d0 = uStack_348;
    uStack_3cc = uStack_344;
                    /* try { // try from 00157ff0 to 00158002 has its CatchHandler @ 001581c7 */
    while ((*(code *)
             PTR__ZN73__LT_std__env__Vars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0b476a668b5d347eE_00206498
           )(&local_408,&local_3d8), local_408 != -0x8000000000000000) {
      local_458 = (char *)local_408;
      local_418 = local_3e0;
      local_428._0_4_ = local_3f0;
      local_428._4_4_ = uStack_3ec;
      uStack_420 = uStack_3e8;
      uStack_41c = uStack_3e4;
      uStack_2f0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      pcStack_2e0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_2d8 = &local_378;
      uStack_2d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha20f7cd80dde8271E;
      local_3b8 = "\x01";
      pcStack_3b0 = (code *)0x3;
      local_398 = (char **)0x0;
      local_3a8 = (char **)&local_2f8;
      pcStack_3a0 = (code *)0x3;
      local_2f8 = (char *)&local_458;
      local_2e8 = (char **)&local_428;
                    /* try { // try from 001580bf to 001580c3 has its CatchHandler @ 001581ab */
      (*(code *)puVar4)(&local_3b8);
                    /* try { // try from 001580c4 to 001580cb has its CatchHandler @ 001581ba */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9e7cd20c527a8eb1E(&local_428);
                    /* try { // try from 001580cc to 001580d3 has its CatchHandler @ 001581c7 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9e7cd20c527a8eb1E(&local_458);
    }
                    /* try { // try from 001580d9 to 001580e5 has its CatchHandler @ 0015815a */
    _ZN4core3ptr35drop_in_place_LT_std__env__Vars_GT_17h43b81f51e3f95869E(&local_3d8);
                    /* try { // try from 001580e6 to 001580ef has its CatchHandler @ 00158185 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h0871000d35d5b31aE
              (&local_440);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha29e73f210cabebcE
              (local_330);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = &local_3f0;
    auVar8 = auVar3 << 0x40;
  }
  else {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hde4ad9fc0cae4dbdE
              (&local_3d8,&local_440);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2a888fb598bf45e4E
              (&local_368,&local_3d8);
    bVar7 = true;
    if (CONCAT44(uStack_364,local_368) != -0x8000000000000000) {
      uVar6 = 0;
      do {
        local_458 = (char *)CONCAT44(uStack_364,local_368);
        uStack_450 = (code *)CONCAT44(uStack_35c,uStack_360);
        local_448 = local_358;
                    /* try { // try from 00157e8c to 00157e90 has its CatchHandler @ 00158191 */
        cVar5 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                          (uStack_450);
        if (cVar5 == '\0') {
          local_2e8 = local_448;
          local_2f8 = local_458;
          uStack_2f0 = uStack_450;
                    /* try { // try from 00157ec9 to 00157ed3 has its CatchHandler @ 0015818c */
          _ZN3std3env3var17hd00663f2ee81a0d5E(&local_408,&local_2f8);
          param_1 = CONCAT71((int7)(param_1 >> 8),1);
          if (local_408 == 0) {
            local_428._0_4_ = uStack_400;
            local_428._4_4_ = uStack_3fc;
            uStack_420 = uStack_3f8;
            uStack_41c = uStack_3f4;
            pcStack_3b0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_3a8 = &local_378;
            pcStack_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha20f7cd80dde8271E;
            local_2f8 = "\x01";
            uStack_2f0 = (code *)0x2;
            local_2d8 = (char **)0x0;
            local_2e8 = &local_3b8;
            pcStack_2e0 = (code *)0x2;
            local_3b8 = (char *)&local_428;
                    /* try { // try from 00157f77 to 00157f7f has its CatchHandler @ 00158164 */
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00206488)(&local_2f8);
                    /* try { // try from 00157f80 to 00157f87 has its CatchHandler @ 0015815f */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9e7cd20c527a8eb1E(&local_428)
            ;
            param_1 = uVar6;
            if (local_408 == 0) goto LAB_00157e4b;
          }
                    /* try { // try from 00157e40 to 00157e47 has its CatchHandler @ 0015818c */
          _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h6178202d1b7b8af5E
                    (&local_408);
          uVar6 = param_1 & 0xffffffff;
        }
        else {
                    /* try { // try from 00157e95 to 00157e9c has its CatchHandler @ 0015818a */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9e7cd20c527a8eb1E(&local_458);
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
LAB_00157e4b:
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2a888fb598bf45e4E
                  (&local_368,&local_3d8);
      } while (CONCAT44(uStack_364,local_368) != -0x8000000000000000);
      bVar7 = (char)uVar6 == '\0';
    }
                    /* try { // try from 00158107 to 00158126 has its CatchHandler @ 00158152 */
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7ca05d8393a14950E
              (&local_3d8);
    if (bVar7) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_1;
      auVar8 = auVar8 << 0x40;
    }
    else {
      auVar8 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_002064a0
               )(1);
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha29e73f210cabebcE
              (local_330);
  }
  return auVar8;
}