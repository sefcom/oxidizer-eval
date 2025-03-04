ulong _ZN7uu_head11is_seekable17h10276630579ab154E(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  
  local_20 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                       (param_1,2,0);
  uVar1 = local_20._8_8_;
  if (local_20._0_8_ == 0) {
                    /* try { // try from 001b9e76 to 001b9ea1 has its CatchHandler @ 001b9ef4 */
    local_30 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                         (param_1,1,0);
    if (local_30._0_8_ == 0) {
                    /* try { // try from 001b9eb8 to 001b9ec1 has its CatchHandler @ 001b9ef4 */
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17hc645c62f33fc39cfE
                (local_30);
      uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h241df4b67d3ddb4eE(uVar1);
      auVar3 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                         (param_1,0,uVar1);
      uVar2 = CONCAT71((int7)((ulong)param_1 >> 8),auVar3._0_8_ == 0);
      local_30 = auVar3;
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17hc645c62f33fc39cfE
                (local_30);
      goto LAB_001b9eae;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17hc645c62f33fc39cfE
              (local_30);
  }
  _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17hc645c62f33fc39cfE
            (local_20);
  uVar2 = 0;
LAB_001b9eae:
  return uVar2 & 0xffffffff;
}