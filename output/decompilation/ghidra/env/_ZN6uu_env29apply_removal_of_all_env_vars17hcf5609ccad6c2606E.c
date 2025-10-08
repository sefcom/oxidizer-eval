void _ZN6uu_env29apply_removal_of_all_env_vars17hcf5609ccad6c2606E(long param_1)

{
  undefined *puVar1;
  undefined local_70 [32];
  undefined local_50 [48];
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  (*(code *)PTR__ZN3std3env7vars_os17h6ed78a19f7e42380E_002195d8)(local_70);
  puVar1 = 
  PTR__ZN75__LT_std__env__VarsOs_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc133e396fa1f6a35E_002195e0
  ;
  do {
                    /* try { // try from 00174cf0 to 00174cf8 has its CatchHandler @ 00174d41 */
    (*(code *)puVar1)(local_50,local_70);
                    /* try { // try from 00174d00 to 00174d07 has its CatchHandler @ 00174d32 */
    _ZN3std3env10remove_var17hcbe09fb2ee109f33E(local_50);
    _ZN4core3ptr112drop_in_place_LT_core__option__Option_LT__LP_std__ffi__os_str__OsString_C_std__ffi__os_str__OsString_RP__GT__GT_17hcd7799ae0817c909E
              (local_50);
  } while( true );
}