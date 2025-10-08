void _ZN5uu_ln13relative_path17h7904cc2fce3a225cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined local_60 [24];
  long local_48 [3];
  
  _ZN6uucore8features2fs12canonicalize17h081e25290d375d8fE(local_60);
                    /* try { // try from 00165ea6 to 00165ed4 has its CatchHandler @ 00165f1c */
  lVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001fd0d0)(param_4,param_5);
  if (lVar2 != 0) {
    _ZN6uucore8features2fs12canonicalize17h081e25290d375d8fE(local_48,lVar2);
    if (local_48[0] == -0x8000000000000000) {
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h80afd64e27d603fbE
                (local_48);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(local_60);
      param_1[1] = param_2;
      param_1[2] = param_3;
      *param_1 = 0x8000000000000000;
    }
    else {
      _ZN6uucore8features2fs21make_path_relative_to17haf7baec27cdaacedE(param_1,local_60,local_48);
    }
    return;
  }
                    /* try { // try from 00165f0d to 00165f19 has its CatchHandler @ 00165f1c */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fced8)
            (&PTR_s_src_uu_ln_src_ln_rs_001f60f8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}