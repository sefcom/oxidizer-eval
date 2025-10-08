undefined8 _ZN14linera_summary4main17hbae0ce2602e26fc4E(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 *local_ec8;
  undefined8 *local_ec0;
  undefined8 **local_eb8;
  undefined8 uStack_eb0;
  undefined8 **local_ea8;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined *local_e98;
  undefined8 uStack_e90;
  undefined4 local_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined8 **local_e68;
  undefined8 *local_e60;
  undefined *local_e58;
  undefined8 **local_e50;
  undefined *local_e48;
  undefined *local_e40;
  undefined4 local_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 **local_e28;
  undefined8 uStack_e20;
  undefined *local_e18;
  undefined8 **local_e10;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  undefined4 uStack_e00;
  undefined4 uStack_dfc;
  undefined8 **local_df8;
  undefined8 uStack_df0;
  undefined8 **local_de8;
  undefined8 uStack_de0;
  undefined *local_dd8;
  undefined8 uStack_dd0;
  undefined4 local_dc8;
  undefined4 uStack_dc4;
  undefined4 uStack_dc0;
  undefined4 uStack_dbc;
  undefined4 local_db8;
  undefined4 uStack_db4;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  undefined8 *local_da8;
  undefined *local_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined local_d70 [205];
  undefined2 local_ca3;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 **local_c88;
  undefined8 uStack_c80;
  undefined *local_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined local_c20;
  
  (*(code *)
    PTR__ZN14linera_summary15summary_options14SummaryOptions4init17hcfafcecfa2b6f427E_00a4b660)
            (&local_d98);
                    /* try { // try from 0058d32f to 0058d34e has its CatchHandler @ 0058d99a */
  (*(code *)PTR__ZN11linera_base7tracing4init17h2bf0ee6ff75d7e39E_00a4b668)("summary",7);
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_00a4b670)
            (local_d70);
                    /* try { // try from 0058d34f to 0058d3cd has its CatchHandler @ 0058d974 */
  uVar5 = _ZN4core4sync6atomic11atomic_load17hb4b717e74f96b46bE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_00a4ade8,0);
  if ((uVar5 == 5) || (2 < uVar5)) {
LAB_0058d3d3:
    puVar2 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E;
    local_c98 = (undefined **)0x2;
    local_c78 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E;
    cVar4 = _ZN4core4sync6atomic11atomic_load17h7eee19a9e461d8d8E
                      (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_00a4add8);
    if (cVar4 == '\0') {
      local_ea8 = (undefined8 **)(puVar2 + 0x30);
      local_eb8 = (undefined8 **)&DAT_00000008;
      uStack_eb0 = 0;
                    /* try { // try from 0058d419 to 0058d42b has its CatchHandler @ 0058d91c */
      (*(code *)PTR__ZN7tracing4span4Span10record_all17h00ba14f0532f8e03E_00a4b680)
                (&local_c98,&local_eb8);
    }
    local_e18 = local_c78;
    local_e28 = local_c88;
    uStack_e20 = uStack_c80;
    local_e38 = (undefined4)local_c98;
    uStack_e34 = local_c98._4_4_;
    uStack_e30 = (undefined4)uStack_c90;
    uStack_e2c = uStack_c90._4_4_;
  }
  else {
    cVar4 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                      (&_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E);
    if (cVar4 == '\0') goto LAB_0058d3d3;
    cVar4 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_00a4ae20)
                      (_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E,cVar4);
    if (cVar4 == '\0') goto LAB_0058d3d3;
    local_c88 = (undefined8 **)(_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E + 0x30);
    local_c98 = (undefined **)0x8;
    uStack_c90 = 0;
    (*(code *)PTR__ZN7tracing4span4Span3new17hee0a8b9b1691f332E_00a4b678)
              (&local_e38,_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E,&local_c98);
  }
  local_ca3 = 0x101;
                    /* try { // try from 0058d466 to 0058d48d has its CatchHandler @ 0058d962 */
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_00a4b688)
            (&local_c98,local_d70);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0dd3069c5a2dea86E
            (&local_eb8,&local_c98);
  uVar8 = uStack_eb0;
  if (local_eb8 == (undefined8 **)&DAT_00000002) {
                    /* try { // try from 0058d49e to 0058d4aa has its CatchHandler @ 0058d974 */
    _ZN4core3ptr40drop_in_place_LT_tracing__span__Span_GT_17h5e4ab9b2dec04c51E(&local_e38);
                    /* try { // try from 0058d4ab to 0058d4b7 has its CatchHandler @ 0058d99a */
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17h8339a9b054909e41E
              (local_d70);
    _ZN4core3ptr68drop_in_place_LT_linera_summary__summary_options__SummaryOptions_GT_17ha6e69de5bba54f58E
              (&local_d98);
    return uVar8;
  }
  uStack_de0 = CONCAT44(uStack_e9c,uStack_ea0);
  local_db8 = local_e78;
  uStack_db4 = uStack_e74;
  uStack_db0 = uStack_e70;
  uStack_dac = uStack_e6c;
  local_dc8 = local_e88;
  uStack_dc4 = uStack_e84;
  uStack_dc0 = uStack_e80;
  uStack_dbc = uStack_e7c;
  local_dd8 = local_e98;
  uStack_dd0 = uStack_e90;
  local_de8 = local_ea8;
  local_df8 = local_eb8;
  uStack_df0 = uStack_eb0;
  local_c50 = local_d78;
  local_c60 = local_d88;
  uStack_c58 = uStack_d80;
  local_c70 = local_d98;
  uStack_c68 = uStack_d90;
  local_c98 = (undefined **)CONCAT44(uStack_e34,local_e38);
  uStack_c90 = CONCAT44(uStack_e2c,uStack_e30);
  local_c88 = local_e28;
  uStack_c80._0_4_ = (undefined4)uStack_e20;
  uStack_c80._4_4_ = uStack_e20._4_4_;
  local_c78 = local_e18;
  local_c20 = 0;
                    /* try { // try from 0058d586 to 0058d59a has its CatchHandler @ 0058d94d */
  ppuVar6 = (undefined8 **)
            _ZN5tokio7runtime7runtime7Runtime8block_on17he2cb01c88dbbe1a3E(&local_df8,&local_c98);
                    /* try { // try from 0058d5a6 to 0058d5c6 has its CatchHandler @ 0058d92e */
  local_ec0 = ppuVar6;
  _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h5022d1dfaaa3e311E
            (&local_df8);
  uVar8 = 0;
  if (ppuVar6 != (undefined8 **)0x0) {
    local_ec8 = ppuVar6;
                    /* try { // try from 0058d5d0 to 0058d601 has its CatchHandler @ 0058d90f */
    lVar7 = _ZN4core4sync6atomic11atomic_load17hb4b717e74f96b46bE
                      (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_00a4ade8,0);
    if (lVar7 == 5) {
LAB_0058d5e4:
      cVar4 = _ZN4core4sync6atomic11atomic_load17h7eee19a9e461d8d8E
                        (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_00a4add8);
      if (cVar4 == '\0') {
        lVar7 = _ZN4core4sync6atomic11atomic_load17hb4b717e74f96b46bE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_00a4ae50,0);
        puVar2 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E;
        if (lVar7 != 0) {
          uStack_e08 = *(undefined4 *)
                        (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x20);
          uStack_e04 = *(undefined4 *)
                        (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x24);
          uStack_e00 = *(undefined4 *)
                        (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x28);
          uStack_dfc = *(undefined4 *)
                        (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x2c);
          local_e10 = (undefined8 **)&DAT_00000001;
          auVar9 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_00a4ae28)();
          cVar4 = (**(code **)(auVar9._8_8_ + 0x18))(auVar9._0_8_,&local_e10);
          puVar3 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E;
          if (cVar4 != '\0') {
            uStack_e90 = *(undefined8 *)
                          (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x38);
            local_eb8 = *(undefined8 ***)
                         (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x30);
            uStack_eb0 = *(undefined8 *)
                          (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x38);
            local_ea8 = *(undefined8 ***)
                         (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x40);
            uStack_ea0 = *(undefined4 *)
                          (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x48);
            uStack_e9c = *(undefined4 *)
                          (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x4c);
            local_e98 = (undefined *)0x0;
            _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                      (&local_c98,&local_eb8);
            if ((undefined8 ***)local_c98 == (undefined8 ***)0x0) goto LAB_0058d8ec;
            local_e40 = puVar3 + 0x30;
            local_dd8 = local_c78;
            local_de8 = local_c88;
            uStack_de0 = CONCAT44(uStack_c80._4_4_,(undefined4)uStack_c80);
            local_df8 = (undefined8 **)local_c98;
            uStack_df0 = uStack_c90;
            local_da0 = 
            PTR__ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h08f1a4a1c54636ddE_00a4b548
            ;
            local_c98 = &PTR_s_Error__span__009d0910;
            uStack_c90 = 1;
            local_c78 = (undefined *)0x0;
            local_c88 = &local_da8;
            uStack_c80._0_4_ = 1;
            uStack_c80._4_4_ = 0;
            local_e60 = &local_c98;
            local_e58 = &DAT_009cd5e8;
            local_e50 = &local_e68;
            local_e48 = &DAT_00000001;
            local_ea8 = (undefined8 **)CONCAT44(uStack_dfc,uStack_e00);
            local_eb8 = local_e10;
            uStack_eb0 = CONCAT44(uStack_e04,uStack_e08);
            local_e68 = &local_df8;
            local_da8 = &local_ec8;
            (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_00a4ae30)
                      (puVar2,auVar9._0_8_,auVar9._8_8_,&local_eb8,&local_e50);
          }
        }
      }
    }
    else {
                    /* try { // try from 0058d61a to 0058d904 has its CatchHandler @ 0058d90f */
      cVar4 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                        (&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E);
      if (cVar4 == '\0') goto LAB_0058d5e4;
      cVar4 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_00a4ae20)
                        (_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E,cVar4);
      puVar2 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E;
      if (cVar4 == '\0') goto LAB_0058d5e4;
      uStack_e90 = *(undefined8 *)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x38);
      local_eb8 = *(undefined8 ***)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x30)
      ;
      uStack_eb0 = *(undefined8 *)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x38);
      local_ea8 = *(undefined8 ***)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x40)
      ;
      uStack_ea0 = *(undefined4 *)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x48);
      uStack_e9c = *(undefined4 *)(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E + 0x4c);
      local_e98 = (undefined *)0x0;
      _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                (&local_c98,&local_eb8);
      if ((undefined8 ***)local_c98 == (undefined8 ***)0x0) {
LAB_0058d8ec:
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00a4ac80)
                  ("FieldSet corrupted (this is a bug) jobs for run ",0x22,
                   &PTR_s_linera_summary_src_main_rs_009d0938);
        goto LAB_0058d905;
      }
      local_ea8 = (undefined8 **)(puVar2 + 0x30);
      local_dd8 = local_c78;
      local_de8 = local_c88;
      uStack_de0 = CONCAT44(uStack_c80._4_4_,(undefined4)uStack_c80);
      local_df8 = (undefined8 **)local_c98;
      uStack_df0 = uStack_c90;
      local_e48 = 
      PTR__ZN6anyhow5error60__LT_impl_u20_core__fmt__Debug_u20_for_u20_anyhow__Error_GT_3fmt17h08f1a4a1c54636ddE_00a4b548
      ;
      local_c98 = &PTR_s_Error__span__009d0910;
      uStack_c90 = 1;
      local_c78 = (undefined *)0x0;
      local_c88 = &local_e50;
      uStack_c80._0_4_ = 1;
      uStack_c80._4_4_ = 0;
      local_e58 = &DAT_009cd5e8;
      local_eb8 = &local_e68;
      uStack_eb0 = 1;
      local_e68 = &local_df8;
      local_e60 = &local_c98;
      local_e50 = &local_ec8;
      _ZN14linera_summary4main28__u7b__u7b_closure_u7d__u7d_17hb8a6667d3144708bE(&local_eb8);
    }
                    /* try { // try from 0058d60b to 0058d612 has its CatchHandler @ 0058d907 */
    _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17hc8d6c5e15b795df0E(&local_ec8);
    uVar8 = 2;
  }
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00a4b690)(uVar8);
LAB_0058d905:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}