undefined8
_ZN7uu_nice12is_prefix_of17h0ed73fde36564671E
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (param_4 < param_2 || param_2 < param_5) {
    return 0;
  }
  auVar3 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                     (param_2,param_3,param_4);
  if (auVar3._0_8_ != 0) {
    uVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h33b9bdfe3107c6faE
                      (auVar3._0_8_,auVar3._8_8_,param_1,param_2);
    return uVar2;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001e19f0)
            (param_3,param_4,0,param_2,&PTR_s_src_uu_nice_src_nice_rs_001dba80);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}