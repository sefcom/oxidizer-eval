void _ZN9uu_runcon18os_str_to_c_string17h048fb3727ae8a25aE(undefined4 *param_1)

{
  undefined local_28 [32];
  
  (*(code *)
    PTR__ZN72__LT__RF_str_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h0590d0924c279fb9E_001f2458
  )(local_28);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heaa51e23776abbceE();
  *(undefined8 *)(param_1 + 6) = 0x1400000003;
  *(char **)(param_1 + 2) = "CString::new() failed failed on ";
  *(undefined8 *)(param_1 + 4) = 0xe;
  *param_1 = 0xf;
  return;
}