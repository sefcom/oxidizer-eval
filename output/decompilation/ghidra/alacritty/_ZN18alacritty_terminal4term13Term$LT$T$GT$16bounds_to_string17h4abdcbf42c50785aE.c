void _ZN18alacritty_terminal4term13Term_LT_T_GT_16bounds_to_string17h4abdcbf42c50785aE
               (undefined8 *param_1,long param_2,undefined8 param_3,int param_4,long param_5,
               int param_6)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  int local_60;
  undefined local_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  undefined8 uVar4;
  
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0;
  local_5c = 0;
  local_64 = param_4;
  local_60 = param_6;
  local_58 = param_1;
  local_38 = param_5;
  auVar7 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17hb267890a26ead5dcE
                     (&local_64);
  uVar4 = auVar7._8_8_;
  if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = 1;
    uVar6 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xb8);
    do {
      iVar3 = (int)uVar4;
      uVar2 = 0;
      if (iVar3 == param_4) {
        uVar2 = param_3;
      }
      lVar5 = lVar1 + -1;
      if (iVar3 == param_6) {
        lVar5 = local_38;
      }
                    /* try { // try from 0046f9ae to 0046f9b8 has its CatchHandler @ 0046fa7d */
      _ZN18alacritty_terminal4term13Term_LT_T_GT_14line_to_string17h817f918a5b9412b8E
                (&local_50,param_2,uVar4,uVar2,lVar5,iVar3 == param_6);
                    /* try { // try from 0046f9c6 to 0046f9cf has its CatchHandler @ 0046fa92 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                (&local_80,CONCAT44(uStack_44,local_48),
                 CONCAT44(uStack_3c,uStack_40) + CONCAT44(uStack_44,local_48));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_50);
      auVar7 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17hb267890a26ead5dcE
                         (&local_64);
      uVar4 = auVar7._8_8_;
      uVar2 = uStack_78;
      uVar6 = local_70;
    } while ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  local_50 = 0;
  auVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(10,&local_50);
                    /* try { // try from 0046fa11 to 0046fa33 has its CatchHandler @ 0046fa7b */
  lVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                    (auVar7._0_8_,auVar7._8_8_,uVar2,uVar6);
  if (lVar1 == 0) {
    local_58[2] = local_70;
    *local_58 = local_80;
    local_58[1] = uStack_78;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (&local_50,lVar1);
    *(undefined4 *)(local_58 + 1) = local_48;
    *(undefined4 *)((long)local_58 + 0xc) = uStack_44;
    *(undefined4 *)(local_58 + 2) = uStack_40;
    *(undefined4 *)((long)local_58 + 0x14) = uStack_3c;
    *local_58 = CONCAT44(uStack_4c,local_50);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_80);
  }
  return;
}