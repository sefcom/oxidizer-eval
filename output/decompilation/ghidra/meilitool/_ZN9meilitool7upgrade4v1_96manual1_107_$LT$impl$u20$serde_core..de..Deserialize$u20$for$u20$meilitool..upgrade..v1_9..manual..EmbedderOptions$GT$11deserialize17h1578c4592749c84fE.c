undefined  [16]
_ZN9meilitool7upgrade4v1_96manual1_107__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__manual__EmbedderOptions_GT_11deserialize17h1578c4592749c84fE
          (long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined uStack_41;
  undefined auStack_40 [16];
  undefined auStack_30 [16];
  long lStack_20;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE
            (auStack_40,param_1);
  if (auStack_40[0] == '\x01') {
    uVar2 = 1;
    lVar3 = auStack_40._8_8_;
    goto LAB_00448750;
  }
  if (auStack_40[1] == '\x01') {
    if (auStack_40[2] == '[') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        pcVar1 = (char *)(param_1 + 0x39);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
LAB_00448798:
          auStack_30._0_8_ = 0x18;
          goto LAB_004487a1;
        }
      }
      _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
                (param_1 + 0x18);
      auStack_30 = _ZN211__LT_meilitool__upgrade__v1_9__manual______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__manual__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17h3046041f527879f5E
                             (param_1);
      if (*(char *)(param_1 + 0x38) == '\0') {
        *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
      }
      auStack_40 = auStack_30;
      lStack_20 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_1);
LAB_00448731:
      lVar3 = auStack_30._8_8_;
      if ((auStack_30 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        lVar4 = lStack_20;
        if (lStack_20 == 0) {
          uVar2 = 0;
          goto LAB_00448750;
        }
      }
      else {
        lVar4 = lVar3;
        if (lStack_20 != 0) {
          _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE
                    (&lStack_20);
        }
      }
    }
    else {
      if (auStack_40[2] == '{') {
        if (*(char *)(param_1 + 0x38) == '\0') {
          pcVar1 = (char *)(param_1 + 0x39);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') goto LAB_00448798;
        }
        _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
                  (param_1 + 0x18);
        auStack_30 = _ZN211__LT_meilitool__upgrade__v1_9__manual______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__manual__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h9cd4d009439e7d8bE
                               (param_1);
        if (*(char *)(param_1 + 0x38) == '\0') {
          *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
        }
        auStack_40 = auStack_30;
        lStack_20 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_1);
        goto LAB_00448731;
      }
      lVar4 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                        (param_1,&uStack_41,&DAT_00625af0);
    }
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE
                      (param_1,lVar4);
  }
  else {
    auStack_30._0_8_ = 5;
LAB_004487a1:
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                      (param_1,auStack_30);
  }
  uVar2 = 1;
LAB_00448750:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}