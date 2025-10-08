undefined8 _ZN8uu_mkdir21strip_minus_from_mode17h17b52de8a38b6e54E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [12];
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10) * 0x18;
  do {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hd4fe75b4551afd98E
                      (uVar1,uVar2,"--",2);
    if (cVar3 != '\0') {
      return 0;
    }
    uStack_58 = uStack_58 & 0xffffffff00000000;
    auVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&uStack_58,4);
    auVar8 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                       (auVar8._0_8_,auVar8._8_8_,uVar1,uVar2);
    if (auVar8._0_8_ != 0) {
      uStack_58 = puVar6[1];
      lStack_50 = puVar6[2] + uStack_58;
      lVar5 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                        (&uStack_58,1);
      if (lVar5 == 0) {
        auVar9 = _ZN4core3str11validations15next_code_point17h423853e8b2dcfbbaE(&uStack_58);
        if (((auVar9 & (undefined  [12])0x1) != (undefined  [12])0x0) &&
           (((uVar4 = auVar9._8_4_ - 0x58, uVar4 < 0x21 &&
             ((0x1bc808001U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) ||
            ((auVar9._8_4_ & 0x1ffff8) == 0x30)))) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hb2580dcf78e37554E
                    (&uStack_48,auVar8._0_8_,auVar8._8_8_);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha817e71a92f81e3cE(puVar6);
          puVar6[2] = uStack_38;
          *puVar6 = uStack_48;
          puVar6[1] = uStack_40;
          return 1;
        }
      }
    }
    puVar6 = puVar6 + 3;
    lVar7 = lVar7 + -0x18;
    if (lVar7 == 0) {
      return 0;
    }
  } while( true );
}