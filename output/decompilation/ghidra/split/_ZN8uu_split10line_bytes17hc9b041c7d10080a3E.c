undefined8
_ZN8uu_split10line_bytes17hc9b041c7d10080a3E(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined auVar13 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 *local_180;
  undefined *local_178;
  undefined8 **local_170;
  undefined8 **local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long local_120;
  long local_118;
  ulong local_110;
  undefined8 local_108;
  uint local_fc;
  undefined8 **local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 **ppuStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  long local_40;
  ulong local_38;
  
  local_120 = param_1;
  local_98 = param_2;
  _ZN8uu_split9filenames16FilenameIterator3new17hc2a8a0f7203a171bE
            (&local_168,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             param_1 + 0x40);
  local_a0 = -0x7fffffffffffffff;
  if (local_168 != (undefined8 **)0x8000000000000001) {
    local_58 = local_130;
    uStack_54 = uStack_12c;
    uStack_50 = uStack_128;
    uStack_4c = uStack_124;
    local_68 = uStack_140;
    uStack_64 = uStack_13c;
    uStack_60 = uStack_138;
    uStack_5c = uStack_134;
    local_78 = uStack_150;
    ppuStack_70 = uStack_148;
    local_90 = local_168;
    local_88 = puStack_160;
    local_80 = local_158;
    local_168 = (undefined8 **)0x0;
    puStack_160 = &DAT_00000001;
    local_158 = (undefined8 **)0x0;
    uStack_150 = (undefined *)0x0;
                    /* try { // try from 00171ab4 to 00171ad4 has its CatchHandler @ 00172206 */
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5666194dd5ed5591E(&local_168);
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17ha515876637d6ec21E
              (&local_f8,uVar6,
               &
               PTR__ZN4core3ptr77drop_in_place_LT_std__io__cursor__Cursor_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_17h53f69a6009392ae7E_0020b0c0
              );
    bVar1 = *(byte *)(local_120 + 0xa2);
    bVar2 = *(byte *)(local_120 + 0xa0);
    local_108 = *(undefined8 *)(local_120 + 0x88);
    local_a8 = -param_3;
    uVar10 = 0;
    local_fc = (uint)bVar1;
    local_110 = param_3;
                    /* try { // try from 00171b2d to 00171b3b has its CatchHandler @ 00172201 */
    while (_ZN90__LT_uu_split__LinesWithSep_LT_R_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb6c8053dcbad174bE
                     (&local_48,local_98,local_fc), uVar7 = local_38, lVar5 = local_40,
          local_48 != local_a0) {
      if (local_48 == -0x8000000000000000) {
                    /* try { // try from 001721c8 to 001721d2 has its CatchHandler @ 001721eb */
        uVar6 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                )(local_40);
        goto LAB_00172168;
      }
      local_118 = local_48;
      lVar9 = lVar5;
      if (uVar10 == 0) {
                    /* try { // try from 00171f20 to 00171f32 has its CatchHandler @ 001721f7 */
        (*(code *)
          PTR__ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h029d1b66ecb898b7E_00211ee0
        )(&local_180,&local_90);
        ppuVar3 = local_170;
        puVar12 = local_178;
        puVar8 = local_180;
        if (local_180 == (undefined8 *)&DAT_8000000000000000) {
LAB_001720df:
                    /* try { // try from 001720df to 0017211a has its CatchHandler @ 001721f3 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                    (&local_1a8,"output file suffixes exhausted",0x1e);
          local_158 = local_198;
          local_168 = local_1a8;
          puStack_160 = uStack_1a0;
          uStack_150 = (undefined *)CONCAT44(uStack_150._4_4_,1);
          uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he26860fb58d4a888E(&local_168);
        }
        else {
          if ((bVar2 & 1) != 0) {
            local_1a8 = (undefined8 **)0x0;
            uStack_1a0 = local_178;
            local_198 = local_170;
            uStack_190 = CONCAT31(uStack_190._1_3_,1);
            local_180 = &local_1a8;
            local_178 = 
            PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00212140
            ;
            local_168 = (undefined8 **)&PTR_s_creating_file_0020af08;
            puStack_160 = (undefined *)0x2;
            uStack_148 = (undefined8 **)0x0;
            local_158 = &local_180;
            uStack_150 = &DAT_00000001;
                    /* try { // try from 00171fbb to 00171fe3 has its CatchHandler @ 001721fb */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00212148)(&local_168);
          }
          _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
                    (&local_168,local_120,puVar12,ppuVar3,1);
          puVar4 = puStack_160;
          ppuVar3 = local_168;
          if (local_168 != (undefined8 **)&DAT_8000000000000000) {
            local_1a8 = local_158;
            uStack_1a0 = uStack_150;
            local_198 = uStack_148;
            uStack_190 = uStack_140;
            uStack_18c = uStack_13c;
            local_b8 = (undefined4)uStack_148;
            uStack_b4 = uStack_148._4_4_;
            uStack_b0 = uStack_140;
            uStack_ac = uStack_13c;
            local_c8 = (undefined4)local_158;
            uStack_c4 = local_158._4_4_;
            uStack_c0 = (undefined4)uStack_150;
            uStack_bc = uStack_150._4_4_;
                    /* try { // try from 00172027 to 00172033 has its CatchHandler @ 001721f1 */
            _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha5583a5337080667E
                      (&local_f8);
            local_f8 = ppuVar3;
            local_f0 = puVar4;
            local_d8 = (undefined4)local_198;
            uStack_d4 = local_198._4_4_;
            uStack_d0 = uStack_190;
            uStack_cc = uStack_18c;
            local_e8 = (undefined4)local_1a8;
            uStack_e4 = local_1a8._4_4_;
            uStack_e0 = (undefined4)uStack_1a0;
            uStack_dc = uStack_1a0._4_4_;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E
                      (puVar8,puVar12);
            uVar10 = local_110;
            param_3 = local_110;
            goto joined_r0x00172076;
          }
LAB_00172127:
                    /* try { // try from 0017212c to 00172131 has its CatchHandler @ 001721ed */
          uVar6 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                  )(puStack_160);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E
                    (puVar8,puVar12);
        }
