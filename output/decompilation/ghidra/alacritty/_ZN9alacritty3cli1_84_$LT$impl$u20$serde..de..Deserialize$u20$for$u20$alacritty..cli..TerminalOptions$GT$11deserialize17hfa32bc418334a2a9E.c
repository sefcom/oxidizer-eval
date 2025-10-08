void _ZN9alacritty3cli1_84__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__TerminalOptions_GT_11deserialize17hfa32bc418334a2a9E
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long alStack_90 [2];
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&uStack_80);
  if ((char)uStack_80 == '\x01') {
    lVar2 = CONCAT44(uStack_74,uStack_78);
    goto LAB_00528b64;
  }
  if (uStack_80._1_1_ != '\x01') {
    uStack_c8 = 5;
LAB_00528ce7:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                      (param_2,&uStack_c8);
    goto LAB_00528b64;
  }
  if (uStack_80._2_1_ == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00528cde:
      uStack_c8 = 0x18;
      goto LAB_00528ce7;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
              (param_2 + 0x18);
    _ZN165__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__TerminalOptions_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h57ce08c8972f6c61E
              (&uStack_80,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17hc1235cd62567f8f2E(param_2);
LAB_00528be8:
    lStack_98 = lStack_50;
    uStack_a8 = uStack_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    uStack_b8 = uStack_70;
    uStack_b4 = uStack_6c;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    uStack_c8 = CONCAT44(uStack_7c,uStack_80);
    uStack_c0 = uStack_78;
    uStack_bc = uStack_74;
    alStack_90[0] = lVar2;
    if (uStack_c8 == -0x8000000000000000) {
      lVar3 = CONCAT44(uStack_74,uStack_78);
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h75ba0325037fe770E(alStack_90);
      }
    }
    else if (lVar2 == 0) {
      lVar3 = CONCAT44(uStack_74,uStack_78);
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_30 = uStack_58;
      uStack_2c = uStack_54;
      lStack_28 = lStack_50;
      if (uStack_c8 != -0x8000000000000000) {
        param_1[6] = lStack_50;
        param_1[4] = CONCAT44(uStack_5c,uStack_60);
        param_1[5] = CONCAT44(uStack_54,uStack_58);
        param_1[2] = CONCAT44(uStack_6c,uStack_70);
        param_1[3] = CONCAT44(uStack_64,uStack_68);
        *param_1 = uStack_c8;
        param_1[1] = lVar3;
        return;
      }
    }
    else {
      _ZN4core3ptr52drop_in_place_LT_alacritty__cli__TerminalOptions_GT_17h6e73a1e5d354ab85E
                (&uStack_c8);
      lVar3 = lVar2;
    }
  }
  else {
    if (uStack_80._2_1_ == '{') {
      pcVar1 = (char *)(param_2 + 0x30);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00528cde;
      _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                (param_2 + 0x18);
      _ZN165__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__TerminalOptions_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17hb4e2ec8c0ef90a13E
                (&uStack_80,param_2);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3dcba0ec6b0a13fcE(param_2);
      goto LAB_00528be8;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h1d90d829e38eafcaE
                      (param_2,&uStack_c9,&DAT_009810b0);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf4e1cecc7f2625f9E(param_2,lVar3)
  ;
LAB_00528b64:
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return;
}