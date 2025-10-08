void _ZN4just8unindent11indentation17h998e2ef8eff8af48E(long param_1,long param_2)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long lStack_48;
  code *pcStack_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined local_20;
  
  local_30 = param_1 + param_2;
  local_28 = 0;
  local_20 = 0;
  pcStack_40 = (code *)0x393cc2;
  local_38 = param_1;
  auVar4 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h21f770c47876451dE
                     (&local_38);
  uVar3 = 0;
  if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    uVar3 = auVar4._8_8_;
  }
  pcStack_40 = (code *)0x393cd9;
  lVar2 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                    (uVar3,param_1,param_2);
  if (lVar2 != 0) {
    return;
  }
  pcStack_40 = _ZN4just8unindent5blank17hbfd378a8e0644ce4E;
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (param_1,param_2,0,uVar3,&PTR_s_src_unindent_rs_005318f8);
  pcStack_40 = (code *)(param_2 + param_1);
  lStack_48 = param_1;
  uVar1 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h1614c6bdf1f32199E(&lStack_48);
  _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
            (uVar1,0);
  return;
}