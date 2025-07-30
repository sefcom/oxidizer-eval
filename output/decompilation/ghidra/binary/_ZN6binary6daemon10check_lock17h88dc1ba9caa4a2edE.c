undefined8 _ZN6binary6daemon10check_lock17h88dc1ba9caa4a2edE(void)

{
  ulong uVar1;
  long lVar2;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined4 **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined *local_40;
  undefined local_38 [24];
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_80 = &PTR_DAT_019e7378;
    local_78 = 1;
    local_70 = (undefined4 **)0x8;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e73d8);
    local_a8 = &DAT_01800a4e;
    local_a0 = 0xe;
    local_98 = &DAT_01800a4e;
    local_90 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_80,3,&local_a8);
  }
  local_4c = (*(code *)PTR_geteuid_01a27b78)();
  local_48 = &local_4c;
  local_40 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h590ce492d669b181E_01a27c40
  ;
  local_80 = &PTR_DAT_019e7398;
  local_78 = 1;
  uStack_60 = 0;
  local_70 = &local_48;
  local_68 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h177781a9cee4dfe1E(local_38,&local_80);
  _ZN66__LT_T_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h539e9514334bfe11E
            (&local_a8,local_38);
  _ZN4core3ptr105drop_in_place_LT_core__result__Result_LT_alloc__ffi__c_str__CString_C_alloc__ffi__c_str__NulError_GT__GT_17hcfeb4ce00913d88eE
            (&local_a8);
  lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (lVar2 != 0) {
    local_80 = &PTR_DAT_019e7388;
    local_78 = 1;
    local_70 = (undefined4 **)0x8;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7438);
    local_a8 = &DAT_01800a4e;
    local_a0 = 0xe;
    local_98 = &DAT_01800a4e;
    local_90 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_80,1,&local_a8);
  }
  return 0;
}