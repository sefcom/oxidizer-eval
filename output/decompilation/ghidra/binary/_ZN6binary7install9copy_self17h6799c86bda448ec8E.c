void _ZN6binary7install9copy_self17h6799c86bda448ec8E(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined local_50 [16];
  undefined local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 **local_18;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_b8 = &PTR_DAT_019e6c30;
    uStack_b0 = 1;
    local_a8 = (undefined8 **)&DAT_00000008;
    local_a0 = 0;
    uStack_98 = 0;
    local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6c90);
    local_88 = &DAT_0015023f;
    local_80 = 0xf;
    local_78 = &DAT_0015023f;
    local_70 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,3,&local_88);
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he316f2bb80969970E
            (&local_b8,&DAT_001502fc,0xf);
  local_18 = local_a8;
  local_28 = (undefined4)local_b8;
  uStack_24 = local_b8._4_4_;
  uStack_20 = (undefined4)uStack_b0;
  uStack_1c = uStack_b0._4_4_;
                    /* try { // try from 018cffbc to 018d0139 has its CatchHandler @ 018d03e5 */
  local_b8 = (undefined **)_ZN3std2fs14create_dir_all17hc291693ada78da95E(&local_28);
  if (local_b8 == (undefined **)0x0) {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
              (&local_b8);
    local_b8 = (undefined **)_ZN3std2fs15set_permissions17hdbf67fe33a3ba539E(&local_28,0x1ff);
    if (local_b8 == (undefined **)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                (&local_b8);
      _ZN3std4path4Path4join17hdfe81d13f7920fb5E
                (local_40,CONCAT44(uStack_1c,uStack_20),local_18,&DAT_001503e2,10);
                    /* try { // try from 018d013a to 018d02fa has its CatchHandler @ 018d03d6 */
      (*(code *)PTR__ZN3std3env11current_exe17hba8dd19674473539E_01a27ac8)(&local_b8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfe1546b7d02f4ad7E(&local_88,&local_b8);
      local_50 = _ZN3std2fs4copy17hed1bccf4751e7b50E(&local_88,local_40);
      if (local_50._0_8_ == 0) {
        _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h36b83b7aa703e08bE
                  (local_50);
        local_b8 = (undefined **)_ZN3std2fs15set_permissions17hdbf67fe33a3ba539E(local_40,0x1ff);
        if (local_b8 == (undefined **)0x0) {
                    /* try { // try from 018d031b to 018d03c6 has its CatchHandler @ 018d03d6 */
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                    (&local_b8);
          uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
          if (2 < uVar1) {
            local_50._4_4_ = uStack_34;
            local_50._0_4_ = local_38;
            local_50._12_4_ = uStack_2c;
            local_50._8_4_ = uStack_30;
            local_58 = 
            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
            ;
            local_b8 = &PTR_DAT_019e6c80;
            uStack_b0 = 1;
            uStack_98 = 0;
            local_a8 = &local_60;
            local_a0 = 1;
            local_60 = (undefined8 *)local_50;
            local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                                 (&PTR_DAT_019e6cc0);
            local_88 = &DAT_0015023f;
            local_80 = 0xf;
            local_78 = &DAT_0015023f;
            local_70 = 0xf;
            _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,3,&local_88);
          }
                    /* try { // try from 018d03c7 to 018d03d0 has its CatchHandler @ 018d03e5 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(local_40);
          goto LAB_018d0305;
        }
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                  (&local_b8);
        lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
        if (lVar2 != 0) {
          local_50._4_4_ = uStack_34;
          local_50._0_4_ = local_38;
          local_50._12_4_ = uStack_2c;
          local_50._8_4_ = uStack_30;
          local_58 = 
          PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
          ;
          local_b8 = &PTR_DAT_019e6c70;
          uStack_b0 = 1;
          uStack_98 = 0;
          local_a8 = &local_60;
          local_a0 = 1;
          local_60 = (undefined8 *)local_50;
          local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                               (&PTR_DAT_019e6cd8);
          local_88 = &DAT_0015023f;
          local_80 = 0xf;
          local_78 = &DAT_0015023f;
          local_70 = 0xf;
          _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,1,&local_88);
        }
      }
      else {
        _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h36b83b7aa703e08bE
                  (local_50);
        lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
        if (lVar2 != 0) {
          local_50._4_4_ = uStack_34;
          local_50._0_4_ = local_38;
          local_50._12_4_ = uStack_2c;
          local_50._8_4_ = uStack_30;
          local_58 = 
          PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
          ;
          local_b8 = &PTR_DAT_019e6c60;
          uStack_b0 = 1;
          uStack_98 = 0;
          local_a8 = &local_60;
          local_a0 = 1;
          local_60 = (undefined8 *)local_50;
          local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                               (&PTR_DAT_019e6cf0);
          local_88 = &DAT_0015023f;
          local_80 = 0xf;
          local_78 = &DAT_0015023f;
          local_70 = 0xf;
          _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,1,&local_88);
        }
      }
                    /* try { // try from 018d02fb to 018d0304 has its CatchHandler @ 018d03e5 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(local_40);
    }
    else {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
                (&local_b8);
      lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (lVar2 != 0) {
        local_b8 = &PTR_DAT_019e6c50;
        uStack_b0 = 1;
        local_a8 = (undefined8 **)&DAT_00000008;
        local_a0 = 0;
        uStack_98 = 0;
        local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6d08);
        local_88 = &DAT_0015023f;
        local_80 = 0xf;
        local_78 = &DAT_0015023f;
        local_70 = 0xf;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,1,&local_88);
      }
    }
  }
  else {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
              (&local_b8);
    lVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (lVar2 != 0) {
      local_b8 = &PTR_DAT_019e6c40;
      uStack_b0 = 1;
      local_a8 = (undefined8 **)&DAT_00000008;
      local_a0 = 0;
      uStack_98 = 0;
      local_68 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6d20);
      local_88 = &DAT_0015023f;
      local_80 = 0xf;
      local_78 = &DAT_0015023f;
      local_70 = 0xf;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,1,&local_88);
    }
  }
LAB_018d0305:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(&local_28);
  return;
}