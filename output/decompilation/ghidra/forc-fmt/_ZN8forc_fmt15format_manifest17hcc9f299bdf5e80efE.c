void _ZN8forc_fmt15format_manifest17hcc9f299bdf5e80efE(undefined *param_1,uint param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined8 **local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *local_160;
  undefined8 **local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 **local_120;
  undefined *local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 **local_f0;
  undefined *puStack_e8;
  undefined local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 **local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 **local_58;
  undefined *local_50;
  
                    /* try { // try from 004d4c2b to 004d4cb7 has its CatchHandler @ 004d51ee */
  local_160 = param_1;
  _ZN3std2fs14read_to_string17h72615f83e87f7dcfE(&local_108,param_3);
  lVar9 = CONCAT44(uStack_104,local_108);
  local_78 = local_f8;
  local_88 = local_108;
  uStack_84 = uStack_104;
  uStack_80 = uStack_100;
  uStack_7c = uStack_fc;
  uVar2 = CONCAT44(uStack_fc,uStack_100);
                    /* try { // try from 004d4cf1 to 004d4d10 has its CatchHandler @ 004d51ce */
  (*(code *)
    PTR__ZN68__LT_taplo__formatter__Options_u20_as_u20_core__default__Default_GT_7default17h383d5ad32251c519E_0096b498
  )(&local_198);
  (*(code *)PTR__ZN5taplo9formatter6format17hf668126a4a9afc09E_0096b4a0)
            (local_e0,uVar2,local_f8,&local_198);
  if ((param_2 & 1) == 0) {
    lVar7 = _ZN8forc_fmt20write_file_formatted17ha4a188379ce620baE
                      (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),local_d8,
                       local_d0);
    if (lVar7 != 0) {
      *(long *)(local_160 + 8) = lVar7;
      uVar8 = 1;
      goto LAB_004d5154;
    }
LAB_004d513e:
    uVar8 = 0;
  }
  else {
    cVar5 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h8515288a5a7eeb3bE
                      (local_d8,local_d0,uVar2,local_f8);
    if (cVar5 != '\0') {
      uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                        (PTR__ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E_0096b460);
                    /* try { // try from 004d4d64 to 004d4f47 has its CatchHandler @ 004d5201 */
      if ((((uVar6 == 5) || (2 < uVar6)) ||
          (cVar5 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h44bc8806352c8553E
                             (&_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E),
          cVar5 == '\0')) ||
         (cVar5 = (*(code *)
                    PTR__ZN7tracing15__macro_support12__is_enabled17hb2603213f716e822E_0096b468)
                            (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E,cVar5),
         puVar3 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E, cVar5 == '\0')) {
        cVar5 = _ZN4core4sync6atomic11atomic_load17h6834916517087897E
                          (PTR__ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE_0096b478);
        if ((cVar5 == '\0') &&
           (uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                              (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E_0096b480),
           puVar3 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E, 2 < uVar6)) {
          uStack_68 = *(undefined4 *)
                       (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x20);
          uStack_64 = *(undefined4 *)
                       (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x24);
          uStack_60 = *(undefined4 *)
                       (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x28);
          uStack_5c = *(undefined4 *)
                       (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x2c);
          local_70 = (undefined8 ***)0x3;
          auVar10 = (*(code *)PTR__ZN3log6logger17hda83ce6e5b01f630E_0096b488)();
          cVar5 = (**(code **)(auVar10._8_8_ + 0x18))(auVar10._0_8_,&local_70);
          puVar4 = _ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E;
          if (cVar5 != '\0') {
            local_130 = *(undefined8 *)
                         (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x38);
            local_158 = *(undefined8 ***)
                         (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x30);
            uStack_150 = *(undefined8 *)
                          (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x38);
            local_148 = *(undefined8 ***)
                         (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x40);
            uStack_140 = *(undefined4 *)
                          (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x48);
            uStack_13c = *(undefined4 *)
                          (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x4c);
            local_138 = 0;
            _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                      (&local_198,&local_158);
            if ((undefined8 ***)local_198 == (undefined8 ***)0x0) goto LAB_004d51a6;
            local_90 = puVar4 + 0x30;
            local_a8 = local_178;
            local_b8 = (undefined4)local_188;
            uStack_b4 = local_188._4_4_;
            uStack_b0 = (undefined4)uStack_180;
            uStack_ac = uStack_180._4_4_;
            local_c8 = local_198;
            uStack_c0 = uStack_190;
            local_f0 = *(undefined8 ***)(param_3 + 8);
            puStack_e8 = *(undefined **)(param_3 + 0x10);
            local_58 = &local_f0;
            local_50 = 
            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0096b3c0
            ;
            local_198 = (undefined8 **)&PTR_s_Manifest_Forc_toml_formatted_cor_0090a418;
            uStack_190 = 1;
            local_178 = 0;
            local_188 = &local_58;
            uStack_180 = 1;
            local_120 = &local_c8;
            local_110 = &DAT_0090a3a8;
            local_a0 = &local_120;
            uStack_98 = 1;
            local_148 = (undefined8 **)CONCAT44(uStack_5c,uStack_60);
            local_158 = local_70;
            uStack_150 = CONCAT44(uStack_64,uStack_68);
            local_118 = (undefined *)&local_198;
            (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h4c7a43eb8e34734dE_0096b490)
                      (puVar3,auVar10._0_8_,auVar10._8_8_,&local_158,&local_a0);
          }
        }
      }
      else {
        local_130 = *(undefined8 *)
                     (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x38);
        local_158 = *(undefined8 ***)
                     (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x30);
        uStack_150 = *(undefined8 *)
                      (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x38);
        local_148 = *(undefined8 ***)
                     (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x40);
        uStack_140 = *(undefined4 *)
                      (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x48);
        uStack_13c = *(undefined4 *)
                      (_ZN8forc_fmt15format_manifest10__CALLSITE17hf272baa263208f55E + 0x4c);
        local_138 = 0;
        _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                  (&local_198,&local_158);
        if ((undefined8 ***)local_198 == (undefined8 ***)0x0) {
LAB_004d51a6:
                    /* try { // try from 004d51a6 to 004d51be has its CatchHandler @ 004d5201 */
          (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0096b1b0)
                    ("FieldSet corrupted (this is a bug)",0x22,
                     &PTR_s_forc_plugins_forc_fmt_src_main_r_0090a438);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_148 = (undefined8 **)(puVar3 + 0x30);
        local_a8 = local_178;
        local_b8 = (undefined4)local_188;
        uStack_b4 = local_188._4_4_;
        uStack_b0 = (undefined4)uStack_180;
        uStack_ac = uStack_180._4_4_;
        local_c8 = local_198;
        uStack_c0 = uStack_190;
        local_a0 = *(undefined8 ***)(param_3 + 8);
        uStack_98 = *(undefined8 *)(param_3 + 0x10);
        local_f0 = &local_a0;
        puStack_e8 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0096b3c0
        ;
        local_198 = (undefined8 **)&PTR_s_Manifest_Forc_toml_formatted_cor_0090a418;
        uStack_190 = 1;
        local_178 = 0;
        local_188 = &local_f0;
        uStack_180 = 1;
        local_120 = &local_c8;
        local_110 = &DAT_0090a3a8;
        local_158 = &local_120;
        uStack_150 = 1;
        local_118 = (undefined *)&local_198;
        _ZN8forc_fmt15format_manifest28__u7b__u7b_closure_u7d__u7d_17h875ff412e591defcE(&local_158);
      }
      goto LAB_004d513e;
    }
    local_c8 = *(undefined8 ***)(param_3 + 8);
    uStack_c0 = *(undefined8 *)(param_3 + 0x10);
    local_120 = &local_c8;
    local_118 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0096b3c0
    ;
    local_198 = (undefined8 **)&PTR_s_Improperly_formatted_manifest_fi_0090a408;
    uStack_190 = 1;
    local_178 = 0;
    local_188 = &local_120;
    uStack_180 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
              (&local_158,0,extraout_RDX,&local_198);
    local_198 = local_158;
    uStack_190 = uStack_150;
    local_188 = (undefined8 ***)local_148;
                    /* try { // try from 004d4f60 to 004d4f65 has its CatchHandler @ 004d51c1 */
    (*(code *)PTR__ZN12forc_tracing13println_error17h8bc2a86d36dc4dbaE_0096b408)(uStack_150);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(&local_198);
    uVar8 = 1;
                    /* try { // try from 004d4f71 to 004d513d has its CatchHandler @ 004d5201 */
    _ZN8forc_fmt17display_file_diff17h0e6791d1d0ed248fE(uVar2,local_f8,local_d8,local_d0);
  }
  local_160[1] = uVar8;
  uVar8 = 0;
  lVar9 = CONCAT44(uStack_104,local_108);
LAB_004d5154:
  *local_160 = uVar8;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(&local_88);
  if (lVar9 == -0x8000000000000000) {
                    /* try { // try from 004d517f to 004d518b has its CatchHandler @ 004d51ee */
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17hcc2236c43ea66e8eE
              (&local_108);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(param_3);
  return;
}