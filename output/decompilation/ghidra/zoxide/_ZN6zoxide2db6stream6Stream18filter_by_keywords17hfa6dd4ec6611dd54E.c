ulong _ZN6zoxide2db6stream6Stream18filter_by_keywords17hfa6dd4ec6611dd54E
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 unaff_R13;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auStack_58 [8];
  undefined8 local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  if (param_2 == 0) {
    param_1 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
  }
  else {
    lVar5 = param_1 + param_2 * 0x18 + -0x18;
    _ZN6zoxide4util12to_lowercase17h601373cb57afac0cE(auStack_58,param_3,param_4);
    auVar2._8_8_ = local_48;
    auVar2._0_8_ = local_50;
    auVar9._8_8_ = local_48;
    auVar9._0_8_ = local_50;
                    /* try { // try from 001914fe to 0019150b has its CatchHandler @ 00191614 */
    auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h2498f8c77f23dca1E(local_50,local_48,lVar5);
    lVar4 = auVar8._8_8_;
    if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      lVar7 = *(long *)(param_2 * 0x18 + param_1 + -8) + lVar4;
      auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (lVar7,local_50,local_48);
      if (auVar8._0_8_ == 0) {
        ppuVar6 = &PTR_DAT_002349e0;
LAB_001915e6:
                    /* try { // try from 001915e6 to 001915f7 has its CatchHandler @ 00191614 */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0023b8d8)
                  (auVar2._0_8_,auVar2._8_8_,lVar7,local_48,ppuVar6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h6661695b4151bb2cE
                        (auVar8._0_8_,auVar8._8_8_);
      if (cVar3 == '\0') {
        auVar8 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                           (lVar4,local_50,local_48);
        if (auVar8._0_8_ == 0) {
          ppuVar6 = &PTR_DAT_002349f8;
          lVar7 = 0;
          local_48 = lVar4;
          auVar2 = auVar9;
        }
        else {
          lVar7 = 0;
          local_40 = param_1;
          local_38 = lVar5;
          do {
            auVar2 = auVar8;
            lVar4 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17hfecb16f7008b4458E
                              (&local_40);
            param_1 = CONCAT71((int7)(param_1 >> 8),lVar4 == 0);
            if (lVar4 == 0) goto LAB_0019154e;
                    /* try { // try from 001915b7 to 001915c4 has its CatchHandler @ 00191612 */
            auVar9 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h2498f8c77f23dca1E
                               (auVar2._0_8_,auVar2._8_8_,lVar4);
            if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_0019154e;
            auVar8 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                               (auVar9._8_8_,auVar2._0_8_,auVar2._8_8_);
          } while (auVar8._0_8_ != 0);
          ppuVar6 = &PTR_DAT_00234a10;
          local_48 = auVar9._8_8_;
        }
        goto LAB_001915e6;
      }
    }
    param_1 = 0;
LAB_0019154e:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(auStack_58);
  }
  return param_1 & 0xffffffff;
}