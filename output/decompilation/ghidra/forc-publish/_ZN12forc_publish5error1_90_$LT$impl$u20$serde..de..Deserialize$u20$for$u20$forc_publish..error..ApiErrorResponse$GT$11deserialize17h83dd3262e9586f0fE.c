void _ZN12forc_publish5error1_90__LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__error__ApiErrorResponse_GT_11deserialize17h83dd3262e9586f0fE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_59;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17he9fa94937f4f934fE(&uStack_38);
  if ((char)uStack_38 == '\x01') {
    lVar2 = CONCAT44(uStack_2c,uStack_30);
    goto LAB_00746b11;
  }
  if (uStack_38._1_1_ != '\x01') {
    uStack_58 = 5;
LAB_00746c2c:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h512455f91f5d8f30E
                      (param_2,&uStack_58);
    goto LAB_00746b11;
  }
  if (uStack_38._2_1_ == '[') {
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00746c23:
      uStack_58 = 0x18;
      goto LAB_00746c2c;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h26320d3e730a8ba2E
              (param_2 + 0x18);
    _ZN176__LT_forc_publish__error______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__error__ApiErrorResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h12350b67d47135eaE
              (&uStack_38,param_2);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h6434750004356357E(param_2);
LAB_00746b95:
    lStack_48 = lStack_28;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    lStack_40 = lVar2;
    if (uStack_58 == -0x8000000000000000) {
      lVar3 = CONCAT44(uStack_2c,uStack_30);
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hef16e0a0f21e9811E(&lStack_40);
      }
    }
    else if (lVar2 == 0) {
      lVar3 = CONCAT44(uStack_2c,uStack_30);
      if (uStack_58 != -0x8000000000000000) {
        *param_1 = uStack_58;
        param_1[1] = CONCAT44(uStack_2c,uStack_30);
        param_1[2] = lStack_28;
        return;
      }
    }
    else {
      _ZN4core3ptr58drop_in_place_LT_forc_publish__error__ApiErrorResponse_GT_17hfedcb37c8e239cb1E
                (&uStack_58);
      lVar3 = lVar2;
    }
  }
  else {
    if (uStack_38._2_1_ == '{') {
      pcVar1 = (char *)(param_2 + 0x38);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00746c23;
      _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h26320d3e730a8ba2E
                (param_2 + 0x18);
      _ZN176__LT_forc_publish__error______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__error__ApiErrorResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17hfb7ae86e098af87bE
                (&uStack_38,param_2);
      *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3eaa9b0decd80ef6E(param_2);
      goto LAB_00746b95;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h94c0b12e1a429cebE
                      (param_2,&uStack_59,&DAT_00f52fb0);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hafc8a373122ff774E(param_2,lVar3)
  ;
LAB_00746b11:
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return;
}