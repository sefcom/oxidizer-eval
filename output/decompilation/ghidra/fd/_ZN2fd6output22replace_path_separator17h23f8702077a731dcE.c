void _ZN2fd6output22replace_path_separator17h23f8702077a731dcE
               (undefined (*param_1) [16],long param_2,long param_3,byte *param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined auStack_b8 [16];
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  byte *pbStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  byte *pbStack_70;
  undefined (*pauStack_58) [16];
  long lStack_50;
  byte abStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15as_utf8_pattern17h281692714ffc5fb0E
            (&iStack_a0,0x2f);
  if (iStack_a0 == 1) {
    if (pbStack_98 == (byte *)0x0) {
      uVar4 = uStack_90;
      if (0x7f < uStack_90) goto LAB_002e1cd7;
    }
    else {
      if (CONCAT44(uStack_8c,uStack_90) != 1) goto LAB_002e1cd7;
      uVar4 = (uint)*pbStack_98;
    }
    if (param_5 == 1) {
      auStack_b8[0] = (char)uVar4;
      abStack_48[0] = *param_4;
      lStack_80 = param_3 + param_2;
      puStack_78 = auStack_b8;
      pbStack_70 = abStack_48;
      lStack_88 = param_2;
      _ZN4core4iter6traits8iterator8Iterator7collect17hfb05dea471ced348E(param_1,&lStack_88);
      return;
    }
  }
LAB_002e1cd7:
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15as_utf8_pattern17h281692714ffc5fb0E
            (&lStack_88,0x2f);
  if ((int)lStack_88 == 1) {
    puVar1 = puStack_78;
    if (lStack_80 == 0) {
      puVar1 = (undefined *)1;
      if ((0x7f < (uint)puStack_78) && (puVar1 = (undefined *)2, 0x7ff < (uint)puStack_78)) {
        puVar1 = (undefined *)(4 - (ulong)((uint)puStack_78 < 0x10000));
      }
    }
    lVar5 = 0;
    if (puVar1 <= param_5) {
      lVar5 = param_3;
    }
  }
  else {
    lVar5 = 0;
  }
  pauStack_58 = param_1;
  auStack_b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h48a23d67ea2efec0E
                         (lVar5,1,1,&PTR_s__rustc_bf64d66bd58719fac2585eae5_00500ee0);
  uStack_a8 = 0;
  lStack_50 = param_3;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&lStack_88,0x2f,param_2,param_3);
  lVar5 = 0;
  while( true ) {
    _ZN81__LT_core__str__pattern__CharSearcher_u20_as_u20_core__str__pattern__Searcher_GT_10next_match17hd8bdd36f13b8cb00E
              (abStack_48,&lStack_88);
    if ((abStack_48[0] & 1) == 0) break;
    _ZN4core3str4iter29MatchIndicesInternal_LT_P_GT_4next28__u7b__u7b_closure_u7d__u7d_17h2dfb1c248835e646E
              (&iStack_a0,lStack_88,uStack_40,uStack_38);
    if (pbStack_98 == (byte *)0x0) break;
    lVar2 = CONCAT44(uStack_9c,iStack_a0);
    lVar3 = CONCAT44(uStack_8c,uStack_90);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
              (auStack_b8,lVar5 + param_2,param_2 + lVar2);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
              (auStack_b8,param_4,param_4 + param_5);
    lVar5 = lVar3 + lVar2;
  }
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
            (auStack_b8,lVar5 + param_2,lStack_50 + param_2);
  *(undefined8 *)pauStack_58[1] = uStack_a8;
  *pauStack_58 = auStack_b8;
  return;
}