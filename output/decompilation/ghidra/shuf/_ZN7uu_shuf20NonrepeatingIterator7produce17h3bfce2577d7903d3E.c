undefined8 _ZN7uu_shuf20NonrepeatingIterator7produce17h3bfce2577d7903d3E(long *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long local_68;
  long lStack_60;
  ulong local_58;
  long *local_50;
  undefined local_48 [24];
  
  if (*param_1 == 0) {
    lVar1 = param_1[3];
    if (lVar1 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00200cb8)
                (&PTR_s_src_uu_shuf_src_shuf_rs_001fa0f8);
LAB_00168f2e:
                    /* try { // try from 00168f2e to 00168f46 has its CatchHandler @ 00168f49 */
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002008e0)
                ("assertion failed: remaining.len() >= self.remaining_count",0x39,
                 &PTR_s_src_uu_shuf_src_shuf_rs_001fa0e0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1[3] = lVar1 + -1;
    uVar4 = *(undefined8 *)(param_1[2] + -8 + lVar1 * 8);
  }
  else {
    do {
      lVar1 = param_1[7];
      _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h18cb9da65145660dE
                (&local_50,param_1 + 8);
      uVar4 = _ZN4rand3rng3Rng12random_range17ha1221712debc6f31E
                        (lVar1,&local_50,&PTR_s_src_uu_shuf_src_shuf_rs_001fa0c8);
      cVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h51345bfb8f3a667dE
                        (param_1,uVar4);
    } while (cVar3 != '\0');
    uVar5 = (param_1[9] - param_1[8]) + 1;
    uVar6 = 0xffffffffffffffff;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    if (uVar6 >> 2 <= (ulong)param_1[3]) {
      _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h18cb9da65145660dE
                (local_48,param_1 + 8);
      local_50 = param_1;
      _ZN4core4iter6traits8iterator8Iterator7collect17hdfc6118d04e89ef8E(&local_68,&local_50);
      uVar6 = local_58;
      if (local_58 < (ulong)param_1[6]) goto LAB_00168f2e;
                    /* try { // try from 00168eb5 to 00168ec4 has its CatchHandler @ 00168f49 */
      _ZN61__LT__u5b_T_u5d__u20_as_u20_rand__seq__slice__SliceRandom_GT_15partial_shuffle17h4298b1ac762d2851E
                (&local_50,lStack_60,local_58,param_1 + 7);
      if ((ulong)param_1[6] <= uVar6) {
        local_58 = param_1[6];
      }
      _ZN4core3ptr39drop_in_place_LT_uu_shuf__NumberSet_GT_17ha273958b9b703c98E(param_1);
      *param_1 = 0;
      param_1[1] = local_68;
      param_1[2] = lStack_60;
      param_1[3] = local_58;
    }
  }
  return uVar4;
}