undefined8 _ZN21ruff_python_formatter6string9docstring13is_rst_option17h85d4d44a3db9c66fE(void)

{
  char cVar1;
  undefined uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 local_28;
  long local_20;
  undefined local_18;
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E();
  lVar3 = auVar5._0_8_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  auVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x3a,&local_28);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (lVar3,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_);
  if (cVar1 != '\0') {
    local_20 = auVar5._8_8_ + lVar3;
    local_18 = 0;
    local_28 = lVar3;
    uVar2 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17ha107697c28683076E
                      (&local_28);
    uVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                      (uVar2,1);
    return uVar4;
  }
  return 0;
}