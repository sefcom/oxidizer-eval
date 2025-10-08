undefined4 * _ZN8uu_chcon18os_str_to_c_string17h768cd0b3ad15605aE(undefined4 *param_1)

{
  undefined local_28 [32];
  
  (*(code *)
    PTR__ZN72__LT__RF_str_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h0590d0924c279fb9E_001f70e8
  )(local_28);
  _ZN4core3ptr48drop_in_place_LT_alloc__ffi__c_str__NulError_GT_17he727792f05ff88edE();
  *(undefined8 *)(param_1 + 6) = 0x1400000003;
  *(char **)(param_1 + 2) = "CString::new()";
  *(undefined8 *)(param_1 + 4) = 0xe;
  *param_1 = 0x10;
  return param_1;
}