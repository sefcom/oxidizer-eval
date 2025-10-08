void _ZN9meilitool7upgrade4v1_96ollama1_107__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__ollama__EmbedderOptions_GT_11deserialize17hdb03af525d325753E
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined uStack_139;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long lStack_f0;
  char cStack_e8;
  char cStack_e7;
  char cStack_e6;
  undefined uStack_e5;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  long lStack_70;
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
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_e8);
  if (cStack_e8 == '\x01') {
    lVar6 = CONCAT44(uStack_dc,uStack_e0);
    goto LAB_004479a4;
  }
  if (cStack_e7 != '\x01') {
    uStack_138 = 5;
LAB_00447c48:
    lVar6 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                      (param_2,&uStack_138);
    goto LAB_004479a4;
  }
  if (cStack_e6 == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_00447c3f:
        uStack_138 = 0x18;
        goto LAB_00447c48;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN211__LT_meilitool__upgrade__v1_9__ollama______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__ollama__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17h08e3c9918d36f20eE
              (&uStack_b0,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar6 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    uStack_138 = CONCAT44(uStack_ac,uStack_b0);
    uStack_130 = uStack_a8;
    uStack_12c = uStack_a4;
    lStack_f8 = lStack_70;
    uStack_108 = uStack_80;
    uStack_104 = uStack_7c;
    uStack_100 = uStack_78;
    uStack_fc = uStack_74;
    uStack_118 = uStack_90;
    uStack_114 = uStack_8c;
    uStack_110 = uStack_88;
    uStack_10c = uStack_84;
    uStack_128 = uStack_a0;
    uStack_124 = uStack_9c;
    uStack_120 = uStack_98;
    uStack_11c = uStack_94;
    if (uStack_138 == -0x8000000000000000) {
LAB_00447b46:
      lVar7 = CONCAT44(uStack_12c,uStack_130);
      lStack_f0 = lVar6;
      if (lVar6 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(&lStack_f0);
      }
    }
    else {
      if (lVar6 == 0) {
        lVar7 = CONCAT44(uStack_a4,uStack_a8);
        lVar2 = CONCAT44(uStack_8c,uStack_90);
        lVar3 = CONCAT44(uStack_84,uStack_88);
        lVar4 = CONCAT44(uStack_7c,uStack_80);
        lVar5 = CONCAT44(uStack_74,uStack_78);
        cStack_e8 = (char)uStack_a0;
        cStack_e7 = (char)((uint)uStack_a0 >> 8);
        cStack_e6 = (char)((uint)uStack_a0 >> 0x10);
        uStack_e5 = (undefined)((uint)uStack_a0 >> 0x18);
        goto joined_r0x00447bce;
      }
LAB_00447b6f:
      lStack_f0 = lVar6;
      _ZN4core3ptr70drop_in_place_LT_meilitool__upgrade__v1_9__ollama__EmbedderOptions_GT_17h5c58b3ab02b6a3deE
                (&uStack_138);
      lVar7 = lVar6;
    }
  }
  else if (cStack_e6 == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00447c3f;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN211__LT_meilitool__upgrade__v1_9__ollama______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__ollama__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h9841d808a0cee330E
              (&uStack_68,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar6 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    uStack_138 = CONCAT44(uStack_64,uStack_68);
    uStack_130 = uStack_60;
    uStack_12c = uStack_5c;
    lStack_f8 = lStack_28;
    uStack_108 = uStack_38;
    uStack_104 = uStack_34;
    uStack_100 = uStack_30;
    uStack_fc = uStack_2c;
    uStack_118 = uStack_48;
    uStack_114 = uStack_44;
    uStack_110 = uStack_40;
    uStack_10c = uStack_3c;
    uStack_128 = uStack_58;
    uStack_124 = uStack_54;
    uStack_120 = uStack_50;
    uStack_11c = uStack_4c;
    if (uStack_138 == -0x8000000000000000) goto LAB_00447b46;
    if (lVar6 != 0) goto LAB_00447b6f;
    lVar7 = CONCAT44(uStack_5c,uStack_60);
    lVar2 = CONCAT44(uStack_44,uStack_48);
    lVar3 = CONCAT44(uStack_3c,uStack_40);
    lVar4 = CONCAT44(uStack_34,uStack_38);
    lVar5 = CONCAT44(uStack_2c,uStack_30);
    cStack_e8 = (char)uStack_58;
    cStack_e7 = (char)((uint)uStack_58 >> 8);
    cStack_e6 = (char)((uint)uStack_58 >> 0x10);
    uStack_e5 = (undefined)((uint)uStack_58 >> 0x18);
joined_r0x00447bce:
    lStack_f0 = lVar6;
    if (uStack_138 != -0x8000000000000000) {
      param_1[8] = lStack_f8;
      param_1[6] = lVar4;
      param_1[7] = lVar5;
      param_1[4] = lVar2;
      param_1[5] = lVar3;
      param_1[2] = CONCAT44(uStack_124,
                            CONCAT13(uStack_e5,CONCAT12(cStack_e6,CONCAT11(cStack_e7,cStack_e8))));
      param_1[3] = CONCAT44(uStack_11c,uStack_120);
      *param_1 = uStack_138;
      param_1[1] = lVar7;
      return;
    }
  }
  else {
    lVar7 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                      (param_2,&uStack_139,&DAT_00625a50);
  }
  lVar6 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE(param_2,lVar7)
  ;
LAB_004479a4:
  param_1[1] = lVar6;
  *param_1 = -0x8000000000000000;
  return;
}