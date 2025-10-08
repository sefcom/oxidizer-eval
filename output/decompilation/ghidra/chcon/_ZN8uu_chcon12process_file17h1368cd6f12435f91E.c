void _ZN8uu_chcon12process_file17h1368cd6f12435f91E
               (int *param_1,long param_2,undefined8 param_3,undefined8 *param_4,int *param_5)

{
  long lVar1;
  long *plVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 **local_1a8;
  undefined *puStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  undefined8 uStack_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_108;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_a8;
  long local_a0;
  undefined local_98 [16];
  undefined local_88 [16];
  undefined8 *local_78;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  
  lVar1 = param_4[1];
  if (lVar1 == 0) {
    uVar9 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f70a8)
                      (&PTR_s_src_uu_chcon_src_chcon_rs_001f0488);
                    /* catch() { ... } // from try @ 00164661 with catch @ 00164d0b */
                    /* try { // try from 00164d0e to 00164db5 has its CatchHandler @ 00164dd3 */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_1b8);
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_78);
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_f8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4c6317eb479ec9ccE
              (CONCAT44(uStack_114,local_118),CONCAT44(uStack_10c,uStack_110));
    _Unwind_Resume(uVar9);
    return;
  }
  lVar8 = _ZN8uu_chcon3fts8EntryRef4path17h98d370586f8004dfE(lVar1);
  if (lVar8 == 0) {
    *param_1 = 0x10;
    *(char **)(param_1 + 2) = "File name validation: changing security context of ";
    param_1[4] = 0x14;
    param_1[5] = 0;
    param_1[6] = 3;
    param_1[7] = 0x14;
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h87c7e3fd647b3672E
            (&local_168,lVar8);
  local_118 = (int)local_168;
  uStack_114 = local_168._4_4_;
  uStack_110 = (int)uStack_160;
  uStack_10c = uStack_160._4_4_;
  local_108 = local_158;
  auVar22 = _ZN8uu_chcon3fts8EntryRef11access_path17h84f48584df271673E(lVar1);
  if (auVar22._0_8_ == 0) {
                    /* try { // try from 00164553 to 0016457a has its CatchHandler @ 00164da1 */
    _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
              (&local_168,"File name validation: changing security context of ",0x14,&local_118,
               0x1400000003);
    auVar22._8_8_ = local_158;
    auVar22._0_8_ = uStack_160;
    local_1b8 = uStack_150;
    uStack_1b0 = uStack_148;
    local_1a8 = (undefined8 **)CONCAT44(iStack_13c,iStack_140);
    puStack_1a0 = (undefined *)CONCAT44(iStack_134,iStack_138);
    uStack_190 = uStack_128;
    if ((int)local_168 != 0x12) {
      *(ulong *)(param_1 + 0xe) = CONCAT44(iStack_12c,local_130);
      *(undefined8 *)(param_1 + 0x10) = uStack_128;
      *(undefined8 ***)(param_1 + 10) = local_1a8;
      *(undefined **)(param_1 + 0xc) = puStack_1a0;
      *(undefined **)(param_1 + 6) = uStack_150;
      *(undefined8 *)(param_1 + 8) = uStack_148;
      *(undefined **)param_1 = local_168;
      *(undefined8 *)(param_1 + 2) = uStack_160;
      *(undefined8 ***)(param_1 + 4) = local_158;
      goto LAB_00164ca4;
    }
  }
  uVar10 = auVar22._8_8_;
  auVar7._8_8_ = uVar10;
  auVar7._0_8_ = local_98._0_8_;
  auVar6._8_8_ = uVar10;
  auVar6._0_8_ = local_98._0_8_;
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = local_98._0_8_;
  auVar4._8_8_ = uVar10;
  auVar4._0_8_ = local_98._0_8_;
  auVar3._8_8_ = uVar10;
  auVar3._0_8_ = local_98._0_8_;
  uVar9 = auVar22._0_8_;
  plVar2 = *(long **)(lVar1 + 0x68);
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 001646d5 to 001646fc has its CatchHandler @ 00164da1 */
    _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
              (&local_168,"Getting meta data",0x11,&local_118,0x1400000003);
    *(undefined8 *)(param_1 + 0x10) = uStack_128;
    iVar12 = (int)local_168;
    iVar13 = local_168._4_4_;
    iVar14 = (int)uStack_160;
    iVar15 = uStack_160._4_4_;
    iVar16 = (int)local_158;
    iVar17 = local_158._4_4_;
    iVar18 = (int)uStack_150;
    iVar19 = uStack_150._4_4_;
    iVar20 = (int)uStack_148;
    iVar21 = uStack_148._4_4_;
    goto LAB_00164c95;
  }
  lVar8 = *plVar2;
  lVar11 = plVar2[1];
  local_f8 = 0x12;
  local_98 = auVar3;
  local_98._8_8_ = uVar10;
  switch(*(undefined2 *)(lVar1 + 0x62)) {
  case 1:
    local_98 = auVar7;
    if (*(char *)(param_2 + 0x7b) != '\0') {
      if (((*param_5 != 1) || (*(long *)(param_5 + 2) != lVar8)) ||
         (*(long *)(param_5 + 4) != lVar11)) goto LAB_00164912;
                    /* try { // try from 00164639 to 0016463d has its CatchHandler @ 00164da6 */
      _ZN8uu_chcon17root_dev_ino_warn17heb2bdc38e2851f11E(CONCAT44(uStack_10c,uStack_110),local_108)
      ;
      _ZN8uu_chcon3fts3FTS3set17h57c16749566a888bE(&local_78,*param_4,lVar1,4);
                    /* try { // try from 00164656 to 00164660 has its CatchHandler @ 00164d18 */
      _ZN8uu_chcon3fts3FTS15read_next_entry17h61830a73507cb09aE(&local_1b8,param_4);
                    /* try { // try from 00164661 to 00164688 has its CatchHandler @ 00164d0b */
      _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
                (&local_168,"Modifying root path",0x13,&local_118,0x100000003);
      *(undefined8 *)(param_1 + 0x10) = uStack_128;
      param_1[0xc] = iStack_138;
      param_1[0xd] = iStack_134;
      param_1[0xe] = local_130;
      param_1[0xf] = iStack_12c;
      param_1[8] = (int)uStack_148;
      param_1[9] = uStack_148._4_4_;
      param_1[10] = iStack_140;
      param_1[0xb] = iStack_13c;
      param_1[4] = (int)local_158;
      param_1[5] = local_158._4_4_;
      param_1[6] = (int)uStack_150;
      param_1[7] = uStack_150._4_4_;
      *param_1 = (int)local_168;
      param_1[1] = local_168._4_4_;
      param_1[2] = (int)uStack_160;
      param_1[3] = uStack_160._4_4_;
                    /* try { // try from 001646bb to 001646c2 has its CatchHandler @ 00164d18 */
      _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                (&local_1b8);
                    /* try { // try from 001646c3 to 001646cf has its CatchHandler @ 00164da6 */
      _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                (&local_78);
LAB_00164918:
                    /* try { // try from 00164918 to 00164924 has its CatchHandler @ 00164da1 */
      _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                (&local_f8);
      goto LAB_00164ca4;
    }
    break;
  case 2:
    if ((*(byte *)(param_2 + 0x7b) < 2) ||
       ((local_98 = auVar5, *(byte *)(param_2 + 0x7b) != 2 &&
        (local_98 = auVar6, *(short *)(lVar1 + 0x60) != 0)))) {
                    /* try { // try from 001648a5 to 001648d1 has its CatchHandler @ 00164da6 */
      _ZN8uu_chcon18emit_cycle_warning17h2458f9364db9f58dE
                (CONCAT44(uStack_10c,uStack_110),local_108);
      _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
                (&local_168,"Reading cyclic directory",0x18,&local_118,0x1500000003);
      *(undefined8 *)(param_1 + 0x10) = uStack_128;
      *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_134,iStack_138);
      *(ulong *)(param_1 + 0xe) = CONCAT44(iStack_12c,local_130);
      *(undefined8 *)(param_1 + 8) = uStack_148;
      *(ulong *)(param_1 + 10) = CONCAT44(iStack_13c,iStack_140);
      *(undefined8 ***)(param_1 + 4) = local_158;
      *(undefined **)(param_1 + 6) = uStack_150;
      *param_1 = (int)local_168;
      param_1[1] = local_168._4_4_;
      param_1[2] = (int)uStack_160;
      param_1[3] = uStack_160._4_4_;
      goto LAB_00164918;
    }
    break;
  case 4:
                    /* try { // try from 00164773 to 00164790 has its CatchHandler @ 00164da6 */
    local_a8 = lVar8;
    local_a0 = lVar11;
    local_98 = auVar22;
    _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
              (&local_168,"Reading directory",0x11,&local_118,
               (ulong)*(uint *)(lVar1 + 0x38) << 0x20 | 2);
    local_178 = uStack_128;
    local_188 = iStack_138;
    iStack_184 = iStack_134;
    iStack_180 = local_130;
    iStack_17c = iStack_12c;
    local_198 = uStack_148;
    uStack_190 = CONCAT44(iStack_13c,iStack_140);
    local_1a8 = local_158;
    puStack_1a0 = uStack_150;
    local_1b8 = local_168;
    uStack_1b0 = uStack_160;
                    /* try { // try from 001647c8 to 001647d4 has its CatchHandler @ 00164d30 */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_f8);
    goto LAB_001649b0;
  case 6:
    local_98 = auVar4;
    if (*(char *)(param_2 + 0x7b) == '\0') {
LAB_00164912:
      *param_1 = 0x12;
      goto LAB_00164918;
    }
    break;
  case 7:
                    /* try { // try from 0016494e to 0016496b has its CatchHandler @ 00164da6 */
    local_a8 = lVar8;
    local_a0 = lVar11;
    local_98 = auVar22;
    _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
              (&local_168,"Accessing",9,&local_118,(ulong)*(uint *)(lVar1 + 0x38) << 0x20 | 2);
    local_178 = uStack_128;
    local_188 = iStack_138;
    iStack_184 = iStack_134;
    iStack_180 = local_130;
    iStack_17c = iStack_12c;
    local_198 = uStack_148;
    uStack_190 = CONCAT44(iStack_13c,iStack_140);
    local_1a8 = local_158;
    puStack_1a0 = uStack_150;
    local_1b8 = local_168;
    uStack_1b0 = uStack_160;
                    /* try { // try from 001649a3 to 001649af has its CatchHandler @ 00164d2e */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_f8);
    goto LAB_001649b0;
  case 10:
    if ((*(short *)(lVar1 + 0x60) == 0) && (*(long *)(lVar1 + 0x18) == 0)) {
      *(undefined8 *)(lVar1 + 0x18) = 1;
      _ZN8uu_chcon3fts3FTS3set17h57c16749566a888bE(&local_168,*param_4,lVar1,1);
      *param_1 = 0x12;
      _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                (&local_168);
      goto LAB_00164918;
    }
                    /* try { // try from 00164811 to 0016482e has its CatchHandler @ 00164da6 */
    local_a8 = lVar8;
    local_a0 = lVar11;
    local_98 = auVar22;
    _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
              (&local_168,"Accessing",9,&local_118,(ulong)*(uint *)(lVar1 + 0x38) << 0x20 | 2);
    local_178 = uStack_128;
    local_188 = iStack_138;
    iStack_184 = iStack_134;
    iStack_180 = local_130;
    iStack_17c = iStack_12c;
    local_198 = uStack_148;
    uStack_190 = CONCAT44(iStack_13c,iStack_140);
    local_1a8 = local_158;
    puStack_1a0 = uStack_150;
    local_1b8 = local_168;
    uStack_1b0 = uStack_160;
                    /* try { // try from 00164866 to 00164872 has its CatchHandler @ 00164d2c */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_f8);
