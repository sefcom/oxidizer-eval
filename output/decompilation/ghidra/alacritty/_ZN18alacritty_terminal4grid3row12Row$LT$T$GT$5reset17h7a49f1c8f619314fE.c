void _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
               (long param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined4 local_28;
  undefined4 local_24;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    _local_28 = CONCAT44(param_2,*(undefined4 *)(lVar4 + 0xc + (lVar5 + -1) * 0x18));
    cVar2 = _ZN4core3cmp9PartialEq2ne17hd8369387fbf0e6bfE(&local_28,&local_24);
    if (cVar2 == '\0') {
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      *(long *)(param_1 + 0x18) = lVar5;
      lVar3 = lVar5;
    }
    auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17hd3f76699eb90e028E
                       (0,lVar3,lVar4,lVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977410);
    if (auVar6._8_8_ != 0) {
      lVar5 = auVar6._8_8_ * 0x18;
      lVar4 = auVar6._0_8_;
      do {
        _ZN91__LT_alacritty_terminal__term__cell__Cell_u20_as_u20_alacritty_terminal__grid__GridCell_GT_5reset17h9328c0b97bb6c37fE
                  (lVar4,param_2);
        lVar5 = lVar5 + -0x18;
        lVar4 = lVar4 + 0x18;
      } while (lVar5 != 0);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (lVar5 + -1,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009773f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}