undefined8
_ZN5uu_pr18recreate_arguments17hbe43c308ac861d0cE(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  undefined auVar3 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined local_150 [24];
  undefined *local_138;
  code *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [32];
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [32];
  undefined local_58 [32];
  undefined *local_38;
  
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E(&local_188,"^[-+]\\d+.*",10);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8fa19f49ce20910dE
            (local_78,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091a0);
                    /* try { // try from 002c3ecf to 002c3ef6 has its CatchHandler @ 002c4153 */
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E(&local_188,"^[^-]\\d*$",9);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8fa19f49ce20910dE
            (&local_f8,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091b8);
                    /* try { // try from 002c3ef7 to 002c3f22 has its CatchHandler @ 002c4141 */
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E(&local_188,"^-n\\s*$",7);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8fa19f49ce20910dE
            (local_c0,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091d0);
                    /* try { // try from 002c3f23 to 002c3f32 has its CatchHandler @ 002c4120 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1f2362dded9f9c75E
            (local_150,param_2,param_3);
  uStack_180 = param_2 + param_3 * 0x18;
                    /* try { // try from 002c3f4b to 002c3fbe has its CatchHandler @ 002c4125 */
  local_188 = (undefined *)param_2;
  auVar3 = _ZN9itertools9Itertools13find_position17hd482090938159e21E(&local_188,local_c0);
  if ((auVar3._8_8_ != 0) && (uVar1 = auVar3._0_8_ + 1, uVar1 < param_3)) {
    cVar2 = _ZN5regex5regex6string5Regex11is_match_at17ha92ef8a3ebc0bbf1E
                      (local_f8,local_f0,*(undefined8 *)(param_2 + 8 + uVar1 * 0x18),
                       *(undefined8 *)(param_2 + 0x10 + uVar1 * 0x18));
    if (cVar2 == '\0') {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17hcb952d79c903d6d5E
                (&local_128,local_150,uVar1,&PTR_s_src_uu_pr_src_pr_rs_004091e8);
                    /* try { // try from 002c3fbf to 002c3fcb has its CatchHandler @ 002c410f */
      _ZN63__LT_uu_pr__NumberingMode_u20_as_u20_core__default__Default_GT_7default17h62d70fa0066756c7E
                (local_a0);
      local_138 = local_88;
      local_130 = 
      _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
      ;
      local_188 = &DAT_00166c10;
      uStack_180 = 1;
      local_168 = 0;
      local_178 = &local_138;
      local_170 = 1;
                    /* try { // try from 002c4015 to 002c4021 has its CatchHandler @ 002c40fd */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ea8d69383c77fddE(&local_110,&local_188);
                    /* try { // try from 002c4022 to 002c402e has its CatchHandler @ 002c40ee */
      _ZN4core3ptr41drop_in_place_LT_uu_pr__NumberingMode_GT_17h7b44dbe916af3d67E(local_a0);
      local_d8 = local_110;
      uStack_d4 = uStack_10c;
      uStack_d0 = uStack_108;
      uStack_cc = uStack_104;
      local_c8 = local_100;
                    /* try { // try from 002c404c to 002c4060 has its CatchHandler @ 002c410f */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h9498b545ee6f0c26E(local_150,uVar1,&local_d8);
      local_178 = (undefined **)local_118;
      local_188 = (undefined *)CONCAT44(uStack_124,local_128);
      uStack_180 = CONCAT44(uStack_11c,uStack_120);
                    /* try { // try from 002c4078 to 002c4087 has its CatchHandler @ 002c40ec */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h9498b545ee6f0c26E
                (local_150,auVar3._0_8_ + 2,&local_188);
    }
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc20ab2c0828df040E
            (local_58,local_150);
  local_38 = local_78;
                    /* try { // try from 002c40a5 to 002c40af has its CatchHandler @ 002c411e */
  _ZN5alloc3vec16in_place_collect108__LT_impl_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__u20_for_u20_alloc__vec__Vec_LT_T_GT__GT_9from_iter17h5ab0a96f081d00dfE
            (param_1,local_58);
                    /* try { // try from 002c40b0 to 002c40bc has its CatchHandler @ 002c4141 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E(local_c0);
                    /* try { // try from 002c40bd to 002c40c9 has its CatchHandler @ 002c4153 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E(&local_f8);
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E(local_78);
  return param_1;
}