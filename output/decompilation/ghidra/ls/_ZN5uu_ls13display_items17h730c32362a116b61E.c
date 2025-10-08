long _ZN5uu_ls13display_items17h730c32362a116b61E
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined uVar9;
  short sVar10;
  short sVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_RBP;
  undefined8 *******local_168;
  code *pcStack_160;
  undefined8 *******local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *******local_138;
  code *pcStack_130;
  undefined8 *******local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_110;
  undefined8 *******local_108;
  code *pcStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 ******local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_c8 = param_1 + param_2 * 0x130;
  local_110 = param_5;
  local_90 = param_1;
  local_88 = local_c8;
  uVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17ha80bfd4d0e548398E
                    (&local_90,param_3);
  if (*(byte *)(param_3 + 0x100) == 1) {
    _ZN5uu_ls28calculate_padding_collection17h3b8c962303b7ca71E
              (&local_90,param_1,param_2,param_3,param_4);
    bVar2 = *(byte *)(param_3 + 0xf2);
    local_e8 = local_90;
    local_a8 = local_50;
    bVar1 = *(byte *)(param_3 + 0xf1);
    while( true ) {
      if (param_1 == local_c8) break;
      if (((bVar2 | bVar1) & 1) != 0) {
        _ZN5uu_ls31display_additional_leading_info17h6c0a89969d523ee6E
                  (&local_168,param_1,local_e8,local_a8,param_3,param_4);
        if (local_168 == (undefined8 *******)0x8000000000000000) {
          return (long)pcStack_160;
        }
        local_138 = local_168;
        pcStack_130 = pcStack_160;
        local_128 = local_158;
        local_108 = &local_138;
        pcStack_100 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_168 = (undefined8 *******)&DAT_001cf290;
        pcStack_160 = (code *)0x1;
        uStack_148 = 0;
        local_158 = &local_108;
        uStack_150 = 1;
                    /* try { // try from 0029c631 to 0029c63b has its CatchHandler @ 0029ce74 */
        lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
        if (lVar12 != 0) {
                    /* try { // try from 0029c64a to 0029c652 has its CatchHandler @ 0029ce27 */
          lVar12 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                   )(lVar12);
          goto LAB_0029c768;
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_138);
      }
      lVar12 = _ZN5uu_ls17display_item_long17hcd44f8af7a6e6b10E
                         (param_1,&local_90,param_3,param_4,local_110,uVar9);
      param_1 = param_1 + 0x130;
      if (lVar12 != 0) {
        return lVar12;
      }
    }
  }
  else {
    local_e8 = CONCAT44(local_e8._4_4_,(uint)*(byte *)(param_3 + 0x100));
    if (*(char *)(param_3 + 0xf3) == '\x01') {
      if (param_2 == 0) {
        unaff_RBP = 1;
        local_110 = 1;
      }
      else {
        local_110 = 1;
        lVar12 = 0;
        unaff_RBP = 1;
        do {
          unaff_RBP = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E
                                (*(undefined8 *)(param_1 + 0x40 + lVar12),unaff_RBP);
          lVar12 = lVar12 + 0x130;
        } while (param_2 * 0x130 - lVar12 != 0);
      }
    }
    else {
      local_110 = 0;
    }
    _ZN5uu_ls28calculate_padding_collection17h3b8c962303b7ca71E
              (&local_90,param_1,param_2,param_3,param_4);
    if (*(char *)(param_4 + 0x85) != '\x02') {
      _ZN5uu_ls6colors12StyleManager12apply_normal17h69c01341e2d260d1E(&local_138,param_4 + 0x68);
      pcStack_100 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_168 = (undefined8 *******)&DAT_001cf290;
      pcStack_160 = (code *)0x1;
      uStack_148 = 0;
      local_158 = &local_108;
      uStack_150 = 1;
                    /* try { // try from 0029c74d to 0029c767 has its CatchHandler @ 0029ce38 */
      local_108 = &local_138;
      lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
      if (lVar12 != 0) {
        lVar12 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                 )(lVar12);
LAB_0029c768:
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_138);
        return lVar12;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_138);
    }
    lVar12 = local_90;
    local_c0 = 0;
    local_b8 = 8;
    local_b0 = 0;
    while (param_1 != local_c8) {
                    /* try { // try from 0029c7e9 to 0029c805 has its CatchHandler @ 0029ce9a */
      _ZN5uu_ls31display_additional_leading_info17h6c0a89969d523ee6E
                (&local_168,param_1,lVar12,local_50,param_3,param_4);
      pcVar4 = pcStack_160;
      if (local_168 == (undefined8 *******)0x8000000000000000) {
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h865e83a487f9068cE
                  (&local_c0);
        return (long)pcVar4;
      }
      local_138 = local_168;
      pcStack_130 = pcStack_160;
      local_128 = local_158;
                    /* try { // try from 0029c837 to 0029c83b has its CatchHandler @ 0029ce89 */
      pcStack_160 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h527f0ebd9ed9715cE();
      local_168 = (undefined8 *******)0x0;
      local_158 = (undefined8 *******)&DAT_00386c80;
                    /* try { // try from 0029c856 to 0029c880 has its CatchHandler @ 0029ce98 */
      _ZN5uu_ls17display_item_name17h23801d128c21da3cE
                (local_48,param_1,param_3,local_110,unaff_RBP,&local_138,param_4,&local_168);
                    /* try { // try from 0029c881 to 0029c890 has its CatchHandler @ 0029ce9a */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he82c9f4c27ec82acE(&local_c0,local_48);
      param_1 = param_1 + 0x130;
    }
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc04104682af7dc00E
              (&local_108,&local_c0);
    if ((int)local_e8 == 0) {
      local_168 = local_108;
      pcStack_160 = pcStack_100;
      lVar12 = _ZN5uu_ls12display_grid17h7f8f7fd1cab815f6E
                         (&local_168,*(undefined4 *)(param_3 + 0xec),1,param_4,uVar9,
                          *(undefined8 *)(param_3 + 0xe0));
    }
    else {
      if ((int)local_e8 != 3) {
        if ((int)local_e8 != 4) {
          uStack_120 = uStack_f0;
          uStack_11c = uStack_ec;
          local_138 = local_108;
          pcStack_130 = pcStack_100;
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                    (&local_e0,&local_138);
          if (local_e0 != -0x8000000000000000) {
            do {
              uVar7 = local_d8;
              lVar12 = local_e0;
                    /* try { // try from 0029ca50 to 0029caba has its CatchHandler @ 0029ce3a */
              lVar13 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_4,local_d8,local_d0);
              if (lVar13 != 0) {
                    /* try { // try from 0029cdbd to 0029cdd0 has its CatchHandler @ 0029ce05 */
                lVar13 = (*(code *)
                           PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                         )(lVar13);
LAB_0029cdd1:
                _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                          (lVar12,uVar7);
                _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                          (&local_138);
                return lVar13;
              }
              local_98 = 
              PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0048fb80
              ;
              local_168 = (undefined8 *******)&DAT_001cf290;
              pcStack_160 = (code *)0x1;
              uStack_148 = 0;
              uStack_150 = 1;
              local_158 = &local_a0;
              local_a0 = (undefined8 ******)(param_3 + 0x102);
              lVar13 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
              if (lVar13 != 0) {
                lVar13 = (*(code *)
                           PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                         )(lVar13);
                goto LAB_0029cdd1;
              }
              _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                        (lVar12,uVar7);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                        (&local_e0,&local_138);
            } while (local_e0 != -0x8000000000000000);
          }
          _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                    (&local_138);
          return 0;
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                  (&local_138,&local_108);
        pppppppuVar6 = local_128;
        pcVar4 = pcStack_130;
        pppppppuVar5 = local_138;
        if (local_138 == (undefined8 *******)0x8000000000000000) {
          _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17hac62f4fc27395a09E
                    (0x8000000000000000,pcStack_130);
          sVar10 = 0;
        }
        else {
                    /* try { // try from 0029cb09 to 0029cb26 has its CatchHandler @ 0029ce07 */
          lVar12 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_4,pcStack_130,local_128);
          if (lVar12 != 0) {
            lVar12 = (*(code *)
                       PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                     )(lVar12);
            _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                      (pppppppuVar5,pcVar4);
            _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                      (&local_108);
            return lVar12;
          }
                    /* try { // try from 0029cb4a to 0029cb5a has its CatchHandler @ 0029ce07 */
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
                    (&local_168,pcVar4,pppppppuVar6);
                    /* try { // try from 0029cb65 to 0029cb6a has its CatchHandler @ 0029cdf4 */
          sVar10 = (*(code *)PTR__ZN10ansi_width10ansi_width17hdfda461fc20bbf8fE_0048fd48)
                             (pcStack_160,local_158);
          sVar10 = sVar10 + 2;
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
                    (&local_168);
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                    (pppppppuVar5,pcVar4);
        }
        uStack_120 = uStack_f0;
        uStack_11c = uStack_ec;
        local_138 = local_108;
        pcStack_130 = pcStack_100;
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                  (&local_e0,&local_138);
        if (local_e0 != -0x8000000000000000) {
          uVar3 = *(ushort *)(param_3 + 0xec);
          do {
            uVar8 = local_d0;
            uVar7 = local_d8;
            lVar12 = local_e0;
                    /* try { // try from 0029cbea to 0029cbfa has its CatchHandler @ 0029ce54 */
            (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
                      (&local_168,local_d8,local_d0);
                    /* try { // try from 0029cc05 to 0029cc0a has its CatchHandler @ 0029ce29 */
            sVar11 = (*(code *)PTR__ZN10ansi_width10ansi_width17hdfda461fc20bbf8fE_0048fd48)
                               (pcStack_160,local_158);
            _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
                      (&local_168);
            if ((uVar3 == 0) || ((ushort)(sVar10 + sVar11 + 1U) <= uVar3)) {
              local_168 = (undefined8 *******)&PTR_s___00386c70;
              pcStack_160 = (code *)0x1;
              local_158 = (undefined8 *******)&DAT_00000008;
              uStack_150 = 0;
              uStack_148 = 0;
              lVar13 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
              if (lVar13 != 0) goto LAB_0029cd94;
              sVar11 = sVar10 + sVar11;
            }
            else {
              local_168 = (undefined8 *******)&PTR_DAT_00386c60;
              pcStack_160 = (code *)0x1;
              local_158 = (undefined8 *******)&DAT_00000008;
              uStack_150 = 0;
              uStack_148 = 0;
                    /* try { // try from 0029cc50 to 0029ccc4 has its CatchHandler @ 0029ce54 */
              lVar13 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
              if (lVar13 != 0) goto LAB_0029cd94;
            }
            sVar10 = sVar11 + 2;
            lVar13 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_4,uVar7,uVar8);
            if (lVar13 != 0) {
LAB_0029cd94:
                    /* try { // try from 0029cd94 to 0029cd9c has its CatchHandler @ 0029ce03 */
              lVar13 = (*(code *)
                         PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                       )(lVar13);
              _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                        (lVar12,uVar7);
              _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                        (&local_138);
              return lVar13;
            }
            _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                      (lVar12,uVar7);
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6af91d0ef576531dE
                      (&local_e0,&local_138);
          } while (local_e0 != -0x8000000000000000);
        }
        _ZN4core3ptr86drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT_17h90736cdc3f1660b8E
                  (&local_138);
        if (sVar10 == 0) {
          return 0;
        }
        local_138 = (undefined8 *******)(param_3 + 0x102);
        pcStack_130 = (code *)
                      PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0048fb80
        ;
        local_168 = (undefined8 *******)&DAT_001cf290;
        pcStack_160 = (code *)0x1;
        uStack_148 = 0;
        uStack_150 = 1;
        local_158 = &local_138;
        lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_4,&local_168);
        if (lVar12 == 0) {
          return 0;
        }
        lVar12 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                 )(lVar12);
        return lVar12;
      }
      local_168 = local_108;
      pcStack_160 = pcStack_100;
      lVar12 = _ZN5uu_ls12display_grid17h7f8f7fd1cab815f6E
                         (&local_168,*(undefined4 *)(param_3 + 0xec),0,param_4,uVar9,
                          *(undefined8 *)(param_3 + 0xe0));
    }
    if (lVar12 != 0) {
      return lVar12;
    }
  }
  return 0;
}