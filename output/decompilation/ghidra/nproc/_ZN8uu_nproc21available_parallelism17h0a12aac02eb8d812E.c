undefined8 _ZN8uu_nproc21available_parallelism17h0a12aac02eb8d812E(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  auVar2 = _ZN3std6thread21available_parallelism17he1b307f401d49c64E();
  uVar1 = 1;
  if (auVar2._0_8_ == 0) {
    uVar1 = auVar2._8_8_;
  }
  _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__num__nonzero__NonZero_LT_usize_GT__C_std__io__error__Error_GT__GT_17h5f94e414ce99af65E
            (auVar2._0_8_,auVar2._8_8_);
  return uVar1;
}