undefined8
_ZN15tabby_index_cli8commands4head12run_head_cli17h5b6ca3e30a296988E
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined *local_ff0;
  long local_fe8;
  undefined8 ****local_fe0;
  undefined8 local_fd8;
  ulong local_fc0;
  undefined8 local_fb8;
  undefined8 local_fb0;
  long local_fa8;
  long local_fa0;
  undefined8 local_f98;
  undefined local_f90 [24];
  undefined8 ****local_f78;
  undefined *local_f70;
  undefined *local_f68;
  undefined4 local_f60;
  undefined4 uStack_f5c;
  undefined4 uStack_f58;
  undefined4 uStack_f54;
  undefined4 local_f50;
  undefined4 uStack_f4c;
  undefined4 uStack_f48;
  undefined4 uStack_f44;
  undefined4 local_f40;
  undefined4 uStack_f3c;
  undefined4 uStack_f38;
  undefined4 uStack_f34;
  undefined8 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined local_ef8 [48];
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  ulong local_788;
  undefined *local_778;
  undefined8 ****ppppuStack_770;
  undefined8 ****ppppuStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined4 local_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  
  _ZN7tantivy5index5index5Index11open_in_dir17h5f3e90e10edff988E(&local_778,param_1,param_2);
  local_e98 = local_740;
  local_ec8 = (undefined *)ppppuStack_770;
  puVar3 = local_ec8;
  uStack_ec0 = (undefined8 *****)ppppuStack_768;
  pppppuVar4 = uStack_ec0;
  local_eb8 = local_760;
  uVar9 = local_eb8;
  uStack_eb0 = uStack_758;
  uVar5 = uStack_eb0;
  uStack_ea0 = uStack_748;
  uVar6 = uStack_ea0;
  local_ec8._0_4_ = SUB84(ppppuStack_770,0);
  local_ec8._4_4_ = (undefined4)((ulong)ppppuStack_770 >> 0x20);
  uStack_ec0._0_4_ = SUB84(ppppuStack_768,0);
  uStack_ec0._4_4_ = (undefined4)((ulong)ppppuStack_768 >> 0x20);
  local_eb8._0_4_ = (undefined4)local_760;
  local_eb8._4_4_ = (undefined4)((ulong)local_760 >> 0x20);
  uStack_eb0._0_4_ = (undefined4)uStack_758;
  uStack_eb0._4_4_ = (undefined4)((ulong)uStack_758 >> 0x20);
  uStack_ea0._0_4_ = (undefined4)uStack_748;
  uStack_ea0._4_4_ = (undefined4)((ulong)uStack_748 >> 0x20);
  local_ec8 = puVar3;
  uStack_ec0 = pppppuVar4;
  local_eb8 = uVar9;
  uStack_eb0 = uVar5;
  uStack_ea0 = uVar6;
  if (local_778 == (undefined *)0x8000000000000001) {
    uStack_748 = local_740;
    local_750 = (undefined4)uStack_ea0;
    uStack_74c = uStack_ea0._4_4_;
    uVar9 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hdc065b01342578bcE
                      (&local_778);
  }
  else {
    local_f08 = local_718;
    uStack_f00 = uStack_710;
    local_f18 = local_728;
    uStack_f10 = uStack_720;
    local_f28 = local_738;
    uStack_f20 = uStack_730;
    local_f60 = (undefined4)local_ec8;
    uStack_f5c = local_ec8._4_4_;
    uStack_f58 = (undefined4)uStack_ec0;
    uStack_f54 = uStack_ec0._4_4_;
    local_f50 = (undefined4)local_eb8;
    uStack_f4c = local_eb8._4_4_;
    uStack_f48 = (undefined4)uStack_eb0;
    uStack_f44 = uStack_eb0._4_4_;
    local_f40 = local_750;
    uStack_f3c = uStack_74c;
    uStack_f38 = (undefined4)uStack_ea0;
    uStack_f34 = uStack_ea0._4_4_;
    local_f30 = local_740;
    local_f68 = local_778;
                    /* try { // try from 003736fa to 0037370f has its CatchHandler @ 00373b4d */
    (*(code *)PTR__ZN7tantivy5index5index5Index6reader17h7031a20a933df984E_006dfd18)
              (&local_ec8,&local_f68);
    if (local_ec8 == (undefined *)0x12) {
      local_fe0 = uStack_ec0;
      local_fd8 = local_eb8;
                    /* try { // try from 0037373c to 00373746 has its CatchHandler @ 00373b2d */
      local_fe8 = (*(code *)
                    PTR__ZN7tantivy6reader11IndexReader8searcher17h4b3b284570bbf106E_006dfd20)
                            (&local_fe0);
                    /* try { // try from 0037374c to 0037375b has its CatchHandler @ 00373b3c */
      _ZN4core3ptr49drop_in_place_LT_tantivy__reader__IndexReader_GT_17hd5b87e325d8c0232E
                (&local_fe0);
      lVar8 = (*(code *)
                PTR__ZN12tabby_common5index11IndexSchema8instance17hc55d378badadeb83E_006dfd48)();
      local_fa8 = *(long *)(local_fe8 + 0x18);
      local_fa0 = *(long *)(local_fe8 + 0x20) * 400 + local_fa8;
      local_f98 = 0;
      auVar11 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6a37c4f4fdf0baceE
                          (&local_fa8);
      if (auVar11._8_8_ != 0) {
        local_fb0 = *(undefined8 *)(param_3 + 8);
        local_fb8 = *(undefined8 *)(param_3 + 0x10);
        local_fc0 = *(ulong *)(param_3 + 0x18);
        uVar10 = 0;
        do {
          (*(code *)
            PTR__ZN7tantivy5index14segment_reader13SegmentReader14inverted_index17h0c044d78f5c09b5cE_006dfd50
          )(&local_778,auVar11._8_8_,*(undefined4 *)(lVar8 + 8));
          if ((uint)local_778 == 0x12) {
            local_ff0 = (undefined *)ppppuStack_770;
                    /* try { // try from 0037381c to 00373833 has its CatchHandler @ 00373b54 */
            (*(code *)PTR__ZN7tantivy6schema4term4Term15from_field_text17h01256f67d3b61ca0E_006dfd58
            )(local_f90,*(undefined4 *)(lVar8 + 8),local_fb0,local_fb8);
                    /* try { // try from 0037383d to 0037385c has its CatchHandler @ 00373b59 */
            (*(code *)
              PTR__ZN7tantivy5index21inverted_index_reader19InvertedIndexReader13read_postings17he06b5ad3f0f237a7E_006dfd60
            )(&local_778,local_ff0 + 0x10,local_f90,0);
            if ((uint)local_778 < 2) {
              (*(code *)PTR_memcpy_006df710)(&local_ec8,&local_778,0x748);
              while (local_788 < 0x80) {
                while( true ) {
                  iVar1 = *(int *)((long)&uStack_ec0 + local_788 * 4);
                  if (iVar1 == 0x7fffffff) {
                    /* try { // try from 003739eb to 003739f7 has its CatchHandler @ 00373b2b */
                    _ZN4core3ptr73drop_in_place_LT_tantivy__postings__segment_postings__SegmentPostings_GT_17hdb3f0afdc95277c9E
                              (&local_ec8);
                    _ZN4core3ptr48drop_in_place_LT_tantivy__schema__term__Term_GT_17hafc456a1fde40a23E
                              (local_f90);
                    /* try { // try from 00373a02 to 00373a0b has its CatchHandler @ 00373b29 */
                    _ZN4core3ptr103drop_in_place_LT_alloc__sync__Arc_LT_tantivy__index__inverted_index_reader__InvertedIndexReader_GT__GT_17h684f0de23264f2eeE
                              (&local_ff0);
                    goto LAB_003737d8;
                  }
                  cVar7 = (*(code *)
                            PTR__ZN7tantivy5index14segment_reader13SegmentReader10is_deleted17he6125c66332d6310E_006dfd70
                          )(auVar11._8_8_,iVar1);
                  if (cVar7 == '\0') {
                    _ZN7tantivy4core8searcher8Searcher3doc17h2010adbd4d783d11E
                              (&local_778,local_fe8,auVar11._0_8_ & 0xffffffff,iVar1);
                    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h340c27d67c9c86c1E
                              (local_ef8,&local_778);
                    _ZN15tabby_index_cli8commands4head13to_json_value17he64216c08a45f54dE
                              (&local_fe0,local_ef8,lVar8);
                    local_f78 = &local_fe0;
                    local_f70 = 
                    PTR__ZN63__LT_serde_json__value__Value_u20_as_u20_core__fmt__Display_GT_3fmt17h7ec19c7dcd844146E_006dfd78
                    ;
                    local_778 = &DAT_00684bb8;
                    ppppuStack_770 = (undefined8 ****)0x2;
                    uStack_758 = 0;
                    ppppuStack_768 = &local_f78;
                    local_760 = 1;
                    /* try { // try from 0037399b to 003739a3 has its CatchHandler @ 00373b3e */
                    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_778);
                    uVar10 = uVar10 + 1;
                    if (local_fc0 <= uVar10) {
                    /* try { // try from 00373abd to 00373ac6 has its CatchHandler @ 00373b52 */
                      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17hacddd69444a21384E
                                (&local_fe0);
                    /* try { // try from 00373ac7 to 00373ad3 has its CatchHandler @ 00373b27 */
                      _ZN4core3ptr73drop_in_place_LT_tantivy__postings__segment_postings__SegmentPostings_GT_17hdb3f0afdc95277c9E
                                (&local_ec8);
                      _ZN4core3ptr48drop_in_place_LT_tantivy__schema__term__Term_GT_17hafc456a1fde40a23E
                                (local_f90);
                    /* try { // try from 00373ade to 00373ae7 has its CatchHandler @ 00373b3c */
                      _ZN4core3ptr103drop_in_place_LT_alloc__sync__Arc_LT_tantivy__index__inverted_index_reader__InvertedIndexReader_GT__GT_17h684f0de23264f2eeE
                                (&local_ff0);
                      goto LAB_00373ae8;
                    }
                    /* try { // try from 003739b2 to 003739bb has its CatchHandler @ 00373b5e */
                    _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17hacddd69444a21384E
                              (&local_fe0);
                  }
                  if (local_788 == 0x7f) break;
                  local_788 = local_788 + 1;
                  if (0x7f < local_788) goto LAB_00373b13;
                }
                local_788 = 0;
                    /* try { // try from 003738bc to 0037393b has its CatchHandler @ 00373b5e */
                (*(code *)
                  PTR__ZN7tantivy8postings22block_segment_postings20BlockSegmentPostings7advance17hb27f5203ad9bda99E_006dfd68
                )(&local_ec8);
              }
LAB_00373b13:
                    /* try { // try from 00373b13 to 00373b24 has its CatchHandler @ 00373b52 */
              (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_006df698)
                        (local_788,0x80,&PTR_s__home_34r7hm4n__cargo_git_checko_00684bd8);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            _ZN4core3ptr153drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_tantivy__postings__segment_postings__SegmentPostings_GT__C_std__io__error__Error_GT__GT_17h176caf0103183d89E
                      (&local_778);
            _ZN4core3ptr48drop_in_place_LT_tantivy__schema__term__Term_GT_17hafc456a1fde40a23E
                      (local_f90);
                    /* try { // try from 00373867 to 00373870 has its CatchHandler @ 00373b84 */
            _ZN4core3ptr103drop_in_place_LT_alloc__sync__Arc_LT_tantivy__index__inverted_index_reader__InvertedIndexReader_GT__GT_17h684f0de23264f2eeE
                      (&local_ff0);
          }
          else {
                    /* try { // try from 003737d0 to 00373800 has its CatchHandler @ 00373b84 */
            _ZN4core3ptr162drop_in_place_LT_core__result__Result_LT_alloc__sync__Arc_LT_tantivy__index__inverted_index_reader__InvertedIndexReader_GT__C_tantivy__error__TantivyError_GT__GT_17ha36ee488d87740e0E
                      (&local_778);
          }
LAB_003737d8:
          auVar11 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6a37c4f4fdf0baceE
                              (&local_fa8);
        } while (auVar11._8_8_ != 0);
      }
LAB_00373ae8:
                    /* try { // try from 00373ae8 to 00373af1 has its CatchHandler @ 00373b4d */
      _ZN4core3ptr54drop_in_place_LT_tantivy__core__searcher__Searcher_GT_17hfcc0968019ce3a8eE
                (&local_fe8);
      _ZN4core3ptr49drop_in_place_LT_tantivy__index__index__Index_GT_17hc2911d178059c5dcE
                (&local_f68);
      uVar9 = 0;
    }
    else {
      local_750 = (undefined4)uStack_ea0;
      uStack_74c = uStack_ea0._4_4_;
      uStack_748 = local_e98;
      local_760 = uStack_eb0;
      local_778 = local_ec8;
      ppppuStack_770 = uStack_ec0;
      ppppuStack_768 = (undefined8 ****)local_eb8;
                    /* try { // try from 00373a49 to 00373a55 has its CatchHandler @ 00373b4d */
      uVar9 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hdc065b01342578bcE
                        (&local_778);
      _ZN4core3ptr49drop_in_place_LT_tantivy__index__index__Index_GT_17hc2911d178059c5dcE
                (&local_f68);
    }
  }
  return uVar9;
}