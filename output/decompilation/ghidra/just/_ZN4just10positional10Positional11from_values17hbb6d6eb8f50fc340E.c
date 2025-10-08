void _ZN4just10positional10Positional11from_values17hbb6d6eb8f50fc340E
               (undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  long local_a0 [6];
  undefined local_70 [64];
  
  local_c0 = 0;
  local_b8 = 8;
  local_b0 = 0;
  local_f8 = -0x8000000000000000;
  local_d8 = 0;
  local_d0 = 8;
  local_c8 = 0;
  if (*param_2 != 0) {
    local_a8 = param_1;
    _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h029472710093ea7dE
              (local_70);
    while( true ) {
                    /* try { // try from 00382e30 to 00382e9f has its CatchHandler @ 003830a8 */
      auVar8 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha6f0cdde85706aa1E
                         (local_70);
      uVar6 = auVar8._8_8_;
      lVar5 = auVar8._0_8_;
      param_1 = local_a8;
      if (lVar5 == 0) break;
      if ((local_f8 == -0x8000000000000000) && (local_c8 == 0)) {
        _ZN4just10positional10Positional19override_from_value17h0d8f5d3e1a677c8cE
                  (local_a0,lVar5,uVar6);
        if (local_a0[0] == -0x8000000000000000) {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                            (lVar5,uVar6,&DAT_0016c110,1);
          if ((cVar4 == '\0') &&
             (cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                                (lVar5,uVar6,&DAT_0016c10e,2), cVar4 == '\0')) {
            auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h3ed37aa92ebc51efE(lVar5,uVar6);
            if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                        (&local_118,lVar5,uVar6);
              local_128 = local_108;
              local_138 = local_118;
              uStack_134 = uStack_114;
              uStack_130 = uStack_110;
              uStack_12c = uStack_10c;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                        (&local_d8,&local_138,&PTR_s_src_positional_rs_00530a80);
            }
            else {
              lVar7 = auVar8._8_8_ + 1;
              _ZN4core3str21__LT_impl_u20_str_GT_16split_at_checked17h496d55096ddfbaefE
                        (&local_118,lVar5,uVar6,lVar7);
              lVar3 = local_100;
              uVar2 = local_108;
              if (CONCAT44(uStack_114,local_118) == 0) {
                    /* try { // try from 0038308a to 003830a1 has its CatchHandler @ 003830aa */
                (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                          (lVar5,uVar6,0,lVar7,&PTR_DAT_00530a50);
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                        (&local_118,CONCAT44(uStack_114,local_118),CONCAT44(uStack_10c,uStack_110));
              local_128 = local_108;
              local_138 = local_118;
              uStack_134 = uStack_114;
              uStack_130 = uStack_110;
              uStack_12c = uStack_10c;
              _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h38559d1aa9a290b7E(&local_f8);
              local_e8 = local_128;
              local_f8 = CONCAT44(uStack_134,local_138);
              uStack_f0 = uStack_130;
              uStack_ec = uStack_12c;
              if (lVar3 != 0) {
                _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                          (&local_118,uVar2,lVar3);
                local_128 = local_108;
                local_138 = local_118;
                uStack_134 = uStack_114;
                uStack_130 = uStack_110;
                uStack_12c = uStack_10c;
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                          (&local_d8,&local_138,&PTR_s_src_positional_rs_00530a68);
              }
            }
          }
          else {
                    /* try { // try from 00382ee4 to 0038301d has its CatchHandler @ 003830a6 */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                      (&local_118,lVar5,uVar6);
            local_128 = local_108;
            local_138 = local_118;
            uStack_134 = uStack_114;
            uStack_130 = uStack_110;
            uStack_12c = uStack_10c;
            _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h38559d1aa9a290b7E(&local_f8);
            local_e8 = local_128;
            uStack_f0 = uStack_130;
            uStack_ec = uStack_12c;
            local_f8 = CONCAT44(uStack_134,local_138);
          }
        }
        else {
                    /* try { // try from 00382e15 to 00382e26 has its CatchHandler @ 003830a4 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hff6ccef2fe66f0c2E(&local_c0,local_a0);
        }
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_118,lVar5,uVar6);
        local_128 = local_108;
        local_138 = local_118;
        uStack_134 = uStack_114;
        uStack_130 = uStack_110;
        uStack_12c = uStack_10c;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                  (&local_d8,&local_138,&PTR_s_src_positional_rs_00530a98);
      }
    }
  }
  param_1[2] = local_c8;
  *param_1 = local_d8;
  param_1[1] = local_d0;
  param_1[3] = local_c0;
  param_1[4] = local_b8;
  param_1[5] = local_b0;
  param_1[6] = local_f8;
  param_1[7] = CONCAT44(uStack_ec,uStack_f0);
  param_1[8] = local_e8;
  return;
}