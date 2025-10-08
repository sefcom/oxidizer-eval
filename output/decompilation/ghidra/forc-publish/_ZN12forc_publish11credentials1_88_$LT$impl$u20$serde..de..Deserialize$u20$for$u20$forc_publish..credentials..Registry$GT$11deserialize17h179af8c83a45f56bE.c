void _ZN12forc_publish11credentials1_88__LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__credentials__Registry_GT_11deserialize17h179af8c83a45f56bE
               (int *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 auStack_1f8 [2];
  undefined8 uStack_1e8;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined auStack_118 [24];
  undefined auStack_100 [24];
  int aiStack_e8 [8];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  cVar2 = (*(code *)PTR__ZN13serde_spanned7spanned10is_spanned17he298f3fc3b52a201E_01049858)
                    ("Registry",8,&PTR_s_token_00f53fb0,1);
  if ((cVar2 != '\0') &&
     ((*(code *)PTR__ZN9toml_edit4item4Item4span17h8042d0b4338cf13cE_01049810)(&iStack_2b8,param_2),
     iStack_2b8 == 1)) {
    (*(code *)PTR_memcpy_01048fd8)(&iStack_1d8,param_2,0xb8);
    auStack_1f8[0] = 1;
    uStack_1e8 = 1;
    _ZN180__LT_forc_publish__credentials______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__credentials__Registry_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h8aa281b5185faecaE
              (param_1,auStack_1f8);
    return;
  }
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h72cfbcf93631c825E
                    ("Registry",8,&DAT_0032a938,0x18);
  if (((cVar2 == '\0') ||
      (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he560857295a7e481E
                         ("token",5), cVar2 == '\0')) ||
     ((*(code *)PTR__ZN9toml_edit4item4Item4span17h8042d0b4338cf13cE_01049810)(auStack_118,param_2),
     *(int *)param_2 != 6)) {
    if (*(char *)(param_2 + 0x16) != '\0') {
      (*(code *)PTR__ZN9toml_edit4item4Item4span17h8042d0b4338cf13cE_01049810)(auStack_100,param_2);
      uVar3 = *param_2 - 8;
      uVar4 = 1;
      if (uVar3 < 4) {
        uVar4 = uVar3;
      }
      if (uVar4 == 2) {
        lVar5 = 0x30;
      }
      else if ((uVar4 != 1) || (lVar5 = 0x18, 0xfffffffffffffff9 < uVar3)) goto LAB_0075c875;
      (*(code *)PTR__ZN9toml_edit2de20validate_struct_keys17h6e03868da0702630E_01049860)
                (aiStack_e8,lVar5 + (long)param_2,&PTR_s_token_00f53fb0,1);
      if (aiStack_e8[0] != 2) {
        uStack_1a8 = uStack_98;
        uStack_1a0 = uStack_90;
        uStack_1b8 = uStack_a8;
        uStack_1b0 = uStack_a0;
        iStack_1c8 = iStack_b8;
        iStack_1c4 = iStack_b4;
        iStack_1c0 = iStack_b0;
        iStack_1bc = iStack_ac;
        iStack_1d8 = iStack_c8;
        iStack_1d4 = iStack_c4;
        iStack_1d0 = iStack_c0;
        iStack_1cc = iStack_bc;
        _ZN77__LT_toml_edit__de__table__TableMapAccess_u20_as_u20_serde__de__MapAccess_GT_13next_key_seed28__u7b__u7b_closure_u7d__u7d_17h447ec544f9fe6ff4E
                  (&iStack_2b8,auStack_100,auStack_1f8);
        *(undefined8 *)(param_1 + 0x16) = uStack_260;
        *(undefined8 *)(param_1 + 0x12) = uStack_270;
        *(undefined8 *)(param_1 + 0x14) = uStack_268;
        *(ulong *)(param_1 + 0xe) = CONCAT44(iStack_27c,iStack_280);
        *(undefined8 *)(param_1 + 0x10) = uStack_278;
        *(ulong *)(param_1 + 10) = CONCAT44(iStack_28c,iStack_290);
        *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_284,iStack_288);
        *(ulong *)(param_1 + 6) = CONCAT44(iStack_29c,iStack_2a0);
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_294,iStack_298);
        param_1[2] = iStack_2b0;
        param_1[3] = iStack_2ac;
        param_1[4] = iStack_2a8;
        param_1[5] = iStack_2a4;
        *(ulong *)param_1 = CONCAT44(iStack_2b4,iStack_2b8);
        bVar1 = true;
        lVar5 = *param_2;
        goto joined_r0x0075c970;
      }
    }
