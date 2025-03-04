void _ZN6uu_env29apply_removal_of_all_env_vars17h7a792f149fdec8bfE(long param_1)

{
  undefined local_70 [32];
  long local_50 [6];
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    _ZN3std3env7vars_os17h5a40cbb6c0e7369cE(local_70);
    while( true ) {
                    /* try { // try from 001ce5d0 to 001ce5d8 has its CatchHandler @ 001ce623 */
      _ZN75__LT_std__env__VarsOs_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e7e14bfb37fce37E
                (local_50,local_70);
      if (local_50[0] == -0x8000000000000000) break;
                    /* try { // try from 001ce5e0 to 001ce5e7 has its CatchHandler @ 001ce614 */
      _ZN3std3env10remove_var17h8bf786824f32bc6eE(local_50);
                    /* try { // try from 001ce5e8 to 001ce5ef has its CatchHandler @ 001ce623 */
      _ZN4core3ptr112drop_in_place_LT_core__option__Option_LT__LP_std__ffi__os_str__OsString_C_std__ffi__os_str__OsString_RP__GT__GT_17h51bca49ba82cc3a5E
                (local_50);
    }
                    /* try { // try from 001ce5f2 to 001ce5fb has its CatchHandler @ 001ce612 */
    _ZN4core3ptr112drop_in_place_LT_core__option__Option_LT__LP_std__ffi__os_str__OsString_C_std__ffi__os_str__OsString_RP__GT__GT_17h51bca49ba82cc3a5E
              (local_50);
    _ZN4core3ptr37drop_in_place_LT_std__env__VarsOs_GT_17h6ba13bc04ee97109E(local_70);
  }
  return;
}