LAB_001649b0:
    local_b8 = local_178;
    local_c8 = CONCAT44(iStack_184,local_188);
    uStack_c0 = CONCAT44(iStack_17c,iStack_180);
    local_d8 = local_198;
    uStack_d0 = uStack_190;
    local_e8 = local_1a8;
    uStack_e0 = puStack_1a0;
    local_f8 = (int)local_1b8;
    iStack_f4 = local_1b8._4_4_;
    iStack_f0 = (int)uStack_1b0;
    iStack_ec = uStack_1b0._4_4_;
    uVar9 = local_98._0_8_;
    lVar11 = local_a0;
    lVar8 = local_a8;
  }
  if (*(short *)(lVar1 + 0x62) == 6 && local_f8 == 0x12) {
    if (((*param_5 == 1) && (*(long *)(param_5 + 2) == lVar8)) && (*(long *)(param_5 + 4) == lVar11)
       ) {
                    /* try { // try from 00164a57 to 00164a83 has its CatchHandler @ 00164da6 */
      _ZN8uu_chcon17root_dev_ino_warn17heb2bdc38e2851f11E(CONCAT44(uStack_10c,uStack_110),local_108)
      ;
      _ZN8uu_chcon6errors5Error8from_io117hfc25099ea69addfbE
                (&local_168,"Modifying root path",0x13,&local_118,0x100000003);
      local_178 = uStack_128;
      local_188 = iStack_138;
      iStack_184 = iStack_134;
      iStack_180 = local_130;
      iStack_17c = iStack_12c;
      local_198 = uStack_148;
      uStack_190 = CONCAT44(iStack_13c,iStack_140);
      local_1a8 = local_158;
      puStack_1a0 = uStack_150;
      local_1b8 = local_168;
      uStack_1b0 = uStack_160;
                    /* try { // try from 00164abb to 00164ac7 has its CatchHandler @ 00164d2a */
      _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
                (&local_f8);
      local_b8 = local_178;
      local_c8 = CONCAT44(iStack_184,local_188);
      uStack_c0 = CONCAT44(iStack_17c,iStack_180);
      local_d8 = local_198;
      uStack_d0 = uStack_190;
      local_e8 = local_1a8;
      uStack_e0 = puStack_1a0;
      local_f8 = (int)local_1b8;
      iStack_f4 = local_1b8._4_4_;
      iStack_f0 = (int)uStack_1b0;
      iStack_ec = uStack_1b0._4_4_;
      goto LAB_00164b12;
    }
LAB_00164b1b:
    if (*(char *)(param_2 + 0x78) != '\0') {
                    /* try { // try from 00164b2a to 00164bec has its CatchHandler @ 00164da6 */
      local_88 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6f18)();
      local_1b8 = (undefined *)0x1;
      uStack_1b0 = CONCAT44(uStack_10c,uStack_110);
      local_1a8 = local_108;
      puStack_1a0 = (undefined *)CONCAT71(puStack_1a0._1_7_,1);
      local_78 = (undefined8 *)local_88;
      local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
      local_60 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6f68
      ;
      local_168 = &DAT_001f0458;
      uStack_160 = 3;
      uStack_148 = 0;
      local_158 = &local_78;
      uStack_150 = (undefined *)0x2;
      local_68 = (undefined *)&local_1b8;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f70a0)(&local_168);
    }
    _ZN8uu_chcon19change_file_context17h4ff94423838786feE
              (&local_168,param_2,param_3,uVar9,local_98._8_8_);
                    /* try { // try from 00164bed to 00164bf9 has its CatchHandler @ 00164d55 */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_f8);
    local_b8 = uStack_128;
    uStack_d0 = CONCAT44(iStack_13c,iStack_140);
    local_c8 = CONCAT44(iStack_134,iStack_138);
    uStack_c0 = CONCAT44(iStack_12c,local_130);
    local_d8 = uStack_148;
    local_e8 = local_158;
    uStack_e0 = uStack_150;
    local_f8 = (int)local_168;
    iStack_f4 = local_168._4_4_;
    iStack_f0 = (int)uStack_160;
    iStack_ec = uStack_160._4_4_;
  }
  else {
LAB_00164b12:
    if (local_f8 == 0x12) goto LAB_00164b1b;
  }
  if (*(char *)(param_2 + 0x7b) == '\0') {
    _ZN8uu_chcon3fts3FTS3set17h57c16749566a888bE(&local_168,*param_4,lVar1,4);
                    /* try { // try from 00164c61 to 00164cf8 has its CatchHandler @ 00164da6 */
    _ZN4core3ptr79drop_in_place_LT_core__result__Result_LT_bool_C_uu_chcon__errors__Error_GT__GT_17h4eb00232c8be16ddE
              (&local_168);
  }
  *(undefined8 *)(param_1 + 0x10) = local_b8;
  iVar12 = local_f8;
  iVar13 = iStack_f4;
  iVar14 = iStack_f0;
  iVar15 = iStack_ec;
  iVar16 = (int)local_e8;
  iVar17 = local_e8._4_4_;
  iVar18 = (int)uStack_e0;
  iVar19 = uStack_e0._4_4_;
  iVar20 = (int)local_d8;
  iVar21 = local_d8._4_4_;
  iStack_140 = (int)uStack_d0;
  iStack_13c = uStack_d0._4_4_;
  iStack_138 = (int)local_c8;
  iStack_134 = local_c8._4_4_;
  local_130 = (int)uStack_c0;
  iStack_12c = uStack_c0._4_4_;
LAB_00164c95:
  param_1[0xc] = iStack_138;
  param_1[0xd] = iStack_134;
  param_1[0xe] = local_130;
  param_1[0xf] = iStack_12c;
  param_1[8] = iVar20;
  param_1[9] = iVar21;
  param_1[10] = iStack_140;
  param_1[0xb] = iStack_13c;
  param_1[4] = iVar16;
  param_1[5] = iVar17;
  param_1[6] = iVar18;
  param_1[7] = iVar19;
  *param_1 = iVar12;
  param_1[1] = iVar13;
  param_1[2] = iVar14;
  param_1[3] = iVar15;
LAB_00164ca4:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4c6317eb479ec9ccE
            (CONCAT44(uStack_114,local_118),CONCAT44(uStack_10c,uStack_110));
  return;
}