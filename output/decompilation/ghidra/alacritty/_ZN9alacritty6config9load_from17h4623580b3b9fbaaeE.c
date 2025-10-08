void _ZN9alacritty6config9load_from17h4623580b3b9fbaaeE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 local_518;
  undefined8 local_510;
  undefined **local_508;
  undefined8 local_500;
  undefined **local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  char *local_480;
  code *local_478;
  undefined *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined *local_458;
  code *local_450;
  undefined8 *local_448;
  code *local_440;
  int local_438;
  undefined4 uStack_434;
  int local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  
  local_518 = param_2;
  local_510 = param_3;
  _ZN9alacritty6config11read_config17hd2b840009702364fE(&local_438);
  if (local_438 == 6) {
    if (local_430 == 3) {
      uVar1 = CONCAT44(uStack_424,uStack_428);
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar1);
      if (cVar2 == '\0') {
                    /* try { // try from 00542da0 to 00542e54 has its CatchHandler @ 00542ea7 */
        lVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
        if (lVar3 == 0) {
          param_1[1] = 3;
          param_1[2] = uVar1;
          *param_1 = 6;
        }
        else {
          local_478 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
          local_4d8 = &PTR_DAT_00981de0;
          uStack_4d0 = 2;
          local_4b8 = 0;
          local_4c8 = &local_480;
          uStack_4c0 = 1;
          local_480 = (char *)&local_518;
          local_4e8 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                                (&PTR_DAT_00981e20);
          local_508 = (undefined **)0x201748;
          local_500 = 0x17;
          local_4f8 = (undefined **)&DAT_00201da1;
          local_4f0 = 0x11;
          _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_4d8,1,&local_508);
          param_1[1] = 3;
          param_1[2] = uVar1;
          *param_1 = 6;
          if (CONCAT44(uStack_434,local_438) != 6) {
            return;
          }
        }
        if (local_430 == 3) {
          return;
        }
        _ZN4core3ptr45drop_in_place_LT_alacritty__config__Error_GT_17hc0565752af3cd056E(&local_430);
        return;
      }
    }
    local_488 = local_3e0;
    local_498 = local_3f0;
    uStack_490 = uStack_3e8;
    local_4a8 = local_400;
    uStack_4a4 = uStack_3fc;
    uStack_4a0 = uStack_3f8;
    uStack_49c = uStack_3f4;
    local_4b8 = CONCAT44(uStack_40c,local_410);
    uStack_4b0 = uStack_408;
    uStack_4ac = uStack_404;
    local_4c8 = (char **)CONCAT44(uStack_41c,local_420);
    uStack_4c0 = CONCAT44(uStack_414,uStack_418);
    local_4d8 = (undefined **)CONCAT44(uStack_42c,local_430);
    uStack_4d0 = CONCAT44(uStack_424,uStack_428);
                    /* try { // try from 00542c4d to 00542d2f has its CatchHandler @ 00542ed5 */
    lVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar3 != 0) {
      local_450 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
      local_448 = &local_4d8;
      local_440 = 
      _ZN63__LT_alacritty__config__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h8f6deb2eaa2aacd3E;
      local_508 = &PTR_DAT_00981e00;
      local_500 = 2;
      local_4e8 = 0;
      local_4f8 = &local_458;
      local_4f0 = 2;
      local_458 = (undefined *)&local_518;
      local_460 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                            (&PTR_DAT_00981e38);
      local_480 = "alacritty_config_derive";
      local_478 = (code *)0x17;
      local_470 = &DAT_00201da1;
      local_468 = 0x11;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_508,1,&local_480);
    }
    param_1[0xb] = local_488;
    param_1[9] = local_498;
    param_1[10] = uStack_490;
    param_1[7] = CONCAT44(uStack_4a4,local_4a8);
    param_1[8] = CONCAT44(uStack_49c,uStack_4a0);
    param_1[5] = local_4b8;
    param_1[6] = CONCAT44(uStack_4ac,uStack_4b0);
    param_1[3] = local_4c8;
    param_1[4] = uStack_4c0;
    param_1[1] = local_4d8;
    param_1[2] = uStack_4d0;
    *param_1 = 6;
  }
  else {
    (*(code *)PTR_memcpy_009de0b0)(param_1,&local_438,0x420);
  }
  return;
}