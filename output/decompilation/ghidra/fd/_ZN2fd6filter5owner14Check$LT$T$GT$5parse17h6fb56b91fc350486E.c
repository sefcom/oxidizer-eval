void _ZN2fd6filter5owner14Check_LT_T_GT_5parse17h6fb56b91fc350486E
               (uint *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  if ((param_2 == 0) ||
     (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2df04f0e3577ee6dE
                        (param_2,param_3,1,0), cVar2 != '\0')) {
    param_1[0] = 0;
    param_1[1] = 2;
  }
  else {
    local_30 = 0;
    auVar5 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x21,&local_30);
    bVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                      (param_2,param_3,auVar5._0_8_,auVar5._8_8_);
    if ((bVar3 != 0) &&
       (auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                           (1,param_2,param_3), auVar6._0_8_ == 0)) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00540938)
                (param_2,param_3,1,param_3,&PTR_s_src_filter_owner_rs_00502368);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _ZN2fd6filter5owner11OwnerFilter11from_string28__u7b__u7b_closure_u7d__u7d_17h3abaa0a11bc21c5aE
              (&local_30,auVar6._0_8_,auVar6._8_8_);
    bVar4 = (local_30 & 1) == 0;
    if (bVar4) {
      param_1[1] = (uint)bVar3;
      param_1[2] = local_2c;
    }
    else {
      *(undefined8 *)(param_1 + 2) = local_28;
    }
    *param_1 = (uint)!bVar4;
  }
  return;
}