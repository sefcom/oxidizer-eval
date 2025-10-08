void _ZN11uu_unexpand4open17h50e1d0eba05cf6a0E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001eebc0)(param_2,param_3);
  if (cVar1 != '\0') {
    local_70 = &local_60;
    local_68 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001eebc8
    ;
    local_50 = &DAT_001e81a0;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_70;
    local_38 = 1;
    local_60 = param_2;
    local_58 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hcf8ba04e84ab02b9E(&local_90,&local_50);
    local_78 = 1;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2a5c3a49f15d6b04E(&local_90);
    param_1[1] = uVar2;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h858e3a3c7116f5ecE_001e8290
    ;
LAB_0015cadb:
    *param_1 = 0;
    return;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7c2f39b0c4e545c7E
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17hed25d90ef79f293bE(&local_50,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc507021549390b0eE
              (&local_90,&local_50,param_2,param_3);
    if (local_90 != 0) {
      param_1[1] = local_90;
      param_1[2] = CONCAT44(uStack_84,local_88);
      goto LAB_0015cadb;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbf7503e18e4789e3E(local_88);
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha7850f022137aa22E_001e81c0;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001eebd0)();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1f109a095c5c9d9eE(uVar2);
    ppuVar3 = (undefined **)&DAT_001e8218;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h5f0cb91a10fcc150E
            (param_1,uVar2,ppuVar3);
  return;
}