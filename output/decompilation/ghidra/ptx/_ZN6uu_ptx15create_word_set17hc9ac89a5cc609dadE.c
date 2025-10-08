undefined4 *
_ZN6uu_ptx15create_word_set17hc9ac89a5cc609dadE
          (undefined4 *param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined auVar14 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  long local_238;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  undefined4 *local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
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
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined local_58 [40];
  
  puVar8 = PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_003802b0;
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_003802b0)
            (&local_128,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hcfdbcfab40fd90b7E
            (local_90,&local_128,&PTR_s_src_uu_ptx_src_ptx_rs_00351878);
                    /* try { // try from 0022bbf9 to 0022bc1f has its CatchHandler @ 0022c088 */
  (*(code *)puVar8)(&local_128,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hcfdbcfab40fd90b7E
            (&local_b0,&local_128,&PTR_s_src_uu_ptx_src_ptx_rs_00351890);
  local_1d0 = 0;
  local_1c0 = 0;
  local_208 = param_1;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h6703a1916f75360fE(local_58,param_4);
  auVar14 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha5c58955d429264aE
                      (local_58);
  local_220 = auVar14._0_8_;
  if (local_220 != 0) {
    bVar1 = *(byte *)(param_2 + 0x5a);
    bVar2 = *(byte *)(param_2 + 0x5c);
    bVar3 = *(byte *)(param_3 + 0x78);
    bVar4 = *(byte *)(param_3 + 0x79);
    local_1e0 = param_3 + 0x18;
    local_1e8 = param_3 + 0x48;
    do {
      lVar13 = auVar14._8_8_;
      local_220 = auVar14._0_8_;
      if (*(long *)(lVar13 + 0x10) != 0) {
        local_1f8 = *(long *)(lVar13 + 0x30);
        local_200 = *(long *)(lVar13 + 8) + *(long *)(lVar13 + 0x10) * 0x18;
        local_228 = 0;
        lVar13 = *(long *)(lVar13 + 8);
        do {
          local_1f0 = lVar13 + 0x18;
                    /* try { // try from 0022bd1d to 0022bd78 has its CatchHandler @ 0022c08d */
          _ZN5regex5regex6string5Regex7find_at17h85c38407f70a8d86E
                    (&local_128,local_b0,local_a8,*(undefined8 *)(lVar13 + 8),
                     *(undefined8 *)(lVar13 + 0x10));
          local_218 = CONCAT44(uStack_124,local_128);
          local_210 = local_218;
          if (local_218 != 0) {
            local_210 = local_118;
            local_218 = lStack_110;
          }
          uVar5 = *(undefined8 *)(lVar13 + 8);
          uVar6 = *(undefined8 *)(lVar13 + 0x10);
          _ZN14regex_automata4meta5regex5Regex9find_iter17hd357ef4be6b020ebE
                    (&local_1b8,local_90,uVar5,uVar6);
          local_c8 = local_158;
          local_d8 = local_168;
          uStack_d0 = uStack_160;
          local_e8 = local_178;
          lStack_e0 = lStack_170;
          lStack_110 = CONCAT44(uStack_19c,uStack_1a0);
          local_108 = CONCAT44(uStack_194,local_198);
          local_f8 = local_188;
          lStack_f0 = lStack_180;
          uStack_100 = uStack_190;
          local_118 = local_1a8;
          local_128 = (int)local_1b8;
          uStack_124 = local_1b8._4_4_;
          uStack_120 = (undefined4)uStack_1b0;
          uStack_11c = uStack_1b0._4_4_;
          local_1d8 = local_1f8 + local_228;
          local_c0 = uVar5;
          local_b8 = uVar6;
          while( true ) {
                    /* try { // try from 0022be22 to 0022be9c has its CatchHandler @ 0022c0b5 */
            _ZN14regex_automata4util4iter8Searcher7advance17h485c3ae5de67fd8bE
                      (&local_1b8,&local_108,local_c8,&local_128);
            lVar11 = local_1a8;
            lVar10 = uStack_1b0;
            if ((int)local_1b8 != 1) break;
            if ((((bVar1 & 1) == 0) || (uStack_1b0 != local_210)) || (local_1a8 != local_218)) {
              uVar5 = *(undefined8 *)(lVar13 + 8);
              uVar6 = *(undefined8 *)(lVar13 + 0x10);
              lVar12 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                 (uStack_1b0,local_1a8,uVar5,uVar6);
              if (lVar12 == 0) {
                    /* try { // try from 0022c022 to 0022c03a has its CatchHandler @ 0022c0b7 */
                (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00380258)
                          (uVar5,uVar6,lVar10,lVar11,&PTR_s_src_uu_ptx_src_ptx_rs_003518a8);
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                        (&local_1b8,lVar12);
              local_238 = local_1a8;
              local_248 = local_1b8;
              uStack_240 = uStack_1b0;
                    /* try { // try from 0022bebe to 0022bf0e has its CatchHandler @ 0022c0a6 */
              if ((((bVar3 & 1) == 0) ||
                  (lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hcc18adac9e94b896E
                                      (local_1e0,&local_248), lVar12 != 0)) &&
                 (((bVar4 & 1) == 0 ||
                  (lVar12 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hcc18adac9e94b896E
                                      (local_1e8,&local_248), lVar12 == 0)))) {
                if ((bVar2 & 1) != 0) {
                  (*(code *)
                    PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_uppercase17hf8ab82a15f19393fE_003802b8
                  )(&local_1b8,uStack_240,local_238);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E
                            (&local_248);
                  local_238 = local_1a8;
                  local_248 = local_1b8;
                  uStack_240 = uStack_1b0;
                }
                local_138 = local_238;
                local_148 = (undefined4)local_248;
                uStack_144 = local_248._4_4_;
                uStack_140 = (undefined4)uStack_240;
                uStack_13c = uStack_240._4_4_;
                    /* try { // try from 0022bf4d to 0022bf5f has its CatchHandler @ 0022c094 */
                (*(code *)
                  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
                )(&local_70,local_220);
                local_1a8 = local_138;
                local_1b8 = CONCAT44(uStack_144,local_148);
                uStack_1b0 = CONCAT44(uStack_13c,uStack_140);
                local_188 = local_1d8;
                lStack_180 = local_228;
                local_178 = lVar10;
                lStack_170 = lVar11;
                uStack_190 = local_60;
                uStack_1a0 = local_70;
                uStack_19c = uStack_6c;
                local_198 = uStack_68;
                uStack_194 = uStack_64;
                    /* try { // try from 0022bfcc to 0022bfdb has its CatchHandler @ 0022c092 */
                _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h22c09da831677363E
                          (&local_1d0,&local_1b8);
              }
              else {
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E
                          (&local_248);
              }
            }
          }
                    /* try { // try from 0022bff0 to 0022bffc has its CatchHandler @ 0022c08d */
          _ZN4core3ptr50drop_in_place_LT_regex__regex__string__Matches_GT_17h69f3cac7d0754682E
                    (&local_128);
          local_228 = local_228 + 1;
          lVar13 = local_1f0;
        } while (local_1f0 != local_200);
      }
      auVar14 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha5c58955d429264aE
                          (local_58);
      local_220 = auVar14._0_8_;
    } while (local_220 != 0);
  }
  puVar9 = local_208;
  *(undefined8 *)(local_208 + 4) = local_1c0;
  *local_208 = (undefined4)local_1d0;
  local_208[1] = local_1d0._4_4_;
  local_208[2] = uStack_1c8;
  local_208[3] = uStack_1c4;
                    /* try { // try from 0022c059 to 0022c065 has its CatchHandler @ 0022c088 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h1c6ec398caf69ee4E(&local_b0);
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h1c6ec398caf69ee4E(local_90);
  return puVar9;
}