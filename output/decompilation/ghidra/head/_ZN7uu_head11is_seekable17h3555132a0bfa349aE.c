bool _ZN7uu_head11is_seekable17h3555132a0bfa349aE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  
  local_20 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_001fe8e0
             )();
  uVar1 = local_20._8_8_;
  if (local_20._0_8_ == 0) {
                    /* try { // try from 001676ff to 0016772a has its CatchHandler @ 00167786 */
    local_30 = (*(code *)
                 PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_001fe7e8
               )(param_1,1,0);
    if (local_30._0_8_ == 0) {
                    /* try { // try from 0016773f to 00167748 has its CatchHandler @ 00167786 */
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
                (local_30);
      uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h63829b3fd8911809E(0,uVar1);
      auVar2 = (*(code *)
                 PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_001fe7e8
               )(param_1,0,uVar1);
      local_30 = auVar2;
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
                (local_30);
      return auVar2._0_8_ == 0;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
              (local_30);
  }
  _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17heb28040cc99787a6E
            (local_20);
  return false;
}