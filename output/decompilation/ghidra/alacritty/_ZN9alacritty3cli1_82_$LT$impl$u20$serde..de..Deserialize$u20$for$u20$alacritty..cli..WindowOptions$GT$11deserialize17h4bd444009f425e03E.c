void _ZN9alacritty3cli1_82__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowOptions_GT_11deserialize17h4bd444009f425e03E
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined uStack_239;
  long lStack_238;
  long lStack_230;
  undefined auStack_228 [160];
  long lStack_188;
  char cStack_180;
  char cStack_17f;
  char cStack_17e;
  long lStack_178;
  undefined auStack_d0 [160];
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&cStack_180);
  if (cStack_180 == '\x01') goto LAB_00528710;
  if (cStack_17f != '\x01') {
    lStack_238 = 5;
LAB_00528876:
    lStack_178 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                           (param_2,&lStack_238);
    goto LAB_00528710;
  }
  if (cStack_17e == '[') {
    pcVar1 = (char *)(param_2 + 0x30);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_0052886d:
      lStack_238 = 0x18;
      goto LAB_00528876;
    }
    _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
              (param_2 + 0x18);
    _ZN163__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowOptions_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h9770bf0b4ee0e2fcE
              (&cStack_180,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17hc1235cd62567f8f2E(param_2);
LAB_005287a0:
    (*(code *)PTR_memcpy_009de0b0)(&lStack_238,&cStack_180,0xb0);
    lStack_188 = lVar2;
    if (lStack_238 == -0x8000000000000000) {
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17h75ba0325037fe770E(&lStack_188)
        ;
      }
    }
    else if (lVar2 == 0) {
      (*(code *)PTR_memcpy_009de0b0)(auStack_d0,auStack_228,0xa0);
      if (lStack_238 != -0x8000000000000000) {
        (*(code *)PTR_memcpy_009de0b0)(param_1 + 2,auStack_d0,0xa0);
        *param_1 = lStack_238;
        param_1[1] = lStack_230;
        return;
      }
    }
    else {
      _ZN4core3ptr50drop_in_place_LT_alacritty__cli__WindowOptions_GT_17hd1c78ed5333b3944E
                (&lStack_238);
      lStack_230 = lVar2;
    }
  }
  else {
    if (cStack_17e == '{') {
      pcVar1 = (char *)(param_2 + 0x30);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_0052886d;
      _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                (param_2 + 0x18);
      _ZN163__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__WindowOptions_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17hd9fbeb58510474fbE
                (&cStack_180,param_2);
      *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
      lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h3dcba0ec6b0a13fcE(param_2);
      goto LAB_005287a0;
    }
    lStack_230 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17h1d90d829e38eafcaE
                           (param_2,&uStack_239,&DAT_00981070);
  }
  lStack_178 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf4e1cecc7f2625f9E
                         (param_2,lStack_230);
LAB_00528710:
  param_1[1] = lStack_178;
  *param_1 = -0x8000000000000000;
  return;
}