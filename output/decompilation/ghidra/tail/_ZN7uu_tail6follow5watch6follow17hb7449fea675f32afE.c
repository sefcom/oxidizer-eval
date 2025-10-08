undefined  [16] _ZN7uu_tail6follow5watch6follow17hb7449fea675f32afE(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined auVar9 [16];
  undefined8 **ppuVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined auVar20 [16];
  undefined8 **local_298;
  undefined **ppuStack_290;
  undefined8 *local_288;
  uint local_274;
  undefined local_270 [8];
  undefined **ppuStack_268;
  undefined8 *local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  long local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 **local_228;
  undefined8 local_220;
  undefined8 local_218;
  uint local_204;
  int local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  undefined8 *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined local_e0 [56];
  uint local_a8;
  
  plVar1 = param_1 + 7;
                    /* try { // try from 001a51bd to 001a51d6 has its CatchHandler @ 001a5c51 */
  uVar13 = (uint)*(byte *)(param_2 + 0x48);
  cVar11 = _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hdacea64a27534677E
                     (plVar1,uVar13);
  if ((cVar11 == '\0') ||
     (cVar11 = _ZN7uu_tail6follow5files12FileHandling20only_stdin_remaining17h3f4a838c6c931811E
                         (plVar1), cVar11 != '\0')) {
    iVar12 = *(int *)(param_1 + 0x11);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4a);
    local_130 = *(undefined8 *)(param_2 + 0x30);
    local_1fc = *(undefined4 *)(param_2 + 0x38);
    local_204 = uVar13;
    local_200 = iVar12;
    if (bVar2 == 2) goto LAB_001a523f;
LAB_001a5227:
                    /* try { // try from 001a522b to 001a5236 has its CatchHandler @ 001a5c53 */
    if ((iVar12 == 0) ||
       (cVar11 = _ZN7uu_tail8platform4unix14ProcessChecker7is_dead17hb09aad58966101f3E(local_200),
       cVar11 == '\0')) {
LAB_001a523f:
      local_274 = (uint)bVar3;
      if ((*(byte *)((long)param_1 + 0x8e) != 2) &&
         ((((*(byte *)((long)param_1 + 0x8e) & 1) != 0 &&
           (*(char *)((long)param_1 + 0x8c) == '\x01')) && (lVar4 = param_1[6], lVar4 != 0)))) {
        lVar5 = param_1[5];
        lVar19 = 0;
        do {
                    /* try { // try from 001a52c7 to 001a5503 has its CatchHandler @ 001a5c55 */
          _ZN3std2fs8metadata17h5c248dd9820946ebE
                    (&local_1f8,*(undefined8 *)(lVar5 + 8 + lVar19),
                     *(undefined8 *)(lVar5 + 0x10 + lVar19));
          ppuVar16 = (undefined8 **)local_1f8;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
                    (&local_1f8);
          if ((int)ppuVar16 != 2) {
            lVar14 = _ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                               (plVar1,*(undefined8 *)(lVar5 + 8 + lVar19),
                                *(undefined8 *)(lVar5 + 0x10 + lVar19));
            _ZN3std2fs8metadata17h5c248dd9820946ebE
                      (&local_1f8,*(undefined8 *)(lVar5 + 8 + lVar19),
                       *(undefined8 *)(lVar5 + 0x10 + lVar19));
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h12e26e28373195d7E(local_e0,&local_1f8);
            uVar13 = local_a8 & 0xf000;
            if ((((uVar13 == 0x1000) || (uVar13 == 0x8000)) || (uVar13 == 0x2000)) &&
               (*(long *)(lVar14 + 200) == 0)) {
              _local_270 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
              local_238 = (undefined **)local_270;
              uStack_230 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E
              ;
              local_1f8 = (undefined **)&DAT_002734a0;
              uStack_1f0 = (undefined **)0x2;
              local_1d8 = 0;
              local_1e8 = &local_238;
              uStack_1e0 = 1;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_1f8);
              ppuStack_268 = *(undefined ***)(lVar14 + 0xb8);
              local_260 = *(undefined8 **)(lVar14 + 0xc0);
              local_270 = (undefined  [8])0x0;
              uStack_258 = CONCAT31(uStack_258._1_3_,1);
              local_238 = (undefined **)local_270;
              uStack_230 = (code *)
                           PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
              ;
              local_1f8 = (undefined **)&DAT_002735d0;
              uStack_1f0 = (undefined **)0x2;
              local_1d8 = 0;
              local_1e8 = &local_238;
              uStack_1e0 = 1;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_1f8);
              _ZN7uu_tail6follow5files12FileHandling15update_metadata17h25061ac57dde0fedE
                        (plVar1,*(undefined8 *)(lVar5 + 8 + lVar19),
                         *(undefined8 *)(lVar5 + 0x10 + lVar19),local_e0);
              auVar20 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                                  (plVar1,*(undefined8 *)(lVar5 + 8 + lVar19),
                                   *(undefined8 *)(lVar5 + 0x10 + lVar19));
              if (auVar20._0_8_ != 0) goto LAB_001a58b4;
              _ZN7uu_tail6follow5files12FileHandling9tail_file17h556ffa1173747618E
                        (&local_1f8,plVar1,*(undefined8 *)(lVar5 + 8 + lVar19),
                         *(undefined8 *)(lVar5 + 0x10 + lVar19),local_274);
              auVar20._8_8_ = uStack_1f0;
              auVar20._0_8_ = local_1f8;
              if ((undefined8 **)local_1f8 != (undefined8 **)0x0) goto LAB_001a58b4;
              if (*(int *)param_1 == 3) {
                ppuVar18 = &PTR_DAT_002738a8;
                goto LAB_001a5bd1;
              }
              auVar20 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17ha42b5e61fec17468E
                                  (param_1[2],param_1[3],*(undefined8 *)(lVar5 + 8 + lVar19),
                                   *(undefined8 *)(lVar5 + 0x10 + lVar19));
              if (auVar20._0_8_ != 0) goto LAB_001a58b4;
            }
          }
          lVar19 = lVar19 + 0x18;
        } while (lVar4 * 0x18 != lVar19);
      }
      if (*param_1 == 3) {
        ppuVar18 = &PTR_DAT_002738c0;
LAB_001a5bd1:
                    /* try { // try from 001a5bd1 to 001a5bd6 has its CatchHandler @ 001a5cd4 */
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(ppuVar18);
LAB_001a5bef:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
                    /* try { // try from 001a5538 to 001a5551 has its CatchHandler @ 001a5c53 */
      _ZN3std4sync4mpmc17Receiver_LT_T_GT_12recv_timeout17h6504311de0d8ae9fE
                (local_270,*param_1,param_1[1],local_130,local_1fc);
      local_298 = (undefined8 **)0x0;
      ppuStack_290 = (undefined **)&DAT_00000008;
      local_288 = (undefined8 *)0x0;
      uVar13 = local_270._0_4_;
      switch(local_270) {
      case (undefined  [8])0x1:
        cVar11 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(ppuStack_268);
        if (cVar11 != '\0') goto switchD_001a5599_caseD_2;
        if (local_240 != 0) {
          lVar4 = CONCAT44(uStack_244,uStack_248);
                    /* try { // try from 001a55c8 to 001a5608 has its CatchHandler @ 001a5c4d */
          cVar11 = _ZN7uu_tail6follow5files12FileHandling12contains_key17h35489a1a5bc2cd52E
                             (plVar1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
          if (cVar11 != '\0') {
            if (*(int *)param_1 == 3) {
                    /* try { // try from 001a5be2 to 001a5bee has its CatchHandler @ 001a5c9a */
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
                        (&PTR_DAT_002738d8);
              goto LAB_001a5bef;
            }
            (**(code **)(param_1[3] + 0x20))
                      (&local_1f8,param_1[2],*(undefined8 *)(lVar4 + 8),
                       *(undefined8 *)(lVar4 + 0x10));
            _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_bool_C_notify__error__Error_GT__GT_17h00c92e5e8c601890E
                      (&local_1f8);
          }
        }
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                  (&local_250);
        ppuVar18 = (undefined **)&DAT_00000008;
        ppuVar16 = (undefined8 **)0x0;
        bVar8 = false;
        goto joined_r0x001a56f2;
      default:
switchD_001a5599_caseD_2:
        local_1c8 = local_240;
        local_1d8 = CONCAT44(uStack_24c,local_250);
        uStack_1d0 = uStack_248;
        uStack_1cc = uStack_244;
        local_1e8 = local_260;
        uStack_1e0 = CONCAT44(uStack_254,uStack_258);
        local_1f8 = (undefined **)local_270;
        uStack_1f0 = ppuStack_268;
        local_140 = &local_1f8;
        local_138 = 
        PTR__ZN59__LT_notify__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h6dbce4ad7dfddfbdE_0027d5b8
        ;
        local_238 = &PTR_s_NotifyError__00273870;
        uStack_230 = (code *)0x1;
        local_218 = 0;
        local_228 = &local_140;
        local_220 = 1;
                    /* try { // try from 001a596f to 001a59bb has its CatchHandler @ 001a5bf1 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(&local_110,&local_238);
        local_220 = CONCAT44(local_220._4_4_,1);
        local_238 = (undefined **)CONCAT44(uStack_10c,local_110);
        uStack_230 = (code *)CONCAT44(uStack_104,uStack_108);
        local_228 = (undefined8 **)local_100;
        ppuVar16 = (undefined8 **)_ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_238);
                    /* try { // try from 001a59c1 to 001a5b94 has its CatchHandler @ 001a5c11 */
        _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17hf2995e16b4f1d266E(&local_1f8);
        bVar7 = false;
        bVar8 = false;
        ppuVar18 = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
        ;
LAB_001a582b:
        auVar20._8_8_ = ppuVar18;
        auVar20._0_8_ = ppuVar16;
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                  (&local_298);
        if ((~uVar13 & 6) == 0) goto LAB_001a58b4;
        if (bVar7) goto LAB_001a5845;
        break;
      case (undefined  [8])0x5:
        local_238 = &PTR_DAT_00273510;
        uStack_230 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_1f8 = (undefined **)&DAT_00273850;
        uStack_1f0 = (undefined **)0x2;
        local_1d8 = 0;
        local_1e8 = &local_238;
        uStack_1e0 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(&local_128,&local_1f8);
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,1);
        local_1f8 = (undefined **)CONCAT44(uStack_124,local_128);
        uStack_1f0 = (undefined **)CONCAT44(uStack_11c,uStack_120);
        local_1e8 = local_118;
        ppuVar16 = (undefined8 **)_ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1f8);
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                  (&local_298);
        ppuVar18 = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
        ;
        bVar8 = true;
LAB_001a5845:
                    /* try { // try from 001a5845 to 001a584e has its CatchHandler @ 001a5c1e */
        _ZN4core3ptr45drop_in_place_LT_notify__error__ErrorKind_GT_17h28461622da291443E(local_270);
        break;
      case (undefined  [8])0x6:
        ppuVar18 = (undefined **)&DAT_00000008;
                    /* try { // try from 001a565e to 001a5689 has its CatchHandler @ 001a5c31 */
        if ((CONCAT44(uStack_254,uStack_258) == 0) ||
           (cVar11 = _ZN7uu_tail6follow5files12FileHandling12contains_key17h35489a1a5bc2cd52E
                               (plVar1,local_260[1],local_260[2]), cVar11 == '\0')) {
          ppuVar16 = (undefined8 **)0x0;
        }
        else {
          _ZN7uu_tail6follow5watch8Observer12handle_event17hd08bd6b67fb66ec6E
                    (&local_1f8,param_1,&ppuStack_268,local_204);
          ppuVar16 = (undefined8 **)local_1e8;
          ppuVar18 = uStack_1f0;
          ppuVar10 = (undefined8 **)local_1f8;
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                    (&local_298);
          local_298 = ppuVar10;
          ppuStack_290 = ppuVar18;
          local_288 = ppuVar16;
        }
        _ZN4core3ptr47drop_in_place_LT_notify_types__event__Event_GT_17hb202190ad9c88fbaE
                  (&ppuStack_268);
        goto joined_r0x001a56f2;
      case (undefined  [8])0x7:
        if ((char)ppuStack_268 != '\0') {
          local_140 = (undefined8 *)CONCAT71(local_140._1_7_,(char)ppuStack_268);
          local_238 = (undefined **)&local_140;
          uStack_230 = (code *)
                       PTR__ZN72__LT_std__sync__mpsc__RecvTimeoutError_u20_as_u20_core__fmt__Display_GT_3fmt17h2b204bd90ae7c737E_0027d8a0
          ;
          local_1f8 = &PTR_s_RecvTimeoutError__00273880;
          uStack_1f0 = (undefined **)0x1;
          local_1d8 = 0;
          local_1e8 = &local_238;
          uStack_1e0 = 1;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(&local_f8,&local_1f8);
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,1);
          local_1f8 = (undefined **)CONCAT44(uStack_f4,local_f8);
          uStack_1f0 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
          local_1e8 = local_e8;
          uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1f8);
          auVar20._8_8_ =
               &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
          ;
          auVar20._0_8_ = uVar15;
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                    (&local_298);
          goto LAB_001a58b4;
        }
        ppuVar18 = (undefined **)&DAT_00000008;
        ppuVar16 = (undefined8 **)0x0;
