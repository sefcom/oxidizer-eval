long * _ZN6uu_seq11numberparse25parse_decimal_no_exponent17hf3af1526d793a9d8E
                 (long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long local_98;
  undefined uStack_90;
  undefined7 uStack_8f;
  undefined uStack_88;
  undefined7 uStack_87;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN10bigdecimal8impl_num68__LT_impl_u20_num_traits__Num_u20_for_u20_bigdecimal__BigDecimal_GT_14from_str_radix17h190f4d397e37218eE
            (&local_70);
  if (local_70 == -0x8000000000000000) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    _ZN4core3ptr53drop_in_place_LT_bigdecimal__ParseBigDecimalError_GT_17h74d029f24c9f47dbE
              (&local_48);
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffc;
  }
  else {
    uStack_8f = CONCAT43(uStack_64,local_68._1_3_);
    uStack_87 = CONCAT43(uStack_5c,uStack_60._1_3_);
    uStack_88 = (undefined)uStack_60;
    uStack_80 = local_58;
    uStack_7c = uStack_54;
    local_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_98 = local_70;
    uStack_90 = (undefined)local_68;
                    /* try { // try from 001cdf19 to 001cdf3f has its CatchHandler @ 001cdf9d */
    uVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                      (param_2,param_3,"-.",2);
    cVar1 = _ZN6uu_seq11numberparse19is_minus_zero_float17hd0ffcc4c912113deE
                      (param_2,param_3,&local_98);
    lVar3 = ((ulong)uVar2 & 0xff) + param_4;
    if (cVar1 == '\0') {
      param_1[4] = CONCAT44(uStack_74,local_78);
      param_1[2] = CONCAT71(uStack_87,uStack_88);
      param_1[3] = CONCAT44(uStack_7c,uStack_80);
      *param_1 = local_98;
      param_1[1] = CONCAT71(uStack_8f,uStack_90);
      param_1[5] = lVar3;
      param_1[6] = ~param_4 + param_3;
    }
    else {
      *param_1 = -0x7ffffffffffffffe;
      param_1[5] = lVar3;
      param_1[6] = ~param_4 + param_3;
      _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_98);
    }
  }
  return param_1;
}