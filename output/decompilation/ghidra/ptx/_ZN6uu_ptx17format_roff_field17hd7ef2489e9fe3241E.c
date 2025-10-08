void _ZN6uu_ptx17format_roff_field17hd7ef2489e9fe3241E
               (undefined (*param_1) [16],long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined auStack_b8 [16];
  undefined8 uStack_a8;
  undefined (*pauStack_a0) [16];
  long lStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  byte abStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pauStack_a0 = param_1;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15as_utf8_pattern17h281692714ffc5fb0E
            (&iStack_90,0x22);
  if (iStack_90 == 1) {
    if (lStack_88 == 0) {
      bVar4 = uStack_80 < 0x800;
    }
    else {
      bVar4 = CONCAT44(uStack_7c,uStack_80) < 3;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = param_3;
    }
  }
  else {
    lVar3 = 0;
  }
  auStack_b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h41210ac9edb33abeE
                         (lVar3,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_00351510);
  uStack_a8 = 0;
  lStack_98 = param_3;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (&iStack_90,0x22,param_2,param_3);
  lVar3 = 0;
  while( true ) {
    _ZN81__LT_core__str__pattern__CharSearcher_u20_as_u20_core__str__pattern__Searcher_GT_10next_match17hd8bdd36f13b8cb00E
              (abStack_60,&iStack_90);
    if ((abStack_60[0] & 1) == 0) break;
    _ZN4core3str4iter29MatchIndicesInternal_LT_P_GT_4next28__u7b__u7b_closure_u7d__u7d_17h48bd15217bb9a742E
              (&lStack_48,CONCAT44(uStack_8c,iStack_90),uStack_58,uStack_50);
    lVar2 = lStack_38;
    lVar1 = lStack_48;
    if (lStack_40 == 0) break;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
              (auStack_b8,lVar3 + param_2,param_2 + lStack_48);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
              (auStack_b8,"\"\"",".");
    lVar3 = lVar2 + lVar1;
  }
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
            (auStack_b8,lVar3 + param_2,lStack_98 + param_2);
  *(undefined8 *)pauStack_a0[1] = uStack_a8;
  *pauStack_a0 = auStack_b8;
  return;
}