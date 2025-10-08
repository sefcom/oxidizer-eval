long _ZN9meilitool7upgrade14OfflineUpgrade7upgrade17h5d5b6e9d02cf38b1E(long param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined auVar13 [16];
  int local_188;
  int local_184;
  uint local_180;
  int local_17c;
  undefined8 local_178;
  undefined **local_170;
  undefined *local_168;
  int *local_160;
  undefined *local_158;
  uint *puStack_150;
  undefined *local_148;
  undefined **local_140;
  code *local_138;
  undefined **local_130;
  code *local_128;
  long local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined **local_108;
  undefined8 local_100;
  undefined ***local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined ***local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  code *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
  ppuVar12 = (undefined **)(param_1 + 0x18);
  ppuVar1 = (undefined **)(param_1 + 0x24);
  cVar7 = _ZN4core5tuple68__LT_impl_u20_core__cmp__PartialEq_u20_for_u20__LP_V_C_U_C_T_RP__GT_2eq17h89ca59b6fdea7689E
                    (ppuVar12,ppuVar1);
  if (cVar7 != '\0') {
    local_170 = &PTR_s_Database_is_already_at_the_targe_006266c8;
    local_168 = &DAT_00000001;
    local_160 = (int *)&DAT_00000008;
    local_158 = (undefined *)0x0;
    puStack_150 = (uint *)0x0;
                    /* try { // try from 0045a491 to 0045a9d4 has its CatchHandler @ 0045ab3f */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
    goto LAB_0045a49c;
  }
  cVar7 = _ZN4core5tuple69__LT_impl_u20_core__cmp__PartialOrd_u20_for_u20__LP_V_C_U_C_T_RP__GT_2gt17hdbab0e15c51d7f65E
                    (ppuVar12,ppuVar1);
  if (cVar7 != '\0') {
    local_160 = (int *)(param_1 + 0x1c);
    puStack_150 = (uint *)(param_1 + 0x20);
    local_130 = (undefined **)(param_1 + 0x28);
    local_120 = param_1 + 0x2c;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_158 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_148 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_138 = (code *)
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_128 = (code *)
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_118 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_d8 = &PTR_s_Cannot_downgrade_from___Downgrad_006266d8;
    local_d0 = 7;
    local_b8 = 0;
    local_c8 = &local_170;
    local_c0 = (code *)0x6;
    local_170 = ppuVar12;
    local_140 = ppuVar1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b971f5684418c65E
              (local_78,0,local_130,&local_d8);
    lVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h689583e2dcb36cd1E(local_78);
    goto LAB_0045a866;
  }
  local_d8 = (undefined **)_ZN9meilitool7upgrade5v1_1013v1_9_to_v1_1017h8211b0394fe5e0b1E;
  local_d0 = 0xa00000001;
  local_c8 = (undefined ***)((ulong)local_c8 & 0xffffffff00000000);
  local_c0 = _ZN9meilitool7upgrade5v1_1114v1_10_to_v1_1117h7310ce1b4db52cd7E;
  local_b8 = 0xb00000001;
  local_b0 = 0;
  local_a8 = _ZN9meilitool7upgrade5v1_1214v1_11_to_v1_1217h7009ecb2c7a83d34E;
  local_a0 = 0xc00000001;
  local_98 = 0;
  local_90 = _ZN9meilitool7upgrade5v1_1216v1_12_to_v1_12_317h1124d443d8a50fb5E;
  local_88 = 0xc00000001;
  local_80 = 3;
  local_188 = *(int *)(param_1 + 0x18);
  local_184 = *(int *)(param_1 + 0x1c);
  local_180 = *(uint *)(param_1 + 0x20);
  iVar9 = local_188;
  if (local_188 != 1) {
switchD_0045a650_caseD_4:
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_160 = &local_184;
    local_158 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    puStack_150 = &local_180;
    local_148 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_140 = &PTR_s_1_9_0_006268f0;
    local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
    local_130 = &PTR_s_1_12_7_006268e0;
    local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
    local_108 = &PTR_s_Unsupported_current_version___Ca_00626748;
    local_100 = 6;
    local_e8 = 0;
    local_f8 = &local_170;
    local_f0 = 5;
    local_170 = (undefined **)&local_188;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b971f5684418c65E(local_60,0,iVar9,&local_108);
    lVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h689583e2dcb36cd1E(local_60);
    goto LAB_0045a866;
  }
  switch(local_184) {
  case 9:
    bVar6 = false;
    ppuVar12 = (undefined **)0x0;
    break;
  case 10:
    ppuVar12 = (undefined **)0x1;
    goto LAB_0045a679;
  case 0xb:
    ppuVar12 = (undefined **)0x2;
LAB_0045a679:
    bVar6 = false;
    break;
  case 0xc:
    if (local_180 < 3) {
      ppuVar12 = (undefined **)0x3;
      goto LAB_0045a679;
    }
    iVar9 = 0x24b734;
    if (7 < local_180) goto switchD_0045a650_caseD_4;
    ppuVar12 = (undefined **)0x4;
    bVar6 = true;
    break;
  default:
    goto switchD_0045a650_caseD_4;
  }
  local_17c = *(int *)(param_1 + 0x24);
  local_178._0_4_ = *(int *)(param_1 + 0x28);
  local_178._4_4_ = *(uint *)(param_1 + 0x2c);
  if (local_17c == 1) {
    if ((int)local_178 == 10) {
      uVar11 = 0;
    }
    else if ((int)local_178 == 0xb) {
      uVar11 = 1;
    }
    else if (((int)local_178 != 0xc) ||
            ((uVar11 = 2, 2 < local_178._4_4_ && (uVar11 = 3, 7 < local_178._4_4_))))
    goto LAB_0045a6cb;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_160 = &local_184;
    local_158 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    puStack_150 = &local_180;
    local_148 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_140 = (undefined **)&local_17c;
    local_138 = (code *)
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_130 = (undefined **)&local_178;
    local_128 = (code *)
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_120 = (long)&local_178 + 4;
    local_118 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_108 = &PTR_s_Starting_the_upgrade_from_00626808;
    local_100 = 7;
    local_e8 = 0;
    local_f8 = &local_170;
    local_f0 = 6;
    local_170 = (undefined **)&local_188;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_108);
    if (bVar6) {
      local_170 = &PTR_s_No_upgrade_operation_to_perform__00626878;
      local_168 = &DAT_00000001;
      local_160 = (int *)&DAT_00000008;
      local_158 = (undefined *)0x0;
      puStack_150 = (uint *)0x0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
      uVar11 = (*(code *)
                 PTR__ZN17meilisearch_types10versioning19create_version_file17hbde73438c9ad601dE_0063cf40
               )(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_17c,
                 (int)local_178,local_178._4_4_);
      lVar8 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h922eb5768960f478E
                        (uVar11);
      if (lVar8 == 0) {
        local_170 = &PTR_DAT_00626888;
        local_168 = &DAT_00000001;
        local_160 = (int *)&DAT_00000008;
        local_158 = (undefined *)0x0;
        puStack_150 = (uint *)0x0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
LAB_0045a49c:
        lVar8 = 0;
      }
    }
    else {
      local_f8 = (undefined ***)((ulong)local_f8 & 0xffffffffffffff00);
      local_108 = ppuVar12;
      local_100 = uVar11;
      do {
        auVar13 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h5b57042f3c50ababE
                            (&local_108);
        uVar10 = auVar13._8_8_;
        if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          local_170 = &PTR_DAT_00626888;
          local_168 = &DAT_00000001;
          local_160 = (int *)&DAT_00000008;
          local_158 = (undefined *)0x0;
          puStack_150 = (uint *)0x0;
                    /* try { // try from 0045ab13 to 0045ab3a has its CatchHandler @ 0045ab3f */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
          goto LAB_0045a49c;
        }
        if (3 < uVar10) {
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0063bf40)
                    (uVar10,4,&PTR_s_crates_meilitool_src_upgrade_mod_006268b8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar2 = *(undefined4 *)(&local_d0 + uVar10 * 3);
        uVar3 = *(undefined4 *)((long)&local_d0 + uVar10 * 0x18 + 4);
        local_10c = *(undefined4 *)(&local_c8 + uVar10 * 3);
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0045aa43 to 0045aadb has its CatchHandler @ 0045ab3d */
        lVar8 = (*(code *)(&local_d8)[uVar10 * 3])(uVar11,uVar4,local_188,local_184,local_180);
        if (lVar8 != 0) break;
        local_170 = &PTR_s_Done_00626898;
        local_168 = (undefined *)0x1;
        local_160 = (int *)0x8;
        local_158 = (undefined *)0x0;
        puStack_150 = (uint *)0x0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
        local_170 = &PTR_s_Writing_VERSION_file_006268a8;
        local_168 = &DAT_00000001;
        local_160 = (int *)&DAT_00000008;
        local_158 = (undefined *)0x0;
        puStack_150 = (uint *)0x0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_170);
        uVar11 = (*(code *)
                   PTR__ZN17meilisearch_types10versioning19create_version_file17hbde73438c9ad601dE_0063cf40
                 )(uVar11,uVar4,uVar2,uVar3,local_10c);
        lVar8 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h922eb5768960f478E
                          (uVar11);
      } while (lVar8 == 0);
    }
  }
  else {
LAB_0045a6cb:
    local_170 = (undefined **)&local_17c;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_160 = (int *)&local_178;
    local_158 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    puStack_150 = (uint *)((long)&local_178 + 4);
    local_148 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0063c730
    ;
    local_140 = &PTR_s_1_10_0_006268d0;
    local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
    local_130 = &PTR_s_1_12_7_006268e0;
    local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
    local_108 = &PTR_s_Unsupported_target_version___Can_006267a8;
    local_100 = 6;
    local_e8 = 0;
    local_f8 = &local_170;
    local_f0 = 5;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b971f5684418c65E
              (local_48,0,local_17c,&local_108);
    lVar8 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h689583e2dcb36cd1E(local_48);
  }
LAB_0045a866:
  _ZN4core3ptr55drop_in_place_LT_meilitool__upgrade__OfflineUpgrade_GT_17h9af930716f8a0e3aE(param_1)
  ;
  return lVar8;
}