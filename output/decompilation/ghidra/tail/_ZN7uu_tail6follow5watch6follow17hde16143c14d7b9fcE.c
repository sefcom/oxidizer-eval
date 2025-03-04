/* WARNING: Removing unreachable block (ram,0x00207944) */
/* WARNING: Removing unreachable block (ram,0x00207952) */

undefined  [16] _ZN7uu_tail6follow5watch6follow17hde16143c14d7b9fcE(int *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 **ppuVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined **unaff_R15;
  undefined auVar19 [16];
  undefined8 **local_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 **local_2b8;
  int *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 **local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined local_270 [8];
  undefined8 **ppuStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 **local_240;
  undefined4 local_238;
  int local_234;
  undefined **local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 **local_1f8;
  undefined8 *local_170;
  code *local_168;
  long local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 **local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 **local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 **local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined local_e0 [56];
  uint local_a8;
  
  piVar1 = param_1 + 0xe;
  local_2b0 = param_1;
                    /* try { // try from 00206ecd to 00206ee0 has its CatchHandler @ 00207919 */
  cVar11 = _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hf3496cc0e002c3ddE(piVar1);
  if ((cVar11 == '\0') ||
     (cVar11 = _ZN7uu_tail6follow5files12FileHandling20only_stdin_remaining17h9831c931e4f5678dE
                         (piVar1), cVar11 != '\0')) {
    iVar13 = local_2b0[0x22];
    cVar11 = *(char *)(param_2 + 0x4c);
    cVar2 = *(char *)(param_2 + 0x4a);
    local_158 = *(undefined8 *)(param_2 + 0x30);
    local_238 = *(undefined4 *)(param_2 + 0x38);
    local_230 = &PTR_DAT_002bc1b8;
    piVar18 = local_2b0;
    local_234 = iVar13;
    local_160 = param_2;
    if (cVar11 == '\x02') goto LAB_00206f60;
LAB_00206f47:
                    /* try { // try from 00206f4b to 00206f57 has its CatchHandler @ 0020791b */
    if ((iVar13 == 0) ||
       (cVar12 = _ZN7uu_tail8platform4unix14ProcessChecker7is_dead17he1a98e91c2c8dfd9E(&local_234),
       cVar12 == '\0')) {
LAB_00206f60:
      if (((*(byte *)((long)piVar18 + 0x8e) & 1) != 0) && (*(char *)(piVar18 + 0x23) != '\0')) {
        local_2c8 = *(undefined8 ***)(piVar18 + 10);
        ppuStack_2c0 = local_2c8 + *(long *)(piVar18 + 0xc) * 3;
        while (lVar15 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h214d277e2b68ee77E
                                  (&local_2c8), piVar18 = local_2b0, lVar15 != 0) {
          uVar17 = *(undefined8 *)(lVar15 + 8);
          uVar3 = *(undefined8 *)(lVar15 + 0x10);
          _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_228,uVar17,uVar3);
          if ((int)local_228 == 2) {
                    /* try { // try from 00206fa0 to 002071b1 has its CatchHandler @ 00207972 */
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                      (&local_228);
          }
          else {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                      (&local_228);
            unaff_R15 = (undefined **)
                        _ZN7uu_tail6follow5files12FileHandling3get17ha1f26ea8b12ea1ffE
                                  (piVar1,uVar17,uVar3);
            _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_228,uVar17,uVar3);
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4cbb2e8f2fd89391E(local_e0,&local_228);
            uVar14 = local_a8 & 0xf000;
            if ((((uVar14 == 0x1000) || (uVar14 == 0x8000)) || (uVar14 == 0x2000)) &&
               (((undefined8 **)unaff_R15)[0x19] == (undefined8 *)0x0)) {
              _local_270 = _ZN6uucore9util_name17h60d842bf27b05e82E();
              local_2a8 = (undefined **)local_270;
              uStack_2a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE
              ;
              local_228 = (undefined **)&DAT_002bbe20;
              uStack_220 = (undefined8 **)0x2;
              local_208 = 0;
              local_218 = (undefined8 **)&local_2a8;
              uStack_210 = 1;
              _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_228);
              ppuStack_268 = (undefined8 **)((undefined8 **)unaff_R15)[0x17];
              uStack_260 = *(undefined4 *)((undefined8 **)unaff_R15 + 0x18);
              uStack_25c = *(undefined4 *)((long)unaff_R15 + 0xc4);
              local_270 = (undefined  [8])0x0;
              uStack_258 = CONCAT31(uStack_258._1_3_,1);
              local_2a8 = (undefined **)local_270;
              uStack_2a0 = 
              _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
              ;
              local_228 = (undefined **)&DAT_002bbf58;
              uStack_220 = (undefined8 **)0x2;
              local_208 = 0;
              local_218 = (undefined8 **)&local_2a8;
              uStack_210 = 1;
              _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_228);
              _ZN7uu_tail6follow5files12FileHandling15update_metadata17h4aaaeb16ccacaf37E
                        (piVar1,uVar17,uVar3,local_e0);
              auVar19 = _ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
                                  (piVar1,uVar17,uVar3);
              if (auVar19._0_8_ != 0) goto LAB_00207662;
              _ZN7uu_tail6follow5files12FileHandling9tail_file17h8ac57e4964e40afaE
                        (&local_228,piVar1,uVar17,uVar3,cVar2 != '\0');
              auVar19._8_8_ = uStack_220;
              auVar19._0_8_ = local_228;
              if ((undefined8 **)local_228 != (undefined8 **)0x0) goto LAB_00207662;
              if (*local_2b0 == 3) goto LAB_00207848;
              auVar19 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17h1fadf41504d6de8eE
                                  (*(undefined8 *)(local_2b0 + 4),*(undefined8 *)(local_2b0 + 6),
                                   uVar17,uVar3);
              if (auVar19._0_8_ != 0) goto LAB_00207662;
            }
          }
        }
      }
      if (*piVar18 == 3) {
        local_230 = &PTR_DAT_002bc1d0;
LAB_00207848:
                    /* try { // try from 00207848 to 00207855 has its CatchHandler @ 0020791d */
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(local_230);
LAB_00207856:
                    /* try { // try from 00207856 to 00207862 has its CatchHandler @ 00207888 */
        uVar17 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002bc1e8);
                    /* catch() { ... } // from try @ 002075f2 with catch @ 00207863 */
                    /* try { // try from 00207866 to 0020797e has its CatchHandler @ 00207987 */
        _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17h254f5de2e736f707E(&local_228);
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                  (&local_2c8);
        if (local_270 == (undefined  [8])0x6) {
          _ZN4core3ptr41drop_in_place_LT_notify__event__Event_GT_17hc14176a2572b9d6eE(&ppuStack_268)
          ;
        }
        _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17h60ddef1d36aee139E
                  (local_2b0);
        auVar19 = _Unwind_Resume(uVar17);
        return auVar19;
      }
                    /* try { // try from 002071e0 to 002071fb has its CatchHandler @ 0020791b */
      _ZN3std4sync4mpmc17Receiver_LT_T_GT_12recv_timeout17h1f975a6ba50f2813E
                (local_270,piVar18,local_158,local_238);
      local_2c8 = (undefined8 **)0x0;
      ppuStack_2c0 = (undefined8 **)&DAT_00000008;
      local_2b8 = (undefined8 **)0x0;
      switch(local_270) {
      case (undefined  [8])0x1:
        cVar12 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(ppuStack_268);
        if (cVar12 != '\0') goto switchD_00207237_caseD_2;
        local_298 = local_240;
        local_2a8 = (undefined **)CONCAT44(uStack_24c,uStack_250);
        uStack_2a0 = (code *)CONCAT44(uStack_244,local_248);
        if (local_240 != (undefined8 **)0x0) {
          puVar4 = *(undefined8 **)((long)uStack_2a0 + 8);
          unaff_R15 = *(undefined ***)((long)uStack_2a0 + 0x10);
                    /* try { // try from 00207276 to 002072b0 has its CatchHandler @ 002078d4 */
          cVar12 = _ZN7uu_tail6follow5files12FileHandling12contains_key17hb9b0dd7b277f1857E
                             (piVar1,puVar4,unaff_R15);
          if (cVar12 != '\0') {
            if (*piVar18 == 3) goto LAB_00207856;
            (**(code **)(*(long *)(piVar18 + 6) + 0x20))
                      (&local_228,*(undefined8 *)(piVar18 + 4),puVar4,unaff_R15);
            _ZN4core3ptr80drop_in_place_LT_core__result__Result_LT__LP__RP__C_notify__error__Error_GT__GT_17h1955e5315261984fE
                      (&local_228);
          }
        }
                    /* try { // try from 002072b6 to 002072bf has its CatchHandler @ 00207917 */
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                  (&local_2a8);
        bVar6 = false;
LAB_002073a0:
        if ((cVar11 != '\x02') && (*(char *)((long)piVar18 + 0x8d) != '\0')) {
          _ZN7uu_tail6follow5files12FileHandling4keys17h4394a3d4fbf32fd4E(&local_228,piVar1);
          local_e8 = local_208;
          local_f8 = (undefined4)local_218;
          uStack_f4 = local_218._4_4_;
          uStack_f0 = (undefined4)uStack_210;
          uStack_ec = uStack_210._4_4_;
          local_108 = (int)local_228;
          uStack_104 = local_228._4_4_;
          uStack_100 = (undefined4)uStack_220;
          uStack_fc = uStack_220._4_4_;
          _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17he64bcd77bd860359E
                    (&local_228,&local_108);
                    /* try { // try from 002073fd to 00207406 has its CatchHandler @ 002078eb */
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                    (&local_2c8);
          local_2b8 = local_218;
          local_2c8 = (undefined8 **)local_228;
          ppuStack_2c0 = uStack_220;
        }
        uStack_2a0 = (code *)(ppuStack_2c0 + (long)local_2b8 * 3);
        local_2a8 = (undefined **)ppuStack_2c0;
        while (lVar15 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h214d277e2b68ee77E
                                  (&local_2a8), lVar15 != 0) {
                    /* try { // try from 00207463 to 0020746d has its CatchHandler @ 0020791f */
          _ZN7uu_tail6follow5files12FileHandling9tail_file17h8ac57e4964e40afaE
                    (&local_228,piVar1,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),
                     cVar2 != '\0');
          if ((undefined8 **)local_228 != (undefined8 **)0x0) {
            bVar5 = false;
            ppuVar16 = (undefined8 **)local_228;
            unaff_R15 = (undefined **)uStack_220;
            goto LAB_002074cc;
          }
        }
                    /* try { // try from 00207480 to 00207489 has its CatchHandler @ 0020790a */
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                  (&local_2c8);
        piVar18 = local_2b0;
        if ((~local_270._0_4_ & 6) != 0) {
                    /* try { // try from 00207499 to 002074a2 has its CatchHandler @ 0020791b */
          _ZN4core3ptr45drop_in_place_LT_notify__error__ErrorKind_GT_17hced92ed8b1b7bc68E(local_270)
          ;
        }
        iVar13 = piVar18[0x22];
        if (cVar11 != '\x02') goto LAB_00206f47;
        goto LAB_00206f60;
      default:
