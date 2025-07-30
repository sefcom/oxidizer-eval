void _ZN6binary7install12drop_library17h6c2d6da60051269aE(undefined4 *param_1)

{
  ulong uVar1;
  long lVar2;
  int local_cc;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_90 = &PTR_DAT_019e6d38;
    local_88 = 1;
    local_80 = (undefined4 **)&DAT_00000008;
    local_78 = 0;
    uStack_70 = 0;
    local_98 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6d78);
    local_b8 = &DAT_0015023f;
    local_b0 = 0xf;
    local_a8 = &DAT_0015023f;
    local_a0 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_90,3,&local_b8);
  }
  _ZN6binary7install17find_library_path17h2e217bf23a93cdc7E(local_28);
                    /* try { // try from 018d04b3 to 018d04cc has its CatchHandler @ 018d08b0 */
  _ZN3std4path4Path4join17hdfe81d13f7920fb5E(&local_50,local_20,local_18,&DAT_0015046e,0xc);
                    /* try { // try from 018d04cd to 018d04de has its CatchHandler @ 018d08ab */
  _ZN3std2fs4File6create17hbeb4c25cf05a2d0fE(local_60,&local_50);
  if (local_60._0_4_ == 1) {
    lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (lVar2 != 0) {
      local_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      local_c8 = &local_38;
      local_c0 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
      ;
      local_90 = &PTR_DAT_019e6d48;
      local_88 = 1;
      uStack_70 = 0;
      local_80 = &local_c8;
      local_78 = 1;
                    /* try { // try from 018d0554 to 018d059c has its CatchHandler @ 018d0898 */
      local_98 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6dd8);
      local_b8 = &DAT_0015023f;
      local_b0 = 0xf;
      local_a8 = &DAT_0015023f;
      local_a0 = 0xf;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_90,1,&local_b8);
    }
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_3c,uStack_40);
    *param_1 = local_50;
    param_1[1] = uStack_4c;
    param_1[2] = uStack_48;
    param_1[3] = uStack_44;
                    /* try { // try from 018d05b4 to 018d05bd has its CatchHandler @ 018d0891 */
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h9c58f2ca93495b32E
              (local_60);
  }
  else {
    local_cc = local_60._4_4_;
                    /* try { // try from 018d05cb to 018d05e1 has its CatchHandler @ 018d0893 */
    local_60 = (*(code *)
                 PTR__ZN59__LT_std__process__ChildStdin_u20_as_u20_std__io__Write_GT_5write17h43a2be7f2c3fd7f9E_01a27ad0
               )(&local_cc,&DAT_0015047a,&DAT_016ad178);
    if (local_60._0_8_ != 0) {
      lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (lVar2 != 0) {
        local_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        local_c8 = &local_38;
        local_c0 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
        ;
        local_90 = &PTR_DAT_019e6d58;
        local_88 = 1;
        uStack_70 = 0;
        local_80 = &local_c8;
        local_78 = 1;
                    /* try { // try from 018d0660 to 018d0841 has its CatchHandler @ 018d08b5 */
        local_98 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6d90);
        local_b8 = &DAT_0015023f;
        local_b0 = 0xf;
        local_a8 = &DAT_0015023f;
        local_a0 = 0xf;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_90,1,&local_b8);
      }
    }
    local_90 = (undefined **)_ZN3std2fs15set_permissions17hdbf67fe33a3ba539E(&local_50,0x1ff);
    if (local_90 == (undefined **)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                (&local_90);
    }
    else {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                (&local_90);
      lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (lVar2 != 0) {
        local_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        local_c8 = &local_38;
        local_c0 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
        ;
        local_90 = &PTR_DAT_019e6c70;
        local_88 = 1;
        uStack_70 = 0;
        local_80 = &local_c8;
        local_78 = 1;
        local_98 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6da8);
        local_b8 = &DAT_0015023f;
        local_b0 = 0xf;
        local_a8 = &DAT_0015023f;
        local_a0 = 0xf;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_90,1,&local_b8);
      }
    }
    uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (2 < uVar1) {
      local_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      local_c8 = &local_38;
      local_c0 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
      ;
      local_90 = &PTR_DAT_019e6d68;
      local_88 = 1;
      uStack_70 = 0;
      local_80 = &local_c8;
      local_78 = 1;
      local_98 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6dc0);
      local_b8 = &DAT_0015023f;
      local_b0 = 0xf;
      local_a8 = &DAT_0015023f;
      local_a0 = 0xf;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_90,3,&local_b8);
    }
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_3c,uStack_40);
    *param_1 = local_50;
    param_1[1] = uStack_4c;
    param_1[2] = uStack_48;
    param_1[3] = uStack_44;
                    /* try { // try from 018d0859 to 018d0862 has its CatchHandler @ 018d0883 */
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h36b83b7aa703e08bE
              (local_60);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0d00817cc0df8c52E(local_cc);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(local_28);
  return;
}