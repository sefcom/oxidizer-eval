bool _ZN6uu_pwd12logical_path16looks_reasonable17h198aec699ed31598E
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  char local_2d0 [16];
  long local_2c0;
  long local_2b8;
  undefined2 local_2a8;
  char local_2a6;
  long local_230 [4];
  long local_210;
  long local_208;
  undefined local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  undefined local_d0 [176];
  
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_2e0,param_1,param_2);
  if ((local_2a6 != '\0') || (1 < (byte)(local_2d0[0] - 5U))) {
    _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E(local_180,param_1,param_2);
    _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h5315a6138ce3f3a6E
              (local_2d0,local_178,local_170);
    local_2e0 = 0;
    local_2d8 = local_170;
    local_2a8 = 1;
                    /* try { // try from 001a5cac to 001a5cb5 has its CatchHandler @ 001a5d9f */
    uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h97fbd32b5f6f333fE(&local_2e0);
    cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h70e2399de7263019E
                      (uVar2);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h85c5af602e16d02eE(local_180);
    if (cVar3 == '\0') {
      _ZN3std2fs8metadata17ha33fb8332834a0bcE(local_d0,param_1,param_2);
                    /* try { // try from 001a5cec to 001a5d04 has its CatchHandler @ 001a5d85 */
      _ZN3std2fs8metadata17he569619eb99e21fbE(local_180,".",1);
      puVar1 = PTR_memcpy_0020d458;
      (*(code *)PTR_memcpy_0020d458)(&local_2e0,local_d0,0xb0);
      (*(code *)puVar1)(local_230,local_180,0xb0);
      bVar4 = false;
      if (((int)local_2e0 != 2) && (local_230[0] != 2)) {
        bVar4 = local_2b8 == local_208 && local_2c0 == local_210;
      }
      _ZN4core3ptr170drop_in_place_LT__LP_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__C_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__RP__GT_17h6986155f6bfd8c39E
                (&local_2e0);
      return bVar4;
    }
  }
  return false;
}