joined_r0x001a56f2:
        bVar8 = true;
joined_r0x001a56f2:
        if ((bVar2 != 2) && (*(char *)((long)param_1 + 0x8d) != '\0')) {
          _ZN7uu_tail6follow5files12FileHandling4keys17h496a1b83376a9d98E(&local_1f8,plVar1);
                    /* try { // try from 001a573a to 001a5749 has its CatchHandler @ 001a5c4f */
          _ZN4core4iter6traits8iterator8Iterator7collect17h80ad1b99345411f1E(&local_238,&local_1f8);
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                    (&local_298);
          local_288 = local_228;
          local_298 = (undefined8 **)local_238;
          ppuStack_290 = (undefined **)uStack_230;
          ppuVar18 = (undefined **)uStack_230;
          ppuVar16 = local_228;
        }
        ppuVar17 = ppuVar18;
        while ((ppuVar17 != ppuVar18 + (long)ppuVar16 * 3 && (ppuVar17 != (undefined **)0x0))) {
                    /* try { // try from 001a57aa to 001a57be has its CatchHandler @ 001a5c5f */
          _ZN7uu_tail6follow5files12FileHandling9tail_file17h556ffa1173747618E
                    (&local_1f8,plVar1,ppuVar17[1],ppuVar17[2],local_274);
          ppuVar17 = ppuVar17 + 3;
          if ((undefined8 **)local_1f8 != (undefined8 **)0x0) {
            bVar7 = true;
            ppuVar18 = uStack_1f0;
            ppuVar16 = (undefined8 **)local_1f8;
            goto LAB_001a582b;
          }
        }
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                  (&local_298);
        if ((~uVar13 & 6) != 0) {
                    /* try { // try from 001a57ff to 001a5808 has its CatchHandler @ 001a5c53 */
          _ZN4core3ptr45drop_in_place_LT_notify__error__ErrorKind_GT_17h28461622da291443E(local_270)
          ;
        }
        iVar12 = *(int *)(param_1 + 0x11);
        if (bVar2 != 2) goto LAB_001a5227;
        goto LAB_001a523f;
      }
      auVar9._8_8_ = ppuVar18;
      auVar9._0_8_ = ppuVar16;
      auVar20._8_8_ = ppuVar18;
      auVar20._0_8_ = ppuVar16;
      if (bVar8) {
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                  (&local_250);
        auVar20 = auVar9;
      }
      goto LAB_001a58b4;
    }
    auVar20 = ZEXT116(bVar2) << 0x40;
  }
  else {
                    /* try { // try from 001a5862 to 001a58a9 has its CatchHandler @ 001a5c51 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
              (local_270,&DAT_00124de3,0x12);
    local_1e8 = local_260;
    local_1f8 = (undefined **)local_270;
    uStack_1f0 = ppuStack_268;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,1);
    uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1f8);
    auVar20._8_8_ =
         &
         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
    ;
    auVar20._0_8_ = uVar15;
  }
LAB_001a58b4:
  _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17hdbfc2663e25cdabaE(param_1);
  return auVar20;
}