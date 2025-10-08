long _ZN8uu_nproc12num_cpus_all17hd72076020a4f12e1E(void)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  
  lVar1 = (*(code *)PTR_sysconf_001e7550)(0x53);
  if (lVar1 != 1) {
    lVar2 = 1;
    if (1 < lVar1) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  auVar3 = (*(code *)PTR__ZN3std6thread21available_parallelism17h897bc36791d72018E_001e7558)();
  lVar1 = 1;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    lVar1 = auVar3._8_8_;
  }
  _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__num__nonzero__NonZero_LT_usize_GT__C_std__io__error__Error_GT__GT_17h00169c12d9d675a9E
            (auVar3._0_8_,auVar3._8_8_);
  return lVar1;
}