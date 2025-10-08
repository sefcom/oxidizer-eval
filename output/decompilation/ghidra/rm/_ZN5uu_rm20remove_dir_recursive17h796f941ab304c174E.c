ulong _ZN5uu_rm20remove_dir_recursive17h796f941ab304c174E
                (undefined8 **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong unaff_RBP;
  ulong uVar7;
  undefined **local_108;
  undefined8 *local_100;
  undefined8 **ppuStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined local_d8 [16];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 **ppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_38;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001f0de8)
            (&local_108,param_1,param_2);
  if ((((ulong)local_108 & 1) == 0) && ((undefined8 **)0x3e8 < ppuStack_f8)) {
    lVar6 = _ZN3std2fs14remove_dir_all17h2f1ee9cf2f121232E(param_1,param_2);
    if (lVar6 != 0) {
      local_b0 = (undefined8 *)
                 _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h38f2107b9f174514E
                           (lVar6,param_1,param_2);
                    /* try { // try from 0015c90c to 0015c9c3 has its CatchHandler @ 0015cf02 */
      local_d8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      ppuStack_90 = (undefined8 **)
                    _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_108 = (undefined **)&DAT_001ea4a0;
      local_100 = (undefined8 *)0x2;
      uStack_e8 = 0;
      ppuStack_f8 = &local_98;
      local_f0 = 1;
      local_98 = (undefined8 *)local_d8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
      local_d8._0_8_ = &local_b0;
      local_d8._8_8_ =
           _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h29c983c066893c20E
      ;
      local_108 = (undefined **)&DAT_001ea4e0;
      local_100 = (undefined8 *)0x2;
      uStack_e8 = 0;
      local_f0 = 1;
      ppuStack_f8 = (undefined8 **)local_d8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
LAB_0015c9c4:
      _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h186a117efda8c6b1E
                (local_b0);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      goto LAB_0015ce98;
    }
  }
  else {
    cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f1078)(param_1,param_2);
    if ((cVar2 == '\0') ||
       (cVar2 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f1080)
                          (param_1,param_2), cVar2 != '\0')) {
      uVar4 = _ZN5uu_rm11remove_file17h42f0a78696bb1093E(param_1,param_2,param_3);
      unaff_RBP = (ulong)uVar4;
      goto LAB_0015ce98;
    }
    cVar2 = *(char *)(param_3 + 7);
    if (((cVar2 != '\x02') ||
        (cVar3 = _ZN5uu_rm12is_dir_empty17h0b58628bb17a83e8E(param_1,param_2), cVar3 != '\0')) ||
       (cVar3 = _ZN5uu_rm14prompt_descend17heddf5145b62c3c76E(param_1,param_2), cVar3 != '\0')) {
      _ZN3std2fs8read_dir17h8c3d3d6768148fc1E(&local_40,param_1,param_2);
      uVar7 = 0;
      if (local_38 == '\x02') {
        cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_40);
        if (cVar3 == '\x01') {
                    /* try { // try from 0015cb90 to 0015cbbd has its CatchHandler @ 0015cee9 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(local_40);
          unaff_RBP = 0;
        }
        else {
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(local_40);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        }
      }
      else {
        local_68 = local_40;
        local_58 = local_40;
        local_50 = local_38;
        local_60 = param_3;
        local_48 = param_2;
LAB_0015cac3:
        (*(code *)
          PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_001f1040
        )(&local_108,&local_58);
        if ((int)local_108 == 1) {
          local_88 = local_f0;
          uStack_80 = uStack_e8;
          local_98 = local_100;
          ppuStack_90 = ppuStack_f8;
          local_78 = local_e0;
          if (local_100 != (undefined8 *)0x0) goto code_r0x0015cb0f;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
          goto LAB_0015cab3;
        }
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h99d2b3813cc34141E(&local_58);
        unaff_RBP = uVar7;
        param_3 = local_60;
        param_2 = local_48;
      }
      if ((cVar2 != '\x02') ||
         (cVar2 = _ZN5uu_rm10prompt_dir17h2b47d5798effefb0E
                            (param_1,param_2,*(undefined *)(param_3 + 6),2), cVar2 != '\0')) {
        lVar6 = _ZN3std2fs10remove_dir17hddc5f5b6184df82aE(param_1,param_2);
        if (lVar6 == 0) {
          if (*(char *)(param_3 + 5) == '\x01') {
            _ZN5uu_rm9normalize17h371ce75c5c819b8dE(&local_98,param_1,param_2);
            local_d8._0_8_ = 1;
            local_d8._8_8_ = ppuStack_90;
            local_c8 = local_88;
            uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
            local_b0 = (undefined8 *)local_d8;
            local_a8 = 
            PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
            ;
            local_108 = &PTR_DAT_001ea520;
            local_100 = (undefined8 *)0x2;
            uStack_e8 = 0;
            ppuStack_f8 = &local_b0;
            local_f0 = 1;
                    /* try { // try from 0015cd9c to 0015cda6 has its CatchHandler @ 0015ceac */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f1090)(&local_108);
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hec94fc61a491c65bE
                      (local_98,ppuStack_90);
          }
          goto LAB_0015ce98;
        }
        if ((unaff_RBP & 1) == 0) {
                    /* try { // try from 0015cc26 to 0015cc30 has its CatchHandler @ 0015ced9 */
          cVar2 = _ZN5uu_rm11is_readable17h11778c167935ca98E(param_1,param_2);
          if (cVar2 != '\0') {
            local_b0 = (undefined8 *)
                       _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h38f2107b9f174514E
                                 (lVar6,param_1,param_2);
                    /* try { // try from 0015cc4c to 0015cd03 has its CatchHandler @ 0015cec7 */
            local_d8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
            ppuStack_90 = (undefined8 **)
                          _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
            local_108 = (undefined **)&DAT_001ea4a0;
            local_100 = (undefined8 *)0x2;
            uStack_e8 = 0;
            ppuStack_f8 = &local_98;
            local_f0 = 1;
            local_98 = (undefined8 *)local_d8;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
            local_d8._0_8_ = &local_b0;
            local_d8._8_8_ =
                 _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h29c983c066893c20E
            ;
            local_108 = (undefined **)&DAT_001ea4e0;
            local_100 = (undefined8 *)0x2;
            uStack_e8 = 0;
            local_f0 = 1;
            ppuStack_f8 = (undefined8 **)local_d8;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
            goto LAB_0015c9c4;
          }
                    /* try { // try from 0015cdbc to 0015ce8c has its CatchHandler @ 0015ced9 */
          local_d8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
          ppuStack_90 = (undefined8 **)
                        _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
          local_108 = (undefined **)&DAT_001ea4a0;
          local_100 = (undefined8 *)0x2;
          uStack_e8 = 0;
          local_f0 = 1;
          ppuStack_f8 = &local_98;
          local_98 = (undefined8 *)local_d8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
          local_d8._0_8_ = &DAT_00000001;
          uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
          ppuStack_90 = (undefined8 **)
                        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
          ;
          local_108 = &PTR_DAT_001ea500;
          local_100 = (undefined8 *)0x2;
          uStack_e8 = 0;
          local_f0 = 1;
          ppuStack_f8 = &local_98;
          local_d8._8_8_ = param_1;
          local_c8 = param_2;
          local_98 = (undefined8 *)local_d8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_108);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        }
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(lVar6);
        goto LAB_0015ce98;
      }
    }
  }
  unaff_RBP = 0;
