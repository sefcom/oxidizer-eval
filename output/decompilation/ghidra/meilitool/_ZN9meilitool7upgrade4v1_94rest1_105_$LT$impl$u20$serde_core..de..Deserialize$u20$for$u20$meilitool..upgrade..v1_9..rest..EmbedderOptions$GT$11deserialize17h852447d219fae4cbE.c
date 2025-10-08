void _ZN9meilitool7upgrade4v1_94rest1_105__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__rest__EmbedderOptions_GT_11deserialize17h852447d219fae4cbE
               (long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined uStack_249;
  char cStack_248;
  char cStack_247;
  char cStack_246;
  long lStack_240;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_140;
  undefined auStack_138 [16];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  long lStack_30;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&cStack_248);
  if (cStack_248 == '\x01') goto LAB_0044737c;
  if (cStack_247 != '\x01') {
    lStack_1c8 = 5;
LAB_0044769c:
    lStack_240 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                           (param_2,&lStack_1c8);
    goto LAB_0044737c;
  }
  if (cStack_246 == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_00447690:
        lStack_1c8 = 0x18;
        goto LAB_0044769c;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN207__LT_meilitool__upgrade__v1_9__rest______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__rest__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17hf522d86f492aedf1E
              (auStack_138,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    (*(code *)PTR_memcpy_0063bdc0)(&lStack_1c8,auStack_138,0x88);
    if (lStack_1c8 == 2) {
LAB_0044751f:
      lStack_140 = lVar2;
      if (lVar2 != 0) {
        _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(&lStack_140)
        ;
      }
    }
    else {
      if (lVar2 == 0) {
        iVar3 = (int)lStack_1c8;
        goto joined_r0x004475ef;
      }
LAB_00447556:
      lStack_140 = lVar2;
      _ZN4core3ptr68drop_in_place_LT_meilitool__upgrade__v1_9__rest__EmbedderOptions_GT_17h8d3627b5e86180c8E
                (&lStack_1c8);
      lStack_1c0 = lVar2;
    }
  }
  else if (cStack_246 == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_00447690;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN207__LT_meilitool__upgrade__v1_9__rest______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__rest__EmbedderOptions_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17h95bf90cda8154b6bE
              (auStack_b0,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    (*(code *)PTR_memcpy_0063bdc0)(&lStack_1c8,auStack_b0,0x88);
    if (lStack_1c8 == 2) goto LAB_0044751f;
    if (lVar2 != 0) goto LAB_00447556;
    iVar3 = (int)lStack_1c8;
    lStack_128 = lStack_a0;
    lStack_120 = lStack_98;
    lStack_118 = lStack_90;
    lStack_110 = lStack_88;
    lStack_108 = lStack_80;
    lStack_100 = lStack_78;
    lStack_f8 = lStack_70;
    lStack_f0 = lStack_68;
    lStack_e8 = lStack_60;
    lStack_e0 = lStack_58;
    lStack_d8 = lStack_50;
    lStack_d0 = lStack_48;
    uStack_c8 = uStack_40;
    uStack_c4 = uStack_3c;
    uStack_c0 = uStack_38;
    uStack_bc = uStack_34;
    lStack_b8 = lStack_30;
joined_r0x004475ef:
    lStack_140 = lVar2;
    if (iVar3 != 2) {
      param_1[0x10] = lStack_b8;
      param_1[0xe] = CONCAT44(uStack_c4,uStack_c8);
      param_1[0xf] = CONCAT44(uStack_bc,uStack_c0);
      param_1[0xc] = lStack_d8;
      param_1[0xd] = lStack_d0;
      param_1[10] = lStack_e8;
      param_1[0xb] = lStack_e0;
      param_1[8] = lStack_f8;
      param_1[9] = lStack_f0;
      param_1[6] = lStack_108;
      param_1[7] = lStack_100;
      param_1[4] = lStack_118;
      param_1[5] = lStack_110;
      param_1[2] = lStack_128;
      param_1[3] = lStack_120;
      *param_1 = lStack_1c8;
      param_1[1] = lStack_1c0;
      return;
    }
  }
  else {
    lStack_1c0 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                           (param_2,&uStack_249,&DAT_00625a30);
  }
  lStack_240 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE
                         (param_2,lStack_1c0);
LAB_0044737c:
  param_1[1] = lStack_240;
  *param_1 = 2;
  return;
}