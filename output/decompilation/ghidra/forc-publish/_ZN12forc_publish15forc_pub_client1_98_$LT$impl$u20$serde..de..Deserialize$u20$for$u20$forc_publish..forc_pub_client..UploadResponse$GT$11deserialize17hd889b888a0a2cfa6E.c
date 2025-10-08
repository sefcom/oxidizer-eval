void _ZN12forc_publish15forc_pub_client1_98__LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__UploadResponse_GT_11deserialize17hd889b888a0a2cfa6E
               (undefined *param_1,long param_2)

{
  char *pcVar1;
  undefined uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auStack_61 [9];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long alStack_40 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h100baef71f6db313E(&uStack_30);
  if ((char)uStack_30 == '\x01') {
    uVar3 = CONCAT44(uStack_24,uStack_28);
    goto LAB_00746ed5;
  }
  if (uStack_30._1_1_ == '\x01') {
    if (uStack_30._2_1_ == '[') {
      pcVar1 = (char *)(param_2 + 0x48);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 != '\0') {
        _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17hf64242ce5e793549E
                  (param_2 + 0x18);
        _ZN194__LT_forc_publish__forc_pub_client______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__UploadResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17he123711765638662E
                  (&uStack_30,param_2);
        *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
        alStack_40[0] =
             _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h0e4fb74b4a169a4bE(param_2);
LAB_00746f59:
        uStack_48 = uStack_20;
        uStack_58 = CONCAT44(uStack_2c,uStack_30);
        uVar3 = uStack_58;
        uStack_50 = uStack_28;
        uStack_4c = uStack_24;
        uStack_58._0_1_ = (char)uStack_30;
        if ((char)uStack_58 == '\0') {
          lVar4 = alStack_40[0];
          if (alStack_40[0] == 0) {
            uStack_58._1_4_ = SUB84(uVar3,1);
            uStack_48._0_1_ = (undefined)uStack_20;
            *(undefined4 *)(param_1 + 4) = uStack_2c;
            *(undefined4 *)(param_1 + 1) = uStack_58._1_4_;
            *(ulong *)(param_1 + 8) = CONCAT44(uStack_24,uStack_28);
            param_1[0x10] = (undefined)uStack_48;
            uVar2 = 0;
            goto LAB_00746faf;
          }
        }
        else {
          lVar4 = CONCAT44(uStack_24,uStack_28);
          if (alStack_40[0] != 0) {
            _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hef16e0a0f21e9811E
                      (alStack_40);
          }
        }
LAB_00746fc8:
        uVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hb090ee3d5517c541E
                          (param_2,lVar4);
        *(undefined8 *)(param_1 + 8) = uVar3;
        uVar2 = 1;
LAB_00746faf:
        *param_1 = uVar2;
        return;
      }
    }
    else {
      if (uStack_30._2_1_ != '{') {
        lVar4 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h9301fd7592b93b87E
                          (param_2,auStack_61,&DAT_00f52ff0);
        goto LAB_00746fc8;
      }
      pcVar1 = (char *)(param_2 + 0x48);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 != '\0') {
        _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17hf64242ce5e793549E
                  (param_2 + 0x18);
        _ZN194__LT_forc_publish__forc_pub_client______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__forc_pub_client__UploadResponse_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h49b439b090988d54E
                  (&uStack_30,param_2);
        *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
        alStack_40[0] =
             _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h58e2cf797707bba6E(param_2);
        goto LAB_00746f59;
      }
    }
    uStack_58 = 0x18;
  }
  else {
    uStack_58 = 5;
  }
  uVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hf81cdfdd3f21b080E
                    (param_2,&uStack_58);
LAB_00746ed5:
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return;
}