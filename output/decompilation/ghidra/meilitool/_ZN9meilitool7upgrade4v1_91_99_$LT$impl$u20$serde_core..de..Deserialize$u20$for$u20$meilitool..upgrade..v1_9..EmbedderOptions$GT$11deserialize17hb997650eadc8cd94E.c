void _ZN9meilitool7upgrade4v1_91_99__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__EmbedderOptions_GT_11deserialize17hb997650eadc8cd94E
               (undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 auStack_d8 [3];
  char cStack_c0;
  char cStack_bf;
  char cStack_be;
  undefined8 uStack_b8;
  char cStack_b0;
  char cStack_af;
  char cStack_ae;
  undefined8 uStack_a8;
  int aiStack_a0 [34];
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_c0);
  if (cStack_c0 == '\x01') goto LAB_00442888;
  if (cStack_bf == '\x01') {
    if (cStack_be == '\"') {
      _ZN195__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17hae45dd2ea6603150E
                (param_1,param_2);
      return;
    }
    if (cStack_be == '{') {
      if (*(char *)(param_2 + 0x38) == '\0') {
        pcVar1 = (char *)(param_2 + 0x39);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          auStack_d8[0] = 0x18;
          goto LAB_0044298b;
        }
      }
      _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
                (param_2 + 0x18);
      _ZN195__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17hfbe41d8eb559bb99E
                (aiStack_a0,param_2);
      if (*(char *)(param_2 + 0x38) == '\0') {
        *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
      }
      if (aiStack_a0[0] != 6) {
        _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE
                  (&cStack_b0,param_2);
        if (cStack_b0 == '\0') {
          if (cStack_af == '\x01') {
            if (cStack_ae == '}') {
              _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
                        (param_2 + 0x18);
              goto LAB_0044294f;
            }
            auStack_d8[0] = 10;
            uStack_a8 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17ha6f88320c85a6e0bE
                                  (param_2,auStack_d8);
          }
          else {
            auStack_d8[0] = 3;
            uStack_a8 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17ha6f88320c85a6e0bE
                                  (param_2,auStack_d8);
          }
        }
        param_1[1] = uStack_a8;
        *param_1 = 6;
        _ZN4core3ptr62drop_in_place_LT_meilitool__upgrade__v1_9__EmbedderOptions_GT_17h2c0230b49a5259b8E
                  (aiStack_a0);
        return;
      }
LAB_0044294f:
      (*(code *)PTR_memcpy_0063bdc0)(param_1,aiStack_a0,0x88);
      return;
    }
    auStack_d8[0] = 10;
  }
  else {
    auStack_d8[0] = 5;
  }
LAB_0044298b:
  uStack_b8 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                        (param_2,auStack_d8);
LAB_00442888:
  param_1[1] = uStack_b8;
  *param_1 = 6;
  return;
}