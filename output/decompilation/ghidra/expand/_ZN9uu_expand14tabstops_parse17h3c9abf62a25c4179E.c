void _ZN9uu_expand14tabstops_parse17h3c9abf62a25c4179E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_88;
  char local_80;
  char local_7f;
  ulong local_78;
  undefined7 local_70;
  undefined uStack_69;
  undefined7 uStack_68;
  undefined uStack_61;
  undefined auStack_60 [40];
  undefined2 local_38;
  
  auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h3f8868b9dde7cd08E
                      (param_2,param_3);
  if (auVar13._8_8_ == 0) {
    puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
    if (puVar6 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ef0a8)(8,8);
      goto LAB_0015c681;
    }
    *puVar6 = 8;
    *(undefined *)(param_1 + 1) = 0;
    param_1[2] = 1;
    param_1[3] = puVar6;
    param_1[4] = 1;
    goto LAB_0015c482;
  }
  local_b0 = 0;
  puStack_a8 = (undefined8 *)&DAT_00000008;
  local_a0 = 0;
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h6a95b1eba25f4921E
            (auStack_60,auVar13._0_8_);
  local_70 = 0;
  uStack_69 = 0;
  uStack_68 = auVar13._8_7_;
  uStack_61 = auVar13[0xf];
  local_38 = 1;
  auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hd5aa6ed9cb5d9e11E(&local_70);
  if (auVar13._0_8_ == 0) {
LAB_0015c404:
    puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
    if (puVar6 == (undefined8 *)0x0) {
LAB_0015c681:
                    /* try { // try from 0015c681 to 0015c6ac has its CatchHandler @ 0015c6c1 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ef0a8)(8,8);
LAB_0015c6ad:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *puVar6 = 8;
    _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hc30dd728aaf6d8a0E
              (local_b0,puStack_a8);
    local_b0 = 1;
    local_a0 = 1;
    puStack_a8 = puVar6;
LAB_0015c44c:
    cVar4 = '\0';
  }
  else {
    bVar12 = false;
    cVar4 = '\0';
    do {
      lVar10 = auVar13._8_8_;
      while (lVar10 != 0) {
        pcVar5 = auVar13._0_8_;
        cVar9 = '\x02';
        if (*pcVar5 != '+') {
          if (*pcVar5 != '/') {
                    /* try { // try from 0015c330 to 0015c3ab has its CatchHandler @ 0015c6bf */
            (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ef030)
                      (&local_c8,pcVar5);
            auVar13 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8151a0d689da0fc1E(&local_c8);
            uVar8 = auVar13._0_8_;
            _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                      (&local_80,uVar8);
            if (local_80 == '\x01') {
              if (local_7f != '\x02') {
                auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h181a115f6b6d6f52E
                                    (uVar8,auVar13._8_8_);
                uVar11 = auVar13._8_8_;
                uVar8 = auVar13._0_8_;
                local_c8 = 0;
                uVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2f,&local_c8);
                cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha15791ca10e43217E
                                  (uVar8,uVar11,uVar7);
                if (cVar4 == '\0') {
                  local_c8 = 0;
                  uVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_c8)
                  ;
                  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha15791ca10e43217E
                                    (uVar8,uVar11,uVar7);
                  if (cVar4 == '\0') {
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                              (&local_c8,uVar8,uVar11);
                    param_1[3] = local_b8;
                    *(undefined4 *)(param_1 + 1) = local_c8;
                    *(undefined4 *)((long)param_1 + 0xc) = uStack_c4;
                    *(undefined4 *)(param_1 + 2) = uStack_c0;
                    *(undefined4 *)((long)param_1 + 0x14) = uStack_bc;
                    uVar8 = 0x8000000000000000;
                    goto LAB_0015c65a;
                  }
                }
                lVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                   (uVar8,uVar11);
                if (lVar10 != 0) {
                  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                            (&local_c8,lVar10,1);
                  uVar3 = local_b8;
                  uVar7 = CONCAT44(uStack_c4,local_c8);
                  uVar2 = CONCAT44(uStack_bc,uStack_c0);
                    /* try { // try from 0015c5a3 to 0015c5b0 has its CatchHandler @ 0015c6af */
                  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                            (&local_c8,uVar8,uVar11);
                  param_1[5] = local_b8;
                  *(undefined4 *)(param_1 + 3) = local_c8;
                  *(undefined4 *)((long)param_1 + 0x1c) = uStack_c4;
                  *(undefined4 *)(param_1 + 4) = uStack_c0;
                  *(undefined4 *)((long)param_1 + 0x24) = uStack_bc;
                  *param_1 = uVar7;
                  param_1[1] = uVar2;
                  param_1[2] = uVar3;
                  goto LAB_0015c65d;
                }
                (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ef2b8)
                          (uVar8,uVar11,0,1,&PTR_s_src_uu_expand_src_expand_rs_001e8860);
                goto LAB_0015c6ad;
              }
                    /* try { // try from 0015c4a8 to 0015c594 has its CatchHandler @ 0015c6c1 */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                        (&local_c8,uVar8,auVar13._8_8_);
              param_1[3] = local_b8;
              *(undefined4 *)(param_1 + 1) = local_c8;
              *(undefined4 *)((long)param_1 + 0xc) = uStack_c4;
              *(undefined4 *)(param_1 + 2) = uStack_c0;
              *(undefined4 *)((long)param_1 + 0x14) = uStack_bc;
              uVar8 = 0x8000000000000004;
            }
            else if (local_78 == 0) {
              uVar8 = 0x8000000000000003;
            }
            else {
              if ((puStack_a8 + local_a0 + -1 == (ulong *)0x0 || local_a0 == 0) ||
                 ((ulong)puStack_a8[local_a0 + -1] < local_78)) {
                if (bVar12) {
                  if (cVar4 == '\x01') {
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                              (&local_c8,"/",1);
                  }
                  else {
                    /* try { // try from 0015c5e1 to 0015c63a has its CatchHandler @ 0015c6c1 */
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                              (&local_c8,"+",1);
                  }
                  local_88 = local_b8;
                  *param_1 = 0x8000000000000002;
                  *(undefined4 *)(param_1 + 1) = local_c8;
                  *(undefined4 *)((long)param_1 + 0xc) = uStack_c4;
                  *(undefined4 *)(param_1 + 2) = uStack_c0;
                  *(undefined4 *)((long)param_1 + 0x14) = uStack_bc;
                  param_1[3] = local_b8;
                  goto LAB_0015c65d;
                }
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h894fc2c36cd49a87E(&local_b0);
                bVar12 = cVar4 != '\0';
                break;
              }
              uVar8 = 0x8000000000000005;
            }
LAB_0015c65a:
            *param_1 = uVar8;
LAB_0015c65d:
            _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hc30dd728aaf6d8a0E
                      (local_b0,puStack_a8);
            return;
          }
          cVar9 = '\x01';
        }
        lVar10 = auVar13._8_8_ + -1;
        auVar13._8_8_ = lVar10;
        auVar13._0_8_ = pcVar5 + 1;
        cVar4 = cVar9;
      }
      auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hd5aa6ed9cb5d9e11E(&local_70);
    } while (auVar13._0_8_ != 0);
    if (local_a0 == 1) goto LAB_0015c44c;
    if (local_a0 == 0) goto LAB_0015c404;
  }
  uStack_69 = (undefined)local_b0;
  uStack_68 = (undefined7)((ulong)local_b0 >> 8);
  uStack_61 = SUB81(puStack_a8,0);
  *(char *)(param_1 + 1) = cVar4;
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_69,local_70);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_61,uStack_68);
  param_1[3] = puStack_a8;
  param_1[4] = local_a0;
LAB_0015c482:
  *param_1 = 0x8000000000000006;
  return;
}