ulong _ZN7flealib10fleaserver6replay17h1abd155ed0ce5999E
                (undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_RBX;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined local_3a8 [8];
  undefined8 local_3a0;
  long local_398;
  long local_390;
  undefined *local_388;
  code *local_380;
  undefined *local_378;
  code *local_370;
  undefined8 local_368;
  undefined **local_360;
  undefined8 local_358;
  long **local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_330;
  undefined local_328 [16];
  long *local_318;
  undefined *local_310;
  undefined **local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  
  local_330 = param_1;
  uVar4 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
  if (3 < uVar4) {
    local_380 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_370 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_308 = &PTR_DAT_0080b200;
    local_300 = 2;
    local_2e8 = 0;
    local_2f8 = &local_388;
    local_2f0 = 2;
    local_388 = param_2;
    local_378 = param_3;
                    /* try { // try from 0049d2cc to 0049d32b has its CatchHandler @ 0049d67c */
    uStack_340 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                           (&PTR_DAT_0080b240);
    local_360 = (undefined **)&DAT_0016dc5f;
    local_358 = 0x13;
    local_350 = (long **)&DAT_0016dc5f;
    local_348 = 0x13;
    _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_308,4,&local_360);
  }
  (*(code *)
    PTR__ZN102__LT_flealib__commandprocessor__CommandProcessor_u20_as_u20_flealib__commandprocessor__FleaCommand_GT_3new17h586d0e7274d62e14E_00828178
  )(&local_308);
                    /* try { // try from 0049d33e to 0049d354 has its CatchHandler @ 0049d66d */
  (*(code *)
    PTR__ZN102__LT_flealib__commandprocessor__CommandProcessor_u20_as_u20_flealib__commandprocessor__FleaCommand_GT_7process17h2e8420d3bf6d33bbE_00828180
  )(local_3a8,&local_308,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
    *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),param_4);
  if (local_398 != 0) {
                    /* try { // try from 0049d368 to 0049d429 has its CatchHandler @ 0049d6a8 */
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8db7540a69ffbf83E
                      (local_3a0,local_398,"quit",4);
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (cVar3 != '\0') goto LAB_0049d42c;
    local_360 = (undefined **)
                (*(code *)
                  PTR__ZN3std2os4unix3net8datagram12UnixDatagram15set_nonblocking17h158d19ded619beaaE_00828800
                )(local_330,1);
    if (local_360 == (undefined **)0x0) {
                    /* try { // try from 0049d467 to 0049d470 has its CatchHandler @ 0049d6a8 */
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hf8032a12594530d3E
                (&local_360);
      lVar5 = local_398;
      uVar7 = local_3a0;
      lVar8 = 0;
      lVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h976b43e5259d6daeE
                        (0,local_3a0,local_398);
      puVar2 = 
      PTR__ZN63__LT__RF_std__net__tcp__TcpStream_u20_as_u20_std__io__Write_GT_5write17h954aeb07d32fa516E_00828808
      ;
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
                    /* try { // try from 0049d4c0 to 0049d4c8 has its CatchHandler @ 0049d6b4 */
          auVar9 = (*(code *)puVar2)(&local_330,lVar6);
          if (auVar9._0_8_ == 0) {
            lVar8 = lVar8 + auVar9._8_8_;
            if (lVar8 == local_398) goto LAB_0049d5fd;
          }
          else {
            local_328 = auVar9;
            cVar3 = _ZN3std2io5error5Error4kind17h7f0d5435ec1cf07fE(auVar9._8_8_);
            if (cVar3 != '\r') {
              local_390 = local_328._8_8_;
              lVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
              if (lVar5 != 0) {
                local_318 = &local_390;
                local_310 = 
                PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_00826f98
                ;
                local_360 = &PTR_DAT_0080b230;
                local_358 = 1;
                uStack_340 = 0;
                local_350 = &local_318;
                local_348 = 1;
                    /* try { // try from 0049d5aa to 0049d5f2 has its CatchHandler @ 0049d654 */
                local_368 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                      (&PTR_DAT_0080b270);
                local_388 = &DAT_0016dc5f;
                local_380 = (code *)0x13;
                local_378 = &DAT_0016dc5f;
                local_370 = (code *)0x13;
                _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_360,1,&local_388);
              }
                    /* try { // try from 0049d5f3 to 0049d5fc has its CatchHandler @ 0049d652 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE
                        (&local_390);
              auVar9 = local_328;
LAB_0049d5fd:
                    /* try { // try from 0049d5fd to 0049d610 has its CatchHandler @ 0049d66d */
              local_328 = auVar9;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E
                        (local_3a8);
                    /* try { // try from 0049d611 to 0049d61d has its CatchHandler @ 0049d67c */
              _ZN4core3ptr64drop_in_place_LT_flealib__commandprocessor__CommandProcessor_GT_17hfa448d48af951e22E
                        (&local_308);
                    /* try { // try from 0049d61e to 0049d625 has its CatchHandler @ 0049d663 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_3);
              uVar4 = 0;
              goto LAB_0049d44b;
            }
                    /* try { // try from 0049d4ea to 0049d4f6 has its CatchHandler @ 0049d68b */
            (*(code *)PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_00828810)(0,100000000);
                    /* try { // try from 0049d4f7 to 0049d4fe has its CatchHandler @ 0049d6b4 */
            _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h0973251e17d5721cE
                      (local_328);
            auVar9 = local_328;
          }
          lVar5 = local_398;
          uVar7 = local_3a0;
          local_328 = auVar9;
          lVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h976b43e5259d6daeE
                            (lVar8,local_3a0,local_398);
        } while (lVar6 != 0);
      }
                    /* try { // try from 0049d62d to 0049d64f has its CatchHandler @ 0049d6a8 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h308399354b042e38E_00826758)
                (uVar7,lVar5,lVar8,lVar5,&PTR_DAT_0080b258);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hf8032a12594530d3E
              (&local_360);
    lVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
    if (lVar5 != 0) {
      local_360 = &PTR_DAT_0080b220;
      local_358 = 1;
      local_350 = (long **)&DAT_00000008;
      local_348 = 0;
      uStack_340 = 0;
      local_368 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                            (&PTR_DAT_0080b288);
      local_388 = &DAT_0016dc5f;
      local_380 = (code *)0x13;
      local_378 = &DAT_0016dc5f;
      local_370 = (code *)0x13;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_360,1,&local_388);
    }
  }
  uVar4 = 0;
LAB_0049d42c:
                    /* try { // try from 0049d42c to 0049d435 has its CatchHandler @ 0049d66d */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_3a8);
                    /* try { // try from 0049d436 to 0049d442 has its CatchHandler @ 0049d67c */
  _ZN4core3ptr64drop_in_place_LT_flealib__commandprocessor__CommandProcessor_GT_17hfa448d48af951e22E
            (&local_308);
                    /* try { // try from 0049d443 to 0049d44a has its CatchHandler @ 0049d663 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_3);
LAB_0049d44b:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_2);
  return uVar4 & 0xffffffff;
}