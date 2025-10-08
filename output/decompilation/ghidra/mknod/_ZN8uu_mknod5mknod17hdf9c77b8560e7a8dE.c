int _ZN8uu_mknod5mknod17hdf9c77b8560e7a8dE
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined local_50 [32];
  
  (*(code *)
    PTR__ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h980e0de09f65e7fdE_001ea7b0
  )(local_50,param_1,param_2);
  auVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4e7bf038ed69e7c0E
                     (local_50,&PTR_s_src_uu_mknod_src_mknod_rs_001e3ff0);
  puVar2 = PTR_umask_001ea7c0;
  uVar5 = auVar7._0_8_;
  uVar1 = *(uint *)(param_3 + 2);
  if ((~uVar1 & 0x1b6) == 0) {
    iVar3 = (*(code *)PTR_mknod_001ea7b8)(uVar5,uVar1,*param_3);
  }
  else {
    uVar4 = (*(code *)PTR_umask_001ea7c0)(0);
    iVar3 = (*(code *)PTR_mknod_001ea7b8)(uVar5,uVar1,*param_3);
    (*(code *)puVar2)(uVar4);
  }
  if (iVar3 == -1) {
                    /* try { // try from 0015a166 to 0015a18a has its CatchHandler @ 0015a1a7 */
    uVar6 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001ea658)();
    (*(code *)
      PTR__ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h980e0de09f65e7fdE_001ea7c8
    )(local_50,uVar6);
    auVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4e7bf038ed69e7c0E
                       (local_50,&PTR_s_src_uu_mknod_src_mknod_rs_001e4008);
    (*(code *)PTR_perror_001ea7d0)(auVar8._0_8_);
    _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17hbc3ea3c1703b14a0E
              (auVar8._0_8_,auVar8._8_8_);
  }
  _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17hbc3ea3c1703b14a0E
            (uVar5,auVar7._8_8_);
  return iVar3;
}