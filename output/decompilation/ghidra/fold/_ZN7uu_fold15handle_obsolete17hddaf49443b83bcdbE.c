undefined8 *
_ZN7uu_fold15handle_obsolete17hddaf49443b83bcdbE(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [12];
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_58 = param_2 + param_3 * 0x18;
  local_50 = 0;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_2;
  auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he54a06542fd2e8b1E
                     (&local_60);
  if (auVar9._8_8_ != 0) {
    do {
      lVar8 = auVar9._8_8_;
      uVar1 = *(undefined8 *)(lVar8 + 8);
      uVar2 = *(undefined8 *)(lVar8 + 0x10);
      local_90 = local_90 & 0xffffffff00000000;
      uVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_90);
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcf84e2f3ea96fe28E
                        (uVar1,uVar2,uVar6);
      if (cVar5 != '\0') {
        local_90 = *(ulong *)(lVar8 + 8);
        lStack_88 = *(long *)(lVar8 + 0x10) + local_90;
        lVar7 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                          (&local_90);
        if (lVar7 == 0) {
          auVar10 = _ZN4core3str11validations15next_code_point17h22c36519b8a1e543E(&local_90);
          if (((auVar10 & (undefined  [12])0x1) != (undefined  [12])0x0) &&
             (auVar10._8_4_ - 0x30U < 10)) {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h0dedcd644dd186d3E
                      (&local_48,local_70,local_68);
                    /* try { // try from 0015b672 to 0015b681 has its CatchHandler @ 0015b736 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h6933f29b75a2f879E
                      (&local_90,&local_48,auVar9._0_8_);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd6746ad766958504E
                      (local_90,lStack_88);
            uVar1 = *(undefined8 *)(lVar8 + 8);
            uVar2 = *(undefined8 *)(lVar8 + 0x10);
            lVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (uVar1,uVar2);
            if (lVar8 != 0) {
                    /* try { // try from 0015b6ab to 0015b6b7 has its CatchHandler @ 0015b738 */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h600e44234b0f024aE
                        (&local_90,lVar8);
              local_78[5] = local_80;
              local_78[3] = local_90;
              local_78[4] = lStack_88;
              local_78[2] = local_38;
              *local_78 = local_48;
              local_78[1] = uStack_40;
              return local_78;
            }
                    /* try { // try from 0015b719 to 0015b733 has its CatchHandler @ 0015b738 */
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ed2f8)
                      (uVar1,uVar2,1,uVar2,&PTR_s_s_001e6ac8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
      }
      auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he54a06542fd2e8b1E
                         (&local_60);
    } while (auVar9._8_8_ != 0);
  }
  puVar4 = local_78;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h0dedcd644dd186d3E
            (local_78,local_70,local_68);
  puVar4[3] = 0x8000000000000000;
  return puVar4;
}