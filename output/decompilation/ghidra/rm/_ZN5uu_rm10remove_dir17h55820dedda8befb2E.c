undefined8
_ZN5uu_rm10remove_dir17h55820dedda8befb2E(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40;
  undefined8 *local_38;
  undefined *local_30;
  
  cVar2 = _ZN5uu_rm10prompt_dir17h2b47d5798effefb0E
                    (param_1,param_2,*(undefined *)(param_3 + 6),*(undefined *)(param_3 + 7));
  if (cVar2 != '\0') {
    if ((*(char *)(param_3 + 4) == '\0') && (*(char *)(param_3 + 3) != '\x01')) {
      local_58 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
      local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_a0 = (undefined **)&DAT_001ea4a0;
      local_98 = 2;
      local_80 = 0;
      local_88 = 1;
      local_90 = &local_70;
      local_70 = (undefined8 *)local_58;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      local_58._0_8_ = 1;
      local_40 = 1;
      local_68 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
      ;
      local_a0 = &PTR_DAT_001ea5a0;
      local_98 = 2;
      local_80 = 0;
      local_88 = 1;
      local_90 = &local_70;
      local_70 = (undefined8 *)local_58;
      local_58._8_8_ = param_1;
      local_48 = param_2;
      (*(code *)puVar1)(&local_a0);
      return 1;
    }
    lVar3 = _ZN3std2fs10remove_dir17hddc5f5b6184df82aE(param_1,param_2);
    if (lVar3 != 0) {
      local_38 = (undefined8 *)
                 _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h38f2107b9f174514E
                           (lVar3,param_1,param_2);
                    /* try { // try from 0015d377 to 0015d425 has its CatchHandler @ 0015d5c8 */
      local_58 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_a0 = (undefined **)&DAT_001ea4a0;
      local_98 = 2;
      local_80 = 0;
      local_90 = &local_70;
      local_88 = 1;
      local_70 = (undefined8 *)local_58;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      local_58._0_8_ = &local_38;
      local_58._8_8_ =
           _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h29c983c066893c20E
      ;
      local_a0 = (undefined **)&DAT_001ea4e0;
      local_98 = 2;
      local_80 = 0;
      local_88 = 1;
      local_90 = (undefined8 **)local_58;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h186a117efda8c6b1E
                (local_38);
      return 1;
    }
    if (*(char *)(param_3 + 5) == '\x01') {
      _ZN5uu_rm9normalize17h371ce75c5c819b8dE(&local_70,param_1,param_2);
      local_58._0_8_ = 1;
      local_58._8_8_ = local_68;
      local_48 = local_60;
      local_40 = 1;
      local_38 = (undefined8 *)local_58;
      local_30 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
      ;
      local_a0 = &PTR_DAT_001ea520;
      local_98 = 2;
      local_80 = 0;
      local_90 = &local_38;
      local_88 = 1;
                    /* try { // try from 0015d4bb to 0015d4c5 has its CatchHandler @ 0015d5b0 */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f1090)(&local_a0);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hec94fc61a491c65bE(local_70,local_68);
    }
  }
  return 0;
}