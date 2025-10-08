void _ZN4just6parser6Parser11parse_value17h216c4bdeb7f558a6E(long *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long extraout_RDX;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  long local_378;
  undefined8 uStack_370;
  byte local_360;
  undefined uStack_35f;
  undefined2 uStack_35e;
  undefined4 uStack_35c;
  undefined uStack_358;
  undefined uStack_357;
  undefined2 uStack_356;
  undefined4 uStack_354;
  undefined local_350;
  undefined uStack_34f;
  undefined2 uStack_34e;
  undefined4 uStack_34c;
  undefined uStack_348;
  undefined uStack_347;
  undefined2 uStack_346;
  undefined4 uStack_344;
  undefined local_340;
  undefined uStack_33f;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined uStack_338;
  undefined uStack_337;
  undefined2 uStack_336;
  undefined4 uStack_334;
  undefined local_330;
  undefined uStack_32f;
  undefined2 uStack_32e;
  undefined4 uStack_32c;
  undefined uStack_328;
  undefined uStack_327;
  undefined6 uStack_326;
  undefined local_320;
  undefined uStack_31f;
  undefined2 uStack_31e;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  long lStack_310;
  long local_308;
  long lStack_300;
  long local_2f8;
  long lStack_2f0;
  long local_2e8;
  undefined local_2e0 [16];
  long local_2d0;
  long lStack_2c8;
  long local_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long local_2a8;
  undefined4 uStack_29c;
  undefined4 uStack_294;
  undefined4 uStack_28c;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined local_248 [16];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  undefined local_178 [4];
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_130 [28];
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined local_b0 [28];
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  cVar3 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x21);
  if ((cVar3 != '\0') ||
     (cVar3 = _ZN4just6parser6Parser29next_is_shell_expanded_string17h8493042b5ebe3556E(param_2),
     cVar3 != '\0')) {
    _ZN4just6parser6Parser20parse_string_literal17h7c39b9a6292fbeceE(&local_360,param_2);
    if ((char)local_318 == '%') {
      param_1[5] = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
      param_1[6] = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
      param_1[3] = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
      param_1[4] = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
      param_1[1] = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
      param_1[2] = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
      *param_1 = 0x10;
      return;
    }
    goto LAB_0037d469;
  }
  cVar3 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,3);
  if (cVar3 == '\0') {
    cVar3 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x18);
    if (cVar3 != '\0') {
      _ZN4just6parser6Parser16accepted_keyword17h41084b1fcaf79f7bE(&local_360,param_2,3);
      if ((char)local_318 != '%') {
        param_1[9] = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
        *(ulong *)((long)param_1 + 0x39) =
             CONCAT17(uStack_328,CONCAT43(uStack_32c,CONCAT21(uStack_32e,uStack_32f)));
        *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_320,CONCAT61(uStack_326,uStack_327));
        *(ulong *)((long)param_1 + 0x29) =
             CONCAT17(uStack_338,CONCAT43(uStack_33c,CONCAT21(uStack_33e,uStack_33f)));
        *(ulong *)((long)param_1 + 0x31) =
             CONCAT17(local_330,CONCAT43(uStack_334,CONCAT21(uStack_336,uStack_337)));
        *(ulong *)((long)param_1 + 0x19) =
             CONCAT17(uStack_348,CONCAT43(uStack_34c,CONCAT21(uStack_34e,uStack_34f)));
        *(ulong *)((long)param_1 + 0x21) =
             CONCAT17(local_340,CONCAT43(uStack_344,CONCAT21(uStack_346,uStack_347)));
        *(ulong *)((long)param_1 + 9) =
             CONCAT17(uStack_358,CONCAT43(uStack_35c,CONCAT21(uStack_35e,uStack_35f)));
        *(ulong *)((long)param_1 + 0x11) =
             CONCAT17(local_350,CONCAT43(uStack_354,CONCAT21(uStack_356,uStack_357)));
        *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
        *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
        *(byte *)(param_1 + 1) = local_360;
        *(char *)(param_1 + 10) = (char)local_318;
        goto LAB_0037d4e8;
      }
      if ((local_360 & 1) == 0) {
        _ZN4just6parser6Parser10parse_name17he2804e36e47b7e10E(&local_360,param_2);
        local_218 = CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360));
        local_3b8 = CONCAT44(uStack_35c,local_218);
        uStack_210 = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
        uStack_3b0 = CONCAT44(uStack_354,uStack_210);
        local_208 = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
        local_3a8 = CONCAT44(uStack_34c,local_208);
        uStack_200 = CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348));
        uStack_3a0 = CONCAT44(uStack_344,uStack_200);
        local_1f8 = CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340));
        local_398 = CONCAT44(uStack_33c,local_1f8);
        uStack_1f0 = CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338));
        uStack_390 = CONCAT44(uStack_334,uStack_1f0);
        local_1e8 = CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330));
        local_388 = CONCAT44(uStack_32c,local_1e8);
        uStack_380 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
        local_378 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
        if ((char)local_318 != '%') goto LAB_0037d501;
        uStack_380._4_4_ = (undefined4)((uint6)uStack_326 >> 0x10);
        uStack_214 = uStack_35c;
        uStack_20c = uStack_354;
        uStack_204 = uStack_34c;
        uStack_1fc = uStack_344;
        uStack_1f4 = uStack_33c;
        uStack_1ec = uStack_334;
        uStack_1e4 = uStack_32c;
        uStack_1e0 = (undefined4)uStack_380;
        uStack_1dc = uStack_380._4_4_;
        uStack_2ac = uStack_354;
        uStack_29c = uStack_344;
        uStack_294 = uStack_33c;
        uStack_28c = uStack_334;
        uStack_284 = uStack_32c;
        uStack_280 = (undefined4)uStack_380;
        uStack_27c = uStack_380._4_4_;
        local_1d8 = local_378;
        cVar3 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x1c);
        if (cVar3 == '\0') {
          param_1[9] = local_1d8;
          param_1[7] = CONCAT44(uStack_1e4,local_1e8);
          param_1[8] = CONCAT44(uStack_1dc,uStack_1e0);
          param_1[5] = CONCAT44(uStack_1f4,local_1f8);
          param_1[6] = CONCAT44(uStack_1ec,uStack_1f0);
          param_1[3] = CONCAT44(uStack_204,local_208);
          param_1[4] = CONCAT44(uStack_1fc,uStack_200);
          param_1[1] = CONCAT44(uStack_214,local_218);
          param_1[2] = CONCAT44(uStack_20c,uStack_210);
          *param_1 = 0x11;
          return;
        }
        _ZN4just6parser6Parser14parse_sequence17h30bb3b312b01651eE(&local_360,param_2);
        if ((char)local_318 == '%') {
          local_228 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
          local_238 = CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360));
          uStack_230 = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
          uStack_234 = uStack_35c;
          uStack_22c = uStack_354;
                    /* try { // try from 0037d34c to 0037d388 has its CatchHandler @ 0037da01 */
          auVar8 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                             (&local_2b8);
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                            (auVar8._0_8_,auVar8._8_8_,"which",5);
          if (cVar3 != '\0') {
            _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hdc60f8c84685f8f9E
                      (param_2 + 0x68,4);
          }
          local_258 = local_228;
          local_268 = CONCAT44(uStack_234,local_238);
          uStack_260 = uStack_230;
          uStack_25c = uStack_22c;
          _ZN4just5thunk5Thunk7resolve17h571e6f3d582c322bE(&local_360,&local_218,&local_268);
          lVar4 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
          local_3b8 = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
          uStack_3b0 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
          local_3a8 = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
          uStack_3a0 = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
          local_398 = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
          uStack_390 = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
          local_388 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
          uStack_380 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
          local_378 = CONCAT44(uStack_314,local_318);
          uStack_370 = lStack_310;
          if (lVar4 != 7) {
            param_1[0xf] = local_2e8;
            param_1[0xd] = local_2f8;
            param_1[0xe] = lStack_2f0;
            param_1[0xb] = local_308;
            param_1[0xc] = lStack_300;
            param_1[9] = local_378;
            param_1[10] = lStack_310;
            param_1[7] = local_388;
            param_1[8] = uStack_380;
            param_1[5] = local_398;
            param_1[6] = uStack_390;
            param_1[3] = local_3a8;
            param_1[4] = uStack_3a0;
            param_1[1] = local_3b8;
            param_1[2] = uStack_3b0;
            *param_1 = lVar4;
            return;
          }
          goto LAB_0037d085;
        }
      }
      else {
        _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_360,param_2,0x1c);
        if ((char)local_318 != '%') goto LAB_0037d1c6;
        _ZN4just6parser6Parser15parse_condition17h084dccdf2ccc72f1E(&local_360,param_2);
        if ((char)local_318 == '%') {
          local_2a8 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
          uStack_2b0 = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
          local_2b8 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
          uStack_2ac = uStack_354;
                    /* try { // try from 0037cf46 to 0037cf74 has its CatchHandler @ 0037da13 */
          _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_360,param_2,0xf);
          if ((char)local_318 == '%') {
            _ZN4just6parser6Parser16parse_expression17h8b701a5fe27dff96E(&local_360,param_2);
            uVar6 = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
            local_3b8 = CONCAT44(uStack_354,uVar6);
            lVar4 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
            uStack_370 = lStack_310;
            lVar7 = uStack_370;
            if (CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360))) != 0x12) {
              local_b8 = local_2e8;
              local_c8 = local_2f8;
              lStack_c0 = lStack_2f0;
              local_d8 = local_308;
              lStack_d0 = lStack_300;
              local_388._0_4_ = (undefined4)lVar4;
              local_388._4_4_ = (undefined4)((uint6)uStack_326 >> 0x10);
              uStack_114 = uStack_344;
              uStack_10c = uStack_33c;
              uStack_104 = uStack_334;
              uStack_fc = uStack_32c;
              local_f8 = (undefined4)local_388;
              uStack_f4 = local_388._4_4_;
              uStack_ec = uStack_31c;
              uStack_370._0_4_ = (undefined4)lStack_310;
              uStack_370._4_4_ = (undefined4)((ulong)lStack_310 >> 0x20);
              local_e8 = local_318;
              uStack_e4 = uStack_314;
              uStack_e0 = (undefined4)uStack_370;
              uStack_dc = uStack_370._4_4_;
                    /* try { // try from 0037d8d6 to 0037d8e2 has its CatchHandler @ 0037da13 */
              uStack_370 = lVar7;
              lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h35f8c50f78073f7aE(local_130);
                    /* try { // try from 0037d8ee to 0037d8ff has its CatchHandler @ 0037d9ef */
              local_268 = lVar4;
              _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_360,param_2,0x1d);
              if ((char)local_318 == '%') {
                param_1[4] = local_2a8;
                param_1[2] = local_2b8;
                param_1[3] = CONCAT44(uStack_2ac,uStack_2b0);
                *param_1 = 8;
                param_1[1] = lVar4;
                return;
              }
              local_3b8._0_7_ = CONCAT43(uStack_31c,CONCAT21(uStack_31e,uStack_31f));
              uVar5 = local_3b8;
              *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
              *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
              *(undefined4 *)((long)param_1 + 0x4c) = uStack_31c;
              *(undefined4 *)((long)param_1 + 0x49) = (undefined4)local_3b8;
              param_1[1] = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
              *(uint *)(param_1 + 2) = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
              *(undefined4 *)((long)param_1 + 0x14) = uStack_354;
              *(uint *)(param_1 + 3) = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
              *(undefined4 *)((long)param_1 + 0x1c) = uStack_34c;
              *(uint *)(param_1 + 4) = CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348));
              *(undefined4 *)((long)param_1 + 0x24) = uStack_344;
              *(uint *)(param_1 + 5) = CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340));
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_33c;
              *(uint *)(param_1 + 6) = CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338));
              *(undefined4 *)((long)param_1 + 0x34) = uStack_334;
              *(uint *)(param_1 + 7) = CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330));
              *(undefined4 *)((long)param_1 + 0x3c) = uStack_32c;
              param_1[8] = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
              *(undefined *)(param_1 + 9) = local_320;
              *(char *)(param_1 + 10) = (char)local_318;
              *param_1 = 0x12;
                    /* try { // try from 0037d9ba to 0037d9c6 has its CatchHandler @ 0037da13 */
              local_3b8 = uVar5;
              _ZN4core3ptr74drop_in_place_LT_alloc__boxed__Box_LT_just__expression__Expression_GT__GT_17h95e5d821ad53849fE
                        (&local_268);
              goto LAB_0037d84b;
            }
            param_1[9] = CONCAT44(uStack_314,local_318);
            param_1[10] = lStack_310;
            param_1[7] = lVar4;
            param_1[8] = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
            param_1[5] = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
            param_1[6] = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
            param_1[3] = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
            param_1[4] = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
            *(undefined4 *)(param_1 + 1) = uVar6;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_354;
            *(uint *)(param_1 + 2) = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
            *(undefined4 *)((long)param_1 + 0x14) = uStack_34c;
          }
          else {
            local_3b8._0_7_ = CONCAT43(uStack_31c,CONCAT21(uStack_31e,uStack_31f));
            uVar5 = local_3b8;
            *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
            *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
            *(undefined4 *)((long)param_1 + 0x4c) = uStack_31c;
            *(undefined4 *)((long)param_1 + 0x49) = (undefined4)local_3b8;
            param_1[1] = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
            *(uint *)(param_1 + 2) = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
            *(undefined4 *)((long)param_1 + 0x14) = uStack_354;
            *(uint *)(param_1 + 3) = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_34c;
            param_1[4] = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
            param_1[5] = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
            param_1[6] = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
            param_1[7] = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
            param_1[8] = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
            *(undefined *)(param_1 + 9) = local_320;
            *(char *)(param_1 + 10) = (char)local_318;
            local_3b8 = uVar5;
          }
          *param_1 = 0x12;
