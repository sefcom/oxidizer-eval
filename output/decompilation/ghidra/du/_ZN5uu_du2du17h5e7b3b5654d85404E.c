undefined8 *
_ZN5uu_du2du17h5e7b3b5654d85404E
          (undefined8 *param_1,byte *param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  char cVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 **ppuVar19;
  long lVar20;
  long lVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined8 **local_408;
  undefined8 **local_400;
  undefined local_3f8 [16];
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  long local_3b0;
  long lStack_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long local_378;
  undefined local_368 [8];
  char local_360;
  long local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined local_330 [8];
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 **local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  undefined8 *local_250;
  undefined8 **local_248;
  undefined8 **ppuStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  int local_208 [2];
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  byte local_178;
  undefined7 uStack_177;
  char local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  undefined8 **local_130;
  undefined8 **local_128;
  long local_120;
  long lStack_118;
  char local_f8;
  undefined local_e0 [24];
  char local_c8;
  char cStack_c7;
  char cStack_c6;
  char cStack_c5;
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  char cStack_c0;
  char cStack_bf;
  char cStack_be;
  char cStack_bd;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  char cStack_b9;
  undefined8 local_b8;
  
  if (param_2[0x80] == 0) {
LAB_0019727e:
    (*(code *)PTR_memcpy_0024e718)(param_1,param_2,0x90);
  }
  else {
                    /* try { // try from 0019698a to 00196a01 has its CatchHandler @ 00197445 */
    _ZN3std2fs8read_dir17h7286bca7a7309382E(&local_178,param_2 + 0x40);
    if (local_170 == '\x02') {
      local_3f8._0_8_ =
           _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h0fd947faba14da62E
                     (CONCAT71(uStack_177,local_178),*(undefined8 *)(param_2 + 0x48),
                      *(undefined8 *)(param_2 + 0x50));
      local_3f8._8_8_ =
           &
           PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hdb4a4a00553a36c0E_00245c80
      ;
      local_400 = (undefined8 **)0x0;
      local_408 = (undefined8 **)0x2;
      _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3e1c4566985cb384E
                (&local_318,*param_6,param_6[1],&local_408);
      ppuVar7 = uStack_310;
      ppuVar19 = local_318;
      auVar22[0] = -((char)local_318 == DAT_0011d8e0);
      auVar22[1] = -(local_318._1_1_ == UNK_0011d8e1);
      auVar22[2] = -(local_318._2_1_ == UNK_0011d8e2);
      auVar22[3] = -(local_318._3_1_ == UNK_0011d8e3);
      auVar22[4] = -(local_318._4_1_ == UNK_0011d8e4);
      auVar22[5] = -(local_318._5_1_ == UNK_0011d8e5);
      auVar22[6] = -(local_318._6_1_ == UNK_0011d8e6);
      auVar22[7] = -(local_318._7_1_ == UNK_0011d8e7);
      auVar22[8] = -((char)uStack_310 == UNK_0011d8e8);
      auVar22[9] = -(uStack_310._1_1_ == UNK_0011d8e9);
      auVar22[10] = -(uStack_310._2_1_ == UNK_0011d8ea);
      auVar22[0xb] = -(uStack_310._3_1_ == UNK_0011d8eb);
      auVar22[0xc] = -(uStack_310._4_1_ == UNK_0011d8ec);
      auVar22[0xd] = -(uStack_310._5_1_ == UNK_0011d8ed);
      auVar22[0xe] = -(uStack_310._6_1_ == UNK_0011d8ee);
      auVar22[0xf] = -(uStack_310._7_1_ == UNK_0011d8ef);
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0019727e;
      (*(code *)PTR_memcpy_0024e718)(local_3f8,&local_308,0x90);
      local_400 = ppuVar7;
      local_408 = ppuVar19;
                    /* try { // try from 00196a54 to 00196a5d has its CatchHandler @ 00197445 */
      uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2172217f56afd643E(&local_408);
      param_1[2] = uVar15;
      param_1[1] = 0;
      *param_1 = 2;
    }
    else {
      local_360 = local_170;
      local_260 = *(long *)(param_3 + 8);
      local_258 = *(long *)(param_3 + 0x10);
      local_268 = 0x38;
      if (local_258 == 0) {
        local_268 = 0;
      }
      local_270 = local_260 + local_268;
      bVar1 = *(byte *)(param_3 + 0x34);
      bVar2 = *(byte *)(param_3 + 0x33);
      bVar3 = *(byte *)(param_3 + 0x30);
      param_4 = param_4 + 1;
      uVar15 = *param_6;
      uVar6 = param_6[1];
      bVar4 = *(byte *)(param_3 + 0x32);
      bVar5 = *(byte *)(param_3 + 0x31);
      local_268 = local_268 + local_258 * -0x38;
LAB_00196b70:
      do {
        (*(code *)
          PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_0024eb88
        )(local_208,local_368);
        if (local_208[0] != 1) {
                    /* try { // try from 00197267 to 00197278 has its CatchHandler @ 00197445 */
          _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hbe7e7849fcc03c6eE(local_368);
          goto LAB_0019727e;
        }
        if (local_200 != 0) {
          local_358 = local_200;
          local_350 = local_1f8;
          local_338 = local_1e0;
          local_348 = local_1f0;
          uStack_340 = uStack_1e8;
                    /* try { // try from 00196bcf to 00196be7 has its CatchHandler @ 0019745a */
          (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_0024eb90)(local_330,&local_358)
          ;
                    /* try { // try from 00196bf8 to 00196c7b has its CatchHandler @ 0019745f */
          (*(code *)PTR__ZN5uu_du4Stat3new17hd07a900d361a9fcdE_0024e910)
                    (&local_c8,local_328,local_320,&local_358,param_3);
          auVar23[0] = -(local_c8 == DAT_0011d730);
          auVar23[1] = -(cStack_c7 == UNK_0011d731);
          auVar23[2] = -(cStack_c6 == UNK_0011d732);
          auVar23[3] = -(cStack_c5 == UNK_0011d733);
          auVar23[4] = -(cStack_c4 == UNK_0011d734);
          auVar23[5] = -(cStack_c3 == UNK_0011d735);
          auVar23[6] = -(cStack_c2 == UNK_0011d736);
          auVar23[7] = -(cStack_c1 == UNK_0011d737);
          auVar23[8] = -(cStack_c0 == UNK_0011d738);
          auVar23[9] = -(cStack_bf == UNK_0011d739);
          auVar23[10] = -(cStack_be == UNK_0011d73a);
          auVar23[0xb] = -(cStack_bd == UNK_0011d73b);
          auVar23[0xc] = -(cStack_bc == UNK_0011d73c);
          auVar23[0xd] = -(cStack_bb == UNK_0011d73d);
          auVar23[0xe] = -(cStack_ba == UNK_0011d73e);
          auVar23[0xf] = -(cStack_b9 == UNK_0011d73f);
          if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
            uVar16 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h21aee2fec0aab2afE
                               (local_b8,&local_358);
            local_3f8._8_8_ =
                 &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hdb4a4a00553a36c0E_00245c80
            ;
            local_400 = (undefined8 **)0x0;
            local_408 = (undefined8 **)0x2;
            local_3f8._0_8_ = uVar16;
            _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3e1c4566985cb384E
                      (&local_318,uVar15,uVar6,&local_408);
            ppuVar7 = uStack_310;
            ppuVar19 = local_318;
            auVar24[0] = -((char)local_318 == DAT_0011d8e0);
            auVar24[1] = -(local_318._1_1_ == UNK_0011d8e1);
            auVar24[2] = -(local_318._2_1_ == UNK_0011d8e2);
            auVar24[3] = -(local_318._3_1_ == UNK_0011d8e3);
            auVar24[4] = -(local_318._4_1_ == UNK_0011d8e4);
            auVar24[5] = -(local_318._5_1_ == UNK_0011d8e5);
            auVar24[6] = -(local_318._6_1_ == UNK_0011d8e6);
            auVar24[7] = -(local_318._7_1_ == UNK_0011d8e7);
            auVar24[8] = -((char)uStack_310 == UNK_0011d8e8);
            auVar24[9] = -(uStack_310._1_1_ == UNK_0011d8e9);
            auVar24[10] = -(uStack_310._2_1_ == UNK_0011d8ea);
            auVar24[0xb] = -(uStack_310._3_1_ == UNK_0011d8eb);
            auVar24[0xc] = -(uStack_310._4_1_ == UNK_0011d8ec);
            auVar24[0xd] = -(uStack_310._5_1_ == UNK_0011d8ed);
            auVar24[0xe] = -(uStack_310._6_1_ == UNK_0011d8ee);
            auVar24[0xf] = -(uStack_310._7_1_ == UNK_0011d8ef);
            if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) goto LAB_00197248;
            (*(code *)PTR_memcpy_0024e718)(local_3f8,&local_308,0x90);
            local_400 = ppuVar7;
            local_408 = ppuVar19;
                    /* try { // try from 00197327 to 00197330 has its CatchHandler @ 00197434 */
            uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2172217f56afd643E(&local_408);
            param_1[2] = uVar15;
            param_1[1] = 0;
            *param_1 = 2;
LAB_001973eb:
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(local_330);
                    /* try { // try from 001973f8 to 00197404 has its CatchHandler @ 00197439 */
            _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hf0f8029912813c56E(&local_358);
            goto LAB_00197405;
          }
          (*(code *)PTR_memcpy_0024e718)(&local_178,&local_c8,0x90);
          ppuVar7 = local_128;
          ppuVar19 = local_130;
          lVar18 = local_270;
          lVar20 = local_268;
          lVar21 = local_260;
          if (local_258 != 0) {
            do {
              lVar17 = lVar18;
                    /* try { // try from 00196d73 to 00196d83 has its CatchHandler @ 00197487 */
              (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0024e8f8)
                        (&local_408,ppuVar19,ppuVar7);
                    /* try { // try from 00196d8e to 00196d96 has its CatchHandler @ 00197473 */
              cVar14 = (*(code *)PTR__ZN4glob7Pattern7matches17ha07a8c317a63e971E_0024e900)
                                 (lVar21,local_400,local_3f8._0_8_);
              _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hd2b311ea2da27bf0E
                        (&local_408);
              if (cVar14 != '\0') {
LAB_001970e5:
                if ((bVar1 & 1) != 0) {
                  local_318 = (undefined8 **)&DAT_00000001;
                  uStack_310 = ppuVar19;
                  local_308 = ppuVar7;
                  local_300 = CONCAT71(local_300._1_7_,1);
                  local_250 = &local_318;
                  local_248 = &local_250;
                  ppuStack_240 = (undefined8 **)
                                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5bda38c7e3b28069E
                  ;
                  local_408 = (undefined8 **)&DAT_00245c28;
                  local_400 = (undefined8 **)0x2;
                  uStack_3e8 = 0;
                  local_3f8._0_8_ = &local_248;
                  local_3f8._8_8_ = &DAT_00000001;
                    /* try { // try from 0019717f to 00197189 has its CatchHandler @ 0019743e */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_408);
                }
                goto LAB_00196b2e;
              }
                    /* try { // try from 00196dab to 00196e29 has its CatchHandler @ 00197487 */
              (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_0024eb98)
                        (local_e0,&local_358);
              _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_408,local_e0);
              local_248 = local_408;
              ppuStack_240 = local_400;
              local_238 = local_3f8._0_8_;
              local_300 = local_3f8._0_8_;
              uStack_310 = local_408;
              local_308 = local_400;
              local_318 = (undefined8 **)&DAT_00000001;
              _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0257f6081d27278eE(&local_408,&local_318)
              ;
                    /* try { // try from 00196e34 to 00196e3c has its CatchHandler @ 00197464 */
              cVar14 = (*(code *)PTR__ZN4glob7Pattern7matches17ha07a8c317a63e971E_0024e900)
                                 (lVar21,local_400,local_3f8._0_8_);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E
                        (&local_408);
              if (cVar14 != '\0') goto LAB_001970e5;
              lVar20 = lVar20 + 0x38;
              lVar18 = lVar17 + 0x38;
              lVar21 = lVar17;
            } while (lVar20 != 0x38);
          }
          bVar13 = local_178;
          if ((local_178 & 1) == 0) {
LAB_00196eec:
            if (local_f8 == '\0') {
              *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + local_120;
              *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lStack_118;
              *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
              if ((bVar3 & 1) == 0) {
                _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h6c25dad051e3ba37E(&local_c8);
              }
              else {
                (*(code *)PTR_memcpy_0024e718)(&local_408,&local_c8,0x90);
                    /* try { // try from 001971ea to 001971ff has its CatchHandler @ 00197440 */
                local_378 = param_4;
                _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3e1c4566985cb384E
                          (&local_318,uVar15,uVar6,&local_408);
                ppuVar7 = uStack_310;
                ppuVar19 = local_318;
                auVar27[0] = -((char)local_318 == DAT_0011d8e0);
                auVar27[1] = -(local_318._1_1_ == UNK_0011d8e1);
                auVar27[2] = -(local_318._2_1_ == UNK_0011d8e2);
                auVar27[3] = -(local_318._3_1_ == UNK_0011d8e3);
                auVar27[4] = -(local_318._4_1_ == UNK_0011d8e4);
                auVar27[5] = -(local_318._5_1_ == UNK_0011d8e5);
                auVar27[6] = -(local_318._6_1_ == UNK_0011d8e6);
                auVar27[7] = -(local_318._7_1_ == UNK_0011d8e7);
                auVar27[8] = -((char)uStack_310 == UNK_0011d8e8);
                auVar27[9] = -(uStack_310._1_1_ == UNK_0011d8e9);
                auVar27[10] = -(uStack_310._2_1_ == UNK_0011d8ea);
                auVar27[0xb] = -(uStack_310._3_1_ == UNK_0011d8eb);
                auVar27[0xc] = -(uStack_310._4_1_ == UNK_0011d8ec);
                auVar27[0xd] = -(uStack_310._5_1_ == UNK_0011d8ed);
                auVar27[0xe] = -(uStack_310._6_1_ == UNK_0011d8ee);
                auVar27[0xf] = -(uStack_310._7_1_ == UNK_0011d8ef);
                if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar27[0xf] >> 7) << 0xf) != 0xffff) {
                  (*(code *)PTR_memcpy_0024e718)(local_3f8,&local_308,0x90);
                  local_400 = ppuVar7;
                  local_408 = ppuVar19;
                    /* try { // try from 001973c6 to 001973cf has its CatchHandler @ 0019742f */
                  ppuVar19 = (undefined8 **)
                             _ZN5alloc5boxed12Box_LT_T_GT_3new17h2172217f56afd643E(&local_408);
                  goto LAB_001973d0;
                }
              }
