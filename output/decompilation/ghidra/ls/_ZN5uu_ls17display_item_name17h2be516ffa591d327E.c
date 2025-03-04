void _ZN5uu_ls17display_item_name17h2be516ffa591d327E
               (undefined4 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 *param_6,undefined8 param_7,long param_8,long param_9)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 **local_2e8;
  undefined8 *local_2e0;
  code *local_2d8;
  undefined8 *local_2d0;
  code *local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 **local_298;
  code *pcStack_290;
  undefined8 **local_288;
  undefined local_278 [16];
  undefined8 **local_268;
  undefined8 local_260;
  undefined4 *local_258;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 **local_238;
  code *local_230;
  undefined8 local_228;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 **local_158;
  code *pcStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined local_40;
  
  lVar1 = param_3 + 0xf5;
                    /* try { // try from 0022c143 to 0022c150 has its CatchHandler @ 0022ca53 */
  local_2c0 = param_6;
  local_260 = param_5;
  local_258 = param_1;
  local_250 = param_4;
  _ZN6uucore8features13quoting_style11escape_name17ha9b5831150e16363E
            (&local_2f8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),lVar1);
  if (*(char *)(param_3 + 0xef) != '\0') {
                    /* try { // try from 0022c16a to 0022c179 has its CatchHandler @ 0022ca58 */
    _ZN5uu_ls16create_hyperlink17h72b30fed8b305b42E
              (&local_168,CONCAT44(uStack_2ec,uStack_2f0),local_2e8,param_2);
                    /* try { // try from 0022c17a to 0022c183 has its CatchHandler @ 0022ca2e */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2f8);
    local_2e8 = local_158;
    local_2f8._0_4_ = (undefined4)local_168;
    local_2f8._4_4_ = local_168._4_4_;
    uStack_2f0 = (undefined4)uStack_160;
    uStack_2ec = uStack_160._4_4_;
  }
  if (*(char *)(param_8 + 0x1d) != '\x02') {
                    /* try { // try from 0022c1df to 0022c205 has its CatchHandler @ 0022ca58 */
    _ZN5uu_ls6colors10color_name17hd87a58ac50dac0efE
              (&local_168,CONCAT44(uStack_2ec,uStack_2f0),local_2e8,param_2,param_8,param_7,0,
               (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) <
               (undefined *)(param_9 + (long)local_2e8) &&
               (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) != (undefined *)0x0);
                    /* try { // try from 0022c206 to 0022c20f has its CatchHandler @ 0022ca2c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2f8);
    local_2e8 = local_158;
    local_2f8._0_4_ = (undefined4)local_168;
    local_2f8._4_4_ = local_168._4_4_;
    uStack_2f0 = (undefined4)uStack_160;
    uStack_2ec = uStack_160._4_4_;
  }
  cVar2 = *(char *)(param_3 + 0xf8);
  lVar3 = local_2c0[2];
  bVar4 = lVar3 != 0;
  bVar5 = cVar2 != '\x01';
  if (bVar4 && bVar5) {
    local_158 = (undefined8 **)local_2c0[2];
    local_168 = (undefined8 **)*local_2c0;
    uStack_160 = (code *)local_2c0[1];
                    /* try { // try from 0022c27a to 0022c28e has its CatchHandler @ 0022ca58 */
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h177306e76d9aa6a7E
              (&local_248,&local_168,CONCAT44(uStack_2ec,uStack_2f0));
                    /* try { // try from 0022c28f to 0022c298 has its CatchHandler @ 0022ca05 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2f8);
    local_2e8 = local_238;
    local_2f8._0_4_ = (int)local_248;
    local_2f8._4_4_ = local_248._4_4_;
    uStack_2f0 = (undefined4)uStack_240;
    uStack_2ec = uStack_240._4_4_;
  }
  cVar6 = *(char *)(param_3 + 0xf4);
  if (cVar6 == '\0') goto LAB_0022c301;
                    /* try { // try from 0022c2c6 to 0022c372 has its CatchHandler @ 0022ca58 */
  iVar7 = _ZN5uu_ls13classify_file17h531def787e741febE(param_2,param_7);
  if (cVar6 == '\x03') {
LAB_0022c2e7:
    if (iVar7 != 0x110000) {
LAB_0022c2f5:
      _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_2f8,iVar7);
    }
  }
  else if (cVar6 == '\x02') {
    if (iVar7 != 0x2a) goto LAB_0022c2e7;
  }
  else if (iVar7 == 0x2f) goto LAB_0022c2f5;
