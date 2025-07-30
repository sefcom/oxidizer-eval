undefined8 *
_ZN7flealib10screenshot10Screenshot15take_screenshot17h7d64ee0b0da2be86E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ushort uVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined auVar13 [16];
  undefined **local_198;
  undefined8 *local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 **local_170;
  undefined8 uStack_168;
  ulong local_160;
  char cStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined local_110 [16];
  undefined8 local_100;
  undefined8 *local_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *local_38;
  
  auVar13 = _ZN4core4time8Duration3new17hf1673e7a1b856ad0E(1,0);
  auVar13 = _ZN4core4time8Duration11checked_div17hd212bdea897f181fE
                      (auVar13._0_8_,auVar13._8_8_ & 0xffffffff);
  if (auVar13._8_4_ == 1000000000) {
    (*(code *)PTR__ZN4core6option13expect_failed17he85e4628a9d24507E_00826ad0)
              (&DAT_0016ef63,0x35,&PTR_DAT_0080bba0);
  }
  else {
    (*(code *)PTR__ZN5scrap6common3x117Display7primary17h19547f8d7371ee94E_008288d8)(&local_e0);
    if (local_d0._4_1_ == '\x02') {
      local_190 = local_e0;
      lVar7 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
      if (lVar7 != 0) {
                    /* try { // try from 004a46b0 to 004a46c1 has its CatchHandler @ 004a4fbd */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                  (&local_140,&local_190);
        local_110._8_8_ =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E
        ;
        local_180 = (undefined **)&DAT_0014fb30;
        uStack_178 = 1;
        local_160 = 0;
        local_170 = (undefined8 **)local_110;
        uStack_168 = 1;
        local_110._0_8_ = &local_140;
                    /* try { // try from 004a470d to 004a4767 has its CatchHandler @ 004a4fae */
        local_88 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                             (&PTR_DAT_0080bcd8);
        local_a8 = &DAT_0016efd7;
        uStack_a0 = 0x13;
        local_98 = (undefined8 **)&DAT_0016efd7;
        uStack_90 = 0x13;
        _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_180,1,&local_a8);
                    /* try { // try from 004a4768 to 004a4780 has its CatchHandler @ 004a4fbd */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_140);
      }
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                (&local_180,&local_190);
      param_1[2] = local_170;
      *(undefined4 *)param_1 = (undefined4)local_180;
      *(undefined4 *)((long)param_1 + 4) = local_180._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_178;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_178._4_4_;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_190);
      return param_1;
    }
    local_38 = local_d0;
    local_48 = (undefined4)local_e0;
    uStack_44 = local_e0._4_4_;
    uStack_40 = (undefined4)uStack_d8;
    uStack_3c = uStack_d8._4_4_;
    (*(code *)PTR__ZN5scrap6common3x118Capturer3new17h985603e55bdb23e0E_008288e0)
              (&local_180,&local_48);
    puVar4 = PTR__ZN5scrap6common3x118Capturer5frame17haadb427da3af460fE_008288e8;
    if (cStack_154 == '\x02') {
      local_198 = local_180;
      lVar7 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
      if (lVar7 != 0) {
                    /* try { // try from 004a47fe to 004a4810 has its CatchHandler @ 004a4fa1 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                  (local_110,&local_198);
        local_188 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
        local_140 = &DAT_0014fb30;
        uStack_138 = 1;
        local_120 = 0;
        local_130 = &local_190;
        local_128 = 1;
        local_190 = (undefined8 *)local_110;
                    /* try { // try from 004a4853 to 004a48ad has its CatchHandler @ 004a4f8a */
        local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                             (&PTR_DAT_0080bcc0);
        local_e0 = (undefined8 *)&DAT_0016efd7;
        uStack_d8 = 0x13;
        local_d0 = &DAT_0016efd7;
        local_c8 = 0x13;
        _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_140,1,&local_e0);
                    /* try { // try from 004a48ae to 004a48c7 has its CatchHandler @ 004a4fa1 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_110);
      }
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                (&local_140,&local_198);
      param_1[2] = local_130;
      *(undefined4 *)param_1 = (undefined4)local_140;
      *(undefined4 *)((long)param_1 + 4) = local_140._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_138;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_138._4_4_;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_198);
      return param_1;
    }
    local_78 = local_150;
    uStack_70 = uStack_148;
    local_88 = local_160;
    local_98 = local_170;
    uStack_90 = uStack_168;
    local_f0 = local_160 >> 0x20 & 0xffff;
    local_b0 = local_160 >> 0x30;
    local_f8 = param_1;
    local_60 = param_3;
    local_58 = param_4;
                    /* try { // try from 004a4970 to 004a497a has its CatchHandler @ 004a4fde */
    while ((*(code *)puVar4)(&local_190,&local_a8), pcVar3 = local_188, puVar11 = local_190,
          local_190 == (undefined8 *)0x0) {
      local_e8 = local_188;
      cVar5 = _ZN3std2io5error5Error4kind17h7f0d5435ec1cf07fE();
      if (cVar5 != '\r') {
                    /* try { // try from 004a4b79 to 004a4b8f has its CatchHandler @ 004a4f7b */
        local_198 = (undefined **)
                    (*(code *)PTR__ZN3std2io5error5Error3new17h73bba56a22ab7bbeE_00826eb0)
                              (0x28,&DAT_0016efea,0x22);
        puVar11 = local_f8;
        lVar7 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
        if (lVar7 != 0) {
                    /* try { // try from 004a4bb1 to 004a4bc3 has its CatchHandler @ 004a4f7d */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                    (&local_e0,&local_198);
          local_110._8_8_ =
               _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E
          ;
          local_180 = (undefined **)&DAT_0014fb30;
          uStack_178 = 1;
          local_160 = 0;
          local_170 = (undefined8 **)local_110;
          uStack_168 = 1;
          local_110._0_8_ = &local_e0;
                    /* try { // try from 004a4c0f to 004a4c57 has its CatchHandler @ 004a4f5c */
          local_120 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                (&PTR_DAT_0080bca8);
          local_140 = &DAT_0016efd7;
          uStack_138 = 0x13;
          local_130 = (undefined8 **)&DAT_0016efd7;
          local_128 = 0x13;
          _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_180,1,&local_140);
                    /* try { // try from 004a4c58 to 004a4c71 has its CatchHandler @ 004a4f7d */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_e0);
        }
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                  (&local_180,&local_198);
        puVar11[2] = local_170;
        *(undefined4 *)puVar11 = (undefined4)local_180;
        *(undefined4 *)((long)puVar11 + 4) = local_180._4_4_;
        *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_178;
        *(undefined4 *)((long)puVar11 + 0xc) = uStack_178._4_4_;
                    /* try { // try from 004a4c84 to 004a4c8b has its CatchHandler @ 004a4f7b */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_198);
                    /* try { // try from 004a4c8c to 004a4c98 has its CatchHandler @ 004a4f9c */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_e8);
        goto LAB_004a4e1b;
      }
                    /* try { // try from 004a499f to 004a49aa has its CatchHandler @ 004a4fcc */
      (*(code *)PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_00828810)
                (auVar13._0_8_,auVar13._8_8_ & 0xffffffff);
                    /* try { // try from 004a49ab to 004a49b2 has its CatchHandler @ 004a4fde */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_e8);
    }
    uVar8 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
    uVar9 = local_b0;
    if (3 < uVar8) {
      local_180 = &PTR_DAT_0080bb80;
      uStack_178 = 1;
      local_170 = (undefined8 **)&DAT_00000008;
      uStack_168 = 0;
      local_160 = 0;
                    /* try { // try from 004a49fa to 004a4a5e has its CatchHandler @ 004a4f9c */
      local_120 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                            (&PTR_DAT_0080bbb8);
      local_140 = &DAT_0016efd7;
      uStack_138 = 0x13;
      local_130 = (undefined8 **)&DAT_0016efd7;
      local_128 = 0x13;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_180,4,&local_140);
    }
    local_110 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha22eed99fdd9ad75E
                          (local_f0 * uVar9 * 4,&PTR_DAT_0080bbd0);
    local_100 = 0;
    if (uVar9 != 0) {
      if ((ulong)pcVar3 >> 0x20 == 0) {
        local_b8 = ((ulong)pcVar3 & 0xffffffff) / (uVar9 & 0xffffffff);
      }
      else {
        local_b8 = (ulong)pcVar3 / uVar9;
      }
      if (local_f0 == 0) {
        uVar8 = 0;
        do {
          uVar8 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17hda9d652f30f8fc0dE
                            (uVar8);
        } while (uVar8 < uVar9);
      }
      else {
        uVar8 = 0;
        do {
          local_50 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17hda9d652f30f8fc0dE
                               (uVar8);
          lVar7 = uVar8 * local_b8;
          uVar9 = 0;
          do {
            uVar8 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17hda9d652f30f8fc0dE
                              (uVar9);
            ppuVar10 = local_180;
            pcVar12 = (code *)(lVar7 + uVar9 * 4 + 2);
            if (pcVar3 <= pcVar12) {
              ppuVar10 = &PTR_DAT_0080bc48;
LAB_004a4f17:
                    /* try { // try from 004a4f17 to 004a4f1f has its CatchHandler @ 004a4fe5 */
              (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h8f7cc6d356d411ddE_008266d0)
                        (pcVar12,pcVar3,ppuVar10);
              goto LAB_004a4f48;
            }
            pcVar1 = (code *)(lVar7 + uVar9 * 4);
            pcVar12 = pcVar1 + 1;
            if (pcVar3 <= pcVar12) {
              ppuVar10 = &PTR_DAT_0080bc60;
              goto LAB_004a4f17;
            }
            if (pcVar3 <= pcVar1) {
              ppuVar10 = &PTR_DAT_0080bc78;
              pcVar12 = pcVar1;
              goto LAB_004a4f17;
            }
            uVar2 = *(ushort *)((long)puVar11 + (long)pcVar1);
            local_180._4_4_ = SUB84(ppuVar10,4);
            local_180._0_4_ =
                 CONCAT13(0xff,CONCAT21(uVar2 << 8 | uVar2 >> 8,
                                        *(code *)((long)puVar11 + (long)(pcVar1 + 2))));
                    /* try { // try from 004a4b32 to 004a4b4d has its CatchHandler @ 004a4fe3 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                      (local_110,&local_180,4,&PTR_DAT_0080bc90);
            uVar9 = uVar8;
          } while (uVar8 < local_f0);
          uVar8 = local_50;
          uVar9 = local_b0;
        } while (local_50 < local_b0);
      }
                    /* try { // try from 004a4ccd to 004a4d19 has its CatchHandler @ 004a4fe5 */
      _ZN3std2fs4File6create17hefcfd813751427cbE(&local_180,local_60,local_58);
      puVar11 = local_f8;
      uVar6 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2d27d424be40442dE(&local_180);
      local_198 = (undefined **)
                  _ZN5repng6encode17h8d1eb261549b8becE
                            (uVar6,local_f0,uVar9 & 0xffffffff,local_110._8_8_,local_100);
      if (local_198 == (undefined **)0x0) {
        uVar9 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
        if (3 < uVar9) {
          local_180 = &PTR_DAT_0080bb90;
          uStack_178 = 1;
          local_170 = (undefined8 **)&DAT_00000008;
          uStack_168 = 0;
          local_160 = 0;
                    /* try { // try from 004a4e7d to 004a4ec5 has its CatchHandler @ 004a4fe5 */
          local_120 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                (&PTR_DAT_0080bc18);
          local_140 = &DAT_0016efd7;
          uStack_138 = 0x13;
          local_130 = (undefined8 **)&DAT_0016efd7;
          local_128 = 0x13;
          _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_180,4,&local_140);
        }
                    /* try { // try from 004a4ec6 to 004a4ed2 has its CatchHandler @ 004a4f9c */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(local_110);
        puVar11 = local_f8;
        *local_f8 = 0x8000000000000000;
        _ZN4core3ptr49drop_in_place_LT_scrap__common__x11__Capturer_GT_17h1e7633a1e0d8be74E
                  (&local_a8);
      }
      else {
        lVar7 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
        if (lVar7 != 0) {
                    /* try { // try from 004a4d3c to 004a4d4e has its CatchHandler @ 004a4f6e */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                    (&local_e0,&local_198);
          local_188 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
          local_180 = (undefined **)&DAT_0014fb30;
          uStack_178 = 1;
          local_160 = 0;
          local_170 = &local_190;
          uStack_168 = 1;
          local_190 = &local_e0;
                    /* try { // try from 004a4d91 to 004a4dd9 has its CatchHandler @ 004a4f4a */
          local_120 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                (&PTR_DAT_0080bc30);
          local_140 = &DAT_0016efd7;
          uStack_138 = 0x13;
          local_130 = (undefined8 **)&DAT_0016efd7;
          local_128 = 0x13;
          _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_180,1,&local_140);
                    /* try { // try from 004a4dda to 004a4df3 has its CatchHandler @ 004a4f6e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_e0);
        }
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                  (&local_180,&local_198);
        puVar11[2] = local_170;
        *(undefined4 *)puVar11 = (undefined4)local_180;
        *(undefined4 *)((long)puVar11 + 4) = local_180._4_4_;
        *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_178;
        *(undefined4 *)((long)puVar11 + 0xc) = uStack_178._4_4_;
                    /* try { // try from 004a4e06 to 004a4e0d has its CatchHandler @ 004a4fe5 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_198);
                    /* try { // try from 004a4e0e to 004a4e1a has its CatchHandler @ 004a4f9c */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(local_110);
LAB_004a4e1b:
        _ZN4core3ptr49drop_in_place_LT_scrap__common__x11__Capturer_GT_17h1e7633a1e0d8be74E
                  (&local_a8);
        puVar11 = local_f8;
      }
      return puVar11;
    }
  }
                    /* try { // try from 004a4f3b to 004a4f47 has its CatchHandler @ 004a4fe5 */
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc6c4b1cee92020f0E_00826ad8)
            (&PTR_DAT_0080bbe8);
LAB_004a4f48:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}