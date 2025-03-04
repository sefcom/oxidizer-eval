long * _ZN7uu_join14parse_settings17h8cf47cd535767909E(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  long lVar6;
  long local_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long lStack_128;
  byte local_120;
  byte bStack_11f;
  byte bStack_11e;
  undefined uStack_11d;
  undefined uStack_11c;
  undefined uStack_11b;
  undefined uStack_11a;
  undefined local_119;
  long local_118;
  long lStack_110;
  long local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN7uu_join26get_and_parse_field_number17h96c6c4133cb4e54eE(&local_178,param_2,"j");
  lVar3 = lStack_168;
  lVar6 = lStack_170;
  if ((local_178 != 0) ||
     (_ZN7uu_join26get_and_parse_field_number17h96c6c4133cb4e54eE(&local_178,param_2,"1"),
     local_a0 = lStack_168, local_98 = lStack_170, local_178 != 0)) {
    param_1[1] = lStack_170;
    param_1[2] = lStack_168;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  _ZN7uu_join26get_and_parse_field_number17h96c6c4133cb4e54eE(&local_178,param_2,"2");
  local_b0 = lStack_170;
  if (local_178 != 0) {
    param_1[1] = lStack_170;
    param_1[2] = lStack_168;
LAB_001c40e4:
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  _ZN7uu_join20parse_print_settings17h7df2ac24ec40344eE(&local_178,param_2);
  lVar2 = lStack_170;
  if (local_178 != 0) {
    param_1[1] = local_178;
    param_1[2] = lStack_170;
    goto LAB_001c40e4;
  }
  local_a8 = lStack_168;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_11d = 0;
  uStack_11c = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_119 = 10;
  local_148 = -0x7ffffffffffffffd;
  local_178 = 0;
  lStack_170 = 8;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 1;
  local_150 = 0;
  bStack_11e = (byte)lVar2 & 1;
  local_120 = (byte)((ulong)lVar2 >> 8) & 1;
  bStack_11f = (byte)((ulong)lVar2 >> 0x10) & 1;
                    /* try { // try from 001c4182 to 001c41ee has its CatchHandler @ 001c45fb */
  uStack_11d = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                         (param_2,"i",1);
  _ZN7uu_join16get_field_number17h8241ec84504e8cdaE(&local_118,lVar6,lVar3,local_98,local_a0);
  if (local_118 == 0) {
    lStack_130 = lStack_110;
    _ZN7uu_join16get_field_number17h8241ec84504e8cdaE(&local_118,lVar6,lVar3,local_b0,local_a8);
    if (local_118 == 0) {
      lStack_128 = lStack_110;
                    /* try { // try from 001c421b to 001c4260 has its CatchHandler @ 001c45fb */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1e79e7d5d116e3d9E
                (&local_118,param_2,"t",1);
      lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h295fad333db21f31E
                        ("t",1,&local_118);
      if (lVar6 == 0) {
LAB_001c429c:
                    /* try { // try from 001c429c to 001c42f2 has its CatchHandler @ 001c45fb */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc8975813854a9a38E
                  (&local_118,param_2,"o",1);
        lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he70031129adfbfcbE
                          ("o",1,&local_118);
        if (lVar6 != 0) {
          uVar1 = *(undefined8 *)(lVar6 + 8);
          lVar6 = *(long *)(lVar6 + 0x10);
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hab9f309aad09d5a2E
                            (uVar1,lVar6,&DAT_0010b75c,4);
          if (cVar4 == '\0') {
            local_c8 = 0;
            lStack_c0 = 8;
            local_b8 = 0;
            local_118 = 0x2c00000020;
            lStack_110 = CONCAT44(lStack_110._4_4_,9);
            _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h05090d30728fe751E
                      (local_68,&local_118,uVar1,lVar6);
            local_118 = 0;
            uStack_100 = uStack_60;
            uStack_fc = uStack_5c;
            local_f8 = local_58;
            uStack_f0 = uStack_50;
            local_e8 = local_48;
            uStack_e0 = uStack_40;
            local_d8 = local_38;
            local_d0 = 1;
            lStack_110 = lVar6;
            while (lVar6 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hade5ac386c66a7dcE
                                     (&local_118), lVar6 != 0) {
                    /* try { // try from 001c43d0 to 001c4414 has its CatchHandler @ 001c45e9 */
              _ZN7uu_join4Spec5parse17hd0c421fb4c424f36E(&local_80,lVar6);
              if (local_80 != 0) {
                param_1[1] = local_78;
                param_1[2] = local_70;
                *param_1 = -0x8000000000000000;
                _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_join__Spec_GT__GT_17hd1ac6ea959952ee2E
                          (&local_c8);
                goto LAB_001c4209;
              }
              local_90 = local_78;
              local_88 = local_70;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0b8ef9bbd439741bE(&local_c8,&local_90);
            }
            local_108 = local_b8;
            local_118 = local_c8;
            lStack_110 = lStack_c0;
                    /* try { // try from 001c4431 to 001c4438 has its CatchHandler @ 001c45a6 */
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_join__Spec_GT__GT_17hd1ac6ea959952ee2E
                      (&local_178);
            lStack_168 = local_108;
            local_178 = local_118;
            lStack_170 = lStack_110;
          }
          else {
            uStack_11c = 1;
          }
        }
                    /* try { // try from 001c444c to 001c4491 has its CatchHandler @ 001c45fb */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc8975813854a9a38E
                  (&local_118,param_2,"e");
        lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he70031129adfbfcbE
                          ("e",1,&local_118);
        if (lVar6 != 0) {
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h2c5bde50ee02e8d6E
                    (&local_118,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
                    /* try { // try from 001c4492 to 001c449e has its CatchHandler @ 001c45d2 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h649c80b2f7427144E
                    (&lStack_160);
          local_150 = local_108;
          lStack_160 = local_118;
          lStack_158 = lStack_110;
        }
                    /* try { // try from 001c44b1 to 001c45a0 has its CatchHandler @ 001c45fb */
        cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"nocheck-order",0xd);
        if (cVar4 != '\0') {
          uStack_11a = 1;
        }
        cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"check-order",0xb);
        if (cVar4 != '\0') {
          uStack_11a = 2;
        }
        cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"header",6);
        if (cVar4 != '\0') {
          uStack_11b = 1;
        }
        cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"z",1);
        uVar5 = 10;
        if (cVar4 != '\0') {
          uVar5 = 0;
        }
        param_1[8] = local_138;
        param_1[9] = lStack_130;
        param_1[6] = local_148;
        param_1[7] = lStack_140;
        param_1[4] = lStack_158;
        param_1[5] = local_150;
        param_1[2] = lStack_168;
        param_1[3] = lStack_160;
        *param_1 = local_178;
        param_1[1] = lStack_170;
        param_1[10] = lStack_128;
        *(uint *)(param_1 + 0xb) =
             CONCAT13(uStack_11d,CONCAT12(bStack_11e,CONCAT11(bStack_11f,local_120)));
        *(ushort *)((long)param_1 + 0x5c) = CONCAT11(uStack_11b,uStack_11c);
        *(undefined *)((long)param_1 + 0x5e) = uStack_11a;
        *(undefined *)((long)param_1 + 0x5f) = uVar5;
        return param_1;
      }
      _ZN7uu_join15parse_separator17h5b003db6eeb89267E
                (&local_118,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      lVar2 = local_108;
      lVar3 = lStack_110;
      lVar6 = local_118;
      if (local_118 != -0x7ffffffffffffffc) {
                    /* try { // try from 001c4283 to 001c428c has its CatchHandler @ 001c45be */
        _ZN4core3ptr40drop_in_place_LT_uu_join__SepSetting_GT_17hb29d894c63f79bf0E(&local_148);
        local_148 = lVar6;
        lStack_140 = lVar3;
        local_138 = lVar2;
        goto LAB_001c429c;
      }
      param_1[1] = lStack_110;
      param_1[2] = local_108;
      goto LAB_001c4206;
    }
  }
  param_1[1] = local_118;
  param_1[2] = lStack_110;
LAB_001c4206:
  *param_1 = -0x8000000000000000;
LAB_001c4209:
  _ZN4core3ptr38drop_in_place_LT_uu_join__Settings_GT_17ha475b1587517e294E(&local_178);
  return param_1;
}