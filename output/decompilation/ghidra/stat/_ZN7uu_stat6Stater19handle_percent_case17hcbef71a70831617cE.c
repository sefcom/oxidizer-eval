void _ZN7uu_stat6Stater19handle_percent_case17hcbef71a70831617cE
               (ulong *param_1,long param_2,undefined *param_3,ulong *param_4,undefined *param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *unaff_RBX;
  ulong uVar9;
  undefined **ppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [12];
  undefined4 local_110;
  undefined2 local_10c;
  ulong *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  long **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_c0;
  ulong local_b8;
  ulong *local_b0;
  undefined local_a8 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  uint local_70 [2];
  ulong local_68;
  long local_60;
  long *local_58;
  undefined *local_50;
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *local_38;
  
  puVar3 = (undefined *)*param_4;
  puVar1 = puVar3 + 1;
  *param_4 = (ulong)puVar1;
  if (param_5 <= puVar1) {
LAB_00175249:
    *param_1 = 3;
    *(undefined4 *)(param_1 + 1) = 0x25;
    return;
  }
  if (puVar1 < param_3) {
    if (*(int *)(param_2 + 4 + (long)puVar3 * 4) == 0x25) {
      *param_4 = (ulong)(puVar3 + 2);
      goto LAB_00175249;
    }
    local_10c = 0;
    local_110 = 0;
    local_108 = param_1;
    local_100 = param_3;
    _ZN7uu_stat6Stater13process_flags17hab64942a0ebe541aE
              (param_2,param_3,param_4,param_5,&local_110);
    unaff_RBX = (undefined *)*param_4;
    local_b0 = param_4;
    lVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (unaff_RBX,param_6,param_7);
    if (lVar6 == 0) {
      ppuVar10 = &PTR_s_src_uu_stat_src_stat_rs_00219d78;
      goto LAB_001756d3;
    }
    _ZN41__LT_str_u20_as_u20_uu_stat__ScanUtil_GT_8scan_num17ha5b104d34638ed06E(local_70,lVar6);
    if ((local_70[0] & 1) != 0) {
      unaff_RBX = unaff_RBX + local_60;
      if (unaff_RBX < param_5) {
        if (local_100 <= unaff_RBX) goto LAB_00175718;
        if (*(int *)(param_2 + (long)unaff_RBX * 4) != 0x25) {
          local_c0 = local_68;
          goto LAB_00175434;
        }
      }
      uStack_f0 = _ZN4core3cmp3Ord3min17h7daa075e7606d488E(unaff_RBX,param_5 + -1);
      local_e8 = (long **)((ulong)local_e8 & 0xffffffffffffff00);
      local_f8 = puVar3;
      auVar11 = _ZN115__LT_core__ops__range__RangeInclusive_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17he315e8eb3b0334b6E
                          (&local_f8,param_2,local_100);
      _ZN4core4iter6traits8iterator8Iterator7collect17h90f37a8f28207592E
                (local_a8,auVar11._0_8_,auVar11._0_8_ + auVar11._8_8_ * 4);
      local_90 = 0;
      local_88 = (undefined *)CONCAT44(uStack_9c,local_a0);
      uStack_80 = (uint *)CONCAT44(uStack_94,uStack_98);
      local_78 = (undefined *)CONCAT71(local_78._1_7_,1);
      local_58 = &local_90;
      local_50 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00222260
      ;
      local_f8 = &DAT_002199e0;
      uStack_f0 = 2;
      local_d8 = 0;
      local_e8 = &local_58;
      local_e0 = 1;
                    /* try { // try from 001753c3 to 00175400 has its CatchHandler @ 0017575d */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_48,&local_f8);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      uStack_f0 = CONCAT44(uStack_3c,uStack_40);
      local_e8 = (long **)local_38;
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h173a34a4352a059dE(&local_f8);
      local_108[1] = uVar7;
      local_108[2] = (ulong)&
                            PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha0121f635ad8d572E_00219a38
      ;
      *local_108 = 5;
LAB_0017541c:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_a8);
      return;
    }
    local_c0 = 0;