LAB_00197248:
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(local_330);
                    /* try { // try from 00197255 to 00197261 has its CatchHandler @ 00197482 */
              _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hf0f8029912813c56E(&local_358);
              goto LAB_00196b70;
            }
            if ((((bVar13 & bVar4 & 1) == 0) || ((*param_2 & 1) == 0)) ||
               (local_158 == *(long *)(param_2 + 0x20))) {
              (*(code *)PTR_memcpy_0024e718)(&local_408,&local_c8,0x90);
                    /* try { // try from 00196f3f to 001970bf has its CatchHandler @ 00197440 */
              (*(code *)PTR__ZN5uu_du2du17h5e7b3b5654d85404E_0024e918)
                        (&local_318,&local_408,param_3,param_4,param_5,param_6);
              auVar25[0] = -((char)local_318 == DAT_0011d730);
              auVar25[1] = -(local_318._1_1_ == UNK_0011d731);
              auVar25[2] = -(local_318._2_1_ == UNK_0011d732);
              auVar25[3] = -(local_318._3_1_ == UNK_0011d733);
              auVar25[4] = -(local_318._4_1_ == UNK_0011d734);
              auVar25[5] = -(local_318._5_1_ == UNK_0011d735);
              auVar25[6] = -(local_318._6_1_ == UNK_0011d736);
              auVar25[7] = -(local_318._7_1_ == UNK_0011d737);
              auVar25[8] = -((char)uStack_310 == UNK_0011d738);
              auVar25[9] = -(uStack_310._1_1_ == UNK_0011d739);
              auVar25[10] = -(uStack_310._2_1_ == UNK_0011d73a);
              auVar25[0xb] = -(uStack_310._3_1_ == UNK_0011d73b);
              auVar25[0xc] = -(uStack_310._4_1_ == UNK_0011d73c);
              auVar25[0xd] = -(uStack_310._5_1_ == UNK_0011d73d);
              auVar25[0xe] = -(uStack_310._6_1_ == UNK_0011d73e);
              auVar25[0xf] = -(uStack_310._7_1_ == UNK_0011d73f);
              ppuVar19 = local_308;
              if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff) {
                local_188 = local_2d0;
                uVar11 = local_188;
                uStack_180 = uStack_2c8;
                uVar12 = uStack_180;
                local_198 = local_2e0;
                uVar9 = local_198;
                uStack_190 = uStack_2d8;
                uVar10 = uStack_190;
                local_1a8 = local_2f0;
                uStack_1a0 = uStack_2e8;
                local_1b8 = local_300;
                uStack_1b0 = uStack_2f8;
                local_1d8 = local_2a8;
                uStack_1d0 = uStack_2a0;
                local_1c8 = local_298;
                uVar16 = local_1c8;
                uStack_1c0 = uStack_290;
                uVar8 = uStack_1c0;
                if ((bVar5 & 1) == 0) {
                  *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + local_2c0;
                  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lStack_2b8;
                  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + local_2b0;
                }
                local_198._0_4_ = (undefined4)local_2e0;
                local_198._4_4_ = (undefined4)((ulong)local_2e0 >> 0x20);
                uStack_190._0_4_ = (undefined4)uStack_2d8;
                uStack_190._4_4_ = (undefined4)((ulong)uStack_2d8 >> 0x20);
                local_188._0_4_ = (undefined4)local_2d0;
                local_188._4_4_ = (undefined4)((ulong)local_2d0 >> 0x20);
                uStack_180._0_4_ = (undefined4)uStack_2c8;
                uStack_180._4_4_ = (undefined4)((ulong)uStack_2c8 >> 0x20);
                local_3c0 = (undefined4)local_188;
                uStack_3bc = local_188._4_4_;
                uStack_3b8 = (undefined4)uStack_180;
                uStack_3b4 = uStack_180._4_4_;
                local_3d0 = (undefined4)local_198;
                uStack_3cc = local_198._4_4_;
                uStack_3c8 = (undefined4)uStack_190;
                uStack_3c4 = uStack_190._4_4_;
                local_3e0 = local_2f0;
                uStack_3d8 = uStack_2e8;
                local_3f8._8_8_ = local_300;
                uStack_3e8 = uStack_2f8;
                local_1c8._0_4_ = (undefined4)local_298;
                local_1c8._4_4_ = (undefined4)((ulong)local_298 >> 0x20);
                uStack_1c0._0_4_ = (undefined4)uStack_290;
                uStack_1c0._4_4_ = (undefined4)((ulong)uStack_290 >> 0x20);
                local_388 = (undefined4)local_1c8;
                uStack_384 = local_1c8._4_4_;
                uStack_380 = (undefined4)uStack_1c0;
                uStack_37c = uStack_1c0._4_4_;
                local_398 = local_2a8;
                uStack_390 = uStack_2a0;
                local_400 = uStack_310;
                local_408 = local_318;
                local_3f8._0_8_ = local_308;
                local_3b0 = local_2c0;
                lStack_3a8 = lStack_2b8;
                local_3a0 = local_2b0;
                local_378 = param_4;
                local_1c8 = uVar16;
                uStack_1c0 = uVar8;
                local_198 = uVar9;
                uStack_190 = uVar10;
                local_188 = uVar11;
                uStack_180 = uVar12;
                _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3e1c4566985cb384E
                          (&local_318,uVar15,uVar6,&local_408);
                ppuVar7 = uStack_310;
                ppuVar19 = local_318;
                auVar26[0] = -((char)local_318 == DAT_0011d8e0);
                auVar26[1] = -(local_318._1_1_ == UNK_0011d8e1);
                auVar26[2] = -(local_318._2_1_ == UNK_0011d8e2);
                auVar26[3] = -(local_318._3_1_ == UNK_0011d8e3);
                auVar26[4] = -(local_318._4_1_ == UNK_0011d8e4);
                auVar26[5] = -(local_318._5_1_ == UNK_0011d8e5);
                auVar26[6] = -(local_318._6_1_ == UNK_0011d8e6);
                auVar26[7] = -(local_318._7_1_ == UNK_0011d8e7);
                auVar26[8] = -((char)uStack_310 == UNK_0011d8e8);
                auVar26[9] = -(uStack_310._1_1_ == UNK_0011d8e9);
                auVar26[10] = -(uStack_310._2_1_ == UNK_0011d8ea);
                auVar26[0xb] = -(uStack_310._3_1_ == UNK_0011d8eb);
                auVar26[0xc] = -(uStack_310._4_1_ == UNK_0011d8ec);
                auVar26[0xd] = -(uStack_310._5_1_ == UNK_0011d8ed);
                auVar26[0xe] = -(uStack_310._6_1_ == UNK_0011d8ee);
                auVar26[0xf] = -(uStack_310._7_1_ == UNK_0011d8ef);
                if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) goto LAB_00197248;
                (*(code *)PTR_memcpy_0024e718)(local_3f8,&local_308,0x90);
                local_400 = ppuVar7;
                local_408 = ppuVar19;
                    /* try { // try from 00197388 to 00197391 has its CatchHandler @ 0019742f */
                ppuVar19 = (undefined8 **)
                           _ZN5alloc5boxed12Box_LT_T_GT_3new17h2172217f56afd643E(&local_408);
              }
