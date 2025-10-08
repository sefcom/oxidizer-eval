void _ZN7uu_test5files17hd5728a24dd84678bE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined local_438;
  long local_3a0 [22];
  undefined local_2f0 [32];
  long local_2d0;
  long local_2c8;
  undefined local_240 [32];
  long local_220;
  long local_218;
  undefined local_190 [176];
  undefined local_e0 [176];
  
  _ZN3std2fs8metadata17ha4b6f518b61475e4E(local_190);
                    /* try { // try from 0015950a to 0015951c has its CatchHandler @ 00159779 */
  _ZN3std2fs8metadata17ha4b6f518b61475e4E(local_e0,param_4,param_5);
  puVar1 = PTR_memcpy_001e60c8;
  (*(code *)PTR_memcpy_001e60c8)(&local_450,local_190,0xb0);
  (*(code *)puVar1)(local_3a0,local_e0,0xb0);
  if (((int)local_450 == 2) || (local_3a0[0] == 2)) {
    _ZN4core3ptr170drop_in_place_LT__LP_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__C_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__RP__GT_17h58d10488d8e43f37E
              (&local_450);
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    (*(code *)puVar1)(local_2f0,&local_450,0xb0);
    (*(code *)puVar1)(local_240,local_3a0,0xb0);
    _ZN4core3ptr170drop_in_place_LT__LP_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__C_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__RP__GT_17h58d10488d8e43f37E
              (&local_450);
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)
              (&local_450,param_6,param_7);
    if ((int)local_450 == 1) {
LAB_001595bd:
      local_450 = 1;
      local_440 = param_7;
      local_438 = 1;
      local_448 = param_6;
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
                (param_1 + 1,&local_450);
      *param_1 = 4;
      return;
    }
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_448,local_440,"-ef",3);
    if (cVar2 == '\0') {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                        (local_448,local_440,"-nt",3);
      puVar1 = PTR__ZN3std2fs8Metadata8modified17he3c19aa683c05d81E_001e6280;
      if (cVar2 == '\0') {
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                          (local_448,local_440,"-ot",3);
        puVar1 = PTR__ZN3std2fs8Metadata8modified17he3c19aa683c05d81E_001e6280;
        if (cVar2 == '\0') goto LAB_001595bd;
        (*(code *)PTR__ZN3std2fs8Metadata8modified17he3c19aa683c05d81E_001e6280)
                  (&local_450,local_2f0);
        auVar4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c83cd2d2c8d394dE
                           (&local_450,&PTR_s_src_uu_test_src_test_rs_001e03e0);
        (*(code *)puVar1)(&local_450,local_240);
        auVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c83cd2d2c8d394dE
                           (&local_450,&PTR_s_src_uu_test_src_test_rs_001e03f8);
        if (auVar4._0_8_ == auVar5._0_8_) {
          bVar3 = auVar4._8_4_ < auVar5._8_4_;
        }
        else {
          bVar3 = auVar4._0_8_ < auVar5._0_8_;
        }
      }
      else {
        (*(code *)PTR__ZN3std2fs8Metadata8modified17he3c19aa683c05d81E_001e6280)
                  (&local_450,local_2f0);
        auVar4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c83cd2d2c8d394dE
                           (&local_450,&PTR_s_src_uu_test_src_test_rs_001e0410);
        (*(code *)puVar1)(&local_450,local_240);
        auVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c83cd2d2c8d394dE
                           (&local_450,&PTR_s_src_uu_test_src_test_rs_001e0428);
        if (auVar4._0_8_ == auVar5._0_8_) {
          bVar3 = auVar5._8_4_ < auVar4._8_4_;
        }
        else {
          bVar3 = auVar5._0_8_ < auVar4._0_8_;
        }
      }
    }
    else if (local_2c8 == local_218) {
      bVar3 = local_2d0 == local_220;
    }
    else {
      bVar3 = false;
    }
    *(bool *)(param_1 + 1) = bVar3;
  }
  *param_1 = 7;
  return;
}