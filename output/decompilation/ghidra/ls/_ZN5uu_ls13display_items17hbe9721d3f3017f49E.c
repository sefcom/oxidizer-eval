undefined  [16]
_ZN5uu_ls13display_items17hbe9721d3f3017f49E
          (undefined8 *******param_1,undefined8 *******param_2,long param_3,
          undefined8 *******param_4,undefined8 param_5,long param_6)

{
  ushort uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_RBP;
  undefined8 *******pppppppuVar12;
  undefined auVar13 [16];
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar14;
  undefined8 *****local_1b8;
  undefined8 uStack_1b0;
  undefined8 ******local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 ******local_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******local_178;
  code *pcStack_170;
  undefined8 ******local_160;
  undefined8 local_158;
  long local_150;
  undefined8 ******local_148;
  code *pcStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 ******local_128;
  code *pcStack_120;
  undefined8 local_118;
  undefined8 ******local_108;
  undefined8 ******local_100;
  undefined8 ******ppppppuStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 ******local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 ******local_a8;
  undefined8 ******local_a0;
  undefined8 local_68;
  undefined8 *****local_60;
  undefined8 local_58;
  undefined8 ******local_50;
  undefined local_48 [24];
  
  pppppppuVar12 = param_1 + (long)param_2 * 0x26;
  local_158 = param_5;
  local_150 = param_6;
  local_a8 = param_1;
  local_a0 = pppppppuVar12;
  bVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h09eed60290850493E
                    (&local_a8,param_3);
  local_160 = param_4;
  if (*(byte *)(param_3 + 0xf8) == 1) {
    _ZN5uu_ls28calculate_padding_collection17h885b95310ac7cc45E
              (&local_a8,param_1,param_2,param_3,param_4);
    ppppppuVar4 = local_160;
    local_100 = param_1;
    ppppppuStack_f8 = pppppppuVar12;
    if (*(char *)(param_3 + 0xe9) == '\0' && *(char *)(param_3 + 0xea) == '\0') {
      while( true ) {
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 0x20);
        lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                          (&local_100);
        if (lVar9 == 0) break;
        in_stack_fffffffffffffe18 = CONCAT44(uVar14,(uint)bVar6);
        auVar13 = _ZN5uu_ls17display_item_long17he4defe602b238d5aE
                            (lVar9,&local_a8,param_3,local_160,local_158,local_150,
                             in_stack_fffffffffffffe18);
        if (auVar13._0_8_ != 0) {
          return auVar13;
        }
      }
    }
    else {
      local_108 = local_a8;
      local_b0 = local_68;
      while( true ) {
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 0x20);
        lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                          (&local_100);
        if (lVar9 == 0) break;
        _ZN5uu_ls31display_additional_leading_info17hdfeacb5163c0e10bE
                  (&local_1b8,lVar9,local_108,local_b0,param_3,ppppppuVar4);
        param_2 = (undefined8 *******)local_1a8;
        auVar13._8_8_ = local_1a8;
        auVar13._0_8_ = uStack_1b0;
        if ((undefined8 ******)local_1b8 == (undefined8 ******)0x8000000000000000) {
          return auVar13;
        }
        local_188 = (undefined8 ******)local_1b8;
        ppppppuStack_180 = (undefined8 ******)uStack_1b0;
        local_178 = local_1a8;
        local_148 = &local_188;
        pcStack_140 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_1b8 = (undefined8 *****)&DAT_00123c10;
        uStack_1b0 = 1;
        local_198 = 0;
        local_1a8 = &local_148;
        uStack_1a0 = 1;
                    /* try { // try from 002297bd to 002297ca has its CatchHandler @ 0022a03d */
        lVar10 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(ppppppuVar4,&local_1b8);
        if (lVar10 != 0) {
                    /* try { // try from 00229a7b to 00229a83 has its CatchHandler @ 00229fe7 */
          auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                              (lVar10);
          goto LAB_00229a84;
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_188);
        in_stack_fffffffffffffe18 = CONCAT44(uVar14,(uint)bVar6);
        auVar13 = _ZN5uu_ls17display_item_long17he4defe602b238d5aE
                            (lVar9,&local_a8,param_3,ppppppuVar4,local_158,local_150,
                             in_stack_fffffffffffffe18);
        if (auVar13._0_8_ != 0) {
          return auVar13;
        }
      }
    }
  }
  else {
    local_108 = (undefined8 ******)CONCAT44(local_108._4_4_,(uint)*(byte *)(param_3 + 0xf8));
    if (*(char *)(param_3 + 0xeb) == '\0') {
      local_158 = 0;
    }
    else {
      local_a8 = param_1;
      local_a0 = pppppppuVar12;
      lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                        (&local_a8);
      local_158 = 1;
      unaff_RBP = 1;
      if (lVar9 != 0) {
        do {
          unaff_RBP = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E
                                (*(undefined8 *)(lVar9 + 0x40),unaff_RBP);
          lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                            (&local_a8);
        } while (lVar9 != 0);
      }
    }
    ppppppuVar4 = local_160;
    _ZN5uu_ls28calculate_padding_collection17h885b95310ac7cc45E
              (&local_a8,param_1,param_2,param_3,local_160);
    if (*(char *)(local_150 + 0x1d) != '\x02') {
      _ZN5uu_ls6colors12StyleManager12apply_normal17h404909a10cb94e2bE(&local_188,local_150);
      pcStack_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_1b8 = (undefined8 *****)&DAT_00123c10;
      uStack_1b0 = 1;
      local_198 = 0;
      local_1a8 = &local_148;
      uStack_1a0 = 1;
                    /* try { // try from 002298c0 to 002298da has its CatchHandler @ 0022a012 */
      local_148 = &local_188;
      lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(ppppppuVar4,&local_1b8);
      if (lVar9 != 0) {
        auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                            (lVar9);
LAB_00229a84:
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_188);
        return auVar13;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_188);
    }
    ppppppuVar5 = local_a8;
    local_c8 = 0;
    local_c0 = 8;
    local_b8 = 0;
    param_2 = (undefined8 *******)ppppppuVar4;
    local_188 = param_1;
    ppppppuStack_180 = pppppppuVar12;
    while (lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                             (&local_188), lVar9 != 0) {
                    /* try { // try from 00229943 to 002299fa has its CatchHandler @ 0022a04c */
      _ZN5uu_ls31display_additional_leading_info17hdfeacb5163c0e10bE
                (&local_1b8,lVar9,ppppppuVar5,local_68,param_3,param_2);
      param_2 = (undefined8 *******)local_160;
      auVar2._8_8_ = local_1a8;
      auVar2._0_8_ = uStack_1b0;
      if ((undefined8 ******)local_1b8 == (undefined8 ******)0x8000000000000000) {
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hbaa87f9dbd448729E
                  (&local_c8);
        return auVar2;
      }
      local_60 = local_1b8;
      local_58 = uStack_1b0;
      local_50 = local_1a8;
      _ZN5uu_ls17display_item_name17h2be516ffa591d327E
                (local_48,lVar9,param_3,local_158,unaff_RBP,&local_60,local_160,local_150,0);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8719a5ff12332cebE(&local_c8,local_48);
    }
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2fdd1c99928f9068E
              (&local_100,&local_c8);
    if ((int)local_108 == 0) {
      uVar14 = *(undefined4 *)(param_3 + 0xe4);
      uVar11 = 1;
    }
    else {
      if ((int)local_108 != 3) {
        if ((int)local_108 == 4) {
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                    (&local_148,&local_100);
          if ((undefined8 *******)local_148 == (undefined8 *******)0x8000000000000000) {
            sVar7 = 0;
          }
          else {
            local_178 = (undefined8 ******)local_138;
            local_188 = local_148;
            ppppppuStack_180 = (undefined8 ******)pcStack_140;
            local_128 = &local_188;
            pcStack_120 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_1b8 = (undefined8 *****)&DAT_00123c10;
            uStack_1b0 = 1;
            local_198 = 0;
            local_1a8 = &local_128;
            uStack_1a0 = 1;
                    /* try { // try from 00229cca to 00229ce4 has its CatchHandler @ 00229fcb */
            lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_2,&local_1b8);
            if (lVar9 != 0) {
              auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                  (lVar9);
                    /* try { // try from 00229ce5 to 00229cf4 has its CatchHandler @ 00229fc6 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_188);
              _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                        (&local_100);
              return auVar13;
            }
                    /* try { // try from 00229d3f to 00229d44 has its CatchHandler @ 00229fcb */
            sVar7 = _ZN10ansi_width10ansi_width17h2f2b875c576f64e5E(ppppppuStack_180,local_178);
                    /* try { // try from 00229d45 to 00229d51 has its CatchHandler @ 00229fc6 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_188)
            ;
            sVar7 = sVar7 + 2;
          }
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                    (&local_128,&local_188);
          if ((undefined8 *******)local_128 != (undefined8 *******)0x8000000000000000) {
            uVar1 = *(ushort *)(param_3 + 0xe4);
            param_2 = (undefined8 *******)&local_1b8;
            do {
              local_148 = local_128;
              pcStack_140 = pcStack_120;
              local_138 = local_118;
                    /* try { // try from 00229dd8 to 00229ea8 has its CatchHandler @ 0022a021 */
              sVar8 = _ZN10ansi_width10ansi_width17h2f2b875c576f64e5E(pcStack_120);
              local_1a8 = &local_e0;
              local_e0 = &local_148;
              if ((uVar1 == 0) || ((ushort)(sVar8 + sVar7 + 1U) <= uVar1)) {
                pcStack_d8 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_1b8 = (undefined8 *****)&PTR_DAT_00312660;
                uStack_1b0 = 1;
                local_198 = 0;
                uStack_1a0 = 1;
                lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_160,param_2);
                if (lVar9 != 0) {
                    /* try { // try from 00229f85 to 00229f98 has its CatchHandler @ 00229fbd */
                  auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                      (lVar9);
                  goto LAB_00229f99;
                }
                sVar8 = sVar7 + sVar8;
              }
              else {
                pcStack_d8 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_1b8 = (undefined8 *****)&PTR_DAT_00312650;
                uStack_1b0 = 1;
                local_198 = 0;
                uStack_1a0 = 1;
                lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_160,param_2);
                if (lVar9 != 0) {
                  auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                      (lVar9);
LAB_00229f99:
                    /* try { // try from 00229f9f to 00229fab has its CatchHandler @ 00229fb8 */
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                            (&local_148);
                  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                            (&local_188);
                  return auVar13;
                }
              }
                    /* try { // try from 00229eb8 to 00229ebf has its CatchHandler @ 00229fe9 */
              sVar7 = sVar8 + 2;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_148);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                        (&local_128,&local_188);
            } while ((undefined8 *******)local_128 != (undefined8 *******)0x8000000000000000);
          }
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                    (&local_188);
          if (sVar7 != 0) {
            local_188 = (undefined8 ******)(param_3 + 0xfa);
            ppppppuStack_180 =
                 (undefined8 ******)
                 _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
            ;
            local_1b8 = (undefined8 *****)&DAT_00123c10;
            uStack_1b0 = 1;
            local_198 = 0;
            uStack_1a0 = 1;
            local_1a8 = &local_188;
            lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_160,&local_1b8);
            if (lVar9 != 0) {
              auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                  (lVar9);
              return auVar13;
            }
          }
        }
        else {
          uStack_130 = uStack_e8;
          uStack_12c = uStack_e4;
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                    (&local_e0,&local_148);
          if ((undefined8 *******)local_e0 != (undefined8 *******)0x8000000000000000) {
            param_2 = (undefined8 *******)&DAT_00128c70;
            do {
              local_118 = local_d0;
              ppppppuStack_180 =
                   (undefined8 ******)
                   _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              pcStack_170 = 
              _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
              ;
              local_1b8 = (undefined8 *****)&DAT_00128c70;
              uStack_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_188;
              uStack_1a0 = 2;
              local_188 = &local_128;
              local_178 = (undefined8 *******)(param_3 + 0xfa);
                    /* try { // try from 00229c0a to 00229c19 has its CatchHandler @ 00229ff3 */
              lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_160,&local_1b8);
              if (lVar9 != 0) {
                    /* try { // try from 00229d07 to 00229d0f has its CatchHandler @ 00229fc4 */
                auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                    (lVar9);
                    /* try { // try from 00229d10 to 00229d22 has its CatchHandler @ 00229fbf */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                          (&local_128);
                _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                          (&local_148);
                return auVar13;
              }
                    /* try { // try from 00229c23 to 00229c2a has its CatchHandler @ 00229fee */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E
                        (&local_128);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                        (&local_e0,&local_148);
            } while ((undefined8 *******)local_e0 != (undefined8 *******)0x8000000000000000);
          }
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                    (&local_148);
        }
        goto LAB_00229f6a;
      }
      uVar14 = *(undefined4 *)(param_3 + 0xe4);
      uVar11 = 0;
    }
    auVar13 = _ZN5uu_ls12display_grid17h3c5e157ceab431f0E(&local_1b8,uVar14,uVar11,param_2,bVar6);
    if (auVar13._0_8_ != 0) {
      return auVar13;
    }
  }
LAB_00229f6a:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}