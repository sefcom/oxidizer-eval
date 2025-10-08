void _ZN9meilitool7upgrade4v1_96openai1_107__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__openai__EmbedderOptions_GT_11deserialize17ha092540659cdd94fE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_b9;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  undefined uStack_85;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_88);
  if (cStack_88 == '\x01') {
    lVar2 = CONCAT44(uStack_7c,uStack_80);
    goto LAB_0044a24a;
  }
  if (cStack_87 != '\x01') {
    uStack_b8 = 5;
LAB_0044a45d:
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                      (param_2,&uStack_b8);
    goto LAB_0044a24a;
  }
  if (cStack_86 == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_0044a454:
        uStack_b8 = 0x18;
        goto LAB_0044a45d;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN211__LT_meilitool__upgrade__v1_9__openai______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__openai__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17h35db7a97deff934eE
              (&iStack_70,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    uStack_b8 = CONCAT44(uStack_6c,iStack_70);
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    lStack_98 = lStack_50;
    uStack_a8 = uStack_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    if (uStack_b8 == 2) {
LAB_0044a393:
      lVar3 = CONCAT44(uStack_ac,uStack_b0);
      lStack_90 = lVar2;
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(&lStack_90);
      }
    }
    else {
      if (lVar2 == 0) {
        lVar3 = CONCAT44(uStack_64,uStack_68);
        cStack_88 = (char)uStack_60;
        cStack_87 = (char)((uint)uStack_60 >> 8);
        cStack_86 = (char)((uint)uStack_60 >> 0x10);
        uStack_85 = (undefined)((uint)uStack_60 >> 0x18);
        goto joined_r0x0044a3fb;
      }
LAB_0044a3c0:
      lStack_90 = lVar2;
      _ZN4core3ptr70drop_in_place_LT_meilitool__upgrade__v1_9__openai__EmbedderOptions_GT_17h7df499755cade0a5E
                (&uStack_b8);
      lVar3 = lVar2;
    }
  }
  else if (cStack_86 == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_0044a454;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN211__LT_meilitool__upgrade__v1_9__openai______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__openai__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h2fe1838d53e2e46fE
              (&iStack_48,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    uStack_b8 = CONCAT44(uStack_44,iStack_48);
    uStack_b0 = uStack_40;
    uStack_ac = uStack_3c;
    lStack_98 = lStack_28;
    uStack_a8 = uStack_38;
    uStack_a4 = uStack_34;
    uStack_a0 = uStack_30;
    uStack_9c = uStack_2c;
    if (uStack_b8 == 2) goto LAB_0044a393;
    if (lVar2 != 0) goto LAB_0044a3c0;
    lVar3 = CONCAT44(uStack_3c,uStack_40);
    cStack_88 = (char)uStack_38;
    cStack_87 = (char)((uint)uStack_38 >> 8);
    cStack_86 = (char)((uint)uStack_38 >> 0x10);
    uStack_85 = (undefined)((uint)uStack_38 >> 0x18);
    iStack_70 = iStack_48;
joined_r0x0044a3fb:
    lStack_90 = lVar2;
    if (iStack_70 != 2) {
      param_1[4] = lStack_98;
      param_1[2] = CONCAT44(uStack_a4,
                            CONCAT13(uStack_85,CONCAT12(cStack_86,CONCAT11(cStack_87,cStack_88))));
      param_1[3] = CONCAT44(uStack_9c,uStack_a0);
      *param_1 = uStack_b8;
      param_1[1] = lVar3;
      return;
    }
  }
  else {
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                      (param_2,&uStack_b9,&DAT_00625c30);
  }
  lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE(param_2,lVar3)
  ;
LAB_0044a24a:
  param_1[1] = lVar2;
  *param_1 = 2;
  return;
}