LAB_0022c301:
  if (cVar2 != '\x01') goto LAB_0022c7da;
  lVar8 = _ZN5uu_ls8PathData9file_type17h128ed7d98b354477E(param_2,param_7);
  if (lVar8 == 0) goto LAB_0022c7da;
  puVar9 = (uint *)_ZN5uu_ls8PathData9file_type17h128ed7d98b354477E(param_2,param_7);
  auVar11._8_8_ = local_278._8_8_;
  auVar11._0_8_ = local_278._0_8_;
  if (puVar9 == (uint *)0x0) {
                    /* try { // try from 0022c91a to 0022c926 has its CatchHandler @ 0022ca58 */
    uVar10 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_003129b8);
                    /* catch() { ... } // from try @ 0022c6e3 with catch @ 0022c927 */
                    /* try { // try from 0022c92a to 0022ca75 has its CatchHandler @ 0022ca7e */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h950c753f5d689b41E(&local_248)
    ;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h585d8b757a674aeaE(&local_2e0);
    _ZN4core3ptr36drop_in_place_LT_uu_ls__PathData_GT_17h882b87545de6c6bdE(&local_168);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h585d8b757a674aeaE(&local_2b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2f8);
    if (!bVar4 || !bVar5) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_2c0);
    }
    _Unwind_Resume(uVar10);
    return;
  }
  if (((*puVar9 & 0xf000) != 0xa000) || (local_278 = auVar11, *(char *)(param_2 + 0x128) != '\0'))
  goto LAB_0022c7da;
  _ZN3std2fs9read_link17hbe5657d82156963aE
            (&local_198,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  if (CONCAT44(uStack_194,local_198) == -0x8000000000000000) {
                    /* try { // try from 0022c39c to 0022c3a8 has its CatchHandler @ 0022c98a */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
              (&local_248,param_2 + 0x18);
    local_148 = local_238;
    local_158 = local_248;
    pcStack_150 = uStack_240;
    local_168 = (undefined8 **)CONCAT62(local_168._2_6_,2);
    uStack_160 = (code *)CONCAT44(uStack_18c,uStack_190);
                    /* try { // try from 0022c3db to 0022c47b has its CatchHandler @ 0022c9c2 */
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
    local_278 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_2e0 = (undefined8 *)local_278;
    local_2d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
    local_2d0 = &local_168;
    local_2c8 = _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE;
    local_248 = (undefined8 **)&DAT_00312588;
    uStack_240 = (code *)0x3;
    local_228 = 0;
    local_238 = &local_2e0;
    local_230 = (code *)0x2;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_248);
                    /* try { // try from 0022c47c to 0022c488 has its CatchHandler @ 0022ca58 */
    _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(&local_168);
    goto LAB_0022c7da;
  }
  local_2a8 = local_188;
  local_2b8 = local_198;
  uStack_2b4 = uStack_194;
  uStack_2b0 = uStack_190;
  uStack_2ac = uStack_18c;
                    /* try { // try from 0022c4a8 to 0022c4e6 has its CatchHandler @ 0022c9b0 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17ha1fae1b53678c561E(&local_2f8,&DAT_00123fd0,4);
  if (*(char *)(param_8 + 0x1d) == '\x02') {
    _ZN6uucore8features13quoting_style11escape_name17ha9b5831150e16363E
              (&local_168,CONCAT44(uStack_2ac,uStack_2b0),local_2a8,lVar1);
    uVar10 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h6c1fcdef0407b044E
                       (uStack_160,(code *)((long)local_158 + (long)uStack_160));
                    /* try { // try from 0022c4ff to 0022c50b has its CatchHandler @ 0022c957 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17ha1fae1b53678c561E(&local_2f8,uVar10);
                    /* try { // try from 0022c50c to 0022c52f has its CatchHandler @ 0022c9b0 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_168);
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
              (&local_168,&local_2b8);
    local_288 = local_158;
    local_298 = local_168;
    pcStack_290 = uStack_160;
                    /* try { // try from 0022c557 to 0022c56e has its CatchHandler @ 0022c969 */
    cVar6 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E
                      (CONCAT44(uStack_2ac,uStack_2b0),local_2a8);
    if (cVar6 == '\0') {
      auVar11 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE
                          (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      if (auVar11._0_8_ != 0) {
        local_158 = local_288;
        local_168 = local_298;
        uStack_160 = pcStack_290;
                    /* try { // try from 0022c591 to 0022c632 has its CatchHandler @ 0022c99c */
        _ZN3std4path4Path4join17hd038e45245e60e36E
                  (&local_248,auVar11._0_8_,auVar11._8_8_,&local_168);
        local_298 = local_248;
        pcStack_290 = uStack_240;
        local_288 = local_238;
      }
    }
    local_268 = local_288;
    local_278._0_8_ = local_298;
    local_278._8_8_ = pcStack_290;
    local_248 = (undefined8 **)0x0;
    local_2e0 = (undefined8 *)0x8000000000000000;
    _ZN5uu_ls8PathData3new17ha3e1f49dfc1f89b1E
              (&local_168,local_278,&local_248,&local_2e0,*(undefined *)(param_3 + 0xeb),
               *(undefined *)(param_3 + 0xf2),0);
                    /* try { // try from 0022c633 to 0022c6b2 has its CatchHandler @ 0022c99e */
    lVar8 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_2,param_7);
    if (lVar8 == 0) {
      _ZN5uu_ls27get_metadata_with_deref_opt17h471baa3ff4b7ae17E
                (&local_248,local_148,local_140,local_40);
      if ((int)local_248 != 2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
                  (&local_248);
        goto LAB_0022c719;
      }
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
                (&local_248);
      _ZN3std2fs9read_link17hbe5657d82156963aE
                (&local_248,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h25f855f03e13c7a6E(&local_2e0,&local_248);
                    /* try { // try from 0022c6bd to 0022c6ca has its CatchHandler @ 0022c939 */
      _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
                (&local_248,local_2d8,local_2d0);
      uVar10 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h6c1fcdef0407b044E
                         (uStack_240,(code *)((long)local_238 + (long)uStack_240));
                    /* try { // try from 0022c6e3 to 0022c6ef has its CatchHandler @ 0022c927 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17ha1fae1b53678c561E(&local_2f8,uVar10);
                    /* try { // try from 0022c6f0 to 0022c6fc has its CatchHandler @ 0022c939 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h950c753f5d689b41E
                (&local_248);
                    /* try { // try from 0022c6fd to 0022c733 has its CatchHandler @ 0022c99e */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h585d8b757a674aeaE(&local_2e0);
    }
    else {
LAB_0022c719:
      _ZN6uucore8features13quoting_style11escape_name17ha9b5831150e16363E
                (&local_248,CONCAT44(uStack_2ac,uStack_2b0),local_2a8,lVar1);
                    /* try { // try from 0022c766 to 0022c78c has its CatchHandler @ 0022c978 */
      _ZN5uu_ls6colors10color_name17hd87a58ac50dac0efE
                (&local_2e0,uStack_240,local_238,param_2,param_8,param_7,&local_168,
                 (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) <
                 (undefined *)(param_9 + (long)local_2e8) &&
                 (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) != (undefined *)0x0);
      uVar10 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h6c1fcdef0407b044E
                         (local_2d8,(code *)((long)local_2d0 + (long)local_2d8));
                    /* try { // try from 0022c79f to 0022c7ab has its CatchHandler @ 0022c948 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17ha1fae1b53678c561E(&local_2f8,uVar10);
                    /* try { // try from 0022c7ac to 0022c7b5 has its CatchHandler @ 0022c978 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2e0);
                    /* try { // try from 0022c7b6 to 0022c7c2 has its CatchHandler @ 0022c99e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_248);
    }
                    /* try { // try from 0022c7c3 to 0022c7cf has its CatchHandler @ 0022c99c */
    _ZN4core3ptr36drop_in_place_LT_uu_ls__PathData_GT_17h882b87545de6c6bdE(&local_168);
  }
                    /* try { // try from 0022c7d0 to 0022c829 has its CatchHandler @ 0022ca58 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h585d8b757a674aeaE(&local_2b8);
LAB_0022c7da:
  if ((local_250 == 1) && (*(char *)(param_3 + 0xeb) != '\0')) {
    if (cVar2 == '\x04') {
      _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                (&local_2e0,param_2 + 0x30);
    }
    else {
      _ZN5uu_ls8pad_left17h1d7ef6cb0cce13f7E
                (&local_2e0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                 local_260);
    }
    local_248 = &local_2e0;
    uStack_240 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_238 = (undefined8 **)&local_2f8;
    local_230 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_168 = (undefined8 **)&DAT_003125e8;
    uStack_160 = (code *)0x2;
    local_148 = (undefined8 **)0x0;
    local_158 = (undefined8 **)&local_248;
    pcStack_150 = (code *)0x2;
                    /* try { // try from 0022c89e to 0022c8b2 has its CatchHandler @ 0022c9f6 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h7fca96e7ce97ddb7E(&local_180,&local_168);
                    /* try { // try from 0022c8b3 to 0022c8bc has its CatchHandler @ 0022c9d7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2f8);
    local_2e8 = local_170;
    local_2f8._0_4_ = local_180;
    local_2f8._4_4_ = uStack_17c;
    uStack_2f0 = uStack_178;
    uStack_2ec = uStack_174;
                    /* try { // try from 0022c8d7 to 0022c8e0 has its CatchHandler @ 0022ca58 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_2e0);
  }
  *(undefined8 ***)(local_258 + 4) = local_2e8;
  *local_258 = (undefined4)local_2f8;
  local_258[1] = local_2f8._4_4_;
  local_258[2] = uStack_2f0;
  local_258[3] = uStack_2ec;
  if (lVar3 == 0 || cVar2 == '\x01') {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_2c0);
  }
  return;
}