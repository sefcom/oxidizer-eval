void _ZN4just10subcommand10Subcommand7compile17hd4ddb48c754af338E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_768;
  undefined **ppuStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708;
  undefined *local_700;
  undefined *local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined local_680 [752];
  undefined *local_390;
  undefined8 local_388;
  undefined **ppuStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320 [94];
  
  _ZN4just8compiler8Compiler7compile17h029c05ce59997e38E(&local_6f0,param_3,param_4,param_5);
  puVar1 = local_6f0;
  local_768 = uStack_6e8;
  ppuStack_760 = uStack_6e0;
  local_758 = uStack_6d8;
  uStack_750 = uStack_6d0;
  local_748 = CONCAT44(uStack_6c4,local_6c8);
  uStack_740 = uStack_6c0;
  uStack_73c = uStack_6bc;
  local_738 = local_6b8;
  uStack_734 = uStack_6b4;
  uStack_730 = uStack_6b0;
  local_728 = local_6a8;
  uStack_720 = uStack_6a0;
  local_718 = local_698;
  uStack_714 = uStack_694;
  uStack_710 = uStack_690;
  uStack_70c = uStack_68c;
  local_708 = local_688;
  (*(code *)PTR_memcpy_00565e28)(local_320,local_680,0x2f0);
  local_388 = local_768;
  ppuStack_380 = ppuStack_760;
  local_378 = (undefined4)local_758;
  uStack_374 = local_758._4_4_;
  uStack_370 = (undefined4)uStack_750;
  uStack_36c = uStack_750._4_4_;
  local_368 = (undefined4)local_748;
  uStack_364 = local_748._4_4_;
  uStack_360 = uStack_740;
  uStack_35c = uStack_73c;
  local_358 = local_738;
  uStack_354 = uStack_734;
  uStack_350 = (undefined4)uStack_730;
  uStack_34c = uStack_730._4_4_;
  local_348 = local_728;
  uStack_340 = uStack_720;
  local_338 = local_718;
  uStack_334 = uStack_714;
  uStack_330 = uStack_710;
  uStack_32c = uStack_70c;
  local_328 = local_708;
  local_390 = puVar1;
                    /* try { // try from 0038cf45 to 0038cf56 has its CatchHandler @ 0038d0bf */
  _ZN4just8justfile8Justfile14check_unstable17he04de0852efda7ffE
            (&local_6f0,&local_390,*(undefined4 *)(param_2 + 0x1a4));
  uVar2 = local_328;
  if ((char)local_6f0 == '8') {
    if ((*(char *)(param_2 + 0x1a7) != '\0') && (local_320[0] != 0)) {
      lVar3 = local_320[0];
      do {
        (*(code *)PTR__ZN4just5color5Color6stderr17h04afff4548ac818eE_00565e38)
                  (&local_6f0,param_2 + 0x184);
        local_768 = uVar2;
        ppuStack_760 = (undefined **)&DAT_00531110;
        local_748 = CONCAT62(local_748._2_6_,(undefined2)uStack_6e0);
        local_758 = local_6f0;
        uStack_750 = uStack_6e8;
        local_6f8 = 
        PTR__ZN67__LT_just__color_display__Wrapper_u20_as_u20_core__fmt__Display_GT_3fmt17hc72f260d5107bcedE_00565e40
        ;
        local_6f0 = &DAT_0052dbd8;
        uStack_6e8 = 2;
        uStack_6d0 = 0;
        uStack_6e0 = &local_700;
        uStack_6d8 = (undefined *)0x1;
        local_700 = (undefined *)&local_768;
                    /* try { // try from 0038d022 to 0038d02a has its CatchHandler @ 0038d0c1 */
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_6f0);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    (*(code *)PTR_memcpy_00565e28)(param_1,&local_390,0x360);
  }
  else {
    param_1[0xd] = CONCAT44(uStack_68c,uStack_690);
    param_1[0xb] = uStack_6a0;
    param_1[0xc] = CONCAT44(uStack_694,local_698);
    param_1[9] = uStack_6b0;
    param_1[10] = local_6a8;
    *(undefined4 *)(param_1 + 7) = uStack_6c0;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_6bc;
    *(undefined4 *)(param_1 + 8) = local_6b8;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_6b4;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_6d0;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_6d0._4_4_;
    *(undefined4 *)(param_1 + 6) = local_6c8;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_6c4;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_6e0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_6e0._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_6d8;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_6d8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_6f0;
    *(undefined4 *)((long)param_1 + 0xc) = local_6f0._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_6e8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_6e8._4_4_;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E
              (&local_390);
  }
  return;
}