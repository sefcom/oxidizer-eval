long _ZN5uu_mv6rename17h274fbdeb4e433295E
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined8 *param_6)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_2e8;
  undefined8 ****local_2c0;
  undefined *local_2b8;
  undefined8 ***local_2b0;
  undefined *local_2a8;
  undefined **local_298;
  undefined8 uStack_290;
  undefined8 ****local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 **local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined local_1d0;
  undefined local_130 [16];
  undefined8 local_120;
  undefined8 ***local_110;
  code *local_108;
  undefined8 local_100;
  undefined local_f8;
  
                    /* try { // try from 0018ca95 to 0018ccfa has its CatchHandler @ 0018d54b */
  _ZN3std2fs8metadata17h12bb7891128f5212E(&local_298,param_3,param_4);
  iVar1 = (int)local_298;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
            (&local_298);
  if (iVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0018cb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)(&DAT_00120f2c +
                      *(int *)(&DAT_00120f2c + (ulong)*(byte *)(param_5 + 0x37) * 4)))();
    return lVar3;
  }
  _ZN3std2fs8metadata17h12bb7891128f5212E(&local_298,param_3,param_4);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
            (&local_298);
  if ((((int)local_298 != 2) &&
      (cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)(param_3,param_4)
      , cVar2 != '\0')) &&
     (cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)(param_1,param_2),
     cVar2 != '\0')) {
    cVar2 = _ZN5uu_mv12is_empty_dir17h380343aaab058219E(param_3,param_4);
    if (cVar2 == '\0') {
                    /* try { // try from 0018d38d to 0018d4f3 has its CatchHandler @ 0018d54b */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h19a54565959f0f6fE
                (&local_1e8,"Directory not empty (backup: )",0x13);
      local_288 = (undefined8 ****)local_1d8;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfa7a333923b705a4E(&local_298);
      lVar3 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_0024ab48)
                        (0x28,uVar4,
                         &
                         PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h6a1cdce7254a5b62E_00241778
                        );
      goto LAB_0018cb70;
    }
    lVar3 = _ZN3std2fs10remove_dir17h83cddb2f81627111E(param_3,param_4);
    if (lVar3 != 0) goto LAB_0018cb70;
  }
  lVar3 = _ZN5uu_mv20rename_with_fallback17h3652858bdc29b866E
                    (param_1,param_2,param_3,param_4,param_6);
  if (lVar3 == 0) {
    if (*(char *)(param_5 + 0x31) != '\0') {
      local_110 = (undefined8 ***)&DAT_00000001;
      local_f8 = 1;
      local_1e8 = (undefined8 **)0x1;
      local_1d0 = 1;
      local_2c0 = &local_110;
      local_2b8 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
      ;
      local_2b0 = &local_1e8;
      local_2a8 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
      ;
      local_298 = &PTR_s_renamed_00241a30;
      uStack_290 = 2;
      local_278 = 0;
      local_288 = &local_2c0;
      local_280 = 2;
      uStack_1e0 = param_3;
      local_1d8 = param_4;
      local_108 = param_1;
      local_100 = param_2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_130,&local_298);
      local_1d8 = local_120;
      if (param_6 == (undefined8 *)0x0) {
        local_110 = &local_1e8;
        local_108 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_298 = (undefined **)&DAT_00241a50;
        uStack_290 = 2;
        local_278 = 0;
        local_288 = &local_110;
        local_280 = 1;
                    /* try { // try from 0018d361 to 0018d36b has its CatchHandler @ 0018d539 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024aba8)(&local_298);
      }
      else {
                    /* try { // try from 0018cf8e to 0018cf9a has its CatchHandler @ 0018d539 */
        _ZN9indicatif5multi13MultiProgress7suspend17h8665c0f9399b7cbaE(*param_6,&local_1e8);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_1e8);
    }
    return 0;
  }
LAB_0018cb70:
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h69e481ccc24b6e8dE
            (0x8000000000000000,local_2e8);
  return lVar3;
}