void _ZN4just10subcommand10Subcommand3run17h0caeb55d50695da5E
               (char *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined auVar25 [16];
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined local_798 [8];
  undefined8 local_790;
  undefined8 local_788;
  undefined4 *local_780;
  undefined *local_778;
  undefined4 local_770;
  undefined4 uStack_76c;
  undefined auStack_768 [40];
  undefined4 local_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined local_730 [7];
  undefined4 local_729;
  undefined4 uStack_725;
  undefined4 uStack_721;
  undefined4 uStack_71d;
  undefined4 uStack_719;
  undefined4 uStack_715;
  undefined4 uStack_711;
  undefined4 uStack_70d;
  undefined4 local_709;
  undefined4 uStack_705;
  undefined4 uStack_701;
  undefined4 uStack_6fd;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined local_618 [760];
  undefined local_320 [752];
  
  local_7e0 = param_3;
                    /* try { // try from 0038c578 to 0038c597 has its CatchHandler @ 0038cd94 */
  lVar23 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                     (*(undefined8 *)(param_4 + 2),*(undefined8 *)(param_4 + 4));
  if (lVar23 == 0) {
                    /* try { // try from 0038ccd2 to 0038ccde has its CatchHandler @ 0038cd94 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_005310b0);
LAB_0038ccdf:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  (*(code *)
    PTR__ZN60__LT__RF_std__path__Path_u20_as_u20_lexiclean__Lexiclean_GT_9lexiclean17h6a5ff6ae87480de6E_00566a98
  )(local_798,lVar23);
  if ((*(char *)((long)param_5 + 0x1e6) == '\x01') &&
     (uVar2 = *(undefined8 *)(param_2 + 0x80), *(long *)(param_2 + 0x108) < -0x7ffffffffffffffe)) {
    local_7e8 = *(undefined8 *)(param_2 + 0x88);
    bVar1 = *(byte *)(param_2 + 0x1a7);
    local_7f0 = local_790;
    local_7f8 = local_788;
    do {
                    /* try { // try from 0038c650 to 0038c680 has its CatchHandler @ 0038cd90 */
      _ZN4just8justfile8Justfile3run17h44a153d0be889dd4E
                (&local_860,param_5,param_2,param_4,param_8,param_6,param_7);
      if (((byte)local_860 & 0x3e) != 0x34) goto LAB_0038cb65;
      local_698 = local_800;
      local_6a8 = local_810;
      uStack_6a0 = uStack_808;
      local_6b8 = local_820;
      uStack_6b0 = uStack_818;
      local_6c8 = local_830;
      uStack_6c4 = uStack_82c;
      uStack_6c0 = uStack_828;
      uStack_6bc = uStack_824;
      local_6d8 = local_840;
      uStack_6d4 = uStack_83c;
      uStack_6d0 = uStack_838;
      uStack_6cc = uStack_834;
      local_6e8 = local_850;
      uStack_6e4 = uStack_84c;
      uStack_6e0 = uStack_848;
      uStack_6dc = uStack_844;
      local_6f8 = local_860;
      uStack_6f4 = uStack_85c;
      uStack_6f0 = uStack_858;
      uStack_6ec = uStack_854;
                    /* try { // try from 0038c70b to 0038c724 has its CatchHandler @ 0038cd7e */
      _ZN4just6search6Search23search_parent_directory17h53a5a1157ef24091E
                (&local_770,*(undefined8 *)(param_4 + 2),*(undefined8 *)(param_4 + 4),uVar2,
                 local_7e8);
      local_628 = local_800;
      local_638 = local_810;
      uStack_630 = uStack_808;
      local_648 = local_820;
      uStack_640 = uStack_818;
      local_658 = local_830;
      uStack_654 = uStack_82c;
      uStack_650 = uStack_828;
      uStack_64c = uStack_824;
      local_668 = CONCAT44(uStack_83c,local_840);
      uStack_660 = uStack_838;
      uStack_65c = uStack_834;
      local_678 = (undefined4 **)CONCAT44(uStack_84c,local_850);
      uStack_670 = CONCAT44(uStack_844,uStack_848);
      local_688 = (undefined **)CONCAT44(uStack_85c,local_860);
      ppuVar7 = local_688;
      uStack_680 = CONCAT44(uStack_854,uStack_858);
      if (CONCAT44(uStack_76c,local_770) == -0x8000000000000000) {
        local_688._0_1_ = (char)local_860;
        cVar6 = (char)local_688;
                    /* try { // try from 0038c7b1 to 0038c938 has its CatchHandler @ 0038cd92 */
        local_688 = ppuVar7;
        _ZN4core3ptr52drop_in_place_LT_just__search_error__SearchError_GT_17h2183513fbbcaac96E
                  (auStack_768);
        uStack_7a8 = (undefined4)(CONCAT44(uStack_82c,local_830) >> 8);
        uStack_7a4._0_3_ = (undefined3)((uint)uStack_82c >> 8);
        local_7b8 = (undefined4)CONCAT43(uStack_83c,local_840._1_3_);
        uStack_7b4 = (undefined4)
                     (CONCAT17((undefined)uStack_838,CONCAT43(uStack_83c,local_840._1_3_)) >> 0x20);
        uStack_7b0 = (undefined4)CONCAT43(uStack_834,uStack_838._1_3_);
        uStack_7ac = (undefined4)
                     (CONCAT17((undefined)local_830,CONCAT43(uStack_834,uStack_838._1_3_)) >> 0x20);
        local_7c8 = (undefined4)CONCAT43(uStack_84c,local_850._1_3_);
        uStack_7c4 = (undefined4)
                     (CONCAT17((undefined)uStack_848,CONCAT43(uStack_84c,local_850._1_3_)) >> 0x20);
        uStack_7c0 = (undefined4)CONCAT43(uStack_844,uStack_848._1_3_);
        uStack_7bc = (undefined4)
                     (CONCAT17((undefined)local_840,CONCAT43(uStack_844,uStack_848._1_3_)) >> 0x20);
        local_7d8 = (undefined4)CONCAT43(uStack_85c,local_860._1_3_);
        uStack_7d4 = (undefined4)
                     (CONCAT17((undefined)uStack_858,CONCAT43(uStack_85c,local_860._1_3_)) >> 0x20);
        uStack_7d0 = (undefined4)CONCAT43(uStack_854,uStack_858._1_3_);
        uStack_7cc = (undefined4)
                     (CONCAT17((undefined)local_850,CONCAT43(uStack_854,uStack_858._1_3_)) >> 0x20);
        if (cVar6 != '8') {
          *(undefined8 *)(param_1 + 0x58) = uStack_808;
          *(undefined8 *)(param_1 + 0x60) = local_800;
          *(undefined8 *)(param_1 + 0x48) = uStack_818;
          *(undefined8 *)(param_1 + 0x50) = local_810;
          *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_824,uStack_828);
          *(undefined8 *)(param_1 + 0x40) = local_820;
          *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_82c,local_830);
          *(ulong *)(param_1 + 0x21) =
               CONCAT17((undefined)uStack_838,CONCAT43(uStack_83c,local_840._1_3_));
          *(ulong *)(param_1 + 0x29) =
               CONCAT17((undefined)local_830,CONCAT43(uStack_834,uStack_838._1_3_));
          *(ulong *)(param_1 + 0x11) =
               CONCAT17((undefined)uStack_848,CONCAT43(uStack_84c,local_850._1_3_));
          *(ulong *)(param_1 + 0x19) =
               CONCAT17((undefined)local_840,CONCAT43(uStack_844,uStack_848._1_3_));
          *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_85c,local_860._1_3_);
          *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_858,uStack_85c._1_3_);
          *(uint *)(param_1 + 9) = CONCAT13((undefined)uStack_854,uStack_858._1_3_);
          *(uint *)(param_1 + 0xd) = CONCAT13((undefined)local_850,uStack_854._1_3_);
          *param_1 = cVar6;
          goto LAB_0038cbf8;
        }
      }
      else {
        uStack_7b0._3_1_ = (undefined)auStack_768._28_4_;
        uStack_7b0 = CONCAT13(uStack_7b0._3_1_,SUB43(auStack_768._24_4_,1));
        uStack_7ac._3_1_ = (undefined)auStack_768._32_4_;
        uStack_7ac = CONCAT13(uStack_7ac._3_1_,SUB43(auStack_768._28_4_,1));
        uStack_7a8._3_1_ = (undefined)auStack_768._36_4_;
        uStack_7a8 = CONCAT13(uStack_7a8._3_1_,SUB43(auStack_768._32_4_,1));
        uStack_7a4._0_3_ = SUB43(auStack_768._36_4_,1);
        uStack_7c0._3_1_ = (undefined)auStack_768._12_4_;
        uStack_7c0 = CONCAT13(uStack_7c0._3_1_,SUB43(auStack_768._8_4_,1));
        uStack_7bc._3_1_ = (undefined)auStack_768._16_4_;
        uStack_7bc = CONCAT13(uStack_7bc._3_1_,SUB43(auStack_768._12_4_,1));
        local_7b8._3_1_ = (undefined)auStack_768._20_4_;
        local_7b8 = CONCAT13(local_7b8._3_1_,SUB43(auStack_768._16_4_,1));
        uStack_7b4._0_3_ = SUB43(auStack_768._20_4_,1);
        uStack_7b4 = CONCAT13((char)auStack_768._24_4_,(undefined3)uStack_7b4);
        uStack_7d4._3_1_ = (undefined)local_770;
        uStack_7d0._3_1_ = (undefined)uStack_76c;
        uStack_7d0 = CONCAT13(uStack_7d0._3_1_,(int3)((uint)local_770 >> 8));
        uStack_7cc._3_1_ = (undefined)auStack_768._0_4_;
        uStack_7cc = CONCAT13(uStack_7cc._3_1_,(int3)((uint)uStack_76c >> 8));
        local_7c8._3_1_ = (undefined)auStack_768._4_4_;
        local_7c8 = CONCAT13(local_7c8._3_1_,SUB43(auStack_768._0_4_,1));
        uStack_7c4._0_3_ = SUB43(auStack_768._4_4_,1);
        uStack_7c4 = CONCAT13((char)auStack_768._8_4_,(undefined3)uStack_7c4);
        _ZN4core3ptr83drop_in_place_LT_just__subcommand__Subcommand__run___u7b__u7b_closure_u7d__u7d__GT_17h4501022010847662E
                  (&local_688);
      }
      local_729 = CONCAT31((undefined3)uStack_7d0,uStack_7d4._3_1_);
      uStack_725 = CONCAT31((undefined3)uStack_7cc,uStack_7d0._3_1_);
      uStack_721 = CONCAT31((undefined3)local_7c8,uStack_7cc._3_1_);
      uStack_71d = CONCAT31((undefined3)uStack_7c4,local_7c8._3_1_);
      uStack_719 = CONCAT31((undefined3)uStack_7c0,uStack_7c4._3_1_);
      uStack_715 = CONCAT31((undefined3)uStack_7bc,uStack_7c0._3_1_);
      uStack_711 = CONCAT31((undefined3)local_7b8,uStack_7bc._3_1_);
      uStack_70d = CONCAT31((undefined3)uStack_7b4,local_7b8._3_1_);
      local_709 = CONCAT31((undefined3)uStack_7b0,uStack_7b4._3_1_);
      uStack_705 = CONCAT31((undefined3)uStack_7ac,uStack_7b0._3_1_);
      uStack_701 = CONCAT31((undefined3)uStack_7a8,uStack_7ac._3_1_);
      uStack_6fd = CONCAT31((undefined3)uStack_7a4,uStack_7a8._3_1_);
      _ZN4core3ptr41drop_in_place_LT_just__search__Search_GT_17h18f5d3903328307eE(param_4);
      param_4[8] = local_709;
      param_4[9] = uStack_705;
      param_4[10] = uStack_701;
      param_4[0xb] = uStack_6fd;
      param_4[4] = uStack_719;
      param_4[5] = uStack_715;
      param_4[6] = uStack_711;
      param_4[7] = uStack_70d;
      *param_4 = local_729;
      param_4[1] = uStack_725;
      param_4[2] = uStack_721;
      param_4[3] = uStack_71d;
      if (1 < bVar1) {
        auVar25 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                            (*(undefined8 *)(param_4 + 2),*(undefined8 *)(param_4 + 4));
        if (auVar25._0_8_ == 0) {
                    /* try { // try from 0038ccb4 to 0038ccc0 has its CatchHandler @ 0038cdab */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                    (&PTR_DAT_005310c8);
          goto LAB_0038ccdf;
        }
        auVar25 = _ZN3std4path4Path12strip_prefix17h70061c692fa4f661E
                            (local_7f0,local_7f8,auVar25._0_8_,auVar25._8_8_);
        uVar24 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h773514536ee4f961E
                           (auVar25._0_8_,auVar25._8_8_,&PTR_DAT_005310e0);
        (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)(&local_688,uVar24)
        ;
        uStack_7a8 = local_658;
        uStack_7a4 = uStack_654;
        uStack_7a0 = uStack_650;
        uStack_79c = uStack_64c;
        local_7b8 = (undefined4)local_668;
        uStack_7b4 = local_668._4_4_;
        uStack_7b0 = uStack_660;
        uStack_7ac = uStack_65c;
        local_7c8 = (undefined4)local_678;
        uStack_7c4 = local_678._4_4_;
        uStack_7c0 = (undefined4)uStack_670;
        uStack_7bc = uStack_670._4_4_;
        local_7d8 = (undefined4)local_688;
        uStack_7d4 = local_688._4_4_;
        uStack_7d0 = (undefined4)uStack_680;
        uStack_7cc = uStack_680._4_4_;
        _ZN4core4iter6traits8iterator8Iterator7collect17h5ff346cd2ef2f52aE(local_730,&local_7d8);
        uVar24 = CONCAT17((undefined)uStack_721,CONCAT43(uStack_725,local_729._1_3_));
        uVar4 = CONCAT17((undefined)uStack_719,CONCAT43(uStack_71d,uStack_721._1_3_));
                    /* try { // try from 0038c951 to 0038c978 has its CatchHandler @ 0038cd7c */
        auVar25 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00565dd8)
                            (*(undefined8 *)(param_4 + 2),*(undefined8 *)(param_4 + 4));
        if (auVar25._0_8_ == 0) {
                    /* try { // try from 0038ccc3 to 0038cccf has its CatchHandler @ 0038cd99 */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                    (&PTR_DAT_005310f8);
          goto LAB_0038ccdf;
        }
        _ZN3std4path4Path4join17h1eac0ae5e7efa361E
                  (&local_7d8,uVar24,uVar4,auVar25._0_8_,auVar25._8_8_);
        local_740 = uStack_7d0;
        uStack_73c = uStack_7cc;
        uStack_738 = local_7c8;
        uStack_734 = uStack_7c4;
        local_780 = &local_740;
        local_778 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
        ;
        local_688 = &PTR_DAT_00531090;
        uStack_680 = 2;
        local_668 = 0;
        local_678 = &local_780;
        uStack_670 = 1;
                    /* try { // try from 0038c9eb to 0038c9f8 has its CatchHandler @ 0038ccf9 */
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_688);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_7d8);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_730);
      }
                    /* try { // try from 0038ca1b to 0038ca34 has its CatchHandler @ 0038cd92 */
      _ZN4just10subcommand10Subcommand7compile17hd4ddb48c754af338E
                (&local_688,param_2,local_7e0,*(undefined8 *)(param_4 + 2),
                 *(undefined8 *)(param_4 + 4));
      uVar22 = local_620;
      uVar21 = local_628;
      uVar20 = uStack_630;
      uVar4 = local_638;
      uVar24 = uStack_640;
      uVar17 = uStack_64c;
      uVar16 = uStack_650;
      uVar15 = uStack_654;
      uVar14 = local_658;
      uVar13 = uStack_65c;
      uVar12 = uStack_660;
      ppuVar7 = local_688;
      puVar5 = PTR_memcpy_00565e28;
      uVar8 = (undefined4)uStack_670;
      uVar9 = uStack_670._4_4_;
      uVar10 = (undefined4)local_668;
      uVar11 = local_668._4_4_;
      uVar18 = (undefined4)local_648;
      uVar19 = local_648._4_4_;
      local_8c8 = (undefined4)uStack_680;
      uStack_8c4 = (undefined4)((ulong)uStack_680 >> 0x20);
      uStack_8c0 = SUB84(local_678,0);
      uStack_8bc = (undefined4)((ulong)local_678 >> 0x20);
      if (local_688 == (undefined **)0x8000000000000000) {
        *(undefined8 *)(param_1 + 0x60) = local_620;
        *(undefined8 *)(param_1 + 0x50) = uStack_630;
        *(undefined8 *)(param_1 + 0x58) = local_628;
        *(undefined8 *)(param_1 + 0x40) = uStack_640;
        *(undefined8 *)(param_1 + 0x48) = local_638;
        local_860 = local_8c8;
        uStack_85c = uStack_8c4;
        uStack_858 = uStack_8c0;
        uStack_854 = uStack_8bc;
        local_850 = (undefined4)uStack_670;
        uStack_84c = uStack_670._4_4_;
        uStack_848 = (undefined4)local_668;
        uStack_844 = local_668._4_4_;
        local_840 = uStack_660;
        uStack_83c = uStack_65c;
        uStack_838 = local_658;
        uStack_834 = uStack_654;
        local_830 = uStack_650;
        uStack_82c = uStack_64c;
        uStack_828 = (undefined4)local_648;
        uStack_824 = local_648._4_4_;
        goto LAB_0038cbe9;
      }
      (*(code *)PTR_memcpy_00565e28)(local_320,local_618,0x2f0);
                    /* try { // try from 0038cab9 to 0038cac5 has its CatchHandler @ 0038cd0e */
      _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(param_5)
      ;
      *param_5 = ppuVar7;
      param_5[0xd] = uVar22;
      param_5[0xb] = uVar20;
      param_5[0xc] = uVar21;
      param_5[9] = uVar24;
      param_5[10] = uVar4;
      *(undefined4 *)(param_5 + 7) = uVar16;
      *(undefined4 *)((long)param_5 + 0x3c) = uVar17;
      *(undefined4 *)(param_5 + 8) = uVar18;
      *(undefined4 *)((long)param_5 + 0x44) = uVar19;
      *(undefined4 *)(param_5 + 5) = uVar12;
      *(undefined4 *)((long)param_5 + 0x2c) = uVar13;
      *(undefined4 *)(param_5 + 6) = uVar14;
      *(undefined4 *)((long)param_5 + 0x34) = uVar15;
      *(undefined4 *)(param_5 + 3) = uVar8;
      *(undefined4 *)((long)param_5 + 0x1c) = uVar9;
      *(undefined4 *)(param_5 + 4) = uVar10;
      *(undefined4 *)((long)param_5 + 0x24) = uVar11;
      *(undefined4 *)(param_5 + 1) = local_8c8;
      *(undefined4 *)((long)param_5 + 0xc) = uStack_8c4;
      *(undefined4 *)(param_5 + 2) = uStack_8c0;
      *(undefined4 *)((long)param_5 + 0x14) = uStack_8bc;
      (*(code *)puVar5)(param_5 + 0xe,local_320,0x2f0);
    } while (*(char *)((long)param_5 + 0x1e6) != '\0');
  }
                    /* try { // try from 0038cb34 to 0038cb9d has its CatchHandler @ 0038cce1 */
  _ZN4just8justfile8Justfile3run17h44a153d0be889dd4E
            (&local_860,param_5,param_2,param_4,param_8,param_6,param_7);