LAB_0075c875:
    (*(code *)PTR_memcpy_01048fd8)(auStack_1f8,param_2,0xb8);
    _ZN83__LT_toml_edit__de__value__ValueDeserializer_u20_as_u20_serde__de__Deserializer_GT_15deserialize_any17h4283114becbebb4fE
              (param_1,auStack_1f8);
  }
  else {
    lStack_38 = param_2[0xb];
    lStack_30 = param_2[0xc];
    lStack_48 = param_2[9];
    lStack_40 = param_2[10];
    iStack_88 = *(int *)(param_2 + 1);
    iStack_84 = *(int *)((long)param_2 + 0xc);
    iStack_80 = *(int *)(param_2 + 2);
    iStack_7c = *(int *)((long)param_2 + 0x14);
    iStack_78 = *(int *)(param_2 + 3);
    iStack_74 = *(int *)((long)param_2 + 0x1c);
    iStack_70 = *(int *)(param_2 + 4);
    iStack_6c = *(int *)((long)param_2 + 0x24);
    iStack_68 = *(int *)(param_2 + 5);
    iStack_64 = *(int *)((long)param_2 + 0x2c);
    iStack_60 = *(int *)(param_2 + 6);
    iStack_5c = *(int *)((long)param_2 + 0x34);
    iStack_58 = *(int *)(param_2 + 7);
    iStack_54 = *(int *)((long)param_2 + 0x3c);
    iStack_50 = *(int *)(param_2 + 8);
    iStack_4c = *(int *)((long)param_2 + 0x44);
    _ZN9toml_edit4repr18Formatted_LT_T_GT_10into_value17hb8f426e8003eafe0E(auStack_1f8,&iStack_88);
    _ZN180__LT_forc_publish__credentials______LT_impl_u20_serde__de__Deserialize_u20_for_u20_forc_publish__credentials__Registry_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17he5cee2e7434f6240E
              (&iStack_258,auStack_1f8);
    if (iStack_258 == 2) {
      *(undefined8 *)(param_1 + 0x14) = uStack_208;
      *(undefined8 *)(param_1 + 0x16) = uStack_200;
      *(undefined8 *)(param_1 + 0x10) = uStack_218;
      *(undefined8 *)(param_1 + 0x12) = uStack_210;
      iStack_2b8 = 2;
    }
    else {
      uStack_1a8 = uStack_208;
      uStack_1a0 = uStack_200;
      uStack_1b8 = uStack_218;
      uStack_1b0 = uStack_210;
      iStack_1c8 = iStack_228;
      iStack_1c4 = iStack_224;
      iStack_1c0 = iStack_220;
      iStack_1bc = iStack_21c;
      iStack_1d8 = iStack_238;
      iStack_1d4 = iStack_234;
      iStack_1d0 = iStack_230;
      iStack_1cc = iStack_22c;
      _ZN77__LT_toml_edit__de__table__TableMapAccess_u20_as_u20_serde__de__MapAccess_GT_13next_key_seed28__u7b__u7b_closure_u7d__u7d_17h447ec544f9fe6ff4E
                (&iStack_2b8,auStack_118,auStack_1f8);
      *(undefined8 *)(param_1 + 0x14) = uStack_268;
      *(undefined8 *)(param_1 + 0x16) = uStack_260;
      *(undefined8 *)(param_1 + 0x10) = uStack_278;
      *(undefined8 *)(param_1 + 0x12) = uStack_270;
      iStack_254 = iStack_2b4;
      iStack_250 = iStack_2b0;
      iStack_24c = iStack_2ac;
      iStack_248 = iStack_2a8;
      iStack_244 = iStack_2a4;
      iStack_240 = iStack_2a0;
      iStack_23c = iStack_29c;
      iStack_238 = iStack_298;
      iStack_234 = iStack_294;
      iStack_230 = iStack_290;
      iStack_22c = iStack_28c;
      iStack_228 = iStack_288;
      iStack_224 = iStack_284;
      iStack_220 = iStack_280;
      iStack_21c = iStack_27c;
    }
    param_1[0xc] = iStack_228;
    param_1[0xd] = iStack_224;
    param_1[0xe] = iStack_220;
    param_1[0xf] = iStack_21c;
    param_1[8] = iStack_238;
    param_1[9] = iStack_234;
    param_1[10] = iStack_230;
    param_1[0xb] = iStack_22c;
    param_1[4] = iStack_248;
    param_1[5] = iStack_244;
    param_1[6] = iStack_240;
    param_1[7] = iStack_23c;
    *param_1 = iStack_2b8;
    param_1[1] = iStack_254;
    param_1[2] = iStack_250;
    param_1[3] = iStack_24c;
    bVar1 = false;
    lVar5 = *param_2;
joined_r0x0075c970:
    if (lVar5 - 8U < 4) {
      _ZN4core3ptr42drop_in_place_LT_toml_edit__item__Item_GT_17hc37ba4acbc83f911E(param_2);
      return;
    }
    if ((int)lVar5 != 6) {
      _ZN4core3ptr44drop_in_place_LT_toml_edit__value__Value_GT_17h3c735e251123c282E(param_2);
      return;
    }
    if (bVar1) {
      _ZN4core3ptr88drop_in_place_LT_toml_edit__repr__Formatted_LT_toml_datetime__datetime__Datetime_GT__GT_17h7e3176567f5c17c1E
                (param_2 + 1);
      return;
    }
  }
  return;
}