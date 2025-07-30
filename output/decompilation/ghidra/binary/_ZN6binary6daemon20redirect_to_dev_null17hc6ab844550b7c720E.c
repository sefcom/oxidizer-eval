void _ZN6binary6daemon20redirect_to_dev_null17hc6ab844550b7c720E(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar3) {
    local_50 = &PTR_DAT_019e7270;
    local_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e72a0);
    local_78 = &DAT_01800a4e;
    local_70 = 0xe;
    local_68 = &DAT_01800a4e;
    local_60 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_50,3,&local_78);
  }
  (*(code *)
    PTR__ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h4349d6f3c5b7c610E_01a27bf8
  )(&local_50,&DAT_01800afe,9);
  auVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he1509067752922b2E
                     (&local_50,&PTR_DAT_019e72b8);
  iVar2 = (*(code *)PTR_open_01a27c28)(auVar5._0_8_,2,0);
  puVar1 = PTR_dup2_01a27c30;
  if (iVar2 < 0) {
    lVar4 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (lVar4 != 0) {
      local_50 = &PTR_DAT_019e7290;
      local_48 = 1;
      local_40 = 8;
      local_38 = 0;
      uStack_30 = 0;
      local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e72d0);
      local_78 = &DAT_01800a4e;
      local_70 = 0xe;
      local_68 = &DAT_01800a4e;
      local_60 = 0xe;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_50,1,&local_78);
    }
  }
  else {
    (*(code *)PTR_dup2_01a27c30)(iVar2,0);
    (*(code *)puVar1)(iVar2,1);
    (*(code *)puVar1)(iVar2,2);
    (*(code *)PTR_close_01a27a90)(iVar2);
    uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (2 < uVar3) {
      local_50 = &PTR_DAT_019e7280;
      local_48 = 1;
      local_40 = 8;
      local_38 = 0;
      uStack_30 = 0;
                    /* try { // try from 018d2f6b to 018d3028 has its CatchHandler @ 018d303f */
      local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e72e8);
      local_78 = &DAT_01800a4e;
      local_70 = 0xe;
      local_68 = &DAT_01800a4e;
      local_60 = 0xe;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_50,3,&local_78);
    }
  }
  _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h14ef6a5fc8aed95aE
            (auVar5._0_8_,auVar5._8_8_);
  return;
}