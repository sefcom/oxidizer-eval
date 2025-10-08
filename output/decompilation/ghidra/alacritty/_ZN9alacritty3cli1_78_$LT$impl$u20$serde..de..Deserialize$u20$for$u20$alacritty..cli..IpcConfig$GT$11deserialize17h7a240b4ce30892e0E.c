void _ZN9alacritty3cli1_78__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcConfig_GT_11deserialize17h7a240b4ce30892e0E
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined uStack_d9;
  undefined8 uStack_d8;
  char cStack_d0;
  char cStack_cf;
  char cStack_ce;
  char cStack_cd;
  char cStack_cc;
  char cStack_cb;
  char cStack_ca;
  char cStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  long alStack_98 [2];
  char cStack_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
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
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&cStack_88);
  if (cStack_88 == '\x01') {
    lVar2 = CONCAT17(cStack_79,
                     CONCAT16(cStack_7a,
                              CONCAT15(cStack_7b,
                                       CONCAT14(cStack_7c,
                                                CONCAT13(cStack_7d,
                                                         CONCAT12(cStack_7e,
                                                                  CONCAT11(cStack_7f,cStack_80))))))
                    );
    goto LAB_005284aa;
  }
  if (cStack_87 != '\x01') {
    uStack_d8 = 5;
LAB_00528667:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                      (param_2,&uStack_d8);
    goto LAB_005284aa;
  }
  if (cStack_86 == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_0052865e:
      uStack_d8 = 0x18;
      goto LAB_00528667;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
              (param_2 + 0x18);
    _ZN159__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcConfig_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h6b705067322d06c5E
              (&cStack_88,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17hc1235cd62567f8f2E(param_2);
LAB_0052853a:
    uStack_a8 = uStack_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    uStack_d8 = CONCAT17(cStack_81,
                         CONCAT16(cStack_82,
                                  CONCAT15(cStack_83,
                                           CONCAT14(cStack_84,
                                                    CONCAT13(cStack_85,
                                                             CONCAT12(cStack_86,
                                                                      CONCAT11(cStack_87,cStack_88))
                                                            )))));
    cStack_d0 = cStack_80;
    cStack_cf = cStack_7f;
    cStack_ce = cStack_7e;
    cStack_cd = cStack_7d;
    cStack_cc = cStack_7c;
    cStack_cb = cStack_7b;
    cStack_ca = cStack_7a;
    cStack_c9 = cStack_79;
    auVar4[0] = -(cStack_88 == DAT_001e8640);
    auVar4[1] = -(cStack_87 == UNK_001e8641);
    auVar4[2] = -(cStack_86 == UNK_001e8642);
    auVar4[3] = -(cStack_85 == UNK_001e8643);
    auVar4[4] = -(cStack_84 == UNK_001e8644);
    auVar4[5] = -(cStack_83 == UNK_001e8645);
    auVar4[6] = -(cStack_82 == UNK_001e8646);
    auVar4[7] = -(cStack_81 == UNK_001e8647);
    auVar4[8] = -(cStack_80 == UNK_001e8648);
    auVar4[9] = -(cStack_7f == UNK_001e8649);
    auVar4[10] = -(cStack_7e == UNK_001e864a);
    auVar4[0xb] = -(cStack_7d == UNK_001e864b);
    auVar4[0xc] = -(cStack_7c == UNK_001e864c);
    auVar4[0xd] = -(cStack_7b == UNK_001e864d);
    auVar4[0xe] = -(cStack_7a == UNK_001e864e);
    auVar4[0xf] = -(cStack_79 == UNK_001e864f);
    alStack_98[0] = lVar2;
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
      lVar3 = CONCAT44(uStack_74,uStack_78);
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h75ba0325037fe770E(alStack_98);
      }
    }
    else if (lVar2 == 0) {
      lVar2 = CONCAT17(cStack_79,
                       CONCAT16(cStack_7a,
                                CONCAT15(cStack_7b,
                                         CONCAT14(cStack_7c,
                                                  CONCAT13(cStack_7d,
                                                           CONCAT12(cStack_7e,
                                                                    CONCAT11(cStack_7f,cStack_80))))
                                        )));
      lVar3 = CONCAT44(uStack_74,uStack_78);
      if (uStack_d8 != 2 || lVar2 != 0) {
        param_1[7] = CONCAT44(uStack_4c,uStack_50);
        param_1[5] = CONCAT44(uStack_5c,uStack_60);
        param_1[6] = CONCAT44(uStack_54,uStack_58);
        param_1[3] = CONCAT44(uStack_6c,uStack_70);
        param_1[4] = CONCAT44(uStack_64,uStack_68);
        *param_1 = uStack_d8;
        param_1[1] = lVar2;
        param_1[2] = CONCAT44(uStack_74,uStack_78);
        return;
      }
    }
    else {
      _ZN4core3ptr46drop_in_place_LT_alacritty__cli__IpcConfig_GT_17hcf6294b58e2cc870E(&uStack_d8);
      lVar3 = lVar2;
    }
  }
  else {
    if (cStack_86 == '{') {
      pcVar1 = (char *)(param_2 + 0x30);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_0052865e;
      _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                (param_2 + 0x18);
      _ZN159__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__IpcConfig_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h0119d1fa25014a96E
                (&cStack_88,param_2);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3dcba0ec6b0a13fcE(param_2);
      goto LAB_0052853a;
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h1d90d829e38eafcaE
                      (param_2,&uStack_d9,&DAT_00981050);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf4e1cecc7f2625f9E(param_2,lVar3)
  ;
LAB_005284aa:
  param_1[2] = lVar2;
  param_1[1] = 0;
  *param_1 = 2;
  return;
}