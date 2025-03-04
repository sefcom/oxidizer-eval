undefined8 _ZN7uu_shuf20NonrepeatingIterator7produce17h8504e8cc74b07c5cE(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong local_58;
  long *local_48;
  undefined local_40 [24];
  
  if (*param_1 == 0) {
    lVar1 = param_1[3];
    if (lVar1 == 0) {
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00237d20);
LAB_001c1b62:
                    /* try { // try from 001c1b62 to 001c1b7a has its CatchHandler @ 001c1b9f */
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E(&DAT_0011f2fe,0x39,&PTR_DAT_00237d08);
    }
    param_1[3] = lVar1 + -1;
    uVar3 = *(undefined8 *)(param_1[2] + -8 + lVar1 * 8);
  }
  else {
    do {
      lVar1 = param_1[7];
      _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h9f1d5fa88ae4bf9dE
                (&local_68,param_1 + 8);
      uVar3 = _ZN4rand3rng3Rng9gen_range17h870d3f4f62006495E(lVar1,&local_68);
      cVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h02d9e5528042f514E
                        (param_1,uVar3);
    } while (cVar2 != '\0');
    uVar4 = (param_1[9] - param_1[8]) + 1;
    uVar5 = 0xffffffffffffffff;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    if (uVar5 >> 2 <= (ulong)param_1[3]) {
      _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h9f1d5fa88ae4bf9dE
                (local_40,param_1 + 8);
      local_48 = param_1;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd81dd14c50db9414E
                (&local_80,&local_48);
      if (local_70 < (ulong)param_1[6]) goto LAB_001c1b62;
                    /* try { // try from 001c1ad8 to 001c1af2 has its CatchHandler @ 001c1b9f */
      _ZN54__LT__u5b_T_u5d__u20_as_u20_rand__seq__SliceRandom_GT_15partial_shuffle17h688065f2043dca7fE
                (&local_68,CONCAT44(uStack_74,uStack_78),local_70,param_1 + 7);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_8truncate17h95449713c67fbf2aE(&local_80,param_1[6]);
      local_58 = local_70;
      local_68 = local_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
                    /* try { // try from 001c1b07 to 001c1b0e has its CatchHandler @ 001c1b7b */
      _ZN4core3ptr39drop_in_place_LT_uu_shuf__NumberSet_GT_17h0fd53ab59fb65b39E(param_1);
      *param_1 = 0;
      param_1[1] = CONCAT44(uStack_64,local_68);
      param_1[2] = CONCAT44(uStack_5c,uStack_60);
      param_1[3] = local_58;
    }
  }
  return uVar3;
}