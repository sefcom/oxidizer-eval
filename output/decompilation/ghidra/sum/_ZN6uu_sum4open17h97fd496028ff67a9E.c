undefined8 *
_ZN6uu_sum4open17h97fd496028ff67a9E(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hd4eb9e54b05204c5E
                    (param_2,param_3);
  if (cVar1 == '\0') {
    local_d8 = param_2;
    local_d0 = param_3;
    cVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001e8490)(param_2,param_3);
    if (cVar1 == '\0') {
      _ZN3std2fs8metadata17h15734e0affd720b1E(&local_c8,param_2,param_3);
      if (local_c8 != (undefined *)0x2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf120e8ad81360a82E
                  (local_c8,local_c0);
        _ZN3std2fs4File4open17h42d9f349de7578b2E(&local_c8,&local_d8);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hbb66ee632401819eE
                  (&local_f8,&local_c8);
        if (local_f8 != 0) {
          ppuVar3 = (undefined **)CONCAT44(uStack_ec,local_f0);
          uVar2 = 1;
          goto LAB_001573bb;
        }
        local_f8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3400401390123d8cE(local_f0);
        ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbec980fb9354c02fE_001e1b98
        ;
        goto LAB_001572a9;
      }
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf120e8ad81360a82E
                (2,local_c0);
      local_c8 = &DAT_001e1b78;
    }
    else {
      local_c8 = &DAT_001e1b58;
    }
    local_128 = &local_118;
    local_100 = 0;
    local_118 = 0;
    local_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_120 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e8498
    ;
    local_110 = param_2;
    local_108 = param_3;
    local_b8 = (undefined *)&local_128;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5edfc5779a6c968cE(&local_f8,&local_c8);
    local_e0 = 2;
    local_f8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hdf1801492e78d9caE(&local_f8);
    uVar2 = 1;
    ppuVar3 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h5b5cc5548d7af3b1E_001e1c10
    ;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001e8488)();
    local_f8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcc811c181a3c74a1E(uVar2);
    ppuVar3 = (undefined **)&DAT_001e1c78;
LAB_001572a9:
    uVar2 = 0;
  }
LAB_001573bb:
  param_1[1] = local_f8;
  param_1[2] = ppuVar3;
  *param_1 = uVar2;
  return param_1;
}