LAB_00175434:
    uVar7 = _ZN7uu_stat11check_bound17h3dee2e7f7020c454E(param_6,param_7,param_5,puVar3,unaff_RBX);
    if (uVar7 != 0) goto LAB_00175457;
    if (local_100 <= unaff_RBX) goto LAB_0017572d;
    if (*(int *)(param_2 + (long)unaff_RBX * 4) == 0x2e) {
      unaff_RBX = unaff_RBX + 1;
      uVar7 = _ZN7uu_stat11check_bound17h3dee2e7f7020c454E(param_6,param_7,param_5,puVar3,unaff_RBX)
      ;
      if (uVar7 != 0) {
LAB_00175457:
        local_108[1] = uVar7;
        local_108[2] = (ulong)&
                              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha0121f635ad8d572E_00219a38
        ;
        *local_108 = 5;
        return;
      }
      lVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (unaff_RBX,param_6,param_7);
      if (lVar6 == 0) {
        do {
          ppuVar10 = &PTR_s_src_uu_stat_src_stat_rs_00219dd8;
LAB_001756d3:
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
                    (param_6,param_7,unaff_RBX,param_7,ppuVar10);
        } while( true );
      }
      _ZN41__LT_str_u20_as_u20_uu_stat__ScanUtil_GT_8scan_num17ha94ea7e66c723cbcE(&local_f8,lVar6);
      if (((ulong)local_f8 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        local_b8 = uStack_f0 & 0xffffffff;
        uVar9 = (ulong)(~(uint)uStack_f0 >> 0x1e & 0xfffffffe);
        unaff_RBX = unaff_RBX + (long)local_e8;
      }
      uVar7 = _ZN7uu_stat11check_bound17h3dee2e7f7020c454E(param_6,param_7,param_5,puVar3,unaff_RBX)
      ;
      if (uVar7 != 0) goto LAB_00175457;
    }
    else {
      uVar9 = 0;
    }
    puVar5 = local_b0;
    *local_b0 = (ulong)unaff_RBX;
    puVar1 = unaff_RBX + 1;
    if (puVar1 < param_5 && puVar1 < local_100) {
      local_70[0] = *(uint *)(param_2 + 4 + (long)unaff_RBX * 4);
      if (local_100 <= unaff_RBX) goto LAB_0017574d;
      if (((*(uint *)(param_2 + (long)unaff_RBX * 4) | 4) == 0x4c) &&
         ((local_70[0] == 0x72 || (local_70[0] == 100)))) {
        local_90 = param_2 + (long)unaff_RBX * 4;
        local_88 = 
        PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00222288;
        uStack_80 = local_70;
        local_78 = 
        PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00222288;
        local_f8 = &DAT_0011cfd0;
        uStack_f0 = 2;
        local_d8 = 0;
        local_e8 = (long **)&local_90;
        local_e0 = 2;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_a8,&local_f8);
        *puVar5 = (ulong)puVar1;
        uStack_f0 = CONCAT44(uStack_94,uStack_98) + CONCAT44(uStack_9c,local_a0);
        auVar12 = _ZN4core3str11validations15next_code_point17h60eba128fb062bb1E(&local_f8);
        if (((auVar12 & (undefined  [12])0x1) == (undefined  [12])0x0) ||
           (auVar12._8_4_ == 0x110000)) {
                    /* try { // try from 001756f3 to 001756ff has its CatchHandler @ 0017575f */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002222b8)
                    (&PTR_s_src_uu_stat_src_stat_rs_00219e08);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(undefined2 *)(local_108 + 4) = local_10c;
        *(undefined4 *)((long)local_108 + 0x1c) = local_110;
        *local_108 = uVar9;
        local_108[1] = local_b8;
        local_108[2] = local_c0;
        *(int *)(local_108 + 3) = auVar12._8_4_;
        goto LAB_0017541c;
      }
    }
    if (unaff_RBX < local_100) {
      uVar2 = *(undefined4 *)(param_2 + (long)unaff_RBX * 4);
      *(undefined2 *)(local_108 + 4) = local_10c;
      *(undefined4 *)((long)local_108 + 0x1c) = local_110;
      *local_108 = uVar9;
      local_108[1] = local_b8;
      local_108[2] = local_c0;
      *(undefined4 *)(local_108 + 3) = uVar2;
      return;
    }
  }
  else {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
              (puVar1,param_3,&PTR_s_src_uu_stat_src_stat_rs_00219d60);
LAB_00175718:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
              (unaff_RBX,local_100,&PTR_s_src_uu_stat_src_stat_rs_00219d90);
LAB_0017572d:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)(unaff_RBX);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)(unaff_RBX);
LAB_0017574d:
  uVar8 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
                    (unaff_RBX);
                    /* catch() { ... } // from try @ 001753c3 with catch @ 0017575d */
                    /* catch() { ... } // from try @ 001756f3 with catch @ 0017575f */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(unaff_RBX);
  _Unwind_Resume(uVar8);
  return;
}