LAB_001973d0:
              param_1[2] = ppuVar19;
              param_1[1] = 0;
              *param_1 = 2;
              goto LAB_001973eb;
            }
          }
          else {
            local_228 = local_168;
            uStack_220 = uStack_160;
            local_218 = local_158;
            lVar18 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h9c4bd3dee43f68bbE
                               (param_5,&local_228);
            if (lVar18 == 0) {
LAB_00196eca:
                    /* try { // try from 00196ee2 to 00196eeb has its CatchHandler @ 0019743e */
              _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hfa1827358606e47bE
                        (param_5,local_228,uStack_220,local_218);
              goto LAB_00196eec;
            }
            if ((bVar2 & 1) != 0) {
              if ((bVar3 & 1) != 0) goto LAB_00196eca;
              *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
            }
          }
LAB_00196b2e:
          _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h6c25dad051e3ba37E(&local_178);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(local_330);
                    /* try { // try from 00196b48 to 00196b85 has its CatchHandler @ 00197482 */
          _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hf0f8029912813c56E(&local_358);
          goto LAB_00196b70;
        }
                    /* try { // try from 00196cb0 to 00196ce9 has its CatchHandler @ 00197482 */
        auVar28 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024e8d8
                  )();
        local_400 = (undefined8 **)0x0;
        local_408 = (undefined8 **)0x2;
        local_3f8 = auVar28;
        _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h3e1c4566985cb384E
                  (&local_318,uVar15,uVar6,&local_408);
        ppuVar7 = uStack_310;
        ppuVar19 = local_318;
        auVar28[0] = -((char)local_318 == DAT_0011d8e0);
        auVar28[1] = -(local_318._1_1_ == UNK_0011d8e1);
        auVar28[2] = -(local_318._2_1_ == UNK_0011d8e2);
        auVar28[3] = -(local_318._3_1_ == UNK_0011d8e3);
        auVar28[4] = -(local_318._4_1_ == UNK_0011d8e4);
        auVar28[5] = -(local_318._5_1_ == UNK_0011d8e5);
        auVar28[6] = -(local_318._6_1_ == UNK_0011d8e6);
        auVar28[7] = -(local_318._7_1_ == UNK_0011d8e7);
        auVar28[8] = -((char)uStack_310 == UNK_0011d8e8);
        auVar28[9] = -(uStack_310._1_1_ == UNK_0011d8e9);
        auVar28[10] = -(uStack_310._2_1_ == UNK_0011d8ea);
        auVar28[0xb] = -(uStack_310._3_1_ == UNK_0011d8eb);
        auVar28[0xc] = -(uStack_310._4_1_ == UNK_0011d8ec);
        auVar28[0xd] = -(uStack_310._5_1_ == UNK_0011d8ed);
        auVar28[0xe] = -(uStack_310._6_1_ == UNK_0011d8ee);
        auVar28[0xf] = -(uStack_310._7_1_ == UNK_0011d8ef);
      } while ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff);
      (*(code *)PTR_memcpy_0024e718)(local_3f8,&local_308,0x90);
      local_400 = ppuVar7;
      local_408 = ppuVar19;
                    /* try { // try from 001972c6 to 001972d4 has its CatchHandler @ 00197439 */
      uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2172217f56afd643E(&local_408);
      param_1[2] = uVar15;
      param_1[1] = 0;
      *param_1 = 2;
LAB_00197405:
                    /* try { // try from 00197405 to 00197411 has its CatchHandler @ 00197445 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hbe7e7849fcc03c6eE(local_368);
    }
    _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h6c25dad051e3ba37E(param_2);
  }
  return param_1;
}