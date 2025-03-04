void _ZN9uu_numfmt15parse_unit_size17hba45e7319bcb81aeE
               (undefined8 *param_1,undefined **param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined **local_c0;
  long local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined **local_60;
  long local_58;
  undefined local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_b8 = (long)param_2 + param_3;
  local_b0 = (undefined8 **)((ulong)local_b0 & 0xffffffffffffff00);
  local_c0 = param_2;
  _ZN95__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_char_GT__GT_9from_iter17h1d245a97348b10d3E
            (local_90,&local_c0);
  lVar1 = local_80;
  auVar4 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                     (local_80,param_2,param_3);
  if (auVar4._0_8_ == 0) {
                    /* try { // try from 001c02b6 to 001c02ce has its CatchHandler @ 001c02de */
    uVar3 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                      (param_2,param_3,lVar1,param_3,&PTR_s_src_uu_numfmt_src_numfmt_rs_00235890);
                    /* catch() { ... } // from try @ 001c0191 with catch @ 001c02cf */
                    /* try { // try from 001c02d2 to 001c02ea has its CatchHandler @ 001c02f3 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(local_90);
    _Unwind_Resume(uVar3);
    return;
  }
  if (lVar1 == 0) {
LAB_001c01b0:
    auVar4 = _ZN9uu_numfmt22parse_unit_size_suffix17h0d4904f7b87ea86bE(auVar4._0_8_,auVar4._8_8_);
    if (auVar4._0_8_ == 1) {
      if (local_80 == 0) {
        param_1[1] = auVar4._8_8_;
      }
      else {
        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                  (&local_c0,local_88,local_80);
        if ((char)local_c0 != '\0') goto LAB_001c01f3;
        param_1[1] = auVar4._8_8_ * local_b8;
      }
      *param_1 = 0x8000000000000000;
      goto LAB_001c029a;
    }
  }
  else {
                    /* try { // try from 001c0163 to 001c017c has its CatchHandler @ 001c02de */
    _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_c0,"0",1,lVar1);
                    /* try { // try from 001c0191 to 001c0195 has its CatchHandler @ 001c02cf */
    cVar2 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hf0c8d218e68d96bcE
                      (local_b8,local_b0,local_88,local_80);
    if (cVar2 == '\0') {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_c0);
      goto LAB_001c01b0;
    }
                    /* try { // try from 001c019a to 001c0263 has its CatchHandler @ 001c02de */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_c0);
  }
LAB_001c01f3:
  local_68 = 0;
  local_50 = 1;
  local_78 = &local_68;
  local_70 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_c0 = &PTR_s_invalid_unit_size__00235880;
  local_b8 = 1;
  local_a0 = 0;
  local_b0 = &local_78;
  local_a8 = 1;
  local_60 = param_2;
  local_58 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_48,&local_c0);
  param_1[2] = local_38;
  *(undefined4 *)param_1 = local_48;
  *(undefined4 *)((long)param_1 + 4) = uStack_44;
  *(undefined4 *)(param_1 + 1) = uStack_40;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
LAB_001c029a:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(local_90);
  return;
}