undefined8 _ZN8uu_nproc21available_parallelism17h7e39191f6c9c795bE(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  auVar2 = (*(code *)PTR__ZN3std6thread21available_parallelism17h897bc36791d72018E_001e7558)();
  uVar1 = 1;
  if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar1 = auVar2._8_8_;
  }
  _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__num__nonzero__NonZero_LT_usize_GT__C_std__io__error__Error_GT__GT_17h00169c12d9d675a9E
            (auVar2._0_8_,auVar2._8_8_);
  return uVar1;
}