LAB_00172156:
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_118,lVar5);
LAB_00172168:
                    /* try { // try from 00172168 to 001721ae has its CatchHandler @ 00172206 */
        _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha5583a5337080667E
                  (&local_f8);
        _ZN4core3ptr58drop_in_place_LT_uu_split__filenames__FilenameIterator_GT_17h3a3dca25075fae6fE
                  (local_90,local_88);
        return uVar6;
      }
      if ((uVar10 < param_3 && local_38 == uVar10) &&
         (uVar10 = local_38, *(byte *)(local_40 + -1 + local_38) != bVar1)) {
LAB_00171bc2:
                    /* try { // try from 00171bc2 to 00171bd4 has its CatchHandler @ 001721f5 */
        (*(code *)
          PTR__ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h029d1b66ecb898b7E_00211ee0
        )(&local_180,&local_90);
        ppuVar3 = local_170;
        puVar12 = local_178;
        puVar8 = local_180;
        if (local_180 == (undefined8 *)&DAT_8000000000000000) goto LAB_001720df;
        if ((bVar2 & 1) != 0) {
          local_1a8 = (undefined8 **)0x0;
          uStack_1a0 = local_178;
          local_198 = local_170;
          uStack_190 = CONCAT31(uStack_190._1_3_,1);
          local_180 = &local_1a8;
          local_178 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00212140
          ;
          local_168 = (undefined8 **)&PTR_s_creating_file_0020af08;
          puStack_160 = (undefined *)0x2;
          uStack_148 = (undefined8 **)0x0;
          local_158 = &local_180;
          uStack_150 = &DAT_00000001;
                    /* try { // try from 00171c5d to 00171c85 has its CatchHandler @ 001721f9 */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00212148)(&local_168);
        }
        _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
                  (&local_168,local_120,puVar12,ppuVar3,1);
        puVar4 = puStack_160;
        ppuVar3 = local_168;
        if (local_168 == (undefined8 **)&DAT_8000000000000000) goto LAB_00172127;
        local_1a8 = local_158;
        uStack_1a0 = uStack_150;
        local_198 = uStack_148;
        uStack_190 = uStack_140;
        uStack_18c = uStack_13c;
        local_b8 = (undefined4)uStack_148;
        uStack_b4 = uStack_148._4_4_;
        uStack_b0 = uStack_140;
        uStack_ac = uStack_13c;
        local_c8 = (undefined4)local_158;
        uStack_c4 = local_158._4_4_;
        uStack_c0 = (undefined4)uStack_150;
        uStack_bc = uStack_150._4_4_;
                    /* try { // try from 00171cc9 to 00171cd5 has its CatchHandler @ 001721ef */
        _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha5583a5337080667E
                  (&local_f8);
        local_f8 = ppuVar3;
        local_f0 = puVar4;
        local_d8 = (undefined4)local_198;
        uStack_d4 = local_198._4_4_;
        uStack_d0 = uStack_190;
        uStack_cc = uStack_18c;
        local_e8 = (undefined4)local_1a8;
        uStack_e4 = local_1a8._4_4_;
        uStack_e0 = (undefined4)uStack_1a0;
        uStack_dc = uStack_1a0._4_4_;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E(puVar8,puVar12)
        ;
        uVar10 = local_110;
        param_3 = local_110;
        if (local_110 < uVar7) goto LAB_00171d1b;
      }
      else {
joined_r0x00172076:
        if (uVar10 < uVar7) {
          if (uVar10 != param_3) goto LAB_00171bc2;
LAB_00171d1b:
                    /* try { // try from 00171d1b to 00171d50 has its CatchHandler @ 001721ff */
          auVar13 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hbf2f5565c3de22aaE
                              (0,param_3,lVar5,uVar7,&PTR_s_src_uu_split_src_split_rs_0020b110);
          _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E
                    (&local_168,auVar13._0_8_,auVar13._8_8_,&local_f8,local_108);
          if ((char)local_168 != '\0') {
LAB_00172145:
                    /* try { // try from 0017214a to 0017214f has its CatchHandler @ 001721f3 */
            uVar6 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                    )(puStack_160);
            goto LAB_00172156;
          }
          lVar9 = lVar5 + param_3;
          uVar7 = uVar7 + local_a8;
          while( true ) {
                    /* try { // try from 00171d70 to 00171d82 has its CatchHandler @ 0017223f */
            (*(code *)
              PTR__ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h029d1b66ecb898b7E_00211ee0
            )(&local_180,&local_90);
            ppuVar3 = local_170;
            puVar12 = local_178;
            puVar8 = local_180;
            if (local_180 == (undefined8 *)&DAT_8000000000000000) goto LAB_001720df;
            if ((bVar2 & 1) != 0) {
              local_1a8 = (undefined8 **)0x0;
              uStack_1a0 = local_178;
              local_198 = local_170;
              uStack_190 = CONCAT31(uStack_190._1_3_,1);
              local_180 = &local_1a8;
              local_178 = 
              PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00212140
              ;
              local_168 = (undefined8 **)&PTR_s_creating_file_0020af08;
              puStack_160 = (undefined *)0x2;
              uStack_148 = (undefined8 **)0x0;
              local_158 = &local_180;
              uStack_150 = &DAT_00000001;
                    /* try { // try from 00171e0b to 00171e33 has its CatchHandler @ 00172241 */
              (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00212148)(&local_168);
            }
            _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
                      (&local_168,local_120,puVar12,ppuVar3,1);
            puVar4 = puStack_160;
            ppuVar3 = local_168;
            if (local_168 == (undefined8 **)&DAT_8000000000000000) goto LAB_00172127;
            local_1a8 = local_158;
            uStack_1a0 = uStack_150;
            local_198 = uStack_148;
            uStack_190 = uStack_140;
            uStack_18c = uStack_13c;
            local_b8 = (undefined4)uStack_148;
            uStack_b4 = uStack_148._4_4_;
            uStack_b0 = uStack_140;
            uStack_ac = uStack_13c;
            local_c8 = (undefined4)local_158;
            uStack_c4 = local_158._4_4_;
            uStack_c0 = (undefined4)uStack_150;
            uStack_bc = uStack_150._4_4_;
                    /* try { // try from 00171e77 to 00171e83 has its CatchHandler @ 0017220b */
            _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha5583a5337080667E
                      (&local_f8);
            local_f8 = ppuVar3;
            local_f0 = puVar4;
            local_d8 = (undefined4)local_198;
            uStack_d4 = local_198._4_4_;
            uStack_d0 = uStack_190;
            uStack_cc = uStack_18c;
            local_e8 = (undefined4)local_1a8;
            uStack_e4 = local_1a8._4_4_;
            uStack_e0 = (undefined4)uStack_1a0;
            uStack_dc = uStack_1a0._4_4_;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E
                      (puVar8,puVar12);
            uVar10 = local_110;
            uVar11 = uVar7 - local_110;
            param_3 = local_110;
            if (uVar7 < local_110 || uVar11 == 0) break;
                    /* try { // try from 00171ecc to 00171eff has its CatchHandler @ 00172251 */
            auVar13 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hbf2f5565c3de22aaE
                                (0,local_110,lVar9,uVar7,&PTR_s_src_uu_split_src_split_rs_0020b110);
            _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E
                      (&local_168,auVar13._0_8_,auVar13._8_8_,&local_f8,local_108);
            lVar9 = lVar9 + uVar10;
            uVar7 = uVar11;
            if ((char)local_168 == '\x01') goto LAB_00172145;
          }
        }
      }
                    /* try { // try from 0017208b to 001720aa has its CatchHandler @ 001721fd */
      _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E(&local_168,lVar9,uVar7,&local_f8,local_108)
      ;
      if ((char)local_168 == '\x01') {
                    /* try { // try from 001721e0 to 001721e5 has its CatchHandler @ 001721f3 */
        uVar6 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                )(puStack_160);
        goto LAB_00172156;
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                (local_118,lVar5);
      uVar10 = uVar10 - uVar7;
    }
    _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17ha5583a5337080667E
              (&local_f8);
    _ZN4core3ptr58drop_in_place_LT_uu_split__filenames__FilenameIterator_GT_17h3a3dca25075fae6fE
              (local_90,local_88);
    puStack_160 = (undefined *)0x0;
  }
  return puStack_160;
}