LAB_0038cb65:
  if ((*(char *)(param_2 + 0x196) == '\0') || (((byte)local_860 & 0x3e) != 0x34)) {
    *(undefined8 *)(param_1 + 0x60) = local_800;
    *(undefined8 *)(param_1 + 0x50) = local_810;
    *(undefined8 *)(param_1 + 0x58) = uStack_808;
    *(undefined8 *)(param_1 + 0x40) = local_820;
    *(undefined8 *)(param_1 + 0x48) = uStack_818;
LAB_0038cbe9:
    *(undefined4 *)(param_1 + 0x30) = local_830;
    *(undefined4 *)(param_1 + 0x34) = uStack_82c;
    *(undefined4 *)(param_1 + 0x38) = uStack_828;
    *(undefined4 *)(param_1 + 0x3c) = uStack_824;
    *(undefined4 *)(param_1 + 0x20) = local_840;
    *(undefined4 *)(param_1 + 0x24) = uStack_83c;
    *(undefined4 *)(param_1 + 0x28) = uStack_838;
    *(undefined4 *)(param_1 + 0x2c) = uStack_834;
    *(undefined4 *)(param_1 + 0x10) = local_850;
    *(undefined4 *)(param_1 + 0x14) = uStack_84c;
    *(undefined4 *)(param_1 + 0x18) = uStack_848;
    *(undefined4 *)(param_1 + 0x1c) = uStack_844;
    *(undefined4 *)param_1 = local_860;
    *(undefined4 *)(param_1 + 4) = uStack_85c;
    *(undefined4 *)(param_1 + 8) = uStack_858;
    *(undefined4 *)(param_1 + 0xc) = uStack_854;
  }
  else {
    *param_1 = '8';
    if ((byte)local_860 != 0x38) {
      _ZN4core3ptr39drop_in_place_LT_just__error__Error_GT_17ha62e3e0ecfcf56b5E(&local_860);
    }
  }
LAB_0038cbf8:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_798);
                    /* try { // try from 0038cc05 to 0038cc0e has its CatchHandler @ 0038cce6 */
  _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(param_5);
  _ZN4core3ptr41drop_in_place_LT_just__search__Search_GT_17h18f5d3903328307eE(param_4);
  return;
}