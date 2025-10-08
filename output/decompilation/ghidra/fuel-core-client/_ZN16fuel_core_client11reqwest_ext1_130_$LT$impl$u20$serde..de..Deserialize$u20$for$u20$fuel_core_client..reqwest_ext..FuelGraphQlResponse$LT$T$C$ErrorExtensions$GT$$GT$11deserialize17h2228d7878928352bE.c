void _ZN16fuel_core_client11reqwest_ext1_130__LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_client__reqwest_ext__FuelGraphQlResponse_LT_T_C_ErrorExtensions_GT__GT_11deserialize17h2228d7878928352bE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined uStack_109;
  char cStack_108;
  char cStack_107;
  char cStack_106;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
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
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h3154042be92f7e92E(&cStack_108);
  if (cStack_108 == '\x01') goto LAB_003f3e84;
  if (cStack_107 == '\x01') {
    if (cStack_106 == '{') {
      if (*(char *)(param_2 + 0x38) == '\0') {
        pcVar1 = (char *)(param_2 + 0x39);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          lStack_f8 = 0x18;
          goto LAB_003f401e;
        }
      }
      _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h049288ea9b5ae161E
                (param_2 + 0x18);
      _ZN253__LT_fuel_core_client__reqwest_ext______LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_client__reqwest_ext__FuelGraphQlResponse_LT_T_C_ErrorExtensions_GT__GT___deserialize____Visitor_LT_T_C_ErrorExtensions_GT__u20_as_u20_serde__de__Visitor_GT_9visit_map17hb22623a80bbafbffE
                (&lStack_88,param_2);
      if (*(char *)(param_2 + 0x38) == '\0') {
        *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
      }
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h5f5915d54b5576bcE(param_2);
      lStack_f8 = lStack_88;
      lStack_f0 = lStack_80;
      lStack_98 = lStack_28;
      lStack_a8 = lStack_38;
      lStack_a0 = lStack_30;
      uStack_b8 = uStack_48;
      uStack_b4 = uStack_44;
      uStack_b0 = uStack_40;
      uStack_ac = uStack_3c;
      uStack_c8 = uStack_58;
      uStack_c4 = uStack_54;
      uStack_c0 = uStack_50;
      uStack_bc = uStack_4c;
      uStack_d8 = uStack_68;
      uStack_d4 = uStack_64;
      uStack_d0 = uStack_60;
      uStack_cc = uStack_5c;
      uStack_e8 = uStack_78;
      uStack_e4 = uStack_74;
      uStack_e0 = uStack_70;
      uStack_dc = uStack_6c;
      lStack_90 = lVar2;
      if (lStack_88 == -0x7fffffffffffffff) {
        if (lVar2 != 0) {
          _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h4fa5d0107fd41adeE
                    (&lStack_90);
        }
      }
      else {
        if (lVar2 == 0) {
          param_1[0xc] = lStack_28;
          param_1[10] = lStack_38;
          param_1[0xb] = lStack_30;
          param_1[8] = CONCAT44(uStack_44,uStack_48);
          param_1[9] = CONCAT44(uStack_3c,uStack_40);
          param_1[6] = CONCAT44(uStack_54,uStack_58);
          param_1[7] = CONCAT44(uStack_4c,uStack_50);
          param_1[4] = CONCAT44(uStack_64,uStack_68);
          param_1[5] = CONCAT44(uStack_5c,uStack_60);
          param_1[2] = CONCAT44(uStack_74,uStack_78);
          param_1[3] = CONCAT44(uStack_6c,uStack_70);
          *param_1 = lStack_88;
          param_1[1] = lStack_80;
          return;
        }
        _ZN4core3ptr123drop_in_place_LT_fuel_core_client__reqwest_ext__FuelGraphQlResponse_LT_fuel_core_client__client__schema__tx__Submit_GT__GT_17h8550d804c94227b4E
                  (&lStack_f8);
        lStack_80 = lVar2;
      }
    }
    else {
      lStack_80 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hc10593cf3cd9d06fE
                            (param_2,&uStack_109,&DAT_006f1008);
    }
    lStack_100 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hc3a1e74536f15568E
                           (param_2,lStack_80);
  }
  else {
    lStack_f8 = 5;
LAB_003f401e:
    lStack_100 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17ha0f5e939e3a9a8bcE
                           (param_2,&lStack_f8);
  }
LAB_003f3e84:
  param_1[1] = lStack_100;
  *param_1 = -0x7fffffffffffffff;
  return;
}