void _ZN9alacritty3cli1_83__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowIdentity_GT_11deserialize17h45906e6224c28089E
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_f9;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  long lStack_b8;
  long alStack_b0 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  long lStack_60;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&uStack_a0);
  if ((char)uStack_a0 == '\x01') {
    lVar2 = CONCAT44(uStack_94,uStack_98);
    goto LAB_00528914;
  }
  if (uStack_a0._1_1_ != '\x01') {
    uStack_f8 = 5;
LAB_00528ac4:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                      (param_2,&uStack_f8);
    goto LAB_00528914;
  }
  if (uStack_a0._2_1_ == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00528abb:
      uStack_f8 = 0x18;
      goto LAB_00528ac4;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
              (param_2 + 0x18);
    _ZN164__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowIdentity_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17hb913bf19762a5345E
              (&uStack_a0,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17hc1235cd62567f8f2E(param_2);
LAB_00528998:
    lStack_b8 = lStack_60;
    uStack_c8 = uStack_70;
    uStack_c4 = uStack_6c;
    uStack_c0 = uStack_68;
    uStack_bc = uStack_64;
    uStack_d8 = uStack_80;
    uStack_d4 = uStack_7c;
    uStack_d0 = uStack_78;
    uStack_cc = uStack_74;
    uStack_e8 = uStack_90;
    uStack_e4 = uStack_8c;
    uStack_e0 = uStack_88;
    uStack_dc = uStack_84;
    uStack_f8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_f0 = uStack_98;
    uStack_ec = uStack_94;
    alStack_b0[0] = lVar2;
    if (uStack_f8 == -0x7fffffffffffffff) {
      lVar3 = CONCAT44(uStack_94,uStack_98);
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h75ba0325037fe770E(alStack_b0);
      }
    }
    else if (lVar2 == 0) {
      lVar3 = CONCAT44(uStack_94,uStack_98);
      uStack_38 = uStack_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      lStack_28 = lStack_60;
      if (uStack_f8 != -0x7fffffffffffffff) {
        param_1[8] = lStack_60;
        param_1[6] = CONCAT44(uStack_6c,uStack_70);
        param_1[7] = CONCAT44(uStack_64,uStack_68);
        param_1[4] = CONCAT44(uStack_7c,uStack_80);
        param_1[5] = CONCAT44(uStack_74,uStack_78);
        param_1[2] = CONCAT44(uStack_8c,uStack_90);
        param_1[3] = CONCAT44(uStack_84,uStack_88);
        *param_1 = uStack_f8;
        param_1[1] = lVar3;
        return;
      }
    }
    else {
      _ZN4core3ptr51drop_in_place_LT_alacritty__cli__WindowIdentity_GT_17hdd9077ca4eb45a80E
                (&uStack_f8);
      lVar3 = lVar2;
    }
  }
  else {
    if (uStack_a0._2_1_ == '{') {
      pcVar1 = (char *)(param_2 + 0x30);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00528abb;
      _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                (param_2 + 0x18);
      _ZN164__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowIdentity_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h0318de8c659064e4E
                (&uStack_a0,param_2);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3dcba0ec6b0a13fcE(param_2);
      goto LAB_00528998;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h1d90d829e38eafcaE
                      (param_2,&uStack_f9,&DAT_00981090);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf4e1cecc7f2625f9E(param_2,lVar3)
  ;
LAB_00528914:
  param_1[1] = lVar2;
  *param_1 = -0x7fffffffffffffff;
  return;
}