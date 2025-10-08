void _ZN11firecracker10api_server7request7actions1_111__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionBody_GT_11deserialize17h449df10d8deda221E
               (undefined *param_1,long param_2)

{
  char *pcVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined uStack_41;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  undefined8 uStack_20;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h208ee533e1e3aaa3E(&cStack_28);
  if (cStack_28 == '\x01') goto LAB_0024e795;
  if (cStack_27 != '\x01') {
    uStack_40 = 5;
LAB_0024e881:
    uStack_20 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h994286180f173d2eE
                          (param_2,&uStack_40);
LAB_0024e795:
    *(undefined8 *)(param_1 + 8) = uStack_20;
    *param_1 = 1;
    return;
  }
  if (cStack_26 == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_0024e878:
      uStack_40 = 0x18;
      goto LAB_0024e881;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17haf11d703049ba178E
              (param_2 + 0x18);
    _ZN224__LT_firecracker__api_server__request__actions______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionBody_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17hf5dd7a84cf514744E
              (&uStack_40,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lStack_30 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h3802d9f908cb5e4bE(param_2);
    if ((char)uStack_40 != '\0') goto LAB_0024e7f7;
LAB_0024e852:
    lStack_38 = lStack_30;
    if (lStack_30 == 0) {
      param_1[1] = uStack_40._1_1_;
      uVar2 = 0;
      goto LAB_0024e861;
    }
  }
  else if (cStack_26 == '{') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') goto LAB_0024e878;
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17haf11d703049ba178E
              (param_2 + 0x18);
    _ZN224__LT_firecracker__api_server__request__actions______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionBody_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17hc97ea6a553720d3cE
              (&uStack_40,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lStack_30 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17he87b3d1d9718a196E(param_2);
    if ((char)uStack_40 == '\0') goto LAB_0024e852;
LAB_0024e7f7:
    if (lStack_30 != 0) {
      _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h11c5d0ee735ef221E(&lStack_30);
    }
  }
  else {
    lStack_38 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hd6eaa5c397bc2832E
                          (param_2,&uStack_41,&DAT_004a3318);
  }
  uVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17h0046aaa92f3096e7E
                    (param_2,lStack_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar2 = 1;
LAB_0024e861:
  *param_1 = uVar2;
  return;
}