LAB_0037d84b:
          _ZN4core3ptr47drop_in_place_LT_just__condition__Condition_GT_17ha2d00dd0ebfcec0cE
                    (&local_2b8);
          return;
        }
      }
LAB_0037d469:
      local_378 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
      local_3b8 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
      uStack_3b0 = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
      local_3a8 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
      uStack_3a0 = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
      local_398 = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
      uStack_390 = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
      local_388 = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
      uStack_380 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
      *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
      uVar6 = CONCAT13((undefined)uStack_314,local_318._1_3_);
      goto LAB_0037d4b5;
    }
    cVar3 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x1c);
    if (cVar3 == '\0') {
      _ZN4just6parser6Parser16unexpected_token17hbee08644eef5d075E(&local_360,param_2);
      param_1[9] = CONCAT44(uStack_314,local_318);
      param_1[10] = lStack_310;
      param_1[7] = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
      param_1[8] = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
      param_1[5] = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
      param_1[6] = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
      param_1[3] = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
      param_1[4] = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
      param_1[1] = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
      param_1[2] = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
      goto LAB_0037d4e8;
    }
    _ZN4just6parser6Parser7presume17he2055272497a907bE(&local_360,param_2,0x1c);
    if ((char)local_318 == '%') {
      _ZN4just6parser6Parser16parse_expression17h8b701a5fe27dff96E(&local_360,param_2);
      local_3b8 = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
      uStack_3b0 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
      local_3a8 = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
      uStack_3a0 = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
      local_398 = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
      uStack_390 = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
      local_388 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
      uStack_380 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
      local_378 = CONCAT44(uStack_314,local_318);
      uStack_370 = lStack_310;
      lVar4 = uStack_370;
      if (CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360))) != 0x12) {
        local_38 = local_2e8;
        local_48 = local_2f8;
        lStack_40 = lStack_2f0;
        local_58 = local_308;
        lStack_50 = lStack_300;
        local_388._4_4_ = (undefined4)((uint6)uStack_326 >> 0x10);
        uStack_94 = uStack_344;
        uStack_8c = uStack_33c;
        uStack_84 = uStack_334;
        uStack_7c = uStack_32c;
        local_78 = (undefined4)local_388;
        uStack_74 = local_388._4_4_;
        uStack_6c = uStack_31c;
        uStack_370._0_4_ = (undefined4)lStack_310;
        uStack_370._4_4_ = (undefined4)((ulong)lStack_310 >> 0x20);
        local_68 = local_318;
        uStack_64 = uStack_314;
        uStack_60 = (undefined4)uStack_370;
        uStack_5c = uStack_370._4_4_;
        uStack_370 = lVar4;
        lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h35f8c50f78073f7aE(local_b0);
                    /* try { // try from 0037d5a5 to 0037d5b6 has its CatchHandler @ 0037da25 */
        local_2b8 = lVar4;
        _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_360,param_2,0x1d);
        if ((char)local_318 == '%') {
          *param_1 = 0xd;
          param_1[1] = lVar4;
          return;
        }
        local_3b8._0_7_ = CONCAT43(uStack_31c,CONCAT21(uStack_31e,uStack_31f));
        uVar5 = local_3b8;
        *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
        *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
        *(undefined4 *)((long)param_1 + 0x4c) = uStack_31c;
        *(undefined4 *)((long)param_1 + 0x49) = (undefined4)local_3b8;
        param_1[1] = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
        *(uint *)(param_1 + 2) = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
        *(undefined4 *)((long)param_1 + 0x14) = uStack_354;
        *(uint *)(param_1 + 3) = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_34c;
        *(uint *)(param_1 + 4) = CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348));
        *(undefined4 *)((long)param_1 + 0x24) = uStack_344;
        *(uint *)(param_1 + 5) = CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340));
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_33c;
        *(uint *)(param_1 + 6) = CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338));
        *(undefined4 *)((long)param_1 + 0x34) = uStack_334;
        *(uint *)(param_1 + 7) = CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330));
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_32c;
        param_1[8] = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
        *(undefined *)(param_1 + 9) = local_320;
        *(char *)(param_1 + 10) = (char)local_318;
        *param_1 = 0x12;
        local_3b8 = uVar5;
        _ZN4core3ptr74drop_in_place_LT_alloc__boxed__Box_LT_just__expression__Expression_GT__GT_17h95e5d821ad53849fE
                  (&local_2b8);
        return;
      }
