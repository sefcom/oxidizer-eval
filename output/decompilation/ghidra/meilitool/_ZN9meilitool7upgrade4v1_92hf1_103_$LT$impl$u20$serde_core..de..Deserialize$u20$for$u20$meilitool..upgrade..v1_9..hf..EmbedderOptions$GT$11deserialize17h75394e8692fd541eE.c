void _ZN9meilitool7upgrade4v1_92hf1_103__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__hf__EmbedderOptions_GT_11deserialize17h75394e8692fd541eE
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
  long alStack_b8 [2];
  char cStack_a8;
  char cStack_a7;
  char cStack_a6;
  undefined uStack_a5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_a8);
  if (cStack_a8 == '\x01') {
    lVar2 = CONCAT44(uStack_9c,uStack_a0);
    goto LAB_00448424;
  }
  if (cStack_a7 != '\x01') {
    uStack_e8 = 5;
LAB_00448620:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                      (param_2,&uStack_e8);
    goto LAB_00448424;
  }
  if (cStack_a6 == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_00448617:
        uStack_e8 = 0x18;
        goto LAB_00448620;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN203__LT_meilitool__upgrade__v1_9__hf______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__hf__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17hbd9854a1c3db38c7E
              (&uStack_80,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    uStack_e8 = CONCAT44(uStack_7c,uStack_80);
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
    uStack_c8 = uStack_60;
    uStack_c4 = uStack_5c;
    uStack_c0 = uStack_58;
    uStack_bc = uStack_54;
    uStack_d8 = uStack_70;
    uStack_d4 = uStack_6c;
    uStack_d0 = uStack_68;
    uStack_cc = uStack_64;
    if (uStack_e8 == -0x8000000000000000) {
LAB_00448559:
      lVar3 = CONCAT44(uStack_dc,uStack_e0);
      alStack_b8[0] = lVar2;
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(alStack_b8);
      }
    }
    else {
      if (lVar2 == 0) {
        lVar3 = CONCAT44(uStack_74,uStack_78);
        uStack_40 = uStack_70;
        uStack_3c = uStack_6c;
        uStack_38 = uStack_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        uStack_28 = uStack_58;
        uStack_24 = uStack_54;
        alStack_b8[0] = lVar2;
        goto LAB_004485b1;
      }
LAB_00448582:
      alStack_b8[0] = lVar2;
      _ZN4core3ptr66drop_in_place_LT_meilitool__upgrade__v1_9__hf__EmbedderOptions_GT_17h41c0d4bcd3c9706eE
                (&uStack_e8);
      lVar3 = lVar2;
    }
  }
  else if (cStack_a6 == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00448617;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN203__LT_meilitool__upgrade__v1_9__hf______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__hf__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h67ed8807eded3276E
              (&uStack_50,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    uStack_e8 = CONCAT44(uStack_4c,uStack_50);
    uStack_e0 = uStack_48;
    uStack_dc = uStack_44;
    uStack_c8 = uStack_30;
    uStack_c4 = uStack_2c;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    uStack_d8 = uStack_40;
    uStack_d4 = uStack_3c;
    uStack_d0 = uStack_38;
    uStack_cc = uStack_34;
    if (uStack_e8 == -0x8000000000000000) goto LAB_00448559;
    if (lVar2 != 0) goto LAB_00448582;
    lVar3 = CONCAT44(uStack_44,uStack_48);
    alStack_b8[0] = lVar2;
LAB_004485b1:
    cStack_a8 = (char)uStack_40;
    cStack_a7 = (char)((uint)uStack_40 >> 8);
    cStack_a6 = (char)((uint)uStack_40 >> 0x10);
    uStack_a5 = (undefined)((uint)uStack_40 >> 0x18);
    uStack_d8 = uStack_40;
    uStack_d4 = uStack_3c;
    uStack_d0 = uStack_38;
    uStack_cc = uStack_34;
    uStack_c8 = uStack_30;
    uStack_c4 = uStack_2c;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    if (uStack_e8 != -0x8000000000000000) {
      param_1[4] = CONCAT44(uStack_2c,uStack_30);
      param_1[5] = CONCAT44(uStack_24,uStack_28);
      param_1[2] = CONCAT44(uStack_3c,uStack_40);
      param_1[3] = CONCAT44(uStack_34,uStack_38);
      *param_1 = uStack_e8;
      param_1[1] = lVar3;
      return;
    }
  }
  else {
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                      (param_2,&uStack_e9,&DAT_00625ad0);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE(param_2,lVar3)
  ;
LAB_00448424:
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return;
}