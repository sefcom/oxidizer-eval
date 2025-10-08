void _ZN9alacritty7display7Display13format_search17hb94809e56cc52697E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ulong param_5,ulong param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  if (param_6 < param_5) {
    lVar1 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                      (param_6,param_4,param_5);
    if (lVar1 == 0) {
      uVar2 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_009de180)
                        (param_4,param_5,0,param_6,&PTR_s_alacritty_src_display_mod_rs_00982728);
                    /* catch() { ... } // from try @ 0054eb7e with catch @ 0054ebe9 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_70);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (&local_58,lVar1);
    *(undefined8 *)(param_1 + 4) = local_48;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (&local_70,param_4,param_5);
                    /* try { // try from 0054eb7e to 0054ebb1 has its CatchHandler @ 0054ebe9 */
    _ZN9alacritty6string12StrShortener3new17hcb4d209a7d9df863E
              (&local_58,param_2,param_3,param_6 + ~param_5,0);
    _ZN89__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__Extend_LT_char_GT__GT_6extend17h3067557f430c71d9E
              (&local_70,&local_58);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_70,0x20);
    *(undefined8 *)(param_1 + 4) = local_60;
    local_58 = local_70;
    uStack_54 = uStack_6c;
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
  }
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  return;
}