undefined8 *
_ZN5uu_du2du17ha667a9e24cfc9f10E
          (undefined8 *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  long lVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  long local_3f8;
  char local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  undefined auStack_3d8 [8];
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  long local_390;
  long lStack_388;
  long local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long local_358;
  undefined local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  long local_330;
  long local_328;
  long local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  long local_2f8;
  long local_2f0;
  undefined8 **local_2e8;
  code *local_2e0;
  undefined8 local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined local_2b8 [16];
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_270;
  long lStack_268;
  long local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  long local_208;
  char local_200;
  undefined7 uStack_1ff;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long lStack_1a8;
  char local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  
  if (*(char *)(param_2 + 0x10) == '\0') {
LAB_001f2871:
    (*(code *)PTR_memcpy_0028a2d8)(param_1,param_2,0x90);
  }
  else {
                    /* try { // try from 001f203a to 001f20a3 has its CatchHandler @ 001f2a17 */
    _ZN3std2fs8read_dir17h62350172118b109cE(&local_208,param_2 + 8);
    if (local_200 == '\x02') {
      auStack_3d8 = (undefined  [8])
                    _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h48a9c401437e4328E
                              (local_208,param_2 + 8);
      local_3d0 = &
                  PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17he185e2a3ca67f702E_002843f0
      ;
      local_3e0 = 0;
      local_3e8 = (undefined *)0x2;
      _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h0f9fc14a9ceb05b9E(&local_2c8,param_6,&local_3e8);
      uVar13 = uStack_2c0;
      puVar6 = local_2c8;
      auVar15[0] = -((char)local_2c8 == DAT_0010f110);
      auVar15[1] = -(local_2c8._1_1_ == UNK_0010f111);
      auVar15[2] = -(local_2c8._2_1_ == UNK_0010f112);
      auVar15[3] = -(local_2c8._3_1_ == UNK_0010f113);
      auVar15[4] = -(local_2c8._4_1_ == UNK_0010f114);
      auVar15[5] = -(local_2c8._5_1_ == UNK_0010f115);
      auVar15[6] = -(local_2c8._6_1_ == UNK_0010f116);
      auVar15[7] = -(local_2c8._7_1_ == UNK_0010f117);
      auVar15[8] = -((char)uStack_2c0 == UNK_0010f118);
      auVar15[9] = -(uStack_2c0._1_1_ == UNK_0010f119);
      auVar15[10] = -(uStack_2c0._2_1_ == UNK_0010f11a);
      auVar15[0xb] = -(uStack_2c0._3_1_ == UNK_0010f11b);
      auVar15[0xc] = -(uStack_2c0._4_1_ == UNK_0010f11c);
      auVar15[0xd] = -(uStack_2c0._5_1_ == UNK_0010f11d);
      auVar15[0xe] = -(uStack_2c0._6_1_ == UNK_0010f11e);
      auVar15[0xf] = -(uStack_2c0._7_1_ == UNK_0010f11f);
      if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) goto LAB_001f2871;
      (*(code *)PTR_memcpy_0028a2d8)(auStack_3d8,local_2b8,0x90);
      local_3e0 = uVar13;
      local_3e8 = puVar6;
                    /* try { // try from 001f20f6 to 001f20ff has its CatchHandler @ 001f2a17 */
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h757b8ba3534c23ebE(&local_3e8);
      param_1[2] = uVar13;
      param_1[1] = 0;
      *param_1 = 2;
    }
    else {
      local_3f8 = local_208;
      local_3f0 = local_200;
      local_328 = *(long *)(param_3 + 8);
      local_330 = *(long *)(param_3 + 0x10) * 0x38 + local_328;
      cVar1 = *(char *)(param_3 + 0x34);
      cVar2 = *(char *)(param_3 + 0x33);
      cVar3 = *(char *)(param_3 + 0x30);
      cVar4 = *(char *)(param_3 + 0x32);
      param_4 = param_4 + 1;
      cVar5 = *(char *)(param_3 + 0x31);
      do {
        while( true ) {
                    /* try { // try from 001f21b0 to 001f21c2 has its CatchHandler @ 001f2a36 */
          _ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153c1e0177592fe2E
                    (&local_110,&local_3f8);
          if (local_110 == 0) {
                    /* try { // try from 001f285d to 001f286b has its CatchHandler @ 001f2a17 */
            _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h2f49c189e78799baE(&local_3f8);
            goto LAB_001f2871;
          }
          if (local_108 == 0) break;
          local_320 = local_108;
          local_318 = local_100;
          local_300 = local_e8;
          local_310 = local_f8;
          uStack_308 = uStack_f0;
                    /* try { // try from 001f221b to 001f2233 has its CatchHandler @ 001f2a2a */
          _ZN3std2fs8DirEntry4path17h5b1bdb0f1090af27E(local_348,&local_320);
                    /* try { // try from 001f2244 to 001f2258 has its CatchHandler @ 001f2a2f */
          _ZN5uu_du4Stat3new17h9e91ef33e1f296e6E(&local_c8,local_340,local_338,&local_320,param_3);
          auVar16[0] = -(local_c8 == DAT_0010ef80);
          auVar16[1] = -(cStack_c7 == UNK_0010ef81);
          auVar16[2] = -(cStack_c6 == UNK_0010ef82);
          auVar16[3] = -(cStack_c5 == UNK_0010ef83);
          auVar16[4] = -(cStack_c4 == UNK_0010ef84);
          auVar16[5] = -(cStack_c3 == UNK_0010ef85);
          auVar16[6] = -(cStack_c2 == UNK_0010ef86);
          auVar16[7] = -(cStack_c1 == UNK_0010ef87);
          auVar16[8] = -(cStack_c0 == UNK_0010ef88);
          auVar16[9] = -(cStack_bf == UNK_0010ef89);
          auVar16[10] = -(cStack_be == UNK_0010ef8a);
          auVar16[0xb] = -(cStack_bd == UNK_0010ef8b);
          auVar16[0xc] = -(cStack_bc == UNK_0010ef8c);
          auVar16[0xd] = -(cStack_bb == UNK_0010ef8d);
          auVar16[0xe] = -(cStack_ba == UNK_0010ef8e);
          auVar16[0xf] = -(cStack_b9 == UNK_0010ef8f);
          if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
                    /* try { // try from 001f2281 to 001f22c5 has its CatchHandler @ 001f2a25 */
            uVar13 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h6097e5bae67e7f0aE
                               (local_b8,&local_320);
            local_3d0 = &
                        PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17he185e2a3ca67f702E_002843f0
            ;
            local_3e0 = 0;
            local_3e8 = (undefined *)0x2;
            auStack_3d8 = (undefined  [8])uVar13;
            _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h0f9fc14a9ceb05b9E
                      (&local_2c8,param_6,&local_3e8);
            uVar13 = uStack_2c0;
            puVar6 = local_2c8;
            auVar17[0] = -((char)local_2c8 == DAT_0010f110);
            auVar17[1] = -(local_2c8._1_1_ == UNK_0010f111);
            auVar17[2] = -(local_2c8._2_1_ == UNK_0010f112);
            auVar17[3] = -(local_2c8._3_1_ == UNK_0010f113);
            auVar17[4] = -(local_2c8._4_1_ == UNK_0010f114);
            auVar17[5] = -(local_2c8._5_1_ == UNK_0010f115);
            auVar17[6] = -(local_2c8._6_1_ == UNK_0010f116);
            auVar17[7] = -(local_2c8._7_1_ == UNK_0010f117);
            auVar17[8] = -((char)uStack_2c0 == UNK_0010f118);
            auVar17[9] = -(uStack_2c0._1_1_ == UNK_0010f119);
            auVar17[10] = -(uStack_2c0._2_1_ == UNK_0010f11a);
            auVar17[0xb] = -(uStack_2c0._3_1_ == UNK_0010f11b);
            auVar17[0xc] = -(uStack_2c0._4_1_ == UNK_0010f11c);
            auVar17[0xd] = -(uStack_2c0._5_1_ == UNK_0010f11d);
            auVar17[0xe] = -(uStack_2c0._6_1_ == UNK_0010f11e);
            auVar17[0xf] = -(uStack_2c0._7_1_ == UNK_0010f11f);
            if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar17[0xf] >> 7) << 0xf) != 0xffff) {
              (*(code *)PTR_memcpy_0028a2d8)(auStack_3d8,local_2b8,0x90);
              local_3e0 = uVar13;
              local_3e8 = puVar6;
                    /* try { // try from 001f2917 to 001f2920 has its CatchHandler @ 001f2a09 */
              uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h757b8ba3534c23ebE(&local_3e8);
              goto LAB_001f2921;
            }
LAB_001f22e6:
                    /* try { // try from 001f22e6 to 001f22f2 has its CatchHandler @ 001f2a23 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(local_348);
                    /* try { // try from 001f22f3 to 001f2346 has its CatchHandler @ 001f2a34 */
            _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h4ad97d7767b93694E(&local_320);
          }
          else {
            (*(code *)PTR_memcpy_0028a2d8)(&local_208,&local_c8,0x90);
            local_2f8 = local_328;
            local_2f0 = local_330;
            while( true ) {
              lVar14 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbb4494b75e1b7e30E
                                 (&local_2f8);
              if (lVar14 == 0) break;
                    /* try { // try from 001f23d9 to 001f23e1 has its CatchHandler @ 001f2a5c */
              _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
                        (&local_3e8,local_1c0,uStack_1b8);
                    /* try { // try from 001f23ec to 001f23f4 has its CatchHandler @ 001f2a4d */
              cVar12 = _ZN4glob7Pattern7matches17hb817b847971d5388E(lVar14,local_3e0,auStack_3d8);
              if (cVar12 != '\0') {
                    /* try { // try from 001f26e6 to 001f278c has its CatchHandler @ 001f2a21 */
                _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h7fa1288604a001f4E
                          (&local_3e8);
                auVar21 = local_2b8;
LAB_001f26f8:
                local_2b8 = auVar21;
                if (cVar1 != '\0') {
                  local_2c8 = (undefined *)0x1;
                  uStack_2c0 = local_1c0;
                  local_2b8._0_8_ = uStack_1b8;
                  local_2b8._9_7_ = auVar21._9_7_;
                  local_2b8[8] = 1;
                  local_2d0 = &local_2c8;
                  local_2e8 = &local_2d0;
                  local_2e0 = 
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h50e55b5d7d795045E;
                  local_3e8 = &DAT_00284380;
                  local_3e0 = 2;
                  uStack_3c8 = 0;
                  local_3d0 = (undefined **)0x1;
                  auStack_3d8 = (undefined  [8])&local_2e8;
                  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_3e8);
                }
                goto LAB_001f278d;
              }
                    /* try { // try from 001f23fd to 001f244f has its CatchHandler @ 001f2a5c */
              _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h7fa1288604a001f4E
                        (&local_3e8);
              _ZN3std2fs8DirEntry9file_name17habdd235db90dd152E(local_e0,&local_320);
              _ZN3std3sys6os_str5bytes3Buf11into_string17h7b5acb763c5a1dedE(&local_3e8,local_e0);
              uStack_2c0 = local_3e0;
              local_2c8 = local_3e8;
              local_2b8 = _auStack_3d8;
              _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hbe98b57ab5f25fd3E(&local_2e8,&local_2c8)
              ;
                    /* try { // try from 001f2460 to 001f2468 has its CatchHandler @ 001f2a3b */
              cVar12 = _ZN4glob7Pattern7matches17hb817b847971d5388E(lVar14,local_2e0,local_2d8);
              if (cVar12 != '\0') {
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E
                          (&local_2e8);
                auVar21 = local_2b8;
                goto LAB_001f26f8;
              }
                    /* try { // try from 001f2471 to 001f2478 has its CatchHandler @ 001f2a5c */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E
                        (&local_2e8);
            }
            if (local_208 == 0 && CONCAT71(uStack_1ff,local_200) == 0) {
LAB_001f2501:
              if (local_188 == '\0') {
                param_2[0xd] = param_2[0xd] + 1;
                param_2[0xb] = param_2[0xb] + local_1b0;
                param_2[0xc] = param_2[0xc] + lStack_1a8;
                if (cVar3 == '\0') {
                    /* try { // try from 001f283d to 001f2849 has its CatchHandler @ 001f2a25 */
                  _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h701ab588e12d6784E(&local_208);
                }
                else {
                  (*(code *)PTR_memcpy_0028a2d8)(&local_3e8,&local_208,0x90);
                    /* try { // try from 001f2803 to 001f2817 has its CatchHandler @ 001f2a12 */
                  local_358 = param_4;
                  _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h0f9fc14a9ceb05b9E
                            (&local_2c8,param_6,&local_3e8);
                  uVar13 = uStack_2c0;
                  puVar6 = local_2c8;
                  auVar20[0] = -((char)local_2c8 == DAT_0010f110);
                  auVar20[1] = -(local_2c8._1_1_ == UNK_0010f111);
                  auVar20[2] = -(local_2c8._2_1_ == UNK_0010f112);
                  auVar20[3] = -(local_2c8._3_1_ == UNK_0010f113);
                  auVar20[4] = -(local_2c8._4_1_ == UNK_0010f114);
                  auVar20[5] = -(local_2c8._5_1_ == UNK_0010f115);
                  auVar20[6] = -(local_2c8._6_1_ == UNK_0010f116);
                  auVar20[7] = -(local_2c8._7_1_ == UNK_0010f117);
                  auVar20[8] = -((char)uStack_2c0 == UNK_0010f118);
                  auVar20[9] = -(uStack_2c0._1_1_ == UNK_0010f119);
                  auVar20[10] = -(uStack_2c0._2_1_ == UNK_0010f11a);
                  auVar20[0xb] = -(uStack_2c0._3_1_ == UNK_0010f11b);
                  auVar20[0xc] = -(uStack_2c0._4_1_ == UNK_0010f11c);
                  auVar20[0xd] = -(uStack_2c0._5_1_ == UNK_0010f11d);
                  auVar20[0xe] = -(uStack_2c0._6_1_ == UNK_0010f11e);
                  auVar20[0xf] = -(uStack_2c0._7_1_ == UNK_0010f11f);
                  if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar20[0xf] >> 7) << 0xf) != 0xffff) {
                    (*(code *)PTR_memcpy_0028a2d8)(auStack_3d8,local_2b8,0x90);
                    local_3e0 = uVar13;
                    local_3e8 = puVar6;
                    /* try { // try from 001f29f5 to 001f29fe has its CatchHandler @ 001f2a04 */
                    uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h757b8ba3534c23ebE(&local_3e8);
                    goto LAB_001f2921;
                  }
                }
                goto LAB_001f22e6;
              }
              if ((((cVar4 == '\0') || (local_208 != 1)) || (*param_2 != 1)) ||
                 (local_1e8 == param_2[4])) {
                (*(code *)PTR_memcpy_0028a2d8)(&local_3e8,&local_208,0x90);
                    /* try { // try from 001f2559 to 001f26c0 has its CatchHandler @ 001f2a12 */
                _ZN5uu_du2du17ha667a9e24cfc9f10E
                          (&local_2c8,&local_3e8,param_3,param_4,param_5,param_6);
                auVar18[0] = -((char)local_2c8 == DAT_0010ef80);
                auVar18[1] = -(local_2c8._1_1_ == UNK_0010ef81);
                auVar18[2] = -(local_2c8._2_1_ == UNK_0010ef82);
                auVar18[3] = -(local_2c8._3_1_ == UNK_0010ef83);
                auVar18[4] = -(local_2c8._4_1_ == UNK_0010ef84);
                auVar18[5] = -(local_2c8._5_1_ == UNK_0010ef85);
                auVar18[6] = -(local_2c8._6_1_ == UNK_0010ef86);
                auVar18[7] = -(local_2c8._7_1_ == UNK_0010ef87);
                auVar18[8] = -((char)uStack_2c0 == UNK_0010ef88);
                auVar18[9] = -(uStack_2c0._1_1_ == UNK_0010ef89);
                auVar18[10] = -(uStack_2c0._2_1_ == UNK_0010ef8a);
                auVar18[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef8b);
                auVar18[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef8c);
                auVar18[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef8d);
                auVar18[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef8e);
                auVar18[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef8f);
                uVar13 = local_2b8._0_8_;
                if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar18[0xf] >> 7) << 0xf) != 0xffff) {
                  local_128 = local_280;
                  uVar10 = local_128;
                  uStack_120 = uStack_278;
                  uVar11 = uStack_120;
                  local_138 = local_290;
                  uVar8 = local_138;
                  uStack_130 = uStack_288;
                  uVar9 = uStack_130;
                  local_148 = local_2a0;
                  uStack_140 = uStack_298;
                  local_158 = local_2b8._8_8_;
                  uStack_150 = uStack_2a8;
                  local_178 = local_258;
                  uStack_170 = uStack_250;
                  local_168 = local_248;
                  uVar13 = local_168;
                  uStack_160 = uStack_240;
                  uVar7 = uStack_160;
                  if (cVar5 == '\0') {
                    param_2[0xb] = param_2[0xb] + local_270;
                    param_2[0xc] = param_2[0xc] + lStack_268;
                    param_2[0xd] = param_2[0xd] + local_260;
                  }
                  local_138._0_4_ = (undefined4)local_290;
                  local_138._4_4_ = (undefined4)((ulong)local_290 >> 0x20);
                  uStack_130._0_4_ = (undefined4)uStack_288;
                  uStack_130._4_4_ = (undefined4)((ulong)uStack_288 >> 0x20);
                  local_128._0_4_ = (undefined4)local_280;
                  local_128._4_4_ = (undefined4)((ulong)local_280 >> 0x20);
                  uStack_120._0_4_ = (undefined4)uStack_278;
                  uStack_120._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
                  local_3a0 = (undefined4)local_128;
                  uStack_39c = local_128._4_4_;
                  uStack_398 = (undefined4)uStack_120;
                  uStack_394 = uStack_120._4_4_;
                  local_3b0 = (undefined4)local_138;
                  uStack_3ac = local_138._4_4_;
                  uStack_3a8 = (undefined4)uStack_130;
                  uStack_3a4 = uStack_130._4_4_;
                  local_3c0 = local_2a0;
                  uStack_3b8 = uStack_298;
                  uStack_3c8 = uStack_2a8;
                  local_168._0_4_ = (undefined4)local_248;
                  local_168._4_4_ = (undefined4)((ulong)local_248 >> 0x20);
                  uStack_160._0_4_ = (undefined4)uStack_240;
                  uStack_160._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
                  local_368 = (undefined4)local_168;
                  uStack_364 = local_168._4_4_;
                  uStack_360 = (undefined4)uStack_160;
                  uStack_35c = uStack_160._4_4_;
                  local_378 = local_258;
                  uStack_370 = uStack_250;
                  local_3e0 = uStack_2c0;
                  local_3e8 = local_2c8;
                  local_390 = local_270;
                  lStack_388 = lStack_268;
                  local_380 = local_260;
                  local_358 = param_4;
                  local_168 = uVar13;
                  uStack_160 = uVar7;
                  local_138 = uVar8;
                  uStack_130 = uVar9;
                  local_128 = uVar10;
                  uStack_120 = uVar11;
                  _auStack_3d8 = local_2b8;
                  _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h0f9fc14a9ceb05b9E
                            (&local_2c8,param_6,&local_3e8);
                  uVar13 = uStack_2c0;
                  puVar6 = local_2c8;
                  auVar19[0] = -((char)local_2c8 == DAT_0010f110);
                  auVar19[1] = -(local_2c8._1_1_ == UNK_0010f111);
                  auVar19[2] = -(local_2c8._2_1_ == UNK_0010f112);
                  auVar19[3] = -(local_2c8._3_1_ == UNK_0010f113);
                  auVar19[4] = -(local_2c8._4_1_ == UNK_0010f114);
                  auVar19[5] = -(local_2c8._5_1_ == UNK_0010f115);
                  auVar19[6] = -(local_2c8._6_1_ == UNK_0010f116);
                  auVar19[7] = -(local_2c8._7_1_ == UNK_0010f117);
                  auVar19[8] = -((char)uStack_2c0 == UNK_0010f118);
                  auVar19[9] = -(uStack_2c0._1_1_ == UNK_0010f119);
                  auVar19[10] = -(uStack_2c0._2_1_ == UNK_0010f11a);
                  auVar19[0xb] = -(uStack_2c0._3_1_ == UNK_0010f11b);
                  auVar19[0xc] = -(uStack_2c0._4_1_ == UNK_0010f11c);
                  auVar19[0xd] = -(uStack_2c0._5_1_ == UNK_0010f11d);
                  auVar19[0xe] = -(uStack_2c0._6_1_ == UNK_0010f11e);
                  auVar19[0xf] = -(uStack_2c0._7_1_ == UNK_0010f11f);
                  if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) goto LAB_001f22e6;
                  (*(code *)PTR_memcpy_0028a2d8)(auStack_3d8,local_2b8,0x90);
                  local_3e0 = uVar13;
                  local_3e8 = puVar6;
                    /* try { // try from 001f29b4 to 001f29bd has its CatchHandler @ 001f2a04 */
                  uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h757b8ba3534c23ebE(&local_3e8);
                }
