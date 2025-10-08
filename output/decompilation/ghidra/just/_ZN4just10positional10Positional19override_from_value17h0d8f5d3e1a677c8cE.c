void _ZN4just10positional10Positional19override_from_value17h0d8f5d3e1a677c8cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined auVar3 [16];
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar3 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h77d5b5a2072a0d64E(param_2,param_3,0x3d);
  uVar2 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_003831dd:
    *param_1 = 0x8000000000000000;
    return;
  }
  _ZN4core3str21__LT_impl_u20_str_GT_16split_at_checked17h496d55096ddfbaefE
            (&local_98,param_2,param_3,uVar2);
  if (local_98 == 0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
              (param_2,param_3,0,uVar2,&PTR_DAT_00530a50);
    local_80 = unaff_RBP;
  }
  else {
    auVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (1,local_88,local_80);
    uVar2 = local_88;
    if (auVar3._0_8_ != 0) {
      cVar1 = _ZN4just5lexer5Lexer13is_identifier17h7647ec4ff2f9f03dE(local_98,uStack_90);
      if (cVar1 != '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_60,local_98,uStack_90);
                    /* try { // try from 0038317d to 0038318c has its CatchHandler @ 0038322c */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_48,auVar3._0_8_,auVar3._8_8_);
        param_1[4] = uStack_40;
        param_1[5] = local_38;
        param_1[2] = local_50;
        param_1[3] = local_48;
        *param_1 = local_60;
        param_1[1] = uStack_58;
        return;
      }
      goto LAB_003831dd;
    }
  }
  uVar2 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                    (uVar2,local_80,1,local_80,&PTR_s_src_positional_rs_00530ab0);
                    /* catch() { ... } // from try @ 0038317d with catch @ 0038322c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_60);
  _Unwind_Resume(uVar2);
  return;
}