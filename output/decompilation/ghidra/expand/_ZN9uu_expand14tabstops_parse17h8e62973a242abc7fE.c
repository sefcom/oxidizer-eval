void _ZN9uu_expand14tabstops_parse17h8e62973a242abc7fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  bool bVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined8 local_128;
  long lStack_120;
  ulong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined7 local_d8;
  undefined uStack_d1;
  undefined7 uStack_d0;
  undefined uStack_c9;
  undefined7 uStack_c8;
  undefined uStack_c1;
  undefined7 uStack_c0;
  undefined2 local_a0;
  undefined8 local_88;
  char local_78;
  char local_77;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h1edad313e4e2a03aE
                      (param_2,param_3);
  if (auVar13._8_8_ == 0) {
    puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,8);
    }
    *puVar5 = 8;
    _ZN5alloc5slice4hack8into_vec17hc80358b1381473c5E(&local_108,puVar5,1);
    uStack_c1 = (undefined)local_f8;
    uStack_c0 = (undefined7)((ulong)local_f8 >> 8);
    uStack_d1 = (undefined)local_108;
    uStack_d0 = (undefined7)(CONCAT44(uStack_104,local_108) >> 8);
    uStack_c9 = (undefined)uStack_100;
    uStack_c8 = (undefined7)(CONCAT44(uStack_fc,uStack_100) >> 8);
    *(undefined *)(param_1 + 1) = 0;
    goto LAB_001b19dc;
  }
  local_128 = 0;
  lStack_120 = 8;
  local_118 = 0;
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h40e4370e140be348E
            (&uStack_c8,auVar13._0_8_);
  local_d8 = 0;
  uStack_d1 = 0;
  uStack_d0 = auVar13._8_7_;
  uStack_c9 = auVar13[0xf];
  local_a0 = 1;
  auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h09541ba4b5d07887E(&local_d8);
  if (auVar13._0_8_ == 0) {
    cVar3 = '\0';
LAB_001b1969:
    puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 001b1c96 to 001b1cc1 has its CatchHandler @ 001b1ced */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,8);
    }
    *puVar5 = 8;
                    /* try { // try from 001b1988 to 001b1999 has its CatchHandler @ 001b1ced */
    _ZN5alloc5slice4hack8into_vec17hc80358b1381473c5E(&local_d8,puVar5,1);
                    /* try { // try from 001b199a to 001b19a3 has its CatchHandler @ 001b1cd4 */
    _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h9cac72b98b8e7a45E(&local_128);
    local_118 = CONCAT17(uStack_c1,uStack_c8);
    local_128 = CONCAT17(uStack_d1,local_d8);
    lStack_120 = CONCAT17(uStack_c9,uStack_d0);
  }
  else {
    bVar11 = false;
    cVar3 = '\0';
    do {
      uVar9 = auVar13._8_8_;
      if (uVar9 != 0) {
        uVar12 = 0;
        do {
          uVar4 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                            (uVar12);
          cVar1 = *(char *)(auVar13._0_8_ + uVar12);
          cVar2 = '\x02';
          if (cVar1 != '+') {
            if (cVar1 != '/') {
                    /* try { // try from 001b1876 to 001b18f3 has its CatchHandler @ 001b1cef */
              _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E
                        (&local_108,auVar13._0_8_ + uVar12,uVar9 - uVar12);
              auVar13 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6029b96464d79daaE(&local_108);
              uVar8 = auVar13._0_8_;
              _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                        (&local_78,uVar8);
              if (local_78 == '\0') {
                if (local_70 == 0) {
                  uVar8 = 0x8000000000000003;
                }
                else if ((local_118 == 0) ||
                        (*(ulong *)(lStack_120 + -8 + local_118 * 8) < local_70)) {
                  if (!bVar11) {
                    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc00765dc6d21f5c0E(&local_128);
                    if (cVar3 != '\0') {
                      bVar11 = true;
                    }
                    break;
                  }
                  if (cVar3 == '\x01') {
                    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                              (&local_108,&DAT_0011d08c,1);
                  }
                  else {
                    /* try { // try from 001b1bd8 to 001b1bed has its CatchHandler @ 001b1ced */
                    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                              (&local_108,&DAT_0011d08d,1);
                  }
                  local_88 = local_f8;
                  param_1[3] = local_f8;
                  *(undefined4 *)(param_1 + 1) = local_108;
                  *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
                  *(undefined4 *)(param_1 + 2) = uStack_100;
                  *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
                  uVar8 = 0x8000000000000002;
                }
                else {
                  uVar8 = 0x8000000000000005;
                }
              }
              else {
                if (local_77 != '\x02') {
                  auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h87967b6d9b6e9ec0E
                                      (uVar8,auVar13._8_8_);
                  uVar10 = auVar13._8_8_;
                  uVar8 = auVar13._0_8_;
                  local_108 = 0;
                  uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E
                                    (0x2f,&local_108);
                  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha65bc1b4c59a7c83E
                                    (uVar8,uVar10,uVar6,1);
                  if (cVar3 == '\0') {
                    local_108 = 0;
                    uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E
                                      (0x2b,&local_108);
                    cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha65bc1b4c59a7c83E
                                      (uVar8,uVar10,uVar6,1);
                    if (cVar3 == '\0') {
                    /* try { // try from 001b1c4d to 001b1c5c has its CatchHandler @ 001b1ced */
                      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                                (&local_108,uVar8,uVar10);
                      param_1[3] = local_f8;
                      *(undefined4 *)(param_1 + 1) = local_108;
                      *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
                      *(undefined4 *)(param_1 + 2) = uStack_100;
                      *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
                      param_1[4] = 0x8000000000000000;
                      *param_1 = 1;
                      goto LAB_001b1c3e;
                    }
                  }
                  lVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                                    (uVar8,uVar10);
                  if (lVar7 == 0) {
                    uVar8 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                                      (uVar8,uVar10,0,1,&PTR_DAT_0021cd68);
                    /* catch() { ... } // from try @ 001b1b60 with catch @ 001b1cc2 */
                    /* try { // try from 001b1cc5 to 001b1cfb has its CatchHandler @ 001b1d04 */
                    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha7a8555218b598c1E
                              (&local_68);
                    _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h9cac72b98b8e7a45E
                              (&local_128);
                    _Unwind_Resume(uVar8);
                    return;
                  }
                  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                            (&local_108,lVar7,1);
                  local_58 = local_f8;
                  local_68 = local_108;
                  uStack_64 = uStack_104;
                  uStack_60 = uStack_100;
                  uStack_5c = uStack_fc;
                    /* try { // try from 001b1b60 to 001b1b72 has its CatchHandler @ 001b1cc2 */
                  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                            (&local_48,uVar8,uVar10);
                  local_e0 = local_38;
                  local_f0 = local_48;
                  uStack_e8 = uStack_40;
                  local_f8 = local_58;
                  local_108 = local_68;
                  uStack_104 = uStack_64;
                  uStack_100 = uStack_60;
                  uStack_fc = uStack_5c;
                  param_1[5] = uStack_40;
                  param_1[6] = local_38;
                  param_1[3] = local_58;
                  param_1[4] = local_48;
                  *(undefined4 *)(param_1 + 1) = local_68;
                  *(undefined4 *)((long)param_1 + 0xc) = uStack_64;
                  *(undefined4 *)(param_1 + 2) = uStack_60;
                  *(undefined4 *)((long)param_1 + 0x14) = uStack_5c;
                  *param_1 = 1;
                  goto LAB_001b1c3e;
                }
                    /* try { // try from 001b1a1e to 001b1b45 has its CatchHandler @ 001b1ced */
                _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8a3539b285686873E
                          (&local_108,uVar8,auVar13._8_8_);
                param_1[3] = local_f8;
                *(undefined4 *)(param_1 + 1) = local_108;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
                *(undefined4 *)(param_1 + 2) = uStack_100;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
                uVar8 = 0x8000000000000004;
              }
              param_1[4] = uVar8;
              *param_1 = 1;
LAB_001b1c3e:
              _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h9cac72b98b8e7a45E
                        (&local_128);
              return;
            }
            cVar2 = '\x01';
          }
          cVar3 = cVar2;
          uVar12 = uVar4;
        } while (uVar4 < uVar9);
      }
      auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h09541ba4b5d07887E(&local_d8);
    } while (auVar13._0_8_ != 0);
    if (local_118 == 0) goto LAB_001b1969;
  }
  if (local_118 < 2) {
    cVar3 = '\0';
  }
  uStack_c1 = (undefined)local_118;
  uStack_c0 = (undefined7)(local_118 >> 8);
  uStack_d1 = (undefined)local_128;
  uStack_d0 = (undefined7)((ulong)local_128 >> 8);
  uStack_c9 = (undefined)lStack_120;
  uStack_c8 = (undefined7)((ulong)lStack_120 >> 8);
  *(char *)(param_1 + 1) = cVar3;
LAB_001b19dc:
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_d1,local_d8);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_c9,uStack_d0);
  param_1[3] = CONCAT71(uStack_c8,uStack_c9);
  param_1[4] = CONCAT71(uStack_c0,uStack_c1);
  *param_1 = 0;
  return;
}