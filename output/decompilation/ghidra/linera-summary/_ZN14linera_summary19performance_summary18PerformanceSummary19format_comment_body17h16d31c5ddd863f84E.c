undefined4 *
_ZN14linera_summary19performance_summary18PerformanceSummary19format_comment_body17h16d31c5ddd863f84E
          (undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar5;
  undefined auVar6 [16];
  undefined8 ***local_1d8;
  code *pcStack_1d0;
  undefined8 ***local_1c8;
  code *local_1c0;
  char *local_1b8;
  code *local_1b0;
  undefined8 ***local_1a8;
  code *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 ***local_188;
  undefined8 ***local_178;
  code *pcStack_170;
  undefined8 ***local_168;
  undefined8 ***local_158;
  code *pcStack_150;
  undefined8 ***local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 ***local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 ***local_110;
  code *local_108;
  undefined8 ***local_100;
  code *local_f8;
  undefined8 **local_f0;
  code *local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 *local_c8;
  long local_c0;
  long local_b8;
  undefined8 **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80 [2];
  undefined local_70 [24];
  undefined local_58 [24];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar4 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  local_90 = uVar4;
  local_88 = uVar2;
  auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                     (uVar4,uVar2);
  local_80[0] = auVar6._0_8_;
  if (local_80[0] == 0) {
    uVar4 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00a4bb48)
                      (uVar4,uVar2,0,7,&PTR_s_linera_summary_src_performance_s_009f35d0);
                    /* catch() { ... } // from try @ 00619ab4 with catch @ 00619ebb */
                    /* catch() { ... } // from try @ 00619c91 with catch @ 00619f24 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_198);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_a8);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar4);
  }
  local_80[1] = 7;
  local_178 = *(undefined8 ****)(param_2 + 0x98);
  pcStack_170 = *(code **)(param_2 + 0xa0);
  local_158 = *(undefined8 ****)(param_2 + 0xb0);
  pcStack_150 = *(code **)(param_2 + 0xb8);
  local_110 = &local_178;
  local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
  local_f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
  local_f0 = (undefined8 **)&local_90;
  local_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
  local_1d8 = (undefined8 ***)&PTR_s_https___github_com________009f34f0;
  pcStack_1d0 = (code *)0x3;
  local_1b8 = (char *)0x0;
  local_1c0 = (code *)0x3;
  local_1c8 = &local_110;
  local_100 = &local_158;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h175ba7e43b0bb732E
            (&local_140,0,auVar6._8_8_,&local_1d8);
  local_a8 = (undefined4)local_140;
  uStack_a4 = local_140._4_4_;
  uStack_a0 = (undefined4)uStack_138;
  uStack_9c = uStack_138._4_4_;
  local_98 = local_130;
  local_110 = (undefined8 ***)&PTR_s____Performance_Summary_for_commi_009f35e8;
  local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
  local_100 = (undefined8 ***)local_80;
  local_f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
  local_f0 = (undefined8 **)&local_a8;
  local_e8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_1d8 = (undefined8 ***)&DAT_009f3520;
  pcStack_1d0 = (code *)&DAT_00000004;
  local_1b8 = (undefined *)0x0;
  local_1c0 = (code *)0x3;
                    /* try { // try from 00619a85 to 00619a99 has its CatchHandler @ 00619ebd */
  local_1c8 = &local_110;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h175ba7e43b0bb732E(&local_140,0);
  local_198 = (undefined4)local_140;
  uStack_194 = local_140._4_4_;
  uStack_190 = (undefined4)uStack_138;
  uStack_18c = uStack_138._4_4_;
  local_188 = local_130;
                    /* try { // try from 00619ab4 to 00619acb has its CatchHandler @ 00619ebb */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h93f1f9ac7e3243a2E
            (&local_198,"### CI Runtime Comparison\n\n","#### Workflow: \n\n");
  local_100 = *(undefined8 ****)(param_2 + 0x118);
  if (local_100 == (undefined8 ***)0x0) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
  }
  else {
    local_d8 = *(undefined4 *)(param_2 + 0x120);
    uStack_d4 = *(undefined4 *)(param_2 + 0x124);
    uStack_d0 = *(undefined4 *)(param_2 + 0x128);
    uStack_cc = *(undefined4 *)(param_2 + 300);
  }
  local_110 = (undefined8 ***)(ulong)(local_100 != (undefined8 ***)0x0);
  local_108 = (code *)0x0;
  local_f8 = (code *)CONCAT44(uStack_d4,local_d8);
  local_e8 = (code *)0x0;
  local_f0 = local_110;
  local_e0 = (long)local_100;
  local_c8 = param_1;
  while( true ) {
    auVar6 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdd83deec80123dc3E
                       (&local_110);
    puVar1 = local_c8;
    lVar5 = auVar6._8_8_;
    if (auVar6._0_8_ == (undefined8 ***)0x0) break;
    local_158 = &local_b0;
    pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h700141344a572bc4E;
    local_1d8 = (undefined8 ***)&PTR_s______Workflow__009f3560;
    pcStack_1d0 = (code *)0x2;
    local_1b8 = (undefined *)0x0;
    local_1c0 = (code *)0x1;
    local_1c8 = &local_158;
    local_b0 = auVar6._0_8_;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h175ba7e43b0bb732E(&local_140,0,lVar5,&local_1d8)
    ;
    local_1d8 = (undefined8 ***)local_140;
    pcStack_1d0 = uStack_138;
    local_1c8 = local_130;
                    /* try { // try from 00619c0b to 00619c12 has its CatchHandler @ 00619ed5 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h93f1f9ac7e3243a2E
              (&local_198,uStack_138,(code *)((long)local_130 + (long)uStack_138));
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_1d8);
                    /* try { // try from 00619c1b to 00619c46 has its CatchHandler @ 00619ee2 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h93f1f9ac7e3243a2E
              (&local_198,"| Job Name | Base Runtime | PR Runtime | Runtime Difference (%) |\n",
               "| --- | --- | --- | --- |\n");
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h93f1f9ac7e3243a2E
              (&local_198,"| --- | --- | --- | --- |\n","|  |  |\n");
    if (*(long *)(lVar5 + 0x10) != 0) {
      local_b8 = *(long *)(lVar5 + 8);
      local_c0 = *(long *)(lVar5 + 0x10) * 0x48;
      lVar5 = 0;
      do {
        lVar3 = local_b8;
        local_1d8 = *(undefined8 ****)(local_b8 + 0x30 + lVar5);
        pcStack_1d0 = (code *)((ulong)pcStack_1d0 & 0xffffffff00000000);
                    /* try { // try from 00619c91 to 00619c9b has its CatchHandler @ 00619f24 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h03e4ad6daf6d25f3E
                  (local_70,&local_1d8);
        local_1d8 = *(undefined8 ****)(lVar3 + 0x38 + lVar5);
        pcStack_1d0 = (code *)((ulong)pcStack_1d0 & 0xffffffff00000000);
                    /* try { // try from 00619cad to 00619cbc has its CatchHandler @ 00619f12 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h03e4ad6daf6d25f3E
                  (local_58,&local_1d8);
        local_178 = *(undefined8 ****)(lVar3 + 0x40 + lVar5);
        pcStack_150 = (code *)
                      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_00a4c120
        ;
        local_1d8 = (undefined8 ***)&DAT_009f35f8;
        pcStack_1d0 = (code *)0x2;
        local_1b8 = "";
        local_1b0 = (code *)0x1;
        local_1c0 = (code *)0x1;
        local_1c8 = &local_158;
        local_158 = &local_178;
                    /* try { // try from 00619d1d to 00619d29 has its CatchHandler @ 00619f00 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h175ba7e43b0bb732E
                  (&local_140,0,extraout_RDX,&local_1d8);
        local_178 = (undefined8 ***)local_140;
        pcStack_170 = uStack_138;
        local_168 = local_130;
        puVar1 = (undefined4 *)(lVar3 + 8 + lVar5);
        local_40 = *puVar1;
        uStack_3c = puVar1[1];
        uStack_38 = puVar1[2];
        uStack_34 = puVar1[3];
        local_1d8 = (undefined8 ***)&local_40;
        pcStack_1d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59d07b40f15f706bE;
        local_1c8 = (undefined8 ***)local_70;
        local_1c0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1b8 = local_58;
        local_1b0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1a0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_140 = &PTR_s_______009f3580;
        uStack_138 = (code *)&DAT_00000005;
        local_120 = 0;
        local_128 = 4;
        local_1a8 = &local_178;
        local_130 = &local_1d8;
                    /* try { // try from 00619ddd to 00619de9 has its CatchHandler @ 00619ee4 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h175ba7e43b0bb732E
                  (&local_158,0,extraout_RDX_00,&local_140);
        local_1d8 = local_158;
        pcStack_1d0 = pcStack_150;
        local_1c8 = local_148;
                    /* try { // try from 00619e0b to 00619e14 has its CatchHandler @ 00619ee9 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h93f1f9ac7e3243a2E
                  (&local_198,pcStack_150,(code *)((long)local_148 + (long)pcStack_150));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_1d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_178);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_58);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(local_70);
        lVar5 = lVar5 + 0x48;
      } while (local_c0 != lVar5);
    }
                    /* try { // try from 00619b60 to 00619be9 has its CatchHandler @ 00619ee2 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_198);
  }
  *(undefined8 ****)(local_c8 + 4) = local_188;
  *local_c8 = local_198;
  local_c8[1] = uStack_194;
  local_c8[2] = uStack_190;
  local_c8[3] = uStack_18c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h86bfd364a743e9caE(&local_a8);
  return puVar1;
}