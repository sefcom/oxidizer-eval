undefined8
_ZN5uu_rm11remove_file17h42f0a78696bb1093E(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_78 [16];
  undefined8 **local_68;
  undefined local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined *local_30;
  
  cVar1 = _ZN5uu_rm11prompt_file17h7c1fa3f92c48040aE
                    (param_1,param_2,*(undefined *)(param_3 + 6),*(undefined *)(param_3 + 7));
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)_ZN3std2fs11remove_file17h5bdbb078dd574c13E(param_1,param_2);
    if (puVar2 != (undefined8 *)0x0) {
      local_38 = puVar2;
      cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(puVar2);
      local_68 = (undefined8 **)param_2;
      if (cVar1 == '\x01') {
                    /* try { // try from 0015d6ca to 0015d785 has its CatchHandler @ 0015d936 */
        local_78 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_a8 = (undefined **)&DAT_001ea4a0;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = (code *)
                   PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
        ;
        local_a8 = &PTR_DAT_001ea500;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a8);
      }
      else {
                    /* try { // try from 0015d82c to 0015d8fd has its CatchHandler @ 0015d936 */
        local_78 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_a8 = (undefined **)&DAT_001ea4a0;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = (code *)
                   PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
        ;
        local_48 = &local_38;
        local_40 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f0e18
        ;
        local_a8 = &PTR_DAT_001ea5e0;
        local_a0 = 3;
        local_88 = 0;
        local_90 = 2;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a8);
        puVar2 = local_38;
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haf081cf9ad72b71dE(puVar2);
      return 1;
    }
    if (*(char *)(param_3 + 5) == '\x01') {
      _ZN5uu_rm9normalize17h371ce75c5c819b8dE(&local_58,param_1,param_2);
      local_78._0_8_ = 1;
      local_78._8_8_ = local_50;
      local_68 = local_48;
      local_60 = 1;
      local_38 = (undefined8 *)local_78;
      local_30 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
      ;
      local_a8 = &PTR_s_removed_001ea5c0;
      local_a0 = 2;
      local_88 = 0;
      local_98 = &local_38;
      local_90 = 1;
                    /* try { // try from 0015d80f to 0015d817 has its CatchHandler @ 0015d91e */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f1090)(&local_a8);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hec94fc61a491c65bE(local_58,local_50);
    }
  }
  return 0;
}