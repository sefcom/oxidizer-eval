bool _ZN6uu_pwd12logical_path16looks_reasonable17h9259bfbf6c23b9afE
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  char local_2e0 [16];
  long local_2d0;
  long local_2c8;
  undefined2 local_2b8;
  char local_2b6;
  long local_240 [4];
  long local_220;
  long local_218;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined local_e0 [176];
  
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001deb68)
            (&local_2f0,param_1,param_2);
  if ((local_2b6 != '\0') || (1 < (byte)(local_2e0[0] - 5U))) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001deb70)
              (&local_190,param_1,param_2);
    _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h26c300b68eedf97dE
              (local_2e0,local_188,local_180);
    local_2f0 = 0;
    local_2e8 = local_180;
    local_2b8 = 1;
    uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hfc10f82a18e5ade8E(&local_2f0);
    cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h855e5aab04e03f8dE
                      (uVar2);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h743e7f0088788be4E
              (local_190,local_188);
    if (cVar3 == '\0') {
      _ZN3std2fs8metadata17h8375f386a13ea4e6E(local_e0,param_1,param_2);
                    /* try { // try from 00151309 to 00151315 has its CatchHandler @ 0015139a */
      _ZN3std2fs8metadata17he8cf75f09f9f2f0cE(&local_190);
      puVar1 = PTR_memcpy_001dea50;
      (*(code *)PTR_memcpy_001dea50)(&local_2f0,local_e0,0xb0);
      (*(code *)puVar1)(local_240,&local_190,0xb0);
      bVar4 = false;
      if (((int)local_2f0 != 2) && (local_240[0] != 2)) {
        bVar4 = local_218 == local_2c8 && local_2d0 == local_220;
      }
      _ZN4core3ptr170drop_in_place_LT__LP_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__C_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__RP__GT_17h70f10cd4fa1bcba5E
                (&local_2f0);
      return bVar4;
    }
  }
  return false;
}