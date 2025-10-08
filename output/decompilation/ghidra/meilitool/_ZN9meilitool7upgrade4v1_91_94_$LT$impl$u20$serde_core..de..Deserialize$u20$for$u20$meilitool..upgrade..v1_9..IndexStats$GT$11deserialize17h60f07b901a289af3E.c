void _ZN9meilitool7upgrade4v1_91_94__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexStats_GT_11deserialize17h60f07b901a289af3E
               (undefined4 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined uStack_171;
  undefined4 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long alStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h2dcc954e24df949eE(&uStack_108);
  if ((char)uStack_108 == '\x01') goto LAB_00446159;
  if (uStack_108._1_1_ != '\x01') {
    uStack_168 = 5;
LAB_00446444:
    uStack_100 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h593a406bc8a15681E
                           (param_2,&uStack_168);
    goto LAB_00446159;
  }
  if (uStack_108._2_1_ == '[') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
LAB_0044643b:
        uStack_168 = 0x18;
        goto LAB_00446444;
      }
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN190__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexStats_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_seq17h84e39e5d5ff6c195E
              (&uStack_c0,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_seq17h491ee025e43970acE(param_2);
    lStack_160 = lStack_b8;
    uStack_128 = uStack_80;
    uStack_124 = uStack_7c;
    uStack_120 = uStack_78;
    uStack_11c = uStack_74;
    uStack_138 = uStack_90;
    uStack_134 = uStack_8c;
    uStack_130 = uStack_88;
    uStack_12c = uStack_84;
    uStack_148 = uStack_a0;
    uStack_144 = uStack_9c;
    uStack_140 = uStack_98;
    uStack_13c = uStack_94;
    uStack_158 = uStack_b0;
    uStack_154 = uStack_ac;
    uStack_150 = uStack_a8;
    uStack_14c = uStack_a4;
    uStack_168._7_1_ = (char)((uint)uStack_bc >> 0x18);
    if (uStack_168._7_1_ == '\0') {
      if (lVar2 == 0) {
        uStack_170 = uStack_c0;
        uStack_108 = CONCAT44(uStack_ac,uStack_b0);
        uStack_100 = CONCAT44(uStack_a4,uStack_a8);
        uStack_f8 = CONCAT44(uStack_9c,uStack_a0);
        uStack_f0 = CONCAT44(uStack_94,uStack_98);
        uStack_e8 = CONCAT44(uStack_8c,uStack_90);
        uStack_e0 = CONCAT44(uStack_84,uStack_88);
        uStack_d8 = uStack_80;
        uStack_d4 = uStack_7c;
        uStack_d0 = uStack_78;
        uStack_cc = uStack_74;
        lStack_68 = lStack_b8;
        uStack_6c = uStack_bc;
LAB_004463bc:
        *(uint *)((long)param_1 + 3) = CONCAT31((int3)uStack_6c,uStack_170._3_1_);
        *param_1 = uStack_170;
        *(undefined8 *)(param_1 + 4) = uStack_108;
        *(undefined8 *)(param_1 + 6) = uStack_100;
        *(undefined8 *)(param_1 + 8) = uStack_f8;
        *(undefined8 *)(param_1 + 10) = uStack_f0;
        *(undefined8 *)(param_1 + 0xc) = uStack_e8;
        *(undefined8 *)(param_1 + 0xe) = uStack_e0;
        *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
        *(ulong *)(param_1 + 0x12) = CONCAT44(uStack_cc,uStack_d0);
        *(undefined *)((long)param_1 + 7) = 0;
        *(long *)(param_1 + 2) = lStack_68;
        return;
      }
      goto LAB_00446342;
    }
LAB_00446315:
    lVar3 = lStack_160;
    alStack_118[0] = lVar2;
    if (lVar2 != 0) {
      _ZN4core3ptr45drop_in_place_LT_serde_json__error__Error_GT_17hfe91215cd230ebcbE(alStack_118);
    }
  }
  else if (uStack_108._2_1_ == '{') {
    if (*(char *)(param_2 + 0x38) == '\0') {
      pcVar1 = (char *)(param_2 + 0x39);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') goto LAB_0044643b;
    }
    _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17h8044fa9a3dd5db8dE
              (param_2 + 0x18);
    _ZN190__LT_meilitool__upgrade__v1_9______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_meilitool__upgrade__v1_9__IndexStats_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_9visit_map17ha30c1ab8ee06ce25E
              (&uStack_70,param_2);
    if (*(char *)(param_2 + 0x38) == '\0') {
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
    lVar2 = _ZN10serde_json2de21Deserializer_LT_R_GT_7end_map17h9db294070a1e94d1E(param_2);
    lStack_160 = lStack_68;
    uStack_128 = uStack_30;
    uStack_124 = uStack_2c;
    uStack_120 = uStack_28;
    uStack_11c = uStack_24;
    uStack_138 = uStack_40;
    uStack_134 = uStack_3c;
    uStack_130 = uStack_38;
    uStack_12c = uStack_34;
    uStack_148 = uStack_50;
    uStack_144 = uStack_4c;
    uStack_140 = uStack_48;
    uStack_13c = uStack_44;
    uStack_158 = uStack_60;
    uStack_154 = uStack_5c;
    uStack_150 = uStack_58;
    uStack_14c = uStack_54;
    uStack_168._7_1_ = (char)((uint)uStack_6c >> 0x18);
    if (uStack_168._7_1_ != '\0') goto LAB_00446315;
    if (lVar2 == 0) {
      uStack_170 = uStack_70;
      uStack_108 = CONCAT44(uStack_5c,uStack_60);
      uStack_100 = CONCAT44(uStack_54,uStack_58);
      uStack_f8 = CONCAT44(uStack_4c,uStack_50);
      uStack_f0 = CONCAT44(uStack_44,uStack_48);
      uStack_e8 = CONCAT44(uStack_3c,uStack_40);
      uStack_e0 = CONCAT44(uStack_34,uStack_38);
      uStack_d8 = uStack_30;
      uStack_d4 = uStack_2c;
      uStack_d0 = uStack_28;
      uStack_cc = uStack_24;
      goto LAB_004463bc;
    }
LAB_00446342:
    alStack_118[0] = lVar2;
    _ZN4core3ptr57drop_in_place_LT_meilitool__upgrade__v1_9__IndexStats_GT_17hd2601c3e97735571E
              (&uStack_168);
    lVar3 = lVar2;
  }
  else {
    lVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_17peek_invalid_type17hf11008a11ee685ddE
                      (param_2,&uStack_171,&DAT_00625990);
  }
  uStack_100 = _ZN10serde_json2de21Deserializer_LT_R_GT_12fix_position17hf7492e6717a6be7aE
                         (param_2,lVar3);
LAB_00446159:
  *(undefined8 *)(param_1 + 2) = uStack_100;
  *(undefined *)((long)param_1 + 7) = 1;
  return;
}