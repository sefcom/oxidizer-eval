undefined  [16]
_ZN5uu_ln4link17hcb5f3490f1fb339bE
          (undefined8 param_1,long **param_2,undefined8 param_3,long **param_4,long param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined *puVar4;
  undefined **ppuVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  long local_198;
  undefined8 local_190;
  long **pplStack_188;
  undefined local_180;
  long local_170;
  long local_168;
  undefined8 uStack_160;
  long **local_158;
  undefined local_150;
  undefined *local_148;
  undefined8 local_140;
  long **pplStack_138;
  long local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long **local_120;
  undefined **local_118;
  undefined8 local_110;
  long **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  long **local_38;
  
  local_130 = -0x8000000000000000;
  local_170 = param_5;
  if (*(char *)(param_5 + 0x31) == '\0') {
    local_148 = (undefined *)0x8000000000000000;
    local_140 = param_1;
    pplStack_138 = param_2;
  }
  else {
                    /* try { // try from 00165f78 to 00165f8d has its CatchHandler @ 00166849 */
    _ZN5uu_ln13relative_path17h7904cc2fce3a225cE(&local_148,param_1,param_2,param_3,param_4);
  }
                    /* try { // try from 00165f9f to 001660c9 has its CatchHandler @ 00166850 */
  cVar6 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001fd138)(param_3,param_4)
  ;
  if (cVar6 != '\0') {
LAB_00165fe1:
                    /* WARNING: Could not recover jumptable at 0x00166006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*(code *)(&DAT_0011a3ec +
                       *(int *)(&DAT_0011a3ec + (ulong)*(byte *)(local_170 + 0x37) * 4)))();
    return auVar9;
  }
  _ZN3std2fs8metadata17h3a5d957c4cc0d9adE(&local_118,param_3,param_4);
  ppuVar5 = local_118;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haadcf12438c9539eE
            (&local_118);
  if ((int)ppuVar5 != 2) goto LAB_00165fe1;
  if (*(char *)(local_170 + 0x30) == '\0') {
    if ((*(char *)(local_170 + 0x32) == '\0') ||
       (cVar6 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001fd138)
                          (local_140,pplStack_138), cVar6 == '\0')) {
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_001fd0a8
      )(&local_48,local_140,pplStack_138);
    }
    else {
      _ZN3std2fs12canonicalize17hb19e1aefbb6e06ecE(&local_118,&local_148);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17ha4d92868a16772a6E
                (&local_198,&local_118,local_140,pplStack_138);
      auVar9._8_8_ = pplStack_188;
      auVar9._0_8_ = local_190;
      if (local_198 == -0x8000000000000000) goto LAB_001665f0;
      local_48 = local_198;
      local_40 = local_190;
      local_38 = pplStack_188;
      param_2 = pplStack_188;
    }
    uVar8 = _ZN3std2fs9hard_link17hdf0efc3375823ad7E(&local_48,param_3,param_4);
    local_118 = &local_148;
    local_110 = param_3;
    local_108 = param_4;
    lVar7 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h91e255809ca5c217E
                      (uVar8,&local_118);
    if (lVar7 != 0) {
      auVar9._8_8_ = &
                     PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hbef6999816dd06acE_001f5ca8
      ;
      auVar9._0_8_ = lVar7;
      goto LAB_001665f0;
    }
  }
  else {
    lVar7 = _ZN3std2os4unix2fs7symlink17h60c047a9997568e6E(&local_148,param_3,param_4);
    if (lVar7 != 0) {
      auVar9 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001fd178
               )(lVar7);
LAB_001665f0:
      _ZN4core3ptr62drop_in_place_LT_alloc__borrow__Cow_LT_std__path__Path_GT__GT_17hb827e69f1c1fdd0bE
                (&local_148);
      _ZN4core3ptr62drop_in_place_LT_alloc__borrow__Cow_LT_std__path__Path_GT__GT_17hb827e69f1c1fdd0bE
                (&local_130);
      return auVar9;
    }
  }
  puVar4 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
  ;
  if (*(char *)(local_170 + 0x35) != '\0') {
    local_168 = 1;
    local_150 = 1;
    local_198 = 1;
    local_190 = local_140;
    pplStack_188 = pplStack_138;
    local_180 = 1;
    local_68 = &local_168;
    local_60 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
    ;
    local_50 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
    ;
    local_118 = (undefined **)&DAT_001f6170;
    local_110 = 2;
    uStack_f8 = 0;
    local_100 = 2;
    uStack_160 = param_3;
    local_158 = param_4;
    local_108 = &local_68;
    local_58 = (undefined *)&local_198;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fd180)(&local_118);
    if (local_130 != -0x8000000000000000) {
      local_158 = local_120;
      local_168 = local_130;
      uStack_160 = CONCAT44(uStack_124,uStack_128);
      local_198 = 1;
      local_190 = uStack_160;
      pplStack_188 = local_120;
      local_180 = 1;
      local_60 = puVar4;
      local_118 = &PTR_s__backup____001f61a0;
      local_110 = 2;
      uStack_f8 = 0;
      local_100 = 1;
                    /* try { // try from 001667b2 to 001667bf has its CatchHandler @ 00166804 */
      local_108 = &local_68;
      local_68 = &local_198;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fd180)(&local_118);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(&local_168);
      bVar1 = true;
      goto LAB_001667cc;
    }
    local_118 = &PTR_s__001f6190;
    local_110 = 1;
    local_108 = (long **)&DAT_00000008;
    local_100 = 0;
    uStack_f8 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fd180)(&local_118);
  }
  bVar1 = false;
LAB_001667cc:
  _ZN4core3ptr62drop_in_place_LT_alloc__borrow__Cow_LT_std__path__Path_GT__GT_17hb827e69f1c1fdd0bE
            (&local_148);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if (!bVar1) {
    if (local_130 == -0x8000000000000000) {
      return auVar2 << 0x40;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(&local_130);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}