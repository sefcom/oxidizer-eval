long * _ZN3bat14syntax_mapping7builtin21build_matcher_dynamic17h9c6c664a7fd0d795E
                 (long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte local_a8;
  undefined7 uStack_a7;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  if (param_3 != 0) {
    plVar2 = (long *)(param_2 + 8);
    param_3 = param_3 * 0x18;
    do {
      while ((*(byte *)(plVar2 + -1) & 1) == 0) {
                    /* try { // try from 0054301a to 00543041 has its CatchHandler @ 00543180 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                  (&local_d8,*plVar2,plVar2[1] + *plVar2);
        plVar2 = plVar2 + 3;
        param_3 = param_3 + -0x18;
        if (param_3 == 0) goto LAB_005430c8;
      }
      _ZN3std3env3var17h5e55fe97aab94671E(&local_a8,plVar2);
      if ((local_a8 & 1) != 0) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1489211aaee639b9E
                  (&local_a8);
        goto LAB_00543137;
      }
      local_48 = uStack_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      if (CONCAT44(uStack_9c,local_a0) == -0x8000000000000000) goto LAB_00543137;
      local_b8 = uStack_98;
      uStack_b4 = uStack_94;
      uStack_b0 = uStack_90;
      uStack_ac = uStack_8c;
                    /* try { // try from 00543097 to 0054309e has its CatchHandler @ 00543163 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
                (&local_d8,CONCAT44(uStack_94,uStack_98),
                 CONCAT44(uStack_8c,uStack_90) + CONCAT44(uStack_94,uStack_98));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_c0);
      plVar2 = plVar2 + 3;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
LAB_005430c8:
                    /* try { // try from 005430c8 to 005430ef has its CatchHandler @ 00543161 */
  _ZN3bat14syntax_mapping17make_glob_matcher17hb323052747e788f0E(&local_a8,local_d0,local_c8);
  lVar1 = CONCAT71(uStack_a7,local_a8);
  if (lVar1 == -0x8000000000000000) {
    _ZN4core3ptr95drop_in_place_LT_core__result__Result_LT_globset__glob__GlobMatcher_C_bat__error__Error_GT__GT_17h20daa161d52b07ecE
              (&local_a8);
LAB_00543137:
    lVar1 = -0x8000000000000000;
  }
  else {
    param_1[0xb] = local_50;
    param_1[9] = local_60;
    param_1[10] = lStack_58;
    param_1[7] = local_70;
    param_1[8] = lStack_68;
    param_1[5] = local_80;
    param_1[6] = lStack_78;
    param_1[3] = CONCAT44(uStack_8c,uStack_90);
    param_1[4] = lStack_88;
    *(undefined4 *)(param_1 + 1) = local_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
    *(undefined4 *)(param_1 + 2) = uStack_98;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
  }
  *param_1 = lVar1;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_d8);
  return param_1;
}