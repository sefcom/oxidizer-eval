undefined * _ZN3bat6output10OutputType6handle17h5316410587048584E(undefined *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar1 = 1;
  if (*param_2 - 3U < 3) {
    uVar1 = *param_2 - 3U;
  }
  if (uVar1 == 0) {
    if (*(int *)(param_2 + 3) == -1) {
      (*(code *)
        PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
      )(param_1,&DAT_002a2bf0,0x1e);
      return param_1;
    }
    param_2 = param_2 + 3;
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h93f19009d5b0a33cE_007ce840;
  }
  else {
    if (uVar1 == 1) {
      ppuVar3 = &
                PTR__ZN4core3ptr40drop_in_place_LT_minus__pager__Pager_GT_17h7d263cbfbe4432acE_007cd888
      ;
      uVar2 = 1;
      goto LAB_0053d3f8;
    }
    param_2 = param_2 + 1;
    ppuVar3 = (undefined **)&DAT_007ce890;
  }
  uVar2 = 0;
LAB_0053d3f8:
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined ***)(param_1 + 0x18) = ppuVar3;
  *param_1 = 0xd;
  return param_1;
}