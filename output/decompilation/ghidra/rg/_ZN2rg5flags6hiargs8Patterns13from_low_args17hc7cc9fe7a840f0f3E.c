void _ZN2rg5flags6hiargs8Patterns13from_low_args17hc7cc9fe7a840f0f3E
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 *local_168;
  long local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined local_140 [16];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong local_118;
  ulong *local_110;
  ulong *local_108;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  ulong local_50;
  undefined **local_48;
  ulong local_40;
  ulong local_38;
  
  if (*(char *)(param_3 + 0x22c) == '\0') {
    if (*(long *)(param_3 + 0xd8) == 0) {
      if (*(long *)(param_3 + 0xc0) == 0) {
        local_198 = &PTR_s_ripgrep_requires_at_least_one_pa_004eb010;
      }
      else {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h43f73f2ace0bf3bfE(&local_110,param_3 + 0xb0);
        _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_198,&local_110);
        if (local_198 == (undefined **)0x8000000000000000) {
          local_b8 = (undefined4)uStack_190;
          uStack_b4 = uStack_190._4_4_;
          uStack_b0 = (undefined4)local_188;
          uStack_ac = local_188._4_4_;
          local_a8 = uStack_180;
          puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18,0);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[2] = local_a8;
            *puVar5 = CONCAT44(uStack_b4,local_b8);
            puVar5[1] = CONCAT44(uStack_ac,uStack_b0);
            *param_1 = 1;
            param_1[1] = puVar5;
            param_1[2] = 1;
            return;
          }
                    /* try { // try from 003514b7 to 003514c6 has its CatchHandler @ 00351548 */
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(8,0x18);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uStack_e0 = (undefined4)local_198;
        uStack_dc = local_198._4_4_;
        local_d8 = (undefined4)uStack_190;
        uStack_d4 = uStack_190._4_4_;
        uStack_d0 = local_188;
        local_e8 = 1;
        _ZN4core3ptr99drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__ffi__os_str__OsString_GT__GT_17ha8786323dbda0a67E
                  (&local_e8);
        local_198 = &PTR_DAT_004eb020;
      }
      uStack_190 = 1;
      local_188 = 8;
      uStack_180 = 0;
      local_178 = 0;
      uVar6 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_198);
      param_1[1] = uVar6;
      *param_1 = 0x8000000000000000;
    }
    else {
      local_168 = param_1;
      local_160 = param_2;
      _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h97780d0e7c7992b8E
                (&local_198);
      local_c8 = (undefined4)local_178;
      uStack_c4 = local_178._4_4_;
      uStack_c0 = uStack_170;
      uStack_bc = uStack_16c;
      local_d8 = (undefined4)local_188;
      uStack_d4 = local_188._4_4_;
      uStack_e0 = (undefined4)uStack_190;
      uStack_dc = uStack_190._4_4_;
                    /* try { // try from 00351019 to 0035102e has its CatchHandler @ 003514cb */
      local_140 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h02ccee15b84dfdd3E
                            (*(undefined8 *)(param_3 + 0xd8),8,0x18,
                             &PTR_s_crates_core_flags_hiargs_rs_004eb058);
      local_130 = 0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h7008c9b9fa579a6fE(&local_110,param_3 + 200);
      puVar3 = local_110;
      if (local_110 != local_108) {
        local_199 = *(byte *)(local_160 + 0x19);
        do {
          while( true ) {
            puVar3 = local_110 + 4;
            if (*local_110 == 2) goto LAB_003512d9;
            local_68 = local_110[3];
            local_78 = local_110[1];
            uVar2 = local_110[2];
            uStack_70 = uVar2;
            if ((*local_110 & 1) == 0) break;
            local_78._4_4_ = (undefined4)(local_78 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar2;
            uStack_70._4_4_ = (undefined4)(uVar2 >> 0x20);
            local_128 = (undefined4)local_78;
            uStack_124 = local_78._4_4_;
            uStack_120 = (undefined4)uStack_70;
            uStack_11c = uStack_70._4_4_;
            local_118 = local_68;
            local_110 = puVar3;
                    /* try { // try from 00351146 to 00351172 has its CatchHandler @ 003514e8 */
            cVar4 = _ZN86__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_LT__RF_std__path__Path_GT__GT_2eq17h2125dccf5663ce54E
                              (uVar2,local_68,&DAT_00169ba0,1);
            if (cVar4 == '\0') {
                    /* try { // try from 00351200 to 0035120f has its CatchHandler @ 003514e8 */
              _ZN8grep_cli7pattern18patterns_from_path17h215e39a5c9bc403dE(&local_198,&local_128);
              if (local_198 == (undefined **)0x8000000000000000) {
LAB_003513ce:
                    /* try { // try from 003513ce to 003513d2 has its CatchHandler @ 003514c9 */
                uVar6 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h93265d5384100ee9E
                                  ();
                goto LAB_003513d3;
              }
              local_48 = local_198;
              local_40 = uStack_190;
              local_38 = local_188;
              _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hda4c39611512d0eeE
                        (&local_198,&local_48);
              while( true ) {
                _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4986d5d5a5b13637E
                          (&local_158,&local_198);
                if (CONCAT44(uStack_154,local_158) == -0x8000000000000000) break;
                local_88 = local_148;
                local_98 = local_158;
                uStack_94 = uStack_154;
                uStack_90 = uStack_150;
                uStack_8c = uStack_14c;
                    /* try { // try from 0035127c to 00351289 has its CatchHandler @ 003514fc */
                _ZN2rg5flags6hiargs8Patterns13from_low_args28__u7b__u7b_closure_u7d__u7d_17h82b3a05a54535357E
                          (&local_e8,local_140,&local_98);
              }
                    /* try { // try from 00351290 to 003512a7 has its CatchHandler @ 003514e8 */
              _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hd4dccd21404714c3E
                        (&local_198);
            }
            else {
              if ((local_199 & 1) != 0) {
                local_198 = &PTR_s_error_reading__f___file_from_std_004eb030;
                uStack_190 = 1;
                local_188 = 8;
                uStack_180 = 0;
                local_178 = 0;
                    /* try { // try from 0035149f to 003514a8 has its CatchHandler @ 003514c9 */
                uVar6 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_198);
LAB_003513d3:
                local_168[1] = uVar6;
                *local_168 = 0x8000000000000000;
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hee77a3799ccd604eE
                          (&local_128);
                _ZN4core3ptr86drop_in_place_LT_alloc__vec__drain__Drain_LT_rg__flags__lowargs__PatternSource_GT__GT_17he4469f54ee882bfbE
                          (&local_110);
                _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h86d7461d11433c9dE
                          (local_140);
                goto LAB_003512fc;
              }
              (*(code *)PTR__ZN8grep_cli7pattern19patterns_from_stdin17h54bb327d245b57c5E_00527188)
                        (&local_198);
              if (local_198 == (undefined **)0x8000000000000000) goto LAB_003513ce;
              local_60 = local_198;
              local_58 = uStack_190;
              local_50 = local_188;
              _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hda4c39611512d0eeE
                        (&local_198,&local_60);
              while( true ) {
                _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4986d5d5a5b13637E
                          (&local_158,&local_198);
                if (CONCAT44(uStack_154,local_158) == -0x8000000000000000) break;
                local_88 = local_148;
                local_98 = local_158;
                uStack_94 = uStack_154;
                uStack_90 = uStack_150;
                uStack_8c = uStack_14c;
                    /* try { // try from 003511f0 to 003511fd has its CatchHandler @ 003514ed */
                _ZN2rg5flags6hiargs8Patterns13from_low_args28__u7b__u7b_closure_u7d__u7d_17h82b3a05a54535357E
                          (&local_e8,local_140,&local_98);
              }
              _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hd4dccd21404714c3E
                        (&local_198);
              *(undefined *)(local_160 + 0x19) = 1;
              local_199 = 1;
            }
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hee77a3799ccd604eE(&local_128);
            puVar3 = local_110;
            if (local_110 == local_108) goto LAB_003512d9;
          }
          local_188 = local_110[3];
          local_198 = (undefined **)local_110[1];
          uStack_190 = local_110[2];
          local_110 = puVar3;
                    /* try { // try from 003510c1 to 003510ce has its CatchHandler @ 003514e3 */
          _ZN2rg5flags6hiargs8Patterns13from_low_args28__u7b__u7b_closure_u7d__u7d_17h82b3a05a54535357E
                    (&local_e8,local_140,&local_198);
          puVar3 = local_110;
        } while (local_110 != local_108);
      }
LAB_003512d9:
      local_110 = puVar3;
      _ZN4core3ptr86drop_in_place_LT_alloc__vec__drain__Drain_LT_rg__flags__lowargs__PatternSource_GT__GT_17he4469f54ee882bfbE
                (&local_110);
      local_168[2] = local_130;
      *(undefined4 *)local_168 = local_140._0_4_;
      *(undefined4 *)((long)local_168 + 4) = local_140._4_4_;
      *(undefined4 *)(local_168 + 1) = local_140._8_4_;
      *(undefined4 *)((long)local_168 + 0xc) = local_140._12_4_;
LAB_003512fc:
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17hfd59910e25643fbbE
                (&local_e8);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  return;
}