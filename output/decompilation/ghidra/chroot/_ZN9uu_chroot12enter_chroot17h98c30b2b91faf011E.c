undefined8
_ZN9uu_chroot12enter_chroot17h98c30b2b91faf011E(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58 [2];
  ulong local_50;
  undefined local_48 [24];
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f2965073c9f102fE
            (local_58,param_1,param_2);
  _ZN66__LT_T_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h9454a905dbd2aba1E
            (&local_88,local_58);
  auVar4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hbf878c93376006aeE(&local_88);
  iVar1 = (*(code *)PTR_chroot_002018f0)(auVar4._0_8_);
  _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h6d1e06643df38b2eE
            (auVar4._0_8_,auVar4._8_8_);
  if (iVar1 == 0) {
    if (param_3 == '\0') {
      uVar3 = _ZN3std3env15set_current_dir17hba1a8e936af69830E();
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3feb26b805379e13E(uVar3);
    }
    uVar3 = 0;
  }
  else {
    local_a8 = &local_98;
    local_a0 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_002017a0
    ;
    local_88 = &DAT_001195b0;
    local_80 = 1;
    local_68 = 0;
    local_70 = 1;
    local_98 = param_1;
    local_90 = param_2;
    local_78 = (undefined *)&local_a8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17he3c27e96c71bac83E(local_48,&local_88);
    puVar2 = (uint *)(*(code *)PTR___errno_location_002018d0)();
    local_50 = (ulong)*puVar2 << 0x20 | 2;
    local_58[0] = 0;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d25de4dbe6fde20E(local_58);
  }
  return uVar3;
}