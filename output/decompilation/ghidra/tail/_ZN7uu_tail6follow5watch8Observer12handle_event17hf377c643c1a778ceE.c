/* WARNING: Type propagation algorithm not settling */

void _ZN7uu_tail6follow5watch8Observer12handle_event17hf377c643c1a778ceE
               (undefined8 *param_1,int *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined auVar15 [16];
  undefined ********local_2f8;
  code *local_2f0;
  undefined local_2e8 [12];
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined local_2d0;
  undefined ********local_2c8;
  code *pcStack_2c0;
  undefined ********local_2b8;
  code *local_2b0;
  undefined **ppuStack_2a8;
  code *local_2a0;
  undefined8 *local_1f0;
  undefined *******local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined local_1b8 [8];
  code *pcStack_1b0;
  undefined ********local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined local_e0 [40];
  long local_b8;
  uint local_a8;
  
  lVar10 = *(long *)(param_3 + 0x10);
  local_1f0 = param_1;
  if (lVar10 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002bc098);
LAB_00206e13:
    ppuVar14 = &PTR_DAT_002bc110;
LAB_00206e44:
                    /* try { // try from 00206e44 to 00206e49 has its CatchHandler @ 00206e7a */
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(ppuVar14);
LAB_00206e4a:
                    /* try { // try from 00206e4a to 00206e56 has its CatchHandler @ 00206e68 */
    uVar12 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002bc0b0);
