void _ZN5uu_dd9parseargs16parse_bytes_only17h06067fef7da3f98fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char local_30 [8];
  undefined8 local_28;
  
  lVar2 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                    (param_4);
  if (lVar2 != 0) {
    _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E(local_30,lVar2);
    if (local_30[0] == '\0') {
      param_1[1] = local_28;
      uVar3 = 0xe;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                (param_1 + 1,param_2,param_3);
      uVar3 = 7;
    }
    *param_1 = uVar3;
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00246c38)
            (param_2,param_3,0,param_4,&PTR_s_src_uu_dd_src_parseargs_rs_0023d948);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}