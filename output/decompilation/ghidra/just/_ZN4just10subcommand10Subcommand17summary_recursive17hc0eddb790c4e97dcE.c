void _ZN4just10subcommand10Subcommand17summary_recursive17hc0eddb790c4e97dcE
               (undefined4 param_1,long param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined local_ec;
  undefined local_e8 [16];
  undefined **local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined **ppuStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined local_88 [16];
  undefined *local_78;
  code *local_70;
  undefined local_68 [16];
  long local_58;
  undefined local_50 [32];
  
  _ZN5alloc3str17join_generic_copy17h1d897c8c94fa609aE
            (local_68,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&DAT_0016e4ee,2);
                    /* try { // try from 003910be to 003910d5 has its CatchHandler @ 00391353 */
  local_90 = param_4;
  _ZN4just8justfile8Justfile14public_recipes17h73a7b1046fbbce7bE(&local_d8,param_4,param_1);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h02155a0166dab906E
            (local_50,&local_d8);
  lVar4 = *param_3;
  lVar2 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h03155b1db9f47e52E
                    (local_50);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40;
  if (lVar2 != 0) {
    do {
      lVar4 = lVar4 + 1;
      if (lVar4 != 1) {
        local_d8 = &PTR_DAT_0052f150;
        local_d0 = 1;
        local_c8 = &DAT_00000008;
        local_c0 = 0;
        ppuStack_b8 = (undefined **)0x0;
                    /* try { // try from 0039116b to 0039126e has its CatchHandler @ 00391355 */
        (*(code *)puVar1)(&local_d8);
      }
      if (local_58 == 0) {
        auVar5 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                           (lVar2 + 0x90);
        local_e8._0_8_ = local_88;
        local_e8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
        local_d8 = (undefined **)&DAT_00165db0;
        local_d0 = 1;
        ppuStack_b8 = (undefined **)0x0;
        local_c8 = local_e8;
        local_c0 = 1;
        local_88 = auVar5;
        (*(code *)puVar1)(&local_d8);
      }
      else {
        auVar5 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                           (lVar2 + 0x90);
        local_88._0_8_ = local_68;
        local_88._8_8_ =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
        ;
        local_78 = local_e8;
        local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
        local_d8 = (undefined **)&DAT_005314a0;
        local_d0 = 2;
        ppuStack_b8 = (undefined **)0x0;
        local_c8 = local_88;
        local_c0 = 2;
        local_e8 = auVar5;
        (*(code *)puVar1)(&local_d8);
      }
      *param_3 = lVar4;
      lVar2 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h03155b1db9f47e52E
                        (local_50);
    } while (lVar2 != 0);
  }
                    /* try { // try from 00391274 to 00391280 has its CatchHandler @ 00391353 */
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17ha7630a2791a77f7aE
            (local_50);
  local_c8 = *(undefined **)(local_90 + 0x2a0);
  local_c0 = *(undefined8 *)(local_90 + 0x2a8);
  local_d8 = (undefined **)(ulong)(local_c8 != (undefined *)0x0);
  local_98 = (long)local_c8;
  if (local_c8 != (undefined *)0x0) {
    local_98 = *(long *)(local_90 + 0x2b0);
  }
  local_d0 = 0;
  local_b0 = 0;
  local_ec = (undefined)param_1;
  ppuStack_b8 = local_d8;
  local_a8 = (long)local_c8;
  local_a0 = local_c0;
  while( true ) {
                    /* try { // try from 003912f0 to 00391321 has its CatchHandler @ 0039136d */
    auVar5 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                       (&local_d8);
    puVar3 = auVar5._0_8_;
    if (puVar3 == (undefined8 *)0x0) break;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
              (param_2,*puVar3,puVar3[1],&PTR_DAT_005314c0);
    _ZN4just10subcommand10Subcommand17summary_recursive17hc0eddb790c4e97dcE
              (local_ec,param_2,param_3,auVar5._8_8_);
    if (*(long *)(param_2 + 0x10) != 0) {
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    }
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_68);
  return;
}