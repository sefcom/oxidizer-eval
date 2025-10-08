undefined  [16]
_ZN7uu_uniq4Uniq10print_uniq17hec9bb2bfe86d6e3cE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_RBP;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 local_b0;
  long local_a0;
  undefined local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_4c = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    local_4c = 0;
  }
  _ZN3std2io7BufRead5split17h1b3d1f8595d96889E(&local_48);
                    /* try { // try from 0015d06e to 0015d0b1 has its CatchHandler @ 0015d6f3 */
  _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5420a7eb50f49386E
            (&local_80,&local_48);
  local_a0 = CONCAT71(uStack_7f,local_80);
  local_68 = -0x7fffffffffffffff;
  if (local_a0 == -0x7fffffffffffffff) {
    uVar7 = 0;
LAB_0015d0b8:
    auVar12._8_8_ = unaff_RBP;
    auVar12._0_8_ = uVar7;
                    /* try { // try from 0015d0c8 to 0015d0cc has its CatchHandler @ 0015d6e0 */
    _ZN4core3ptr43drop_in_place_LT_std__io__error__Custom_GT_17h7819be45b555a90bE(local_48,local_40)
    ;
    goto LAB_0015d69a;
  }
  if (local_a0 == -0x8000000000000000) {
    auVar12 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001fc2f0
              )();
    unaff_RBP = auVar12._8_8_;
    uVar7 = auVar12._0_8_;
    goto LAB_0015d0b8;
  }
  local_b0 = local_78;
  local_60 = local_48;
  local_58 = local_40;
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x31);
  uVar7 = local_70;
  if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        uVar10 = 1;
        uVar9 = 0;
        while( true ) {
                    /* try { // try from 0015d4a8 to 0015d4b9 has its CatchHandler @ 0015d6d3 */
          _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5420a7eb50f49386E
                    (&local_80,&local_48);
          uVar5 = local_70;
          uVar11 = local_78;
          lVar8 = CONCAT71(uStack_7f,local_80);
          if (lVar8 == local_68) break;
          if (lVar8 == -0x8000000000000000) goto LAB_0015d5eb;
                    /* try { // try from 0015d4dd to 0015d524 has its CatchHandler @ 0015d6dc */
          cVar6 = (*(code *)PTR__ZN7uu_uniq4Uniq8cmp_keys17h53e47a450c9b1869E_001fc2f8)
                            (param_1,local_b0,uVar7,local_78,local_70);
          if (cVar6 == '\0') {
            uVar10 = uVar10 + 1;
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                      (lVar8,uVar11);
          }
          else {
            if (uVar10 != 0) {
              auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                                  (param_1,param_4,param_5,local_b0,uVar7,uVar10,(int)uVar9);
              uVar9 = 1;
              if (auVar12._0_8_ != 0) goto LAB_0015d26a;
            }
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                      (local_a0,local_b0);
            uVar10 = 1;
            uVar7 = uVar5;
            local_b0 = uVar11;
            local_a0 = lVar8;
          }
        }
      }
      else {
        uVar10 = 1;
        uVar9 = 0;
        while( true ) {
                    /* try { // try from 0015d3b8 to 0015d3c9 has its CatchHandler @ 0015d6d5 */
          _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5420a7eb50f49386E
                    (&local_80,&local_48);
          uVar5 = local_70;
          uVar11 = local_78;
          lVar8 = CONCAT71(uStack_7f,local_80);
          if (lVar8 == local_68) break;
          if (lVar8 == -0x8000000000000000) goto LAB_0015d5eb;
                    /* try { // try from 0015d3ed to 0015d438 has its CatchHandler @ 0015d6de */
          cVar6 = (*(code *)PTR__ZN7uu_uniq4Uniq8cmp_keys17h53e47a450c9b1869E_001fc2f8)
                            (param_1,local_b0,uVar7,local_78,local_70);
          if (cVar6 == '\0') {
            uVar10 = uVar10 + 1;
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                      (lVar8,uVar11);
          }
          else {
            if (uVar10 == 1) {
              auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                                  (param_1,param_4,param_5,local_b0,uVar7,1,(int)uVar9);
              uVar9 = 1;
              if (auVar12._0_8_ != 0) goto LAB_0015d26a;
            }
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                      (local_a0,local_b0);
            uVar10 = 1;
            uVar7 = uVar5;
            local_b0 = uVar11;
            local_a0 = lVar8;
          }
        }
      }
    }
    else {
      uVar10 = 1;
      uVar9 = 0;
      while( true ) {
                    /* try { // try from 0015d2b8 to 0015d2c9 has its CatchHandler @ 0015d6ef */
        _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5420a7eb50f49386E
                  (&local_80,&local_48);
        uVar5 = local_70;
        uVar11 = local_78;
        lVar8 = CONCAT71(uStack_7f,local_80);
        if (lVar8 == local_68) break;
        if (lVar8 == -0x8000000000000000) goto LAB_0015d5eb;
                    /* try { // try from 0015d2ed to 0015d33e has its CatchHandler @ 0015d6f1 */
        cVar6 = (*(code *)PTR__ZN7uu_uniq4Uniq8cmp_keys17h53e47a450c9b1869E_001fc2f8)
                          (param_1,local_b0,uVar7,local_78,local_70);
        if (cVar6 == '\0') {
          uVar10 = uVar10 + 1;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                    (lVar8,uVar11);
        }
        else {
          if (1 < uVar10 && (bVar2 & 1) == 0) {
            auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                                (param_1,param_4,param_5,local_b0,uVar7,uVar10,(int)uVar9);
            uVar9 = 1;
            if (auVar12._0_8_ != 0) goto LAB_0015d26a;
          }
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                    (local_a0,local_b0);
          uVar10 = 1;
          uVar7 = uVar5;
          local_b0 = uVar11;
          local_a0 = lVar8;
        }
      }
    }
  }
  else {
    uVar10 = 1;
    uVar9 = 0;
    while( true ) {
                    /* try { // try from 0015d157 to 0015d16d has its CatchHandler @ 0015d717 */
      _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5420a7eb50f49386E
                (&local_80,&local_48);
      uVar5 = local_70;
      uVar11 = local_78;
      lVar8 = CONCAT71(uStack_7f,local_80);
      if (lVar8 == local_68) break;
      if (lVar8 == -0x8000000000000000) goto LAB_0015d5eb;
                    /* try { // try from 0015d191 to 0015d25a has its CatchHandler @ 0015d71c */
      cVar6 = (*(code *)PTR__ZN7uu_uniq4Uniq8cmp_keys17h53e47a450c9b1869E_001fc2f8)
                        (param_1,local_b0,uVar7,local_78,local_70);
      if (cVar6 == '\0') {
        auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                            (param_1,param_4,param_5,local_b0,uVar7,uVar10,(int)uVar9);
        if (auVar12._0_8_ != 0) goto LAB_0015d26a;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                  (local_a0,local_b0);
        uVar10 = uVar10 + 1;
        uVar9 = 1;
        local_a0 = lVar8;
        uVar7 = uVar5;
        local_b0 = uVar11;
      }
      else {
        if (uVar10 != 0) {
          bVar3 = bVar2;
          if (uVar10 == 1) {
            bVar3 = bVar1;
          }
          if ((bVar3 & 1) == 0) {
            auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                                (param_1,param_4,param_5,local_b0,uVar7,uVar10,(int)uVar9);
            uVar9 = 1;
            if (auVar12._0_8_ != 0) goto LAB_0015d26a;
          }
        }
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                  (local_a0,local_b0);
        local_b0 = uVar11;
        uVar10 = 1;
        local_a0 = lVar8;
        uVar7 = uVar5;
      }
    }
  }
                    /* try { // try from 0015d565 to 0015d5dc has its CatchHandler @ 0015d6d7 */
  _ZN4core3ptr43drop_in_place_LT_std__io__error__Custom_GT_17h7819be45b555a90bE(local_60,local_58);
  if (uVar10 == 0) {
LAB_0015d598:
    if (((*(char *)(param_1 + 0x36) == '\0') || (*(char *)(param_1 + 0x36) == '\x03')) &&
       (uVar9 != 0)) {
LAB_0015d5b8:
      local_80 = (undefined)local_4c;
      uVar7 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6df7c91e7a49ffa3E
                        (param_4,param_5,&local_80,1);
      lVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6fd0b16c849806ebE
                        (uVar7);
      if (lVar8 == 0) goto LAB_0015d669;
    }
    else {
LAB_0015d669:
      uVar7 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_5flush17h3c65bab2438362f0E
                        (param_4,param_5);
      lVar8 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8767c281263d92b0E
                        (uVar7);
      if (lVar8 == 0) {
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
                  (local_a0,local_b0);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        auVar12 = auVar4 << 0x40;
        goto LAB_0015d69a;
      }
    }
    auVar12._8_8_ =
         &
         PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hd98545f0722130d6E_001f4530
    ;
    auVar12._0_8_ = lVar8;
  }
  else {
    if (uVar10 == 1) {
      bVar2 = bVar1;
    }
    if ((bVar2 & 1) != 0) goto LAB_0015d598;
    auVar12 = _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
                        (param_1,param_4,param_5,local_b0,uVar7,uVar10,(int)uVar9);
    if (auVar12._0_8_ == 0) {
      if ((*(char *)(param_1 + 0x36) == '\x03') || (*(char *)(param_1 + 0x36) == '\0'))
      goto LAB_0015d5b8;
      goto LAB_0015d669;
    }
  }
  goto LAB_0015d68b;
LAB_0015d5eb:
                    /* try { // try from 0015d5eb to 0015d5fd has its CatchHandler @ 0015d6d1 */
  auVar12 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001fc2f0
            )(local_78);
  goto LAB_0015d604;
LAB_0015d26a:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E(lVar8,uVar11);
LAB_0015d604:
                    /* try { // try from 0015d604 to 0015d67b has its CatchHandler @ 0015d6d7 */
  _ZN4core3ptr43drop_in_place_LT_std__io__error__Custom_GT_17h7819be45b555a90bE(local_60,local_58);
LAB_0015d68b:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
            (local_a0,local_b0);
LAB_0015d69a:
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h26f815af2d05ced1E
            (param_4,param_5);
  return auVar12;
}