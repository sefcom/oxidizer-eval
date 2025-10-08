long _ZN2fd3cli4Opts7threads17h134d3f693ba47df8E(long param_1)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auStack_10 [16];
  
  if (param_1 != 0) {
    return param_1;
  }
  auVar2 = (*(code *)PTR__ZN3std6thread21available_parallelism17h897bc36791d72018E_00540870)();
  auStack_10._8_8_ = auVar2._8_8_;
  if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auStack_10 = auVar2;
    _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__num__nonzero__NonZero_LT_usize_GT__C_std__io__error__Error_GT__GT_17h2435fb8218d4e37dE
              (auStack_10);
    auVar2._8_8_ = 1;
    auVar2._0_8_ = auStack_10._0_8_;
  }
  auStack_10._0_8_ = auVar2._0_8_;
  lVar1 = _ZN4core3cmp3Ord3min17h37f98c03afb9f14cE(auVar2._8_8_,0x40);
  return lVar1;
}