LAB_0015ce98:
  return unaff_RBP & 0xffffffff;
code_r0x0015cb0f:
  local_b8 = local_e0;
  local_c8 = local_f0;
  uStack_c0 = (undefined4)uStack_e8;
  uStack_bc = uStack_e8._4_4_;
  local_d8._0_8_ = local_100;
  local_d8._8_8_ = ppuStack_f8;
                    /* try { // try from 0015cb29 to 0015cb36 has its CatchHandler @ 0015cf28 */
  (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_001f1088)(&local_b0,local_d8);
  puVar1 = local_a8;
                    /* try { // try from 0015cb41 to 0015cb50 has its CatchHandler @ 0015cf11 */
  uVar5 = _ZN5uu_rm20remove_dir_recursive17h796f941ab304c174E(local_a8,local_a0,local_60);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hec94fc61a491c65bE(local_b0,puVar1);
                    /* try { // try from 0015cb61 to 0015cb68 has its CatchHandler @ 0015cf23 */
  _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h368a5a1663c5dbc2E(local_d8);
  uVar7 = (ulong)CONCAT31((int3)((uint)uVar5 >> 8),(byte)uVar5 | (byte)uVar7) & 0xffffffffffffff01;
  if (local_98 == (undefined8 *)0x0) {
LAB_0015cab3:
                    /* try { // try from 0015cab3 to 0015cad5 has its CatchHandler @ 0015cf4f */
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__DirEntry_C_std__io__error__Error_GT__GT_17hc3253a40f2f30f24E
              (&local_98);
  }
  goto LAB_0015cac3;
}