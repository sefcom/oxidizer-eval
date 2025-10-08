long _ZN2fd6output21print_entry_colorized17hba02dea0711b7802E
               (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte extraout_DL;
  undefined *puVar8;
  undefined8 extraout_RDX;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  long unaff_R12;
  long lVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined *local_148;
  byte bStack_140;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  undefined7 uStack_137;
  undefined8 local_130;
  ulong local_118;
  byte local_110;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined *local_f8;
  undefined auStack_f0 [16];
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined local_c8 [8];
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_78 [16];
  undefined *local_68;
  undefined *local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined local_48 [16];
  
  local_e0 = param_3;
  local_d8 = param_1;
  local_d0 = param_4;
  auVar16 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE
                      (param_2,*(undefined *)(param_3 + 0x1e7));
  ppuVar11 = auVar16._0_8_;
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
            (local_c8,ppuVar11);
                    /* try { // try from 002f6d19 to 002f6d39 has its CatchHandler @ 002f720f */
  lVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00540960)
                    (ppuVar11,auVar16._8_8_);
  if (lVar4 == 0) {
LAB_002f6e8e:
    uVar10 = SUB84(ppuVar11,0);
    lVar4 = unaff_R12;
    unaff_R12 = 0;
  }
  else {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
              (&local_148,lVar4);
    unaff_R12 = CONCAT71(uStack_137,uStack_13b._3_1_);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E(&local_148)
    ;
    lVar4 = local_b8;
    uVar6 = local_c0;
    auVar16 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (unaff_R12,local_c0,local_b8);
    puVar5 = auVar16._0_8_;
    if (puVar5 == (undefined *)0x0) {
      ppuVar11 = &PTR_s_src_output_rs_00502540;
      lVar13 = lVar4;
      goto LAB_002f71aa;
    }
    puVar8 = puVar5 + auVar16._8_8_;
    bStack_140 = (byte)puVar8;
    uStack_13f = (undefined4)((ulong)puVar8 >> 8);
    uStack_13b._0_3_ = (undefined3)((ulong)puVar8 >> 0x28);
    local_148 = puVar5;
    bVar3 = _ZN4core3str11validations15next_code_point17h1fc26b09b7240c4bE(&local_148);
    uVar9 = extraout_RDX;
    lVar13 = unaff_R12;
    if (((int)extraout_RDX != 0x110000 & bVar3) == 1) {
      while (ppuVar11 = &local_148, (int)uVar9 == 0x2f) {
        lVar13 = lVar13 + 1;
        auVar16 = _ZN4core3str11validations15next_code_point17h1fc26b09b7240c4bE(&local_148);
        uVar9 = auVar16._8_8_;
        ppuVar11 = &local_148;
        if (((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
           (ppuVar11 = &local_148, auVar16._8_4_ == 0x110000)) break;
      }
    }
    if (lVar13 == 0) goto LAB_002f6e8e;
    auVar16 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (lVar13,uVar6,lVar4);
    if (auVar16._0_8_ == 0) {
      ppuVar11 = &PTR_s_src_output_rs_00502558;
      unaff_R12 = 0;
      goto LAB_002f71aa;
    }
    local_f8 = &DAT_8000000000000000;
    lVar4 = local_e0;
    if (*(long *)(local_e0 + 0x168) != -0x8000000000000000) {
      lVar4 = *(long *)(local_e0 + 0x170);
      auStack_f0 = auVar16;
                    /* try { // try from 002f6e1b to 002f6e25 has its CatchHandler @ 002f71ed */
      _ZN2fd6output22replace_path_separator17h23f8702077a731dcE
                (&local_148,auVar16._0_8_,auVar16._8_8_,lVar4,*(undefined8 *)(local_e0 + 0x178));
                    /* try { // try from 002f6e26 to 002f6e2f has its CatchHandler @ 002f71be */
      _ZN5alloc6borrow12Cow_LT_B_GT_6to_mut17he3d567039a061c09E(&local_f8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(&local_f8);
      auVar16._9_7_ = uStack_137;
      auVar16[8] = uStack_13b._3_1_;
      auVar16._1_4_ = uStack_13f;
      auVar16[0] = bStack_140;
      auVar16._5_3_ = (undefined3)uStack_13b;
      local_f8 = local_148;
    }
                    /* try { // try from 002f6e4d to 002f6e76 has its CatchHandler @ 002f71ed */
    uVar12 = (undefined4)lVar4;
    uVar10 = 2;
    auStack_f0 = auVar16;
    lVar4 = (*(code *)PTR__ZN8lscolors8LsColors19style_for_indicator17hc2793129675cbe36E_00540828)
                      (local_d0);
    if (lVar4 == 0) {
      local_48 = ZEXT416(2);
      local_10f = 0;
      local_110 = extraout_DL;
    }
    else {
      (*(code *)PTR__ZN8lscolors5style5Style21to_nu_ansi_term_style17h4f37f75a73819d26E_00540978)
                (&local_148);
      local_48._8_8_ = 0;
      local_48._0_8_ = local_148;
      uVar12 = uStack_13b;
      local_110 = bStack_140;
      local_10f = uStack_13f;
    }
    bVar14 = local_48[0] == '\x02';
    local_10b = uVar12;
    if (bVar14) {
      local_10b = 0x15;
      local_10f = 0x15;
      local_110 = 0;
    }
    uStack_137 = auStack_f0._9_7_;
    auVar16 = pshuflw(ZEXT216(CONCAT11(bVar14,bVar14)),ZEXT216(CONCAT11(bVar14,bVar14)),0);
    auVar16 = psllw(auVar16,7);
    auVar16 = auVar16 & _DAT_00170a80;
    local_148 = local_f8;
    bStack_140 = auStack_f0[0];
    uStack_13f = auStack_f0._1_4_;
    uStack_13b = auStack_f0._5_4_;
    local_118 = ~CONCAT17(-(auVar16[7] < '\0'),
                          CONCAT16(-(auVar16[6] < '\0'),
                                   CONCAT15(-(auVar16[5] < '\0'),
                                            CONCAT14(-(auVar16[4] < '\0'),
                                                     CONCAT13(-(auVar16[3] < '\0'),
                                                              CONCAT12(-(auVar16[2] < '\0'),
                                                                       CONCAT11(-(auVar16[1] < '\0')
                                                                                ,-(auVar16[0] < '\0'
                                                                                  )))))))) &
                local_48._0_8_;
    local_130 = 0x8000000000000002;
    local_60 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00540980
    ;
    local_a8 = &DAT_00170810;
    local_a0 = 1;
    local_88 = 0;
    local_98 = &local_68;
    local_90 = 1;
                    /* try { // try from 002f7140 to 002f7151 has its CatchHandler @ 002f71cb */
    local_68 = (undefined *)&local_148;
    lVar7 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(local_d8,&local_a8);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hed8dd3841b2e91c8E
              (&local_148);
    lVar4 = unaff_R12;
    unaff_R12 = lVar13;
    if (lVar7 != 0) goto LAB_002f7166;
  }
                    /* try { // try from 002f6e91 to 002f6eb6 has its CatchHandler @ 002f720f */
  uVar12 = (undefined4)lVar4;
  lVar4 = _ZN2fd9dir_entry8DirEntry5style17hc7d1f63435441946E(param_2,local_d0);
  local_b0 = param_2;
  if (lVar4 == 0) {
    local_78 = ZEXT416(2);
  }
  else {
    (*(code *)PTR__ZN8lscolors5style5Style21to_nu_ansi_term_style17h4f37f75a73819d26E_00540978)
              (&local_148,lVar4);
    local_78._8_8_ = 0;
    local_78._0_8_ = local_148;
    param_2 = (ulong)bStack_140;
    uVar10 = uStack_13f;
    uVar12 = uStack_13b;
  }
  auVar16 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (unaff_R12,local_c0,local_b8);
  if (auVar16._0_8_ != 0) {
    local_58 = local_78._0_8_;
    uVar2 = local_58;
    uStack_50 = local_78._8_8_;
    local_58._0_1_ = local_78[0];
    bVar14 = (char)local_58 == '\x02';
    local_110 = (byte)param_2;
    if (bVar14) {
      uVar10 = 0x15;
      uVar12 = 0x15;
      local_110 = 0;
    }
    auVar15 = pshuflw(ZEXT216(CONCAT11(bVar14,bVar14)),ZEXT216(CONCAT11(bVar14,bVar14)),0);
    auVar15 = psllw(auVar15,7);
    auVar15 = auVar15 & _DAT_00170a80;
    local_118 = ~CONCAT17(-(auVar15[7] < '\0'),
                          CONCAT16(-(auVar15[6] < '\0'),
                                   CONCAT15(-(auVar15[5] < '\0'),
                                            CONCAT14(-(auVar15[4] < '\0'),
                                                     CONCAT13(-(auVar15[3] < '\0'),
                                                              CONCAT12(-(auVar15[2] < '\0'),
                                                                       CONCAT11(-(auVar15[1] < '\0')
                                                                                ,-(auVar15[0] < '\0'
                                                                                  )))))))) &
                local_78._0_8_;
    local_148 = &DAT_8000000000000000;
    bStack_140 = auVar16[0];
    uStack_13f = auVar16._1_4_;
    uStack_13b = auVar16._5_4_;
    uStack_137 = auVar16._9_7_;
    local_130 = 0x8000000000000002;
    auStack_f0._0_8_ =
         PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00540980
    ;
    local_a8 = &DAT_00170810;
    local_a0 = 1;
    local_88 = 0;
    local_98 = &local_f8;
    local_90 = 1;
                    /* try { // try from 002f6ff3 to 002f7004 has its CatchHandler @ 002f71cd */
    local_10f = uVar10;
    local_10b = uVar12;
    local_f8 = (undefined *)&local_148;
    local_58 = uVar2;
    lVar7 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(local_d8,&local_a8);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hed8dd3841b2e91c8E
              (&local_148);
    uVar2 = local_b0;
    if (lVar7 == 0) {
                    /* try { // try from 002f7021 to 002f7053 has its CatchHandler @ 002f720f */
      uVar6 = (*(code *)PTR__ZN8lscolors8LsColors19style_for_indicator17hc2793129675cbe36E_00540828)
                        (local_d0,2);
      lVar7 = _ZN2fd6output20print_trailing_slash17h43af0d27fcc999ecE
                        (local_d8,uVar2,*(undefined8 *)(local_e0 + 0xb8),
                         *(undefined8 *)(local_e0 + 0xc0),uVar6);
    }
LAB_002f7166:
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E(local_c8);
    return lVar7;
  }
  ppuVar11 = &PTR_s_src_output_rs_00502570;
  uVar6 = local_c0;
  lVar13 = local_b8;
  lVar4 = local_b8;
LAB_002f71aa:
                    /* try { // try from 002f71aa to 002f71bb has its CatchHandler @ 002f720f */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00540938)
            (uVar6,lVar4,unaff_R12,lVar13,ppuVar11);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}