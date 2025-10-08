void _ZN4just8unindent6common17h764837025a78f14cE
               (long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined local_60 [64];
  undefined local_20;
  
  local_70 = param_1 + param_2;
  local_68 = 0;
  local_78 = param_1;
  _ZN4core4iter6traits8iterator8Iterator3zip17h6ddad77f76ac52ebE
            (local_60,&local_78,param_3,param_4 + param_3);
  local_20 = 0;
  auVar4 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17ha5ee18178f2ebd32E
                     (local_60);
  uVar3 = auVar4._8_8_;
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar3 = 0;
  }
  lVar2 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                    (0,uVar3,param_1,param_2);
  if (lVar2 != 0) {
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (param_1,param_2,0,uVar3,&PTR_s_src_unindent_rs_00531910);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}