switchD_00207237_caseD_2:
        local_1f8 = local_240;
        local_208 = CONCAT44(uStack_24c,uStack_250);
        uStack_200 = local_248;
        uStack_1fc = uStack_244;
        local_218 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
        uStack_210 = CONCAT44(uStack_254,uStack_258);
        local_228 = (undefined **)local_270;
        uStack_220 = ppuStack_268;
        local_168 = 
        _ZN59__LT_notify__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hd94546b42760b6fdE;
        local_2a8 = &PTR_DAT_002bc180;
        uStack_2a0 = (code *)0x1;
        local_288 = 0;
        local_298 = &local_170;
        local_290 = 1;
                    /* try { // try from 002075f2 to 0020762f has its CatchHandler @ 00207863 */
        local_170 = &local_228;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_138,&local_2a8);
        local_290 = CONCAT44(local_290._4_4_,1);
        local_2a8 = (undefined **)CONCAT44(uStack_134,local_138);
        uStack_2a0 = (code *)CONCAT44(uStack_12c,uStack_130);
        local_298 = local_128;
        ppuVar16 = (undefined8 **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_2a8);
                    /* try { // try from 00207639 to 00207647 has its CatchHandler @ 00207880 */
        _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17h254f5de2e736f707E(&local_228);
        bVar5 = true;
        bVar6 = false;
        unaff_R15 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
        ;
        break;
      case (undefined  [8])0x5:
        local_2a8 = &PTR_DAT_002bbeb0;
        uStack_2a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_228 = (undefined **)&DAT_002bc160;
        uStack_220 = (undefined8 **)0x2;
        local_208 = 0;
        local_218 = (undefined8 **)&local_2a8;
        uStack_210 = 1;
                    /* try { // try from 002076df to 00207829 has its CatchHandler @ 00207880 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_150,&local_228);
        uStack_210 = CONCAT44(uStack_210._4_4_,1);
        local_228 = (undefined **)CONCAT44(uStack_14c,local_150);
        uStack_220 = (undefined8 **)CONCAT44(uStack_144,uStack_148);
        local_218 = local_140;
        ppuVar16 = (undefined8 **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_228);
        goto LAB_002077fc;
      case (undefined  [8])0x6:
        local_218 = (undefined8 **)CONCAT44(uStack_254,uStack_258);
        uStack_210 = CONCAT44(uStack_24c,uStack_250);
        local_208 = CONCAT44(uStack_244,local_248);
        local_228 = (undefined **)ppuStack_268;
        uStack_220 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
                    /* try { // try from 00207313 to 00207336 has its CatchHandler @ 002078bb */
        if ((local_218 == (undefined8 **)0x0) ||
           (cVar12 = _ZN7uu_tail6follow5files12FileHandling12contains_key17hb9b0dd7b277f1857E
                               (piVar1,uStack_220[1],uStack_220[2]), cVar12 == '\0')) {
LAB_00207377:
                    /* try { // try from 0020737b to 002073fc has its CatchHandler @ 00207917 */
          _ZN4core3ptr41drop_in_place_LT_notify__event__Event_GT_17hc14176a2572b9d6eE(&local_228);
          bVar6 = true;
          goto LAB_002073a0;
        }
        _ZN7uu_tail6follow5watch8Observer12handle_event17hf377c643c1a778ceE
                  (&local_2a8,piVar18,&local_228,local_160);
        unaff_R15 = (undefined **)local_298;
        ppuVar16 = (undefined8 **)uStack_2a0;
        ppuVar10 = (undefined8 **)local_2a8;
        if ((undefined8 **)local_2a8 != (undefined8 **)0x8000000000000000) {
                    /* try { // try from 00207359 to 00207362 has its CatchHandler @ 0020788a */
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                    (&local_2c8);
          local_2c8 = ppuVar10;
          ppuStack_2c0 = ppuVar16;
          local_2b8 = (undefined8 **)unaff_R15;
          piVar18 = local_2b0;
          goto LAB_00207377;
        }
        _ZN4core3ptr41drop_in_place_LT_notify__event__Event_GT_17hc14176a2572b9d6eE(&local_228);
        bVar5 = false;
        bVar6 = true;
        break;
      case (undefined  [8])0x7:
        bVar6 = true;
        if ((char)ppuStack_268 == '\0') goto LAB_002073a0;
        local_170 = (undefined8 *)CONCAT71(local_170._1_7_,1);
        local_2a8 = (undefined **)&local_170;
        uStack_2a0 = 
        _ZN72__LT_std__sync__mpsc__RecvTimeoutError_u20_as_u20_core__fmt__Display_GT_3fmt17h0f095b628b6fcfe0E
        ;
        local_228 = &PTR_DAT_002bc190;
        uStack_220 = (undefined8 **)0x1;
        local_208 = 0;
        local_218 = (undefined8 **)&local_2a8;
        uStack_210 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_120,&local_228);
        uStack_210 = CONCAT44(uStack_210._4_4_,1);
        local_228 = (undefined **)CONCAT44(uStack_11c,local_120);
        uStack_220 = (undefined8 **)CONCAT44(uStack_114,uStack_118);
        local_218 = local_110;
        ppuVar16 = (undefined8 **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_228);