LAB_0037d085:
      param_1[9] = local_378;
      param_1[10] = uStack_370;
      param_1[7] = local_388;
      param_1[8] = uStack_380;
      param_1[5] = local_398;
      param_1[6] = uStack_390;
      param_1[3] = local_3a8;
      param_1[4] = uStack_3a0;
      param_1[1] = local_3b8;
      param_1[2] = uStack_3b0;
      goto LAB_0037d4e8;
    }
LAB_0037d1c6:
    local_3b8._0_7_ = CONCAT43(uStack_31c,CONCAT21(uStack_31e,uStack_31f));
    *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
    *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
    *(undefined4 *)((long)param_1 + 0x4c) = uStack_31c;
    *(undefined4 *)((long)param_1 + 0x49) = (undefined4)local_3b8;
    param_1[1] = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
    param_1[2] = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
    param_1[3] = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
    param_1[4] = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
    param_1[5] = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
    param_1[6] = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
    param_1[7] = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
    param_1[8] = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
    *(undefined *)(param_1 + 9) = local_320;
  }
  else {
    _ZN4just6parser6Parser4next17h26f20bd451ef506fE(&local_360,param_2);
    local_3b8 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360)));
    uStack_3b0 = CONCAT44(uStack_354,CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358)));
    local_3a8 = CONCAT44(uStack_34c,CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350)));
    uStack_3a0 = CONCAT44(uStack_344,CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
    local_398 = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340)));
    uStack_390 = CONCAT44(uStack_334,CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338)));
    local_388 = CONCAT44(uStack_32c,CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330)));
    uStack_380 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
    local_378 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
    if ((char)local_318 == '%') {
      uStack_380._4_4_ = (undefined4)((uint6)uStack_326 >> 0x10);
      uStack_174 = uStack_35c;
      uStack_16c = uStack_354;
      uStack_164 = uStack_34c;
      uStack_15c = uStack_344;
      uStack_154 = uStack_33c;
      uStack_14c = uStack_334;
      uStack_144 = uStack_32c;
      uStack_140 = (undefined4)uStack_380;
      uStack_13c = uStack_380._4_4_;
      uStack_2ac = uStack_354;
      uStack_29c = uStack_344;
      uStack_294 = uStack_33c;
      uStack_28c = uStack_334;
      uStack_284 = uStack_32c;
      uStack_280 = (undefined4)uStack_380;
      uStack_27c = uStack_380._4_4_;
      _ZN4just11string_kind10StringKind23from_string_or_backtick17h6eb193e734499b6aE
                (&local_360,local_178);
      bVar2 = local_360;
      puVar1 = PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10;
      if ((char)local_318 != '%') {
        param_1[9] = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
        *(ulong *)((long)param_1 + 0x3a) =
             CONCAT17(uStack_327,CONCAT16(uStack_328,CONCAT42(uStack_32c,uStack_32e)));
        *(ulong *)((long)param_1 + 0x42) = CONCAT17(uStack_31f,CONCAT16(local_320,uStack_326));
        *(ulong *)((long)param_1 + 0x2a) =
             CONCAT17(uStack_337,CONCAT16(uStack_338,CONCAT42(uStack_33c,uStack_33e)));
        *(ulong *)((long)param_1 + 0x32) =
             CONCAT17(uStack_32f,CONCAT16(local_330,CONCAT42(uStack_334,uStack_336)));
        *(ulong *)((long)param_1 + 0x1a) =
             CONCAT17(uStack_347,CONCAT16(uStack_348,CONCAT42(uStack_34c,uStack_34e)));
        *(ulong *)((long)param_1 + 0x22) =
             CONCAT17(uStack_33f,CONCAT16(local_340,CONCAT42(uStack_344,uStack_346)));
        *(ulong *)((long)param_1 + 10) =
             CONCAT17(uStack_357,CONCAT16(uStack_358,CONCAT42(uStack_35c,uStack_35e)));
        *(ulong *)((long)param_1 + 0x12) =
             CONCAT17(uStack_34f,CONCAT16(local_350,CONCAT42(uStack_354,uStack_356)));
        *(uint *)((long)param_1 + 0x51) = CONCAT13((undefined)uStack_314,local_318._1_3_);
        *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
        *(byte *)(param_1 + 1) = local_360;
        *(undefined *)((long)param_1 + 9) = uStack_35f;
        goto LAB_0037d4e5;
      }
      auVar8 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_2b8);
      (*(code *)puVar1)(&local_2b8);
      lVar4 = (ulong)bVar2 * 2 + 1;
      lVar7 = ((ulong)(bVar2 - 1) | 0xfffffffffffffffd) + extraout_RDX;
      local_248 = auVar8;
      local_2e0 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (lVar4,lVar7,auVar8._0_8_,auVar8._8_8_);
      if (local_2e0._0_8_ == 0) {
        uVar5 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                          (local_248._0_8_,local_248._8_8_,lVar4,lVar7,&PTR_DAT_005308c8);
                    /* catch() { ... } // from try @ 0037d8ee with catch @ 0037d9ef */
                    /* try { // try from 0037d9f2 to 0037da34 has its CatchHandler @ 0037da3d */
        _ZN4core3ptr74drop_in_place_LT_alloc__boxed__Box_LT_just__expression__Expression_GT__GT_17h95e5d821ad53849fE
                  (&local_268);
        _ZN4core3ptr47drop_in_place_LT_just__condition__Condition_GT_17ha2d00dd0ebfcec0cE
                  (&local_2b8);
        _Unwind_Resume(uVar5);
        return;
      }
      _ZN4just6parser6Parser7advance17ha6fdbb87ccd3a5f7E(&local_360,param_2);
      local_1c8 = CONCAT22(uStack_35e,CONCAT11(uStack_35f,local_360));
      local_3b8 = CONCAT44(uStack_35c,local_1c8);
      uStack_1c0 = CONCAT22(uStack_356,CONCAT11(uStack_357,uStack_358));
      uStack_3b0 = CONCAT44(uStack_354,uStack_1c0);
      local_1b8 = CONCAT22(uStack_34e,CONCAT11(uStack_34f,local_350));
      local_3a8 = CONCAT44(uStack_34c,local_1b8);
      uStack_1b0 = CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348));
      uStack_3a0 = CONCAT44(uStack_344,uStack_1b0);
      local_1a8 = CONCAT22(uStack_33e,CONCAT11(uStack_33f,local_340));
      local_398 = CONCAT44(uStack_33c,local_1a8);
      uStack_1a0 = CONCAT22(uStack_336,CONCAT11(uStack_337,uStack_338));
      uStack_390 = CONCAT44(uStack_334,uStack_1a0);
      local_198 = CONCAT22(uStack_32e,CONCAT11(uStack_32f,local_330));
      local_388 = CONCAT44(uStack_32c,local_198);
      uStack_380 = CONCAT62(uStack_326,CONCAT11(uStack_327,uStack_328));
      local_378 = CONCAT44(uStack_31c,CONCAT22(uStack_31e,CONCAT11(uStack_31f,local_320)));
      if ((char)local_318 == '%') {
        uStack_380._4_4_ = (undefined4)((uint6)uStack_326 >> 0x10);
        uStack_1c4 = uStack_35c;
        uStack_1bc = uStack_354;
        uStack_1b4 = uStack_34c;
        uStack_1ac = uStack_344;
        uStack_1a4 = uStack_33c;
        uStack_19c = uStack_334;
        uStack_194 = uStack_32c;
        uStack_190 = (undefined4)uStack_380;
        uStack_18c = uStack_380._4_4_;
        local_188 = local_378;
        if ((bVar2 & 1) == 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                    (&local_2d0,local_2e0._0_8_,local_2e0._8_8_);
        }
        else {
          (*(code *)PTR__ZN4just8unindent8unindent17h52c9ed21e4a911eaE_00566c60)
                    (&local_2d0,local_2e0._0_8_,local_2e0._8_8_);
        }
                    /* try { // try from 0037d604 to 0037d63e has its CatchHandler @ 0037da43 */
        cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                          (lStack_2c8,local_2c0,&DAT_00171382,2);
        if (cVar3 != '\0') {
          local_360 = 0x16;
          uStack_35f = 0;
          uStack_35e = 0;
          uStack_35c = 0x80000000;
          _ZN4just5token5Token5error17h986494da066a4455E(&local_3b8,&local_2b8,&local_360);
          param_1[9] = local_378;
          param_1[10] = uStack_370;
          *(undefined4 *)(param_1 + 7) = (undefined4)local_388;
          *(undefined4 *)((long)param_1 + 0x3c) = local_388._4_4_;
          *(undefined4 *)(param_1 + 8) = (undefined4)uStack_380;
          *(undefined4 *)((long)param_1 + 0x44) = uStack_380._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)local_398;
          *(undefined4 *)((long)param_1 + 0x2c) = local_398._4_4_;
          *(undefined4 *)(param_1 + 6) = (undefined4)uStack_390;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_390._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_3a8;
          *(undefined4 *)((long)param_1 + 0x1c) = local_3a8._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_3a0;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_3a0._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_3b8;
          *(undefined4 *)((long)param_1 + 0xc) = local_3b8._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_3b0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_3b0._4_4_;
          *param_1 = 0x12;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_2d0);
          return;
        }
        param_1[3] = local_2c0;
        param_1[1] = local_2d0;
        param_1[2] = lStack_2c8;
        param_1[4] = CONCAT44(uStack_1c4,local_1c8);
        param_1[5] = CONCAT44(uStack_1bc,uStack_1c0);
        param_1[6] = CONCAT44(uStack_1b4,local_1b8);
        param_1[7] = CONCAT44(uStack_1ac,uStack_1b0);
        param_1[8] = CONCAT44(uStack_1a4,local_1a8);
        param_1[9] = CONCAT44(uStack_19c,uStack_1a0);
        param_1[10] = CONCAT44(uStack_194,local_198);
        param_1[0xb] = CONCAT44(uStack_18c,uStack_190);
        param_1[0xc] = local_188;
        *param_1 = 9;
        return;
      }
    }
LAB_0037d501:
    uVar6 = CONCAT13((undefined)uStack_314,local_318._1_3_);
    *(undefined4 *)((long)param_1 + 0x54) = uStack_314;
LAB_0037d4b5:
    *(undefined4 *)((long)param_1 + 0x51) = uVar6;
    param_1[9] = local_378;
    param_1[7] = local_388;
    param_1[8] = uStack_380;
    param_1[5] = local_398;
    param_1[6] = uStack_390;
    param_1[3] = local_3a8;
    param_1[4] = uStack_3a0;
    param_1[1] = local_3b8;
    param_1[2] = uStack_3b0;
  }
LAB_0037d4e5:
  *(char *)(param_1 + 10) = (char)local_318;
LAB_0037d4e8:
  *param_1 = 0x12;
  return;
}