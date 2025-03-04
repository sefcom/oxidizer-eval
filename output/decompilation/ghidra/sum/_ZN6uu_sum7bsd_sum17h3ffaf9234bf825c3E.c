undefined  [16] _ZN6uu_sum7bsd_sum17h3ffaf9234bf825c3E(undefined8 param_1,long param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_1040;
  long local_1038;
  undefined8 local_1030 [512];
  long lVar3;
  
  local_1030[0] = 0;
  uVar5 = 0;
  (*(code *)PTR_memset_00216330)(local_1030,0,0x1000);
  pcVar1 = *(code **)(param_2 + 0x18);
  uVar4 = 0;
  while( true ) {
    auVar6 = (*pcVar1)(param_1,local_1030,0x1000);
    lVar3 = auVar6._8_8_;
    if ((auVar6._0_8_ != 0) || (lVar3 == 0)) break;
                    /* try { // try from 001ace6a to 001ace7b has its CatchHandler @ 001acef3 */
    auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h4f7c6d1d3194fc05E
                       (lVar3,local_1030,&PTR_s_src_uu_sum_src_sum_rs_002123d8);
    local_1040 = auVar6._0_8_;
    local_1038 = auVar6._8_8_ + local_1040;
    while( true ) {
      pbVar2 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h000bc77802a7698aE
                                 (&local_1040);
      if (pbVar2 == (byte *)0x0) break;
      uVar5 = (ulong)((int)CONCAT62((int6)(uVar5 >> 0x10),
                                    (ushort)uVar5 >> 1 | (ushort)((uVar5 & 1) != 0) << 0xf) +
                     (uint)*pbVar2);
    }
                    /* try { // try from 001ace40 to 001ace5c has its CatchHandler @ 001acf02 */
    uVar4 = uVar4 + lVar3;
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h1f7ee64c99c66cf3E
              (0,lVar3);
  }
                    /* try { // try from 001acea9 to 001aceb3 has its CatchHandler @ 001acef1 */
  _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h1f7ee64c99c66cf3E
            (auVar6._0_8_,lVar3);
  _ZN4core3ptr67drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT_17h5da1723ca861270eE
            (param_1,param_2);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = ((uVar4 >> 10) + 1) - (ulong)((uVar4 & 0x3ff) == 0);
  return auVar6;
}