LAB_002077fc:
        unaff_R15 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
        ;
        bVar5 = false;
        bVar6 = true;
      }
LAB_002074cc:
                    /* try { // try from 002074cc to 002074d5 has its CatchHandler @ 00207912 */
      auVar8._8_8_ = unaff_R15;
      auVar8._0_8_ = ppuVar16;
      auVar7._8_8_ = unaff_R15;
      auVar7._0_8_ = ppuVar16;
      auVar19._8_8_ = unaff_R15;
      auVar19._0_8_ = ppuVar16;
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                (&local_2c8);
      if ((~local_270._0_4_ & 6) != 0) {
        if (!bVar5) {
                    /* try { // try from 002074e9 to 002074f2 has its CatchHandler @ 0020789e */
          _ZN4core3ptr45drop_in_place_LT_notify__error__ErrorKind_GT_17hced92ed8b1b7bc68E(local_270)
          ;
        }
        auVar19 = auVar7;
        if (bVar6) {
                    /* try { // try from 002074fb to 00207507 has its CatchHandler @ 0020791d */
          _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h4ace78a7ba310efcE
                    (&uStack_250);
          auVar19 = auVar8;
        }
      }
      goto LAB_00207662;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = unaff_R15;
    auVar19 = auVar9 << 0x40;
  }
  else {
                    /* try { // try from 0020750d to 00207548 has its CatchHandler @ 00207919 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E(local_270);
    local_218 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
    local_228 = (undefined **)local_270;
    uStack_220 = ppuStack_268;
    uStack_210 = CONCAT44(uStack_210._4_4_,1);
    uVar17 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_228);
    auVar19._8_8_ =
         &
         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
    ;
    auVar19._0_8_ = uVar17;
  }
LAB_00207662:
  _ZN4core3ptr53drop_in_place_LT_uu_tail__follow__watch__Observer_GT_17h60ddef1d36aee139E(local_2b0)
  ;
  return auVar19;
}