LAB_00206e57:
                    /* catch() { ... } // from try @ 002066e0 with catch @ 00206e57 */
                    /* catch() { ... } // from try @ 00205d22 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206462 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206626 with catch @ 00206e7a
                       catch() { ... } // from try @ 0020670b with catch @ 00206e7a
                       catch() { ... } // from try @ 0020683e with catch @ 00206e7a
                       catch() { ... } // from try @ 00206a7d with catch @ 00206e7a
                       catch() { ... } // from try @ 00206cf1 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206e44 with catch @ 00206e7a */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(&local_1e8);
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
              (&local_1d0);
    _Unwind_Resume(uVar12);
    return;
  }
  lVar2 = *(long *)(param_3 + 8);
  local_1d0 = 0;
  uStack_1c8 = 8;
  local_1c0 = 0;
  plVar1 = (long *)(param_2 + 0xe);
  uVar12 = *(undefined8 *)(lVar2 + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
                    /* try { // try from 00205c93 to 00205cc0 has its CatchHandler @ 00206e8c */
  lVar8 = _ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE();
  _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
            (&local_1e8,lVar8 + 0xb0);
  cVar6 = *(char *)(param_3 + 0x20);
  if (cVar6 == '\x02') {
    if (*(char *)(param_3 + 0x21) == '\x03') goto LAB_00206cfe;
  }
  else {
    if (cVar6 != '\x03') {
      if ((cVar6 != '\x04') || (1 < *(byte *)(param_3 + 0x21))) goto LAB_00206cfe;
LAB_00205cec:
      if ((*(byte *)((long)param_2 + 0x8e) & 1) == 0) {
        if ((*(byte *)((long)param_2 + 0x8e) == 2) || (*(char *)(param_2 + 0x23) == '\0'))
        goto LAB_00206cfe;
        if (*param_2 != 3) {
                    /* try { // try from 00205d22 to 00206129 has its CatchHandler @ 00206e7a */
          uVar9 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17hae2d0446936d6361E
                            (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar12,uVar3)
          ;
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hdf4e067f61f46c2bE
                    (uVar9);
          _ZN7uu_tail6follow5files12FileHandling6remove17h9a608e9706c93353E
                    (&local_2c8,plVar1,uVar12,uVar3);
          _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__files__PathData_GT_17h0bd94260f77f0a2bE
                    (&local_2c8);
          goto LAB_00206cfe;
        }
        goto LAB_00206e13;
      }
      if (*(char *)(param_4 + 0x48) == '\0') {
                    /* try { // try from 00206462 to 00206561 has its CatchHandler @ 00206e7a */
        _local_1b8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        stack0xfffffffffffffd20 =
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b8 = (undefined ********)local_2e8;
        local_2b0 = (code *)0x1;
        local_2e8._0_8_ = local_1b8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        pcStack_1b0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_1a8 = (undefined ********)&PTR_DAT_002bc128;
        local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_2c8 = (undefined ********)&DAT_002bc068;
        pcStack_2c0 = (code *)0x3;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x2;
        local_2b8 = (undefined ********)local_1b8;
        local_1b8 = (undefined  [8])&local_1e8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        cVar6 = _ZN7uu_tail6follow5files12FileHandling15files_remaining17h86d5a5f2d15f0cfdE(plVar1);
        if (cVar6 == '\0' && *(char *)((long)param_2 + 0x8d) != '\0') {
                    /* try { // try from 0020683e to 00206876 has its CatchHandler @ 00206e7a */
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E
                    (local_1b8);
          local_2b8 = local_1a8;
          local_2c8 = (undefined ********)local_1b8;
          pcStack_2c0 = pcStack_1b0;
          local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
          uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_2c8);
          local_1f0[1] = uVar12;
          local_1f0[2] = &
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
          ;
          *local_1f0 = 0x8000000000000000;
          goto LAB_00206a8a;
        }
      }
      else {
        lVar10 = _ZN7uu_tail6follow5files12FileHandling16get_mut_metadata17h602fa25e5b671479E
                           (plVar1,uVar12,uVar3);
        if ((lVar10 != 0) &&
           ((((uVar13 = *(uint *)(lVar10 + 0x38) & 0xf000, uVar13 == 0x1000 || (uVar13 == 0x2000))
             || (uVar13 == 0x8000)) &&
            (lVar10 = _ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE
                                (plVar1,uVar12,uVar3), *(long *)(lVar10 + 200) != 0)))) {
          _local_1b8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_2e8._0_8_ = local_1b8;
          stack0xfffffffffffffd20 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined ********)local_2e8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
          local_2d0 = 1;
          pcStack_2c0 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_2b8 = (undefined ********)&PTR_DAT_002bc138;
          local_2b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          ppuStack_2a8 = &PTR_DAT_002bc128;
          local_2a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_1b8 = (undefined  [8])&DAT_002bbff8;
          pcStack_1b0 = (code *)0x4;
          local_198 = 0;
          local_1a0 = (code *)0x3;
          local_2c8 = (undefined ********)local_2e8;
          local_1a8 = (undefined ********)&local_2c8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_1b8);
        }
        cVar6 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_9is_orphan17h65c9528458cf452dE
                          (uVar12,uVar3);
        if ((cVar6 != '\0') &&
           (cVar6 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h7a9332afdb48cbdeE
                              (lVar2,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc)),
           cVar6 == '\0')) {
          _local_1b8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          stack0xfffffffffffffd20 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined ********)local_2e8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          local_2c8 = (undefined ********)&PTR_DAT_002bc038;
          pcStack_2c0 = (code *)0x1;
          local_2b8 = (undefined ********)0x8;
          local_2b0 = (code *)0x0;
          ppuStack_2a8 = (undefined **)0x0;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          auVar15 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          stack0xfffffffffffffd20 =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined ********)local_2e8;
          _local_1b8 = auVar15;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          local_1b8 = (undefined  [8])&PTR_DAT_002bbeb0;
          pcStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bc048;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined ********)local_1b8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
                    (&local_2c8,lVar2);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1444e8e90e3da7b6E(param_2 + 8,local_1b8);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_DAT_002bc148;
            goto LAB_00206e44;
          }
          uVar9 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17hae2d0446936d6361E
                            (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar12,uVar3)
          ;
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hdf4e067f61f46c2bE
                    (uVar9);
        }
      }
      _ZN7uu_tail6follow5files12FileHandling12reset_reader17h2b8bfb99f1a2f6b2E(plVar1,uVar12,uVar3);
      goto LAB_00206cfe;
    }
    cVar6 = *(char *)(param_3 + 0x21);
    if (cVar6 == '\x01') {
      bVar5 = *(byte *)(param_3 + 0x22);
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 != '\x03') goto LAB_00206cfe;
        cVar6 = *(char *)(param_3 + 0x22);
        if (cVar6 != '\x01') {
          if (cVar6 != '\x03') {
            if (cVar6 != '\x02') goto LAB_00206cfe;
            goto LAB_00205cec;
          }
          if ((byte)(*(char *)((long)param_2 + 0x8e) - 1U) < 2) goto LAB_00206cfe;
          lVar10 = lVar10 * 0x18 + -0x18 + lVar2;
                    /* try { // try from 00206626 to 0020669a has its CatchHandler @ 00206e7a */
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
                    (&local_2c8,lVar10);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1444e8e90e3da7b6E(&local_1d0,local_1b8);
          _ZN7uu_tail6follow5files12FileHandling6remove17h9a608e9706c93353E
                    (&local_2c8,plVar1,uVar12,uVar3);
          uVar9 = *(undefined8 *)(lVar10 + 8);
          uVar4 = *(undefined8 *)(lVar10 + 0x10);
          _ZN7uu_tail6follow5files8PathData20from_other_with_path17h3c415c2bfeedf353E
                    (local_1b8,&local_2c8,uVar9,uVar4);
          (*(code *)PTR_memcpy_002c2760)(&local_2c8,local_1b8,0xd8);
          if (*plVar1 == -0x8000000000000000) {
                    /* try { // try from 00206e25 to 00206e31 has its CatchHandler @ 00206e59 */
            uVar12 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002bc0c8);
            goto LAB_00206e57;
          }
                    /* try { // try from 002066db to 002066df has its CatchHandler @ 00206e59 */
          uVar7 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                            (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12),
                             *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
                    /* try { // try from 002066e0 to 002066f8 has its CatchHandler @ 00206e57 */
          _ZN7uu_tail6follow5files12FileHandling6insert17h8755548d7239df23E
                    (plVar1,uVar9,uVar4,&local_2c8,uVar7);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_DAT_002bc0e0;
          }
          else {
                    /* try { // try from 0020670b to 0020673e has its CatchHandler @ 00206e7a */
            uVar12 = _ZN7uu_tail6follow5watch9WatcherRx7unwatch17hae2d0446936d6361E
                               (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar12,
                                uVar3);
            _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hdf4e067f61f46c2bE
                      (uVar12);
            if (*param_2 != 3) {
              auVar15 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17h1fadf41504d6de8eE
                                  (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar9,
                                   uVar4);
              if (auVar15._0_8_ == 0) goto LAB_00206cfe;
              *(undefined (*) [16])(local_1f0 + 1) = auVar15;
              *local_1f0 = 0x8000000000000000;
              goto LAB_00206a8a;
            }
            ppuVar14 = &PTR_DAT_002bc0f8;
          }
          goto LAB_00206e44;
        }
        goto LAB_00206113;
      }
      bVar5 = *(byte *)(param_3 + 0x22) & 5;
    }
    if (bVar5 != 0) goto LAB_00206cfe;
  }
