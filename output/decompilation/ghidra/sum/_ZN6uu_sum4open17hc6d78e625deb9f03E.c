undefined8 *
_ZN6uu_sum4open17hc6d78e625deb9f03E(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *local_128;
  code *local_120;
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
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf36c24ac2157b89cE
                    (param_2,param_3,"-: No such file or directory",1);
  if (cVar1 != '\0') {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d9b126e7e029ca4E(uVar2);
    param_1[1] = uVar2;
    ppuVar3 = (undefined **)&DAT_00212548;
LAB_001ad0b9:
    param_1[2] = ppuVar3;
    *param_1 = 0;
    return param_1;
  }
  local_d8 = param_2;
  local_d0 = param_3;
  cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_2,param_3);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h8576c1285dae9481E(&local_c8,param_2,param_3);
    if (local_c8 != (undefined *)0x2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf1d72a60c818bfa9E
                (local_c8,local_c0);
      _ZN3std2fs4File4open17h2e5b1f9e9ac3c989E(&local_c8,&local_d8);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hffc4471fbb8da2aaE
                (&local_f8,&local_c8);
      if (local_f8 == 0) {
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1bc61bed8d85a888E(local_f0);
        param_1[1] = uVar2;
        ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h68390ae3e9b44289E_00212448
        ;
        goto LAB_001ad0b9;
      }
      ppuVar3 = (undefined **)CONCAT44(uStack_ec,local_f0);
      goto LAB_001ad1cf;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf1d72a60c818bfa9E
              (2,local_c0);
    local_c8 = &DAT_00212428;
  }
  else {
    local_c8 = &DAT_00212408;
  }
  local_128 = &local_118;
  local_100 = 0;
  local_118 = 0;
  local_120 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_c0 = 2;
  local_a8 = 0;
  local_b0 = 1;
  local_110 = param_2;
  local_108 = param_3;
  local_b8 = (undefined *)&local_128;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h820392659395b4d8E(&local_f8,&local_c8);
  local_e0 = 2;
  local_f8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbb7787c82d15b868E(&local_f8);
  ppuVar3 = &
            PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2ba85c8512813771E_002124d8
  ;
LAB_001ad1cf:
  param_1[1] = local_f8;
  param_1[2] = ppuVar3;
  *param_1 = 1;
  return param_1;
}