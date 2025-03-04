undefined4 *
_ZN6uu_ptx15create_word_set17ha43c71debbb1b6c6E
          (undefined4 *param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined auVar13 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228;
  long local_220;
  long local_218;
  undefined4 *local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E
            (&local_148,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc501836100c48eb1E
            (local_90,&local_148,&PTR_s_src_uu_ptx_src_ptx_rs_003edd88);
                    /* try { // try from 002b6af9 to 002b6b1f has its CatchHandler @ 002b6f7d */
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E
            (&local_148,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc501836100c48eb1E
            (&local_b0,&local_148,&PTR_s_src_uu_ptx_src_ptx_rs_003edda0);
  local_1e0 = 0;
  local_1d0 = 0;
                    /* try { // try from 002b6b37 to 002b6b46 has its CatchHandler @ 002b6f7b */
  local_210 = param_1;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h033c4715d4164856E(&local_148,param_4);
  local_38 = local_128;
  local_48 = local_138;
  lStack_40 = lStack_130;
  local_58 = local_148;
  uStack_54 = uStack_144;
  uStack_50 = uStack_140;
  uStack_4c = uStack_13c;
  cVar1 = *(char *)(param_2 + 0x5a);
  cVar2 = *(char *)(param_2 + 0x5c);
  cVar3 = *(char *)(param_3 + 0x78);
  cVar4 = *(char *)(param_3 + 0x79);
  local_1e8 = param_3 + 0x18;
  local_1f8 = param_3 + 0x48;
  do {
    do {
                    /* try { // try from 002b6bc0 to 002b6bcc has its CatchHandler @ 002b6f82 */
      auVar13 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17haf25f5bee2ea9502E
                          (&local_58);
      puVar12 = local_210;
      lVar9 = auVar13._8_8_;
      if (auVar13._0_8_ == 0) {
        *(undefined8 *)(local_210 + 4) = local_1d0;
        *local_210 = (undefined4)local_1e0;
        local_210[1] = local_1e0._4_4_;
        local_210[2] = uStack_1d8;
        local_210[3] = uStack_1d4;
                    /* try { // try from 002b6f33 to 002b6f3f has its CatchHandler @ 002b6f7d */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E
                  (&local_b0);
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E(local_90)
        ;
        return puVar12;
      }
      local_208 = *(long *)(lVar9 + 0x30);
      local_1c8 = *(long *)(lVar9 + 8);
      local_1c0 = local_1c8 + *(long *)(lVar9 + 0x10) * 0x18;
      local_200 = auVar13._0_8_;
      lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he2542eee79d3070cE
                        (&local_1c8);
    } while (lVar9 == 0);
    local_220 = 0;
    do {
      uVar11 = *(undefined8 *)(lVar9 + 8);
      uVar5 = *(undefined8 *)(lVar9 + 0x10);
                    /* try { // try from 002b6c38 to 002b6c87 has its CatchHandler @ 002b6f84 */
      _ZN5regex5regex6string5Regex7find_at17hf05a7654ffba1dbbE
                (&local_148,local_b0,local_a8,uVar11,uVar5);
      local_218 = CONCAT44(uStack_144,local_148);
      lVar9 = local_218;
      if (local_218 != 0) {
        local_218 = lStack_130;
        lVar9 = local_138;
      }
      _ZN14regex_automata4meta5regex5Regex9find_iter17h9e67946da93e5169E
                (&local_1b8,local_90,uVar11,uVar5);
      local_e8 = local_158;
      local_f8 = local_168;
      uStack_f0 = uStack_160;
      local_108 = local_178;
      lStack_100 = lStack_170;
      lStack_130 = CONCAT44(uStack_19c,uStack_1a0);
      local_128 = CONCAT44(uStack_194,local_198);
      local_118 = local_188;
      lStack_110 = lStack_180;
      uStack_120 = uStack_190;
      local_138 = local_1a8;
      local_148 = (undefined4)local_1b8;
      uStack_144 = local_1b8._4_4_;
      uStack_140 = (undefined4)uStack_1b0;
      uStack_13c = uStack_1b0._4_4_;
      local_1f0 = local_208 + local_220;
      local_e0 = uVar11;
      local_d8 = uVar5;
      while (_ZN14regex_automata4util4iter8Searcher7advance17hf2daab265d806bacE
                       (&local_1b8,&local_128,local_e8,&local_148), lVar7 = local_1a8,
            lVar6 = uStack_1b0, local_1b8 != 0) {
        if (((cVar1 == '\0') || (uStack_1b0 != lVar9)) ||
           (cVar8 = _ZN4core3cmp5impls56__LT_impl_u20_core__cmp__PartialEq_u20_for_u20_usize_GT_2eq17h37bad34467ea7e13E
                              (local_1a8,local_218), cVar8 == '\0')) {
          lVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                             (lVar6,lVar7,uVar11,uVar5);
          if (lVar10 == 0) {
                    /* try { // try from 002b6f62 to 002b6f7a has its CatchHandler @ 002b6fbc */
            uVar11 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                               (uVar11,uVar5,lVar6,lVar7,&PTR_s_src_uu_ptx_src_ptx_rs_003eddb8);
                    /* catch() { ... } // from try @ 002b6b37 with catch @ 002b6f7b */
                    /* catch() { ... } // from try @ 002b6c38 with catch @ 002b6f84
                       catch() { ... } // from try @ 002b6ef0 with catch @ 002b6f84 */
            _ZN4core3ptr84drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_uu_ptx__WordRef_GT__GT_17h81ab225e13191748E
                      (&local_1e0);
            _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E
                      (&local_b0);
            _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17hf34b8b1af3b36f38E
                      (local_90);
            puVar12 = (undefined4 *)_Unwind_Resume(uVar11);
            return puVar12;
          }
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
                    (&local_1b8,lVar10);
          local_228 = local_1a8;
          local_238 = local_1b8;
          uStack_230 = uStack_1b0;
                    /* try { // try from 002b6dcc to 002b6e1c has its CatchHandler @ 002b6fbe */
          if (((cVar3 == '\0') ||
              (lVar10 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h627002b9e4e69103E
                                  (local_1e8,&local_238), lVar10 != 0)) &&
             ((cVar4 == '\0' ||
              (lVar10 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h627002b9e4e69103E
                                  (local_1f8,&local_238), lVar10 == 0)))) {
            if (cVar2 != '\0') {
              _ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h8673807247540a26E
                        (&local_1b8,uStack_230,local_228);
                    /* try { // try from 002b6e1d to 002b6e26 has its CatchHandler @ 002b6f89 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E
                        (&local_238);
              local_228 = local_1a8;
              local_238 = local_1b8;
              uStack_230 = uStack_1b0;
            }
            local_b8 = local_228;
            local_c8 = (undefined4)local_238;
            uStack_c4 = local_238._4_4_;
            uStack_c0 = (undefined4)uStack_230;
            uStack_bc = uStack_230._4_4_;
                    /* try { // try from 002b6e5b to 002b6e6d has its CatchHandler @ 002b6faa */
            _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                      (&local_70,local_200);
            local_1a8 = local_b8;
            local_1b8 = CONCAT44(uStack_c4,local_c8);
            uStack_1b0 = CONCAT44(uStack_bc,uStack_c0);
            local_188 = local_1f0;
            lStack_180 = local_220;
            local_178 = lVar6;
            lStack_170 = lVar7;
            uStack_190 = local_60;
            uStack_1a0 = local_70;
            uStack_19c = uStack_6c;
            local_198 = uStack_68;
            uStack_194 = uStack_64;
                    /* try { // try from 002b6ed7 to 002b6ee3 has its CatchHandler @ 002b6fa8 */
            _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h814780906c3007c3E
                      (&local_1e0,&local_1b8);
          }
          else {
                    /* try { // try from 002b6d20 to 002b6daa has its CatchHandler @ 002b6fcd */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_238)
            ;
          }
        }
      }
                    /* try { // try from 002b6ef0 to 002b6efc has its CatchHandler @ 002b6f84 */
      _ZN4core3ptr50drop_in_place_LT_regex__regex__string__Matches_GT_17h0da4c5b7d9432e00E
                (&local_148);
      local_220 = local_220 + 1;
      lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he2542eee79d3070cE
                        (&local_1c8);
    } while (lVar9 != 0);
  } while( true );
}