LAB_001f2921:
                param_1[2] = uVar13;
                param_1[1] = 0;
                *param_1 = 2;
                    /* try { // try from 001f2941 to 001f294d has its CatchHandler @ 001f2a0e */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(local_348)
                ;
                    /* try { // try from 001f294e to 001f295a has its CatchHandler @ 001f2a10 */
                _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h4ad97d7767b93694E(&local_320)
                ;
                goto LAB_001f295b;
              }
            }
            else {
              local_228 = local_1f8;
              uStack_220 = uStack_1f0;
              local_218 = local_1e8;
                    /* try { // try from 001f24b2 to 001f2500 has its CatchHandler @ 001f2a21 */
              lVar14 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hd97e7f5240db6501E
                                 (param_5,&local_228);
              if (lVar14 == 0) {
LAB_001f24df:
                _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h4a8fe37a6ecf7570E
                          (param_5,local_228,uStack_220,local_218);
                goto LAB_001f2501;
              }
              if (cVar2 != '\0') {
                if (cVar3 != '\0') goto LAB_001f24df;
                param_2[0xd] = param_2[0xd] + 1;
              }
            }
LAB_001f278d:
                    /* try { // try from 001f278d to 001f2799 has its CatchHandler @ 001f2a2f */
            _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h701ab588e12d6784E(&local_208);
                    /* try { // try from 001f279a to 001f27a6 has its CatchHandler @ 001f2a2a */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hbd810d79ecac54eaE(local_348);
                    /* try { // try from 001f27af to 001f27b3 has its CatchHandler @ 001f2a36 */
            _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h4ad97d7767b93694E(&local_320);
          }
        }
        auVar21 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                            ();
        local_3e0 = 0;
        local_3e8 = (undefined *)0x2;
        _auStack_3d8 = auVar21;
        _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h0f9fc14a9ceb05b9E(&local_2c8,param_6,&local_3e8);
        uVar13 = uStack_2c0;
        puVar6 = local_2c8;
        auVar21[0] = -((char)local_2c8 == DAT_0010f110);
        auVar21[1] = -(local_2c8._1_1_ == UNK_0010f111);
        auVar21[2] = -(local_2c8._2_1_ == UNK_0010f112);
        auVar21[3] = -(local_2c8._3_1_ == UNK_0010f113);
        auVar21[4] = -(local_2c8._4_1_ == UNK_0010f114);
        auVar21[5] = -(local_2c8._5_1_ == UNK_0010f115);
        auVar21[6] = -(local_2c8._6_1_ == UNK_0010f116);
        auVar21[7] = -(local_2c8._7_1_ == UNK_0010f117);
        auVar21[8] = -((char)uStack_2c0 == UNK_0010f118);
        auVar21[9] = -(uStack_2c0._1_1_ == UNK_0010f119);
        auVar21[10] = -(uStack_2c0._2_1_ == UNK_0010f11a);
        auVar21[0xb] = -(uStack_2c0._3_1_ == UNK_0010f11b);
        auVar21[0xc] = -(uStack_2c0._4_1_ == UNK_0010f11c);
        auVar21[0xd] = -(uStack_2c0._5_1_ == UNK_0010f11d);
        auVar21[0xe] = -(uStack_2c0._6_1_ == UNK_0010f11e);
        auVar21[0xf] = -(uStack_2c0._7_1_ == UNK_0010f11f);
      } while ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff);
      (*(code *)PTR_memcpy_0028a2d8)(auStack_3d8,local_2b8,0x90);
      local_3e0 = uVar13;
      local_3e8 = puVar6;
                    /* try { // try from 001f28b9 to 001f28c7 has its CatchHandler @ 001f2a10 */
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h757b8ba3534c23ebE(&local_3e8);
      param_1[2] = uVar13;
      param_1[1] = 0;
      *param_1 = 2;
LAB_001f295b:
                    /* try { // try from 001f295b to 001f2964 has its CatchHandler @ 001f2a17 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h2f49c189e78799baE(&local_3f8);
    }
    _ZN4core3ptr32drop_in_place_LT_uu_du__Stat_GT_17h701ab588e12d6784E(param_2);
  }
  return param_1;
}