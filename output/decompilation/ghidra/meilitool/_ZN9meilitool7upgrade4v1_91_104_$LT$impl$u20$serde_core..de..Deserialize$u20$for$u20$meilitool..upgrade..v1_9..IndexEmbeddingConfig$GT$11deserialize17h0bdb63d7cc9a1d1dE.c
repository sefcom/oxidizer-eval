void _ZN9meilitool7upgrade4v1_91_104__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexEmbeddingConfig_GT_11deserialize17h0bdb63d7cc9a1d1dE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined uStack_2a1;
  long lStack_2a0;
  long lStack_298;
  long lStack_200;
  char cStack_1f8;
  char cStack_1f7;
  char cStack_1f6;
  long lStack_1f0;
  undefined auStack_168 [16];
  undefined auStack_158 [144];
  undefined auStack_c8 [16];
  undefined auStack_b8 [144];
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_1f8);
  if (cStack_1f8 == '\x01') goto LAB_0044e2d5;
  if (cStack_1f7 != '\x01') {
    lStack_2a0 = 5;
LAB_0044e4da:
    lStack_1f0 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                           (param_2,&lStack_2a0);
    goto LAB_0044e2d5;
  }
  if (cStack_1f6 == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_0044e4d1:
        lStack_2a0 = 0x18;
        goto LAB_0044e4da;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN200__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexEmbeddingConfig_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17h0b4d6da72ddef2baE
              (auStack_168,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    (*(code *)PTR_memcpy_0063bdc0)(&lStack_2a0,auStack_168,0xa0);
    if (lStack_2a0 == 6) {
LAB_0044e402:
      lStack_200 = lVar2;
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(&lStack_200)
        ;
      }
    }
    else {
      if (lVar2 == 0) {
        puVar3 = auStack_158;
        lVar4 = lStack_2a0;
        lVar5 = lStack_298;
        lStack_200 = lVar2;
        goto LAB_0044e457;
      }
LAB_0044e432:
      lStack_200 = lVar2;
      _ZN4core3ptr67drop_in_place_LT_meilitool__upgrade__v1_9__IndexEmbeddingConfig_GT_17hab9ce94bbf887ec8E
                (&lStack_2a0);
      lStack_298 = lVar2;
    }
  }
  else if (cStack_1f6 == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_0044e4d1;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN200__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexEmbeddingConfig_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h7dc8a11a6ddd399bE
              (auStack_c8,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    (*(code *)PTR_memcpy_0063bdc0)(&lStack_2a0,auStack_c8,0xa0);
    if (lStack_2a0 == 6) goto LAB_0044e402;
    if (lVar2 != 0) goto LAB_0044e432;
    puVar3 = auStack_b8;
    lVar4 = lStack_2a0;
    lVar5 = lStack_298;
    lStack_200 = lVar2;
LAB_0044e457:
    (*(code *)PTR_memcpy_0063bdc0)(&cStack_1f8,puVar3,0x90);
    lStack_298 = lVar5;
    if ((int)lVar4 != 6) {
      (*(code *)PTR_memcpy_0063bdc0)(param_1 + 2,&cStack_1f8,0x90);
      *param_1 = lVar4;
      param_1[1] = lVar5;
      return;
    }
  }
  else {
    lStack_298 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                           (param_2,&uStack_2a1,&DAT_00625e50);
  }
  lStack_1f0 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE
                         (param_2,lStack_298);
LAB_0044e2d5:
  param_1[1] = lStack_1f0;
  *param_1 = 6;
  return;
}