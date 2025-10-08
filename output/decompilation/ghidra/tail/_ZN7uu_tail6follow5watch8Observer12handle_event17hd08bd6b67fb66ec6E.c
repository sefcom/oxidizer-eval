void _ZN7uu_tail6follow5watch8Observer12handle_event17hd08bd6b67fb66ec6E
               (undefined8 *param_1,int *param_2,long param_3,byte param_4)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  uint uVar12;
  undefined **ppuVar13;
  undefined auVar14 [16];
  undefined ********local_3a8;
  code *local_3a0;
  undefined local_398 [12];
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined local_380;
  undefined ********local_378;
  code *pcStack_370;
  undefined ********local_368;
  code *local_360;
  undefined **ppuStack_358;
  code *local_350;
  undefined8 *local_2a0;
  undefined *******local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined local_268 [8];
  code *pcStack_260;
  undefined ********local_258;
  code *local_250;
  undefined8 local_248;
  undefined local_1b8 [40];
  long local_190;
  uint local_180;
  undefined local_108 [216];
  
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_00273710);
LAB_001a50e1:
    ppuVar13 = &PTR_DAT_002737e8;
LAB_001a511b:
                    /* try { // try from 001a511b to 001a5120 has its CatchHandler @ 001a5176 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(ppuVar13);
LAB_001a5130:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(param_3 + 8);
  local_280 = 0;
  uStack_278 = 8;
  local_270 = 0;
  piVar1 = param_2 + 0xe;
  local_2a0 = param_1;
                    /* try { // try from 001a3f12 to 001a3f35 has its CatchHandler @ 001a5146 */
  lVar8 = _ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                    (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0027d718
  )(&local_298,lVar8 + 0xb0);
  cVar6 = *(char *)(param_3 + 0x20);
  if (cVar6 == '\x02') {
    if (*(char *)(param_3 + 0x21) == '\x03') goto LAB_001a5096;
  }
  else {
    if (cVar6 != '\x03') {
      if ((cVar6 != '\x04') || (1 < *(byte *)(param_3 + 0x21))) goto LAB_001a5096;
LAB_001a3f61:
      bVar2 = *(byte *)((long)param_2 + 0x8e);
      if ((bVar2 & 1) == 0) {
        if ((bVar2 == 2 || (bVar2 & 1) != 0) || (*(char *)(param_2 + 0x23) != '\x01'))
        goto LAB_001a5096;
        if (*param_2 != 3) {
          uVar10 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17h840738548114636dE
                             (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                              *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
                    (uVar10,&
                            PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
                    );
          _ZN7uu_tail6follow5files12FileHandling6remove17h45671f4f92c48796E
                    (&local_378,piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
          _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__files__PathData_GT_17heb873d53c1526937E
                    (&local_378);
          goto LAB_001a5096;
        }
        goto LAB_001a50e1;
      }
      if ((param_4 & 1) == 0) {
                    /* try { // try from 001a4556 to 001a46be has its CatchHandler @ 001a5176 */
        _local_268 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        stack0xfffffffffffffc70 =
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_378 = (undefined ********)&DAT_002734a0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_368 = (undefined ********)local_398;
        local_360 = (code *)0x1;
        local_398._0_8_ = local_268;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        pcStack_260 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_258 = (undefined ********)&PTR_s_No_such_file_or_directory_00273800;
        local_250 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_378 = (undefined ********)&DAT_002736e0;
        pcStack_370 = (code *)0x3;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x2;
        local_368 = (undefined ********)local_268;
        local_268 = (undefined  [8])&local_298;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        cVar6 = _ZN7uu_tail6follow5files12FileHandling15files_remaining17h4da9cfafa6cde0f6E(piVar1);
        if ((cVar6 == '\0') && (*(char *)((long)param_2 + 0x8d) == '\x01')) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
                    (local_268,&DAT_00124de3,0x12);
          local_368 = local_258;
          local_378 = (undefined ********)local_268;
          pcStack_370 = pcStack_260;
          local_360 = (code *)CONCAT44(local_360._4_4_,1);
          uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_378);
          local_2a0[1] = uVar10;
          local_2a0[2] = &
                         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
          ;
          *local_2a0 = 0x8000000000000000;
          goto LAB_001a4d0c;
        }
      }
      else {
                    /* try { // try from 001a3f84 to 001a43d6 has its CatchHandler @ 001a5176 */
        lVar9 = _ZN7uu_tail6follow5files12FileHandling16get_mut_metadata17h3eb5234edd98ad23E
                          (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if ((lVar9 != 0) &&
           ((((uVar12 = *(uint *)(lVar9 + 0x38) & 0xf000, uVar12 == 0x1000 || (uVar12 == 0x8000)) ||
             (uVar12 == 0x2000)) &&
            (lVar9 = _ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                               (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10)),
            *(long *)(lVar9 + 200) != 0)))) {
          _local_268 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          local_398._0_8_ = local_268;
          stack0xfffffffffffffc70 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_368 = (undefined ********)local_398;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_398._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
          uStack_388 = (undefined ********)CONCAT44(uStack_284,uStack_288);
          local_380 = 1;
          pcStack_370 = (code *)
                        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
          ;
          local_368 = (undefined ********)&PTR_s_has_become_inaccessible_resource_00273810;
          local_360 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          ppuStack_358 = &PTR_s_No_such_file_or_directory_00273800;
          local_350 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_268 = (undefined  [8])&DAT_00273670;
          pcStack_260 = (code *)0x4;
          local_248 = 0;
          local_250 = (code *)0x3;
          local_378 = (undefined ********)local_398;
          local_258 = (undefined ********)&local_378;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(local_268);
        }
        cVar6 = (*(code *)
                  PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_9is_orphan17h6fd6d482b353a62dE_0027d890
                )(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if ((cVar6 != '\0') &&
           (cVar6 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h7089f22eaab784f8E
                              (lVar3,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc)),
           cVar6 == '\0')) {
          _local_268 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          stack0xfffffffffffffc70 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_398._0_8_ = local_268;
          local_368 = (undefined ********)local_398;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_378 = (undefined ********)&PTR_DAT_002736b0;
          pcStack_370 = (code *)0x1;
          local_368 = (undefined ********)0x8;
          local_360 = (code *)0x0;
          ppuStack_358 = (undefined **)0x0;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          auVar14 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          stack0xfffffffffffffc70 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_398._0_8_ = local_268;
          local_368 = (undefined ********)local_398;
          _local_268 = auVar14;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_268 = (undefined  [8])&PTR_DAT_00273510;
          pcStack_260 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002736c0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_368 = (undefined ********)local_268;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
                    (&local_378,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
          local_258 = local_368;
          local_268 = (undefined  [8])local_378;
          pcStack_260 = pcStack_370;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcd2b65ebabcd2f96E
                    (param_2 + 8,local_268,&PTR_DAT_00273820);
          if (*param_2 == 3) {
            ppuVar13 = &PTR_DAT_00273838;
            goto LAB_001a511b;
          }
          uVar10 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17h840738548114636dE
                             (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                              *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
                    (uVar10,&
                            PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
                    );
        }
      }
      _ZN7uu_tail6follow5files12FileHandling12reset_reader17hff52527130e84020E
                (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      goto LAB_001a5096;
    }
    cVar6 = *(char *)(param_3 + 0x21);
    if (cVar6 == '\x01') {
      bVar2 = *(byte *)(param_3 + 0x22);
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 != '\x03') goto LAB_001a5096;
        cVar6 = *(char *)(param_3 + 0x22);
        if (cVar6 != '\x01') {
          if (cVar6 != '\x03') {
            if (cVar6 != '\x02') goto LAB_001a5096;
            goto LAB_001a3f61;
          }
          if (((*(byte *)((long)param_2 + 0x8e) != 2 ^ *(byte *)((long)param_2 + 0x8e)) & 1) == 0)
          goto LAB_001a5096;
          lVar9 = lVar3 + lVar9 * 0x18;
          if (lVar9 == 0x18) {
            ppuVar13 = &PTR_DAT_00273770;
          }
          else {
                    /* try { // try from 001a49ec to 001a4a5c has its CatchHandler @ 001a5176 */
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
                      (&local_378,*(undefined8 *)(lVar9 + -0x10),*(undefined8 *)(lVar9 + -8));
            local_258 = local_368;
            local_268 = (undefined  [8])local_378;
            pcStack_260 = pcStack_370;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcd2b65ebabcd2f96E
                      (&local_280,local_268,&PTR_DAT_00273788);
            _ZN7uu_tail6follow5files12FileHandling6remove17h45671f4f92c48796E
                      (&local_378,piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
            _ZN7uu_tail6follow5files8PathData20from_other_with_path17h24752379624f266eE
                      (local_108,&local_378,*(undefined8 *)(lVar9 + -0x10),
                       *(undefined8 *)(lVar9 + -8));
            uVar10 = *(undefined8 *)(lVar9 + -0x10);
            uVar4 = *(undefined8 *)(lVar9 + -8);
                    /* try { // try from 001a4a87 to 001a4a8b has its CatchHandler @ 001a515e */
            uVar7 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                              (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12),
                               *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
                    /* try { // try from 001a4a8c to 001a4aa7 has its CatchHandler @ 001a5132 */
            _ZN7uu_tail6follow5files12FileHandling6insert17h25f905215c20caacE
                      (piVar1,uVar10,uVar4,local_108,uVar7);
            if (*param_2 == 3) {
              ppuVar13 = &PTR_DAT_002737b8;
            }
            else {
                    /* try { // try from 001a4ac5 to 001a4afa has its CatchHandler @ 001a5176 */
              uVar10 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17h840738548114636dE
                                 (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                  *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
              _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
                        (uVar10,&
                                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
                        );
              if (*param_2 != 3) {
                auVar14 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17ha42b5e61fec17468E
                                    (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                     *(undefined8 *)(lVar9 + -0x10),*(undefined8 *)(lVar9 + -8));
                if (auVar14._0_8_ == 0) goto LAB_001a5096;
                *(undefined (*) [16])(local_2a0 + 1) = auVar14;
                *local_2a0 = 0x8000000000000000;
                goto LAB_001a4d0c;
              }
              ppuVar13 = &PTR_DAT_002737d0;
            }
          }
          goto LAB_001a511b;
        }
        goto LAB_001a43ab;
      }
      bVar2 = *(byte *)(param_3 + 0x22) & 5;
    }
    if (bVar2 != 0) goto LAB_001a5096;
  }
LAB_001a43ab:
  _ZN3std2fs8metadata17h5c248dd9820946ebE
            (local_268,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  if (local_268._0_4_ == 2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
              (local_268);
    goto LAB_001a5096;
  }
  (*(code *)PTR_memcpy_0027d2f0)(local_1b8,local_268,0xb0);
  uVar12 = local_180 & 0xf000;
  if ((uVar12 == 0x8000) || (uVar12 == 0x2000)) {
                    /* try { // try from 001a441f to 001a4550 has its CatchHandler @ 001a5134 */
    piVar11 = (int *)_ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                               (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    if (*piVar11 == 2) {
LAB_001a4432:
      _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_378 = (undefined ********)&DAT_002734a0;
      pcStack_370 = (code *)0x2;
      ppuStack_358 = (undefined **)0x0;
      local_360 = (code *)0x1;
      local_3a8 = (undefined ********)local_398;
      local_368 = (undefined ********)&local_3a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
      local_398._0_8_ = (undefined ********)0x0;
      stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
      local_380 = 1;
      local_3a0 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
      ;
      local_378 = (undefined ********)&DAT_002735d0;
      pcStack_370 = (code *)0x2;
      ppuStack_358 = (undefined **)0x0;
      local_360 = (code *)0x1;
      local_3a8 = (undefined ********)local_398;
      local_368 = (undefined ********)&local_3a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
      auVar14 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                          (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      if (auVar14._0_8_ == 0) {
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
                  (&local_378,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        uStack_388 = local_368;
        local_398._0_8_ = local_378;
        unique0x10000f98 = pcStack_370;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcd2b65ebabcd2f96E
                  (&local_280,local_398,&PTR_DAT_00273758);
        goto LAB_001a5053;
      }
LAB_001a4ce2:
      *(undefined (*) [16])(local_2a0 + 1) = auVar14;
      *local_2a0 = 0x8000000000000000;
                    /* try { // try from 001a4cff to 001a4d0b has its CatchHandler @ 001a5176 */
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
                (local_268);
LAB_001a4d0c:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(&local_298);
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17he0295db7e74c1801E
                (&local_280);
      return;
    }
LAB_001a488d:
    uVar12 = piVar11[0xe] & 0xf000;
    if (((uVar12 == 0x1000) || (uVar12 == 0x2000)) || (uVar12 == 0x8000)) {
      if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 001a4b26 to 001a4cd8 has its CatchHandler @ 001a5134 */
        _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_378 = (undefined ********)&DAT_002734a0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x1;
        local_3a8 = (undefined ********)local_398;
        local_368 = (undefined ********)&local_3a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        local_398._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
        local_380 = 1;
        local_3a0 = (code *)
                    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
        ;
        local_378 = (undefined ********)&DAT_002735d0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x1;
        local_3a8 = (undefined ********)local_398;
        local_368 = (undefined ********)&local_3a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        auVar14 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                            (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        goto LAB_001a4cd9;
      }
      cVar6 = _ZN71__LT_notify_types__event__EventKind_u20_as_u20_core__cmp__PartialEq_GT_2eq17ha41d237c36887005E
                        (param_3 + 0x20,&DAT_00124e4b);
      if ((cVar6 != '\0') ||
         ((*(char *)((long)param_2 + 0x8d) != '\0' && (*(long *)(piVar11 + 10) != local_190)))) {
        _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_378 = (undefined ********)&DAT_002734a0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x1;
        local_3a8 = (undefined ********)local_398;
        local_368 = (undefined ********)&local_3a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        local_398._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
        local_380 = 1;
        local_3a0 = (code *)
                    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
        ;
        local_378 = (undefined ********)&DAT_002735f0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x1;
        local_3a8 = (undefined ********)local_398;
        local_368 = (undefined ********)&local_3a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        auVar14 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                            (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        goto LAB_001a4cd9;
      }
                    /* try { // try from 001a4d48 to 001a5052 has its CatchHandler @ 001a5134 */
      (*(code *)
        PTR__ZN69__LT_std__fs__Metadata_u20_as_u20_uu_tail__paths__MetadataExtTail_GT_13got_truncated17hb79a91cf73219042E_0027d898
      )(&local_378,piVar11,local_1b8);
      auVar14._8_8_ = pcStack_370;
      auVar14._0_8_ = local_378;
      if (local_378 != (undefined ********)0x0) goto LAB_001a4ce2;
      if (((ulong)pcStack_370 & 1) != 0) {
        _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_378 = (undefined ********)&DAT_002734a0;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_368 = (undefined ********)&local_3a8;
        local_360 = (code *)0x1;
        local_3a8 = (undefined ********)local_398;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        stack0xfffffffffffffc70 =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
        ;
        local_378 = (undefined ********)&DAT_00273610;
        pcStack_370 = (code *)0x2;
        ppuStack_358 = (undefined **)0x0;
        local_360 = (code *)0x1;
        local_398._0_8_ = &local_298;
        local_368 = (undefined ********)local_398;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        auVar14 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                            (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        goto LAB_001a4cd9;
      }
    }
    else {
      _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_378 = (undefined ********)&DAT_002734a0;
      pcStack_370 = (code *)0x2;
      ppuStack_358 = (undefined **)0x0;
      local_360 = (code *)0x1;
      local_3a8 = (undefined ********)local_398;
      local_368 = (undefined ********)&local_3a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
      local_398._0_8_ = (undefined ********)0x0;
      stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
      local_380 = 1;
      local_3a0 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
      ;
      local_378 = (undefined ********)&DAT_002735b0;
      pcStack_370 = (code *)0x2;
      ppuStack_358 = (undefined **)0x0;
      local_360 = (code *)0x1;
      local_3a8 = (undefined ********)local_398;
      local_368 = (undefined ********)&local_3a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
      auVar14 = _ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
                          (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
LAB_001a4cd9:
      if (auVar14._0_8_ != 0) goto LAB_001a4ce2;
    }
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
              (&local_378,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    uStack_388 = local_368;
    local_398._0_8_ = local_378;
    unique0x10000fd8 = pcStack_370;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcd2b65ebabcd2f96E(&local_280,local_398,&PTR_DAT_00273728)
    ;
  }
  else {
                    /* try { // try from 001a46cc to 001a49b3 has its CatchHandler @ 001a5134 */
    piVar11 = (int *)_ZN7uu_tail6follow5files12FileHandling3get17hc0a1561a42a9610aE
                               (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    if (*piVar11 == 2) {
      if (uVar12 == 0x1000) goto LAB_001a4432;
      if ((param_4 & 1) != 0) {
        if (((*(byte *)((long)param_2 + 0x8e) != 2 ^ *(byte *)((long)param_2 + 0x8e)) & 1) == 0) {
          _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_398._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
          uStack_388 = (undefined ********)CONCAT44(uStack_284,uStack_288);
          local_380 = 1;
          local_3a0 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
          ;
          local_378 = (undefined ********)&DAT_00273630;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        }
        else {
          _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_398._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
          uStack_388 = (undefined ********)CONCAT44(uStack_284,uStack_288);
          local_380 = 1;
          local_3a0 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
          ;
          local_378 = (undefined ********)&DAT_00273650;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          if (*param_2 == 3) {
                    /* try { // try from 001a5123 to 001a512f has its CatchHandler @ 001a5134 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
                      (&PTR_DAT_00273740);
            goto LAB_001a5130;
          }
          (**(code **)(*(long *)(param_2 + 6) + 0x20))
                    (&local_378,*(undefined8 *)(param_2 + 4),*(undefined8 *)(lVar3 + 8),
                     *(undefined8 *)(lVar3 + 0x10));
          _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_bool_C_notify__error__Error_GT__GT_17h00c92e5e8c601890E
                    (&local_378);
          _ZN7uu_tail6follow5files12FileHandling6remove17h45671f4f92c48796E
                    (&local_378,piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
          _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__files__PathData_GT_17heb873d53c1526937E
                    (&local_378);
          cVar6 = _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hdacea64a27534677E
                            (piVar1,param_4);
          if (cVar6 != '\0') {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
                      (local_398,&DAT_00124de3,0x12);
            local_368 = uStack_388;
            local_378 = (undefined ********)local_398._0_8_;
            pcStack_370 = stack0xfffffffffffffc70;
            local_360 = (code *)CONCAT44(local_360._4_4_,1);
            uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_378);
            auVar14._8_8_ =
                 &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
            ;
            auVar14._0_8_ = uVar10;
            goto LAB_001a4ce2;
          }
        }
      }
    }
    else {
      if (uVar12 == 0x1000) goto LAB_001a488d;
      uVar12 = piVar11[0xe] & 0xf000;
      if (((uVar12 == 0x1000) || (uVar12 == 0x8000)) || (uVar12 == 0x2000)) {
        if (*(long *)(piVar11 + 0x32) == 0) {
          _local_398 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
          local_3a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
          local_378 = (undefined ********)&DAT_002734a0;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
          local_398._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffc70 = (code *)CONCAT44(uStack_28c,local_290);
          uStack_388 = (undefined ********)CONCAT44(uStack_284,uStack_288);
          local_380 = 1;
          local_3a0 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
          ;
          local_378 = (undefined ********)&DAT_00273630;
          pcStack_370 = (code *)0x2;
          ppuStack_358 = (undefined **)0x0;
          local_360 = (code *)0x1;
          local_3a8 = (undefined ********)local_398;
          local_368 = (undefined ********)&local_3a8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_378);
        }
        else {
          _ZN7uu_tail6follow5files12FileHandling12reset_reader17hff52527130e84020E
                    (piVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        }
      }
    }
  }
LAB_001a5053:
  uVar10 = *(undefined8 *)(lVar3 + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  (*(code *)PTR_memcpy_0027d2f0)(&local_378,local_1b8,0xb0);
                    /* try { // try from 001a5076 to 001a5088 has its CatchHandler @ 001a5134 */
  _ZN7uu_tail6follow5files12FileHandling15update_metadata17h25061ac57dde0fedE
            (piVar1,uVar10,uVar4,&local_378);
                    /* try { // try from 001a5089 to 001a5095 has its CatchHandler @ 001a5176 */
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
            (local_268);
LAB_001a5096:
  local_2a0[2] = local_270;
  *(undefined4 *)local_2a0 = (undefined4)local_280;
  *(undefined4 *)((long)local_2a0 + 4) = local_280._4_4_;
  *(undefined4 *)(local_2a0 + 1) = (undefined4)uStack_278;
  *(undefined4 *)((long)local_2a0 + 0xc) = uStack_278._4_4_;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(&local_298);
  return;
}