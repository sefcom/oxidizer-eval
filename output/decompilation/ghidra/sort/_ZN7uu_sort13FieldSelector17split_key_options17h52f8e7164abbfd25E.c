void _ZN7uu_sort13FieldSelector17split_key_options17h52f8e7164abbfd25E
               (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [12];
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  local_50 = param_2 + param_3;
  local_48 = 0;
  local_58 = param_2;
  auVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h6f7bd2e13eee62dcE(&local_58);
  if (auVar2._8_4_ == 0x110000) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
    param_1[3] = 0;
  }
  else {
    _ZN4core3str21__LT_impl_u20_str_GT_16split_at_checked17h496d55096ddfbaefE
              (&local_40,param_2,param_3,auVar2._0_8_);
    if (local_40 == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002975c8)
                (param_2,param_3,0,auVar2._0_8_,&PTR_s__home_34r7hm4n__rustup_toolchain_0028d068);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1[2] = local_30;
    param_1[3] = lStack_28;
    *param_1 = local_40;
    param_1[1] = lStack_38;
  }
  return;
}