LAB_00206113:
  _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(local_1b8,uVar12,uVar3);
  if (local_1b8._0_4_ != 2) {
    (*(code *)PTR_memcpy_002c2760)(local_e0,local_1b8,0xb0);
    uVar13 = local_a8 & 0xf000;
    if ((uVar13 == 0x2000) || (uVar13 == 0x8000)) {
                    /* try { // try from 00206177 to 00206455 has its CatchHandler @ 00206e68 */
      piVar11 = (int *)_ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE
                                 (plVar1,uVar12,uVar3);
      if (*piVar11 == 2) {
LAB_00206194:
        _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        local_2e8._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_2c8 = (undefined ********)&DAT_002bbf58;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        auVar15 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                            (plVar1,uVar12,uVar3);
        if (auVar15._0_8_ == 0) {
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
                    (&local_2c8,lVar2);
          uStack_2d8 = local_2b8;
          local_2e8._0_8_ = local_2c8;
          unique0x10000f7d = pcStack_2c0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1444e8e90e3da7b6E(&local_1d0,local_2e8);
          goto LAB_00206cbf;
        }
LAB_00206a60:
        *(undefined (*) [16])(local_1f0 + 1) = auVar15;
        *local_1f0 = 0x8000000000000000;
                    /* try { // try from 00206a7d to 00206a89 has its CatchHandler @ 00206e7a */
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                  (local_1b8);
LAB_00206a8a:
                    /* try { // try from 00206a8a to 00206a96 has its CatchHandler @ 00206e8c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(&local_1e8);
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                  (&local_1d0);
        return;
      }
LAB_00206574:
      uVar13 = piVar11[0xe] & 0xf000;
      if (((uVar13 == 0x1000) || (uVar13 == 0x2000)) || (uVar13 == 0x8000)) {
        if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 002068a0 to 00206a56 has its CatchHandler @ 00206e68 */
          _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_2c8 = (undefined ********)&DAT_002bbf58;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          auVar15 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                              (plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
        cVar6 = _ZN65__LT_notify__event__EventKind_u20_as_u20_core__cmp__PartialEq_GT_2eq17hdefd9549194a1b6fE
                          (param_3 + 0x20);
        if ((cVar6 != '\0') ||
           ((*(char *)((long)param_2 + 0x8d) != '\0' && (*(long *)(piVar11 + 10) != local_b8)))) {
                    /* try { // try from 00206760 to 00206838 has its CatchHandler @ 00206e68 */
          _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_2c8 = (undefined ********)&DAT_002bbf78;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          auVar15 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                              (plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
                    /* try { // try from 002065d8 to 002065ed has its CatchHandler @ 00206e68 */
        _ZN69__LT_std__fs__Metadata_u20_as_u20_uu_tail__paths__MetadataExtTail_GT_13got_truncated17ha28743506d7e92e5E
                  (&local_2c8,piVar11,local_e0);
        auVar15._8_8_ = pcStack_2c0;
        auVar15._0_8_ = local_2c8;
        if (local_2c8 != (undefined ********)0x0) goto LAB_00206a60;
        if ((char)pcStack_2c0 != '\0') {
          _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b8 = (undefined ********)&local_2f8;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          stack0xfffffffffffffd20 =
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
          ;
          local_2c8 = (undefined ********)&DAT_002bbf98;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = &local_1e8;
          local_2b8 = (undefined ********)local_2e8;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          auVar15 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                              (plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
      }
      else {
        _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        local_2e8._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_2c8 = (undefined ********)&DAT_002bbf38;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
        auVar15 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                            (plVar1,uVar12,uVar3);
LAB_00206a57:
        if (auVar15._0_8_ != 0) goto LAB_00206a60;
      }
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
                (&local_2c8,lVar2);
      uStack_2d8 = local_2b8;
      local_2e8._0_8_ = local_2c8;
      unique0x10000fbd = pcStack_2c0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1444e8e90e3da7b6E(&local_1d0,local_2e8);
    }
    else {
      piVar11 = (int *)_ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE
                                 (plVar1,uVar12,uVar3);
      if (*piVar11 == 2) {
        if (uVar13 == 0x1000) goto LAB_00206194;
        if (*(char *)(param_4 + 0x48) != '\0') {
          if ((*(byte *)((long)param_2 + 0x8e) == 2) || ((*(byte *)((long)param_2 + 0x8e) & 1) != 0)
             ) {
            _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_2c8 = (undefined ********)&DAT_002bbfb8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          }
          else {
            _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_2c8 = (undefined ********)&DAT_002bbfd8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
            if (*param_2 == 3) goto LAB_00206e4a;
            (**(code **)(*(long *)(param_2 + 6) + 0x20))
                      (&local_2c8,*(undefined8 *)(param_2 + 4),uVar12,uVar3);
            _ZN4core3ptr80drop_in_place_LT_core__result__Result_LT__LP__RP__C_notify__error__Error_GT__GT_17h1955e5315261984fE
                      (&local_2c8);
            _ZN7uu_tail6follow5files12FileHandling6remove17h9a608e9706c93353E
                      (&local_2c8,plVar1,uVar12,uVar3);
            _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__files__PathData_GT_17h0bd94260f77f0a2bE
                      (&local_2c8);
            cVar6 = _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hf3496cc0e002c3ddE
                              (plVar1,param_4);
            if (cVar6 != '\0') {
              _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E
                        (local_2e8);
              local_2b8 = uStack_2d8;
              local_2c8 = (undefined ********)local_2e8._0_8_;
              pcStack_2c0 = stack0xfffffffffffffd20;
              local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
              uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_2c8);
              auVar15._8_8_ =
                   &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
              ;
              auVar15._0_8_ = uVar12;
              goto LAB_00206a60;
            }
          }
        }
      }
      else {
        if (uVar13 == 0x1000) goto LAB_00206574;
        uVar13 = piVar11[0xe] & 0xf000;
        if (((uVar13 == 0x1000) || (uVar13 == 0x8000)) || (uVar13 == 0x2000)) {
          if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 00206d3c to 00206e00 has its CatchHandler @ 00206e68 */
            _local_2e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_2c8 = (undefined ********)&DAT_002bbfb8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_2c8);
          }
          else {
                    /* try { // try from 00206adb to 00206cbe has its CatchHandler @ 00206e68 */
            _ZN7uu_tail6follow5files12FileHandling12reset_reader17h2b8bfb99f1a2f6b2E
                      (plVar1,uVar12,uVar3);
          }
        }
      }
    }
LAB_00206cbf:
    (*(code *)PTR_memcpy_002c2760)(&local_2c8,local_e0,0xb0);
                    /* try { // try from 00206cda to 00206cf0 has its CatchHandler @ 00206e68 */
    _ZN7uu_tail6follow5files12FileHandling15update_metadata17h4aaaeb16ccacaf37E
              (plVar1,uVar12,uVar3,&local_2c8);
  }
                    /* try { // try from 00206cf1 to 00206cfd has its CatchHandler @ 00206e7a */
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
            (local_1b8);
LAB_00206cfe:
  local_1f0[2] = local_1c0;
  *(undefined4 *)local_1f0 = (undefined4)local_1d0;
  *(undefined4 *)((long)local_1f0 + 4) = local_1d0._4_4_;
  *(undefined4 *)(local_1f0 + 1) = (undefined4)uStack_1c8;
  *(undefined4 *)((long)local_1f0 + 0xc) = uStack_1c8._4_4_;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(&local_1e8);
  return;
}