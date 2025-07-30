void _ZN6binary6daemon4main17hc30634c30f3261a4E(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar5) {
    local_60 = &PTR_DAT_019e7118;
    local_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7168);
    local_88 = &DAT_01800a4e;
    local_80 = 0xe;
    local_78 = &DAT_01800a4e;
    local_70 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_60,3,&local_88);
  }
  cVar3 = _ZN6binary6daemon10check_lock17h88dc1ba9caa4a2edE();
  if (cVar3 != '\0') {
    _ZN6binary6daemon10fork_to_bg17h3f8212ac914619a4E();
    _ZN6binary6daemon20redirect_to_dev_null17hc6ab844550b7c720E();
    _ZN6binary6daemon13close_all_fds17h475452edc915d318E();
    (*(code *)PTR_umask_01a27bf0)(0);
    (*(code *)
      PTR__ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h4349d6f3c5b7c610E_01a27bf8
    )(&local_60,&DAT_0180099f,1);
    auVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he1509067752922b2E
                       (&local_60,&PTR_DAT_019e7198);
    iVar4 = (*(code *)PTR_chdir_01a27c00)(auVar7._0_8_);
    _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h14ef6a5fc8aed95aE
              (auVar7._0_8_,auVar7._8_8_);
    if (iVar4 != 0) {
      lVar6 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (lVar6 != 0) {
        local_60 = &PTR_DAT_019e7128;
        local_58 = 1;
        local_50 = 8;
        local_48 = 0;
        uStack_40 = 0;
        local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e71b0);
        local_88 = &DAT_01800a4e;
        local_80 = 0xe;
        local_78 = &DAT_01800a4e;
        local_70 = 0xe;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_60,1,&local_88);
      }
    }
    uVar5 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (2 < uVar5) {
      local_60 = &PTR_DAT_019e7138;
      local_58 = 1;
      local_50 = 8;
      local_48 = 0;
      uStack_40 = 0;
      local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e71c8);
      local_88 = &DAT_01800a4e;
      local_80 = 0xe;
      local_78 = &DAT_01800a4e;
      local_70 = 0xe;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_60,3,&local_88);
    }
    puVar2 = PTR__ZN3std6thread5sleep17he6d0c8736a470946E_01a27c08;
    puVar1 = PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8;
    do {
      uVar5 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (2 < uVar5) {
        local_60 = &PTR_DAT_019e7148;
        local_58 = 1;
        local_50 = 8;
        local_48 = 0;
        uStack_40 = 0;
        local_68 = (*(code *)puVar1)(&PTR_DAT_019e71e0);
        local_88 = &DAT_01800a4e;
        local_80 = 0xe;
        local_78 = &DAT_01800a4e;
        local_70 = 0xe;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_60,3,&local_88);
      }
      (*(code *)puVar2)(0x3c,0);
    } while( true );
  }
  lVar6 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (lVar6 != 0) {
    local_60 = &PTR_DAT_019e7158;
    local_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7180);
    local_88 = &DAT_01800a4e;
    local_80 = 0xe;
    local_78 = &DAT_01800a4e;
    local_70 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_60,1,&local_88);
  }
  return;
}