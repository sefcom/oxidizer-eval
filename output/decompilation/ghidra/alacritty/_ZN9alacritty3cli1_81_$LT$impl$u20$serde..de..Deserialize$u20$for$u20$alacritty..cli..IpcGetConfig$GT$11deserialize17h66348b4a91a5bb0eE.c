void _ZN9alacritty3cli1_81__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcGetConfig_GT_11deserialize17h66348b4a91a5bb0eE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined uStack_79;
  undefined8 uStack_78;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long alStack_58 [2];
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&cStack_48);
  if (cStack_48 == '\x01') {
    lVar3 = CONCAT17(cStack_39,
                     CONCAT16(cStack_3a,
                              CONCAT15(cStack_3b,
                                       CONCAT14(cStack_3c,
                                                CONCAT13(cStack_3d,
                                                         CONCAT12(cStack_3e,
                                                                  CONCAT11(cStack_3f,cStack_40))))))
                    );
    goto LAB_00528d77;
  }
  if (cStack_47 != '\x01') {
    uStack_78 = 5;
LAB_00528ec1:
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                      (param_2,&uStack_78);
    goto LAB_00528d77;
  }
  if (cStack_46 == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00528eb8:
      uStack_78 = 0x18;
      goto LAB_00528ec1;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
              (param_2 + 0x18);
    _ZN162__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcGetConfig_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h7f262651b4263d97E
              (&cStack_48,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    alStack_58[0] = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17hc1235cd62567f8f2E(param_2);
LAB_00528e07:
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    uStack_78 = CONCAT17(cStack_41,
                         CONCAT16(cStack_42,
                                  CONCAT15(cStack_43,
                                           CONCAT14(cStack_44,
                                                    CONCAT13(cStack_45,
                                                             CONCAT12(cStack_46,
                                                                      CONCAT11(cStack_47,cStack_48))
                                                            )))));
    cStack_70 = cStack_40;
    cStack_6f = cStack_3f;
    cStack_6e = cStack_3e;
    cStack_6d = cStack_3d;
    cStack_6c = cStack_3c;
    cStack_6b = cStack_3b;
    cStack_6a = cStack_3a;
    cStack_69 = cStack_39;
    auVar4[0] = -(cStack_48 == DAT_001e8640);
    auVar4[1] = -(cStack_47 == UNK_001e8641);
    auVar4[2] = -(cStack_46 == UNK_001e8642);
    auVar4[3] = -(cStack_45 == UNK_001e8643);
    auVar4[4] = -(cStack_44 == UNK_001e8644);
    auVar4[5] = -(cStack_43 == UNK_001e8645);
    auVar4[6] = -(cStack_42 == UNK_001e8646);
    auVar4[7] = -(cStack_41 == UNK_001e8647);
    auVar4[8] = -(cStack_40 == UNK_001e8648);
    auVar4[9] = -(cStack_3f == UNK_001e8649);
    auVar4[10] = -(cStack_3e == UNK_001e864a);
    auVar4[0xb] = -(cStack_3d == UNK_001e864b);
    auVar4[0xc] = -(cStack_3c == UNK_001e864c);
    auVar4[0xd] = -(cStack_3b == UNK_001e864d);
    auVar4[0xe] = -(cStack_3a == UNK_001e864e);
    auVar4[0xf] = -(cStack_39 == UNK_001e864f);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        == 0xffff) {
      lVar3 = CONCAT44(uStack_34,uStack_38);
      if (alStack_58[0] != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h75ba0325037fe770E(alStack_58);
      }
    }
    else {
      lVar3 = alStack_58[0];
      if (alStack_58[0] == 0) {
        lVar2 = CONCAT17(cStack_39,
                         CONCAT16(cStack_3a,
                                  CONCAT15(cStack_3b,
                                           CONCAT14(cStack_3c,
                                                    CONCAT13(cStack_3d,
                                                             CONCAT12(cStack_3e,
                                                                      CONCAT11(cStack_3f,cStack_40))
                                                            )))));
        lVar3 = CONCAT44(uStack_34,uStack_38);
        if (uStack_78 != 2 || lVar2 != 0) {
          *param_1 = uStack_78;
          param_1[1] = lVar2;
          param_1[2] = CONCAT44(uStack_34,uStack_38);
          param_1[3] = CONCAT44(uStack_2c,uStack_30);
          return;
        }
      }
    }
  }
  else {
    if (cStack_46 == '{') {
      pcVar1 = (char *)(param_2 + 0x30);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00528eb8;
      _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                (param_2 + 0x18);
      _ZN162__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcGetConfig_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17hfb67abb8cff7a83dE
                (&cStack_48,param_2);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      alStack_58[0] = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3dcba0ec6b0a13fcE(param_2)
      ;
      goto LAB_00528e07;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h1d90d829e38eafcaE
                      (param_2,&uStack_79,&DAT_009810d0);
  }
  lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf4e1cecc7f2625f9E(param_2,lVar3)
  ;
LAB_00528d77:
  param_1[2] = lVar3;
  param_1[1] = 0;
  *param_1 = 2;
  return;
}