undefined8 *
_ZN7uu_fold15handle_obsolete17h3fddf2520a33c709E(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong extraout_RDX;
  uleb128 *puVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_58 = param_2 + param_3 * 0x18;
  local_50 = 0;
  local_60 = param_2;
  auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf9924e752afe9ea8E
                     (&local_60);
  if (auVar9._8_8_ != 0) {
    do {
      uVar1 = *(ulong *)(auVar9._8_8_ + 8);
      lVar2 = *(long *)(auVar9._8_8_ + 0x10);
      local_90 = local_90 & 0xffffffff00000000;
      auVar10 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&local_90);
      cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha42463a172f186c2E
                        (uVar1,lVar2,auVar10._0_8_,auVar10._8_8_);
      if (cVar3 != '\0') {
        lStack_88 = lVar2 + uVar1;
        local_90 = uVar1;
        lVar5 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h7ba654970d2c1b3eE
                          (&local_90);
        puVar8 = &uleb128_00110000;
        if (lVar5 == 0) {
          iVar4 = _ZN4core3str11validations15next_code_point17haf22137f2b8c1872E(&local_90);
          puVar8 = (uleb128 *)(extraout_RDX & 0xffffffff);
          if (iVar4 == 0) {
            puVar8 = &uleb128_00110000;
          }
        }
        cVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17ha537ee4bf15b2378E(puVar8);
        if (cVar3 != '\0') {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he916bedbab5d2ee8E
                    (&local_48,param_2,param_3);
                    /* try { // try from 001b1685 to 001b16a5 has its CatchHandler @ 001b173b */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17hf33a108cd057c4a0E
                    (&local_90,&local_48,auVar9._0_8_,&PTR_s_src_uu_fold_src_fold_rs_0021a878);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_90);
          local_68 = local_38;
          local_78 = local_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          lVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                            (uVar1,lVar2);
          if (lVar5 != 0) {
                    /* try { // try from 001b16ca to 001b172b has its CatchHandler @ 001b172c */
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hdd06eddfecb757f4E
                      (&local_90,lVar5);
            param_1[5] = local_80;
            param_1[3] = local_90;
            param_1[4] = lStack_88;
            param_1[2] = local_68;
            *param_1 = CONCAT44(uStack_74,local_78);
            param_1[1] = CONCAT44(uStack_6c,uStack_70);
            return param_1;
          }
          uVar6 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                            (uVar1,lVar2,1,lVar2,&PTR_s_src_uu_fold_src_fold_rs_0021a890);
                    /* catch() { ... } // from try @ 001b16ca with catch @ 001b172c */
                    /* try { // try from 001b172f to 001b1747 has its CatchHandler @ 001b1750 */
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd28e1e19cc928e37E
                    (&local_78);
          puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
          return puVar7;
        }
      }
      auVar9 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf9924e752afe9ea8E
                         (&local_60);
    } while (auVar9._8_8_ != 0);
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he916bedbab5d2ee8E
            (param_1,param_2,param_3);
  param_1[3] = 0x8000000000000000;
  return param_1;
}