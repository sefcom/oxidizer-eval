void _ZN12forc_publish15forc_pub_client1_99__LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__PublishResponse_GT_11deserialize17h36dcdd9f52017ffeE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_e9;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long alStack_a8 [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17he9fa94937f4f934fE(&uStack_98);
  if ((char)uStack_98 == '\x01') {
    lVar2 = CONCAT44(uStack_8c,uStack_90);
    goto LAB_00746cc4;
  }
  if (uStack_98._1_1_ != '\x01') {
    uStack_e8 = 5;
LAB_00746e4a:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h512455f91f5d8f30E
                      (param_2,&uStack_e8);
    goto LAB_00746cc4;
  }
  if (uStack_98._2_1_ == '[') {
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00746e41:
      uStack_e8 = 0x18;
      goto LAB_00746e4a;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h26320d3e730a8ba2E
              (param_2 + 0x18);
    _ZN195__LT_forc_publish__forc_pub_client______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__PublishResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17hf455ea704445076cE
              (&uStack_98,param_2);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h6434750004356357E(param_2);
LAB_00746d48:
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    uStack_d8 = uStack_88;
    uStack_d4 = uStack_84;
    uStack_d0 = uStack_80;
    uStack_cc = uStack_7c;
    uStack_e8 = CONCAT44(uStack_94,uStack_98);
    uStack_e0 = uStack_90;
    uStack_dc = uStack_8c;
    alStack_a8[0] = lVar2;
    if (uStack_e8 == -0x8000000000000000) {
      lVar3 = CONCAT44(uStack_8c,uStack_90);
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hef16e0a0f21e9811E(alStack_a8);
      }
    }
    else if (lVar2 == 0) {
      lVar3 = CONCAT44(uStack_8c,uStack_90);
      uStack_38 = uStack_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      if (uStack_e8 != -0x8000000000000000) {
        param_1[6] = CONCAT44(uStack_64,uStack_68);
        param_1[7] = CONCAT44(uStack_5c,uStack_60);
        param_1[4] = CONCAT44(uStack_74,uStack_78);
        param_1[5] = CONCAT44(uStack_6c,uStack_70);
        param_1[2] = CONCAT44(uStack_84,uStack_88);
        param_1[3] = CONCAT44(uStack_7c,uStack_80);
        *param_1 = uStack_e8;
        param_1[1] = lVar3;
        return;
      }
    }
    else {
      _ZN4core3ptr67drop_in_place_LT_forc_publish__forc_pub_client__PublishResponse_GT_17hf1f407126514688eE
                (&uStack_e8);
      lVar3 = lVar2;
    }
  }
  else {
    if (uStack_98._2_1_ == '{') {
      pcVar1 = (char *)(param_2 + 0x38);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00746e41;
      _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h26320d3e730a8ba2E
                (param_2 + 0x18);
      _ZN195__LT_forc_publish__forc_pub_client______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__PublishResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h581799bfccecb5c8E
                (&uStack_98,param_2);
      *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3eaa9b0decd80ef6E(param_2);
      goto LAB_00746d48;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h94c0b12e1a429cebE
                      (param_2,&uStack_e9,&DAT_00f52fd0);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hafc8a373122ff774E(param_2,lVar3)
  ;
LAB_00746cc4:
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return;
}