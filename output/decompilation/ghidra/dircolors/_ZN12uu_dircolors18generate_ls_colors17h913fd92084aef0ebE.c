undefined4 *
_ZN12uu_dircolors18generate_ls_colors17h913fd92084aef0ebE
          (undefined4 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined **local_1b8;
  ulong uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined ***local_190;
  code *local_188;
  undefined8 **ppuStack_180;
  code *local_178;
  undefined8 *local_170;
  code *local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  code *local_150;
  undefined8 **local_148;
  code *local_140;
  undefined *local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 **ppuStack_120;
  code *local_118;
  undefined8 **local_108;
  code *pcStack_100;
  undefined ***local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined8 **local_c8;
  code *pcStack_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
  pppuVar9 = &local_1b8;
  local_d0 = param_1;
  if (*param_2 == '\x02') {
    local_1b8 = (undefined **)0x0;
    uStack_1b0 = 8;
    local_1a8 = 0;
                    /* try { // try from 001682dc to 00168300 has its CatchHandler @ 00168875 */
    (*(code *)PTR__ZN12uu_dircolors20generate_type_output17h04462d82bde79245E_001fe290)(local_78);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h60526611d18df024E(&local_1b8,local_78,&PTR_DAT_001f5d40);
    lVar11 = *(long *)PTR_PTR_001fe2a0;
    lVar10 = 0x18;
    local_160 = &local_1b8;
    do {
      ppuVar2 = *(undefined8 ***)(lVar11 + -0x18 + lVar10);
      pppuVar3 = *(undefined8 ****)(lVar11 + -0x10 + lVar10);
      puVar1 = (undefined8 *)(lVar11 + -8 + lVar10);
      local_108 = (undefined8 **)*puVar1;
      pcStack_100 = (code *)puVar1[1];
      local_1a0 = (undefined8 ***)((ulong)local_1a0 & 0xffffffff00000000);
      local_128 = (code *)ppuVar2;
      ppuStack_120 = pppuVar3;
      uVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2a,&local_1a0);
      bVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h84f44b8554ae9ebfE
                        (ppuVar2,pppuVar3,uVar6);
      local_e8 = "*";
      if (bVar5 != 0) {
        local_e8 = (char *)0x1;
      }
      uStack_e0 = (ulong)(bVar5 ^ 1);
      local_1a0 = &local_108;
      uStack_198 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_190 = (undefined ***)&local_e8;
      local_188 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      ppuStack_180 = (undefined8 **)&local_128;
      local_178 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_158 = (undefined8 **)&PTR_DAT_001f5d58;
      local_150 = (code *)0x5;
      local_138 = &DAT_0011c328;
      local_130 = 4;
      local_140 = (code *)0x3;
                    /* try { // try from 00168422 to 00168440 has its CatchHandler @ 001688b6 */
      local_148 = (undefined8 **)&local_1a0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(local_60,&local_158);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h60526611d18df024E
                (&local_1b8,local_60,&PTR_DAT_001f5da8);
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0x1058);
                    /* try { // try from 0016845c to 00168472 has its CatchHandler @ 00168875 */
    _ZN5alloc3str17join_generic_copy17h8b37c6cf08035dd4E
              (&local_1a0,uStack_1b0,local_1a8,&DAT_0011c11e,1);
    *(undefined ****)(local_d0 + 4) = local_190;
    *local_d0 = (undefined4)local_1a0;
    local_d0[1] = local_1a0._4_4_;
    local_d0[2] = (undefined4)uStack_198;
    local_d0[3] = uStack_198._4_4_;
    puVar8 = local_d0;
  }
  else {
    local_b0 = 0;
    local_a8 = 8;
    local_a0 = 0;
    local_80 = *(long *)PTR_PTR_001fe2a0;
    lVar11 = 0x18;
    local_160 = &local_b0;
    local_98 = param_3;
    local_90 = param_4;
    local_88 = param_2;
    do {
      ppuVar2 = *(undefined8 ***)(local_80 + -0x18 + lVar11);
      uVar6 = *(undefined8 *)(local_80 + -0x10 + lVar11);
      puVar1 = (undefined8 *)(local_80 + -8 + lVar11);
      local_128 = (code *)*puVar1;
      ppuStack_120 = (undefined8 **)puVar1[1];
      local_1a0 = (undefined8 ***)((ulong)local_1a0 & 0xffffffff00000000);
      local_c8 = ppuVar2;
      pcStack_c0 = (code *)uVar6;
      uVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2a,&local_1a0);
      bVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h84f44b8554ae9ebfE
                        (ppuVar2,uVar6,uVar7);
      local_108 = (undefined8 **)0x11c320;
      if (bVar5 != 0) {
        local_108 = (undefined8 **)0x1;
      }
      pcStack_100 = (code *)(ulong)(bVar5 ^ 1);
      local_158 = &local_108;
      local_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_148 = &local_c8;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_1a0 = (undefined8 ***)&DAT_0011c1c0;
      uStack_198 = (code *)0x2;
      ppuStack_180 = (undefined8 **)0x0;
      local_188 = (code *)0x2;
      local_190 = (undefined ***)&local_158;
                    /* try { // try from 001685e6 to 001685f0 has its CatchHandler @ 00168892 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_1b8,&local_1a0);
      local_e8 = (char *)local_1b8;
      uStack_e0 = uStack_1b0;
      local_d8 = local_1a8;
      local_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_148 = (undefined8 **)&local_128;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc346f95847262c6fE;
      local_1a0 = (undefined8 ***)&DAT_001f5ce0;
      uStack_198 = (code *)0x2;
      ppuStack_180 = (undefined8 ***)0x0;
      local_188 = (code *)0x2;
                    /* try { // try from 00168659 to 00168685 has its CatchHandler @ 00168894 */
      local_190 = (undefined ***)&local_158;
      local_158 = (undefined8 **)&local_e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(local_48,&local_1a0);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h60526611d18df024E(&local_b0,local_48,&PTR_DAT_001f5dc0)
      ;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_e8);
      pcVar4 = local_88;
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0x1058);
                    /* try { // try from 001686a2 to 001686b7 has its CatchHandler @ 00168873 */
    (*(code *)PTR__ZN12uu_dircolors25get_colors_format_strings17h31238be5fa82f8cfE_001fe060)
              (&local_1a0,local_88);
    local_b8 = local_190;
    local_c8 = local_1a0;
    pcStack_c0 = uStack_198;
    local_118 = local_178;
    local_128 = local_188;
    ppuStack_120 = ppuStack_180;
                    /* try { // try from 001686fc to 00168718 has its CatchHandler @ 00168859 */
    _ZN5alloc3str17join_generic_copy17h8b37c6cf08035dd4E
              (&local_1a0,local_a8,local_a0,local_98,local_90);
    local_f8 = local_190;
    local_108 = local_1a0;
    pcStack_100 = uStack_198;
                    /* try { // try from 00168733 to 00168741 has its CatchHandler @ 00168847 */
    (*(code *)PTR__ZN12uu_dircolors20generate_type_output17h04462d82bde79245E_001fe290)
              (&local_1b8,pcVar4);
    local_1a0 = &local_c8;
    uStack_198 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_188 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    ppuStack_180 = &local_108;
    local_178 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_170 = &local_128;
    local_168 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_158 = (undefined8 **)&DAT_001f5d00;
    local_150 = (code *)0x4;
    local_138 = (undefined *)0x0;
    local_140 = (code *)0x4;
                    /* try { // try from 001687b8 to 001687c9 has its CatchHandler @ 0016883a */
    local_190 = &local_1b8;
    local_148 = (undefined8 **)&local_1a0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5bf0e5c4a7ca1769E(&local_e8,&local_158);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_1b8);
    puVar8 = local_d0;
    *(undefined8 *)(local_d0 + 4) = local_d8;
    *local_d0 = (undefined4)local_e8;
    local_d0[1] = local_e8._4_4_;
    local_d0[2] = (undefined4)uStack_e0;
    local_d0[3] = uStack_e0._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_108);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_128);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he21a9fb453b36e4fE(&local_c8);
    pppuVar9 = (undefined ***)&local_b0;
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hbd7984742b77bb31E
            (pppuVar9);
  return puVar8;
}