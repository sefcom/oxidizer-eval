void _ZN16fuel_core_client11reqwest_ext1_102__LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_client__reqwest_ext__ExtensionsResponse_GT_11deserialize17hbf7ebed855b1349cE
               (undefined4 *param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17hcfea3dcc440bdac1E(&cStack_98);
  if (cStack_98 == '\x01') goto LAB_003faf18;
  if (cStack_97 != '\x01') {
    uStack_c8 = 5;
LAB_003fb0f2:
    uStack_90 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17he85371bf5327d017E
                          (param_2,&uStack_c8);
LAB_003faf18:
    *(undefined8 *)(param_1 + 2) = uStack_90;
    *param_1 = 1;
    return;
  }
  if (cStack_96 == '[') {
    if (*(char *)(param_2 + 0x48) == '\0') {
      pcVar1 = (char *)(param_2 + 0x49);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_003fb0e9:
        uStack_c8 = 0x18;
        goto LAB_003fb0f2;
      }
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17hc4829a8a8d2f75efE
              (param_2 + 0x18);
    _ZN198__LT_fuel_core_client__reqwest_ext______LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_client__reqwest_ext__ExtensionsResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h17e2b5eaff7b6c8fE
              (&uStack_68,param_2);
    if (*(char *)(param_2 + 0x48) == '\0') {
      *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + '\x01';
    }
    lStack_a0 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h57b0537e109d7112E(param_2);
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    uStack_a8 = uStack_48;
    uStack_b8 = uStack_58;
    uStack_b4 = uStack_54;
    uStack_b0 = uStack_50;
    uStack_ac = uStack_4c;
    if ((uStack_68 & 1) == 0) {
      lVar4 = lStack_a0;
      if (lStack_a0 == 0) {
        uVar3 = CONCAT44(uStack_5c,uStack_60);
        uStack_88 = CONCAT44(uStack_54,uStack_58);
        uStack_80 = CONCAT44(uStack_4c,uStack_50);
        uStack_20 = uStack_48;
        uStack_3c = uStack_64;
LAB_003fb076:
        param_1[1] = uStack_3c;
        *(undefined8 *)(param_1 + 2) = uVar3;
        *(undefined8 *)(param_1 + 4) = uStack_88;
        *(undefined8 *)(param_1 + 6) = uStack_80;
        *(undefined8 *)(param_1 + 8) = uStack_20;
        uVar2 = 0;
        goto LAB_003fb096;
      }
    }
    else {
LAB_003fb0a5:
      lVar4 = CONCAT44(uStack_bc,uStack_c0);
      if (lStack_a0 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h4fa5d0107fd41adeE(&lStack_a0);
      }
    }
  }
  else if (cStack_96 == '{') {
    if (*(char *)(param_2 + 0x48) == '\0') {
      pcVar1 = (char *)(param_2 + 0x49);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_003fb0e9;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17hc4829a8a8d2f75efE
              (param_2 + 0x18);
    _ZN198__LT_fuel_core_client__reqwest_ext______LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_client__reqwest_ext__ExtensionsResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17hf2f5175aeebee9e5E
              (&uStack_40,param_2);
    if (*(char *)(param_2 + 0x48) == '\0') {
      *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + '\x01';
    }
    lStack_a0 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h7a5e0c038dad86c9E(param_2);
    uStack_c0 = uStack_38;
    uStack_bc = uStack_34;
    uStack_a8 = uStack_20;
    uStack_b8 = uStack_30;
    uStack_b4 = uStack_2c;
    uStack_b0 = uStack_28;
    uStack_ac = uStack_24;
    if ((uStack_40 & 1) != 0) goto LAB_003fb0a5;
    lVar4 = lStack_a0;
    if (lStack_a0 == 0) {
      uVar3 = CONCAT44(uStack_34,uStack_38);
      uStack_88 = CONCAT44(uStack_2c,uStack_30);
      uStack_80 = CONCAT44(uStack_24,uStack_28);
      goto LAB_003fb076;
    }
  }
  else {
    lVar4 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf5c6f95d4300887aE
                      (param_2,&uStack_c9,&DAT_006f12e8);
  }
  uVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17he3ef3bed46d47b95E(param_2,lVar4)
  ;
  *(undefined8 *)(param_1 + 2) = uVar3;
  uVar2 = 1;
LAB_003fb096:
  *param_1 = uVar2;
  return;
}