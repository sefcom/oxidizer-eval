undefined8 *
_ZN6uu_seq11numberparse86__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_uu_seq__number__PreciseNumber_GT_8from_str17h0a7ede5c0f7af91bE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long local_70;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (*(code *)
    PTR__ZN129__LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_u20_as_u20_uucore__features__parser__num_parser__ExtendedParser_GT_14extended_parse17hb787f774fac0045cE_00223b60
  )(&local_70);
  if (local_70 == -0x7ffffffffffffff7) {
    uVar1 = 0;
    if (local_68 < -0x7ffffffffffffffb) {
      uVar1 = local_68 + 0x8000000000000001;
    }
    if ((6UL >> (uVar1 & 0x3f) & 1) != 0) {
      param_1[6] = local_48;
      param_1[4] = CONCAT44(uStack_54,uStack_58);
      param_1[5] = uStack_50;
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = local_68;
      param_1[3] = CONCAT44(uStack_5c,local_60);
      param_1[7] = 0;
      return param_1;
    }
    if ((9UL >> (uVar1 & 0x3f) & 1) == 0) {
      *(undefined *)(param_1 + 1) = 1;
      *param_1 = 2;
      _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
                ();
      return param_1;
    }
  }
  else if (local_70 != -0x7ffffffffffffff8) {
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 2;
    _ZN4core3ptr142drop_in_place_LT_uucore__features__parser__num_parser__ExtendedParserError_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT__GT_17hb361ebd9deba089aE
              (&local_70);
    return param_1;
  }
  local_28 = local_48;
  local_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_70 = local_68;
  local_60 = uStack_58;
  uStack_5c = uStack_54;
  uStack_58 = (undefined4)uStack_50;
  uStack_54 = uStack_50._4_4_;
  uStack_50 = local_48;
  _ZN6uu_seq11numberparse18compute_num_digits17h50b73e0ed5b48e8cE(param_1,param_2,param_3,&local_70)
  ;
  return param_1;
}