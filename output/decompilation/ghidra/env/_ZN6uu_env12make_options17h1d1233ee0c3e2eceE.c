undefined8 * _ZN6uu_env12make_options17h1d1233ee0c3e2eceE(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined uVar6;
  byte bVar7;
  undefined8 unaff_RBP;
  undefined auVar8 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long lStack_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_150;
  undefined local_14f;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_140 = param_1;
  uVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00124583,0x12);
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"nullXCPU",4);
  uVar4 = 0;
  uVar6 = 10;
  if (cVar2 != '\0') {
    uVar6 = 0;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17haf87a3f80c6c6497E
            (&local_1e8,param_2,&DAT_001245b4,5);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h86a6ee1c01117d6cE
                    (&DAT_001245b4,5,&local_1e8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 8);
    unaff_RBP = *(undefined8 *)(lVar3 + 0x10);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfa98c77e26d8adfdE
            (&local_1e8,param_2,&DAT_00117680,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h53fc80eeac36efb0E
            (&local_268,&DAT_00117680,4,&local_1e8);
  if (CONCAT44(uStack_264,local_268) == 0) {
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h38052905bffb397aE(&local_1e8,0,0);
    if (local_1e8 != 0) {
      _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(lStack_1e0,local_1d8);
      goto LAB_001cec16;
    }
    local_218 = lStack_1e0;
    uStack_210 = local_1d8;
    local_208 = 0;
  }
  else {
    local_88 = (undefined4)local_238;
    uStack_84 = local_238._4_4_;
    uStack_80 = (undefined4)uStack_230;
    uStack_7c = uStack_230._4_4_;
    local_98 = (undefined4)local_248;
    uStack_94 = local_248._4_4_;
    uStack_90 = (undefined4)uStack_240;
    uStack_8c = uStack_240._4_4_;
    local_a8 = (undefined4)local_258;
    uStack_a4 = local_258._4_4_;
    uStack_a0 = (undefined4)uStack_250;
    uStack_9c = uStack_250._4_4_;
    local_b8 = local_268;
    uStack_b4 = uStack_264;
    uStack_b0 = uStack_260;
    uStack_ac = uStack_25c;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h94f0aac4391d9fccE
              (&local_218,&local_b8);
  }
                    /* try { // try from 001ce7a2 to 001ce83c has its CatchHandler @ 001cec33 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfa98c77e26d8adfdE
            (&local_1e8,param_2,&DAT_0012469b,5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h53fc80eeac36efb0E
            (&local_268,&DAT_0012469b,5,&local_1e8);
  if (CONCAT44(uStack_264,local_268) == 0) {
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h38052905bffb397aE(&local_1e8,0,0);
    if (local_1e8 != 0) {
LAB_001cec16:
                    /* try { // try from 001cec1e to 001cec23 has its CatchHandler @ 001cec33 */
      uVar4 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE();
                    /* catch() { ... } // from try @ 001ce875 with catch @ 001cec24 */
                    /* try { // try from 001cec27 to 001cec57 has its CatchHandler @ 001cec60 */
      _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17ha08a342b7aac8f8fE
                (&local_200);
      _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17ha08a342b7aac8f8fE
                (&local_218);
      puVar5 = (undefined8 *)_Unwind_Resume(uVar4);
      return puVar5;
    }
    local_200 = lStack_1e0;
    uStack_1f8 = local_1d8;
    local_1f0 = 0;
  }
  else {
    local_48 = (undefined4)local_238;
    uStack_44 = local_238._4_4_;
    uStack_40 = (undefined4)uStack_230;
    uStack_3c = uStack_230._4_4_;
    local_58 = (undefined4)local_248;
    uStack_54 = local_248._4_4_;
    uStack_50 = (undefined4)uStack_240;
    uStack_4c = uStack_240._4_4_;
    local_68 = (undefined4)local_258;
    uStack_64 = local_258._4_4_;
    uStack_60 = (undefined4)uStack_250;
    uStack_5c = uStack_250._4_4_;
    local_78 = local_268;
    uStack_74 = uStack_264;
    uStack_70 = uStack_260;
    uStack_6c = uStack_25c;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha4c9e82de2224bccE
              (&local_200,&local_78);
  }
                    /* try { // try from 001ce875 to 001ce8a9 has its CatchHandler @ 001cec24 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17haf87a3f80c6c6497E
            (&local_1e8,param_2,&DAT_00124765);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h86a6ee1c01117d6cE
                    (&DAT_00124765,5,&local_1e8);
  if (lVar3 == 0) {
    local_160 = 0;
    local_158 = 0;
  }
  else {
    local_160 = *(undefined8 *)(lVar3 + 8);
    local_158 = *(undefined8 *)(lVar3 + 0x10);
  }
  local_1d8 = local_208;
  local_1e8 = local_218;
  lStack_1e0 = uStack_210;
  local_1d0 = local_200;
  uStack_1c8 = uStack_1f8;
  local_1c0 = local_1f0;
  local_1b8 = 0;
  local_1b0 = 8;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 8;
  local_190 = 0;
  local_188 = 0;
  local_180 = 8;
  local_178 = 0;
                    /* try { // try from 001ce984 to 001ce9c2 has its CatchHandler @ 001cec42 */
  local_170 = uVar4;
  local_168 = unaff_RBP;
  local_150 = uVar1;
  local_14f = uVar6;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfa98c77e26d8adfdE
            (&local_268,param_2,&DAT_001247e7,0xd);
  puVar5 = local_140;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h53fc80eeac36efb0E
            (&local_138,&DAT_001247e7,0xd,&local_268);
  if (CONCAT44(uStack_134,local_138) == 0) {
LAB_001cea3f:
                    /* try { // try from 001cea3f to 001cea75 has its CatchHandler @ 001cec42 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfa98c77e26d8adfdE
              (&local_268,param_2,&DAT_00117600,4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h53fc80eeac36efb0E
              (&local_f8,&DAT_00117600,4,&local_268);
    if (CONCAT44(uStack_f4,local_f8) == 0) {
LAB_001cebb3:
      (*(code *)PTR_memcpy_0024d1c8)(puVar5,&local_1e8,0xa0);
      return puVar5;
    }
    local_108 = local_c8;
    uStack_100 = uStack_c0;
    local_118 = local_d8;
    uStack_110 = uStack_d0;
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_138 = local_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    bVar7 = 0;
    do {
      while( true ) {
                    /* try { // try from 001ceaed to 001ceb20 has its CatchHandler @ 001cec46 */
        lVar3 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h96be86b15d365bbeE
                          (&local_138);
        if (lVar3 == 0) goto LAB_001ceb39;
        cVar2 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                          (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (cVar2 != '\0') break;
        _ZN6uu_env20parse_name_value_opt17h8375689543212933E
                  (&local_268,&local_1e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (CONCAT44(uStack_264,local_268) != 0) {
          puVar5[1] = CONCAT44(uStack_264,local_268);
          puVar5[2] = CONCAT44(uStack_25c,uStack_260);
          goto LAB_001cebd8;
        }
        bVar7 = (byte)uStack_260;
        if ((uStack_260 & 1) != 0) goto LAB_001ceb39;
      }
      local_150 = 1;
    } while ((bVar7 & 1) == 0);
LAB_001ceb39:
    local_238 = local_108;
    uStack_230 = uStack_100;
    local_248 = local_118;
    uStack_240 = uStack_110;
    local_258 = local_128;
    uStack_250 = uStack_120;
    local_268 = local_138;
    uStack_264 = uStack_134;
    uStack_260 = uStack_130;
    uStack_25c = uStack_12c;
    do {
                    /* try { // try from 001ceb80 to 001ceb9c has its CatchHandler @ 001cec44 */
      lVar3 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h96be86b15d365bbeE
                        (&local_268);
      if (lVar3 == 0) goto LAB_001cebb3;
      lVar3 = _ZN6uu_env17parse_program_opt17h5dc288b3b7b61775E
                        (&local_1e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    } while (lVar3 == 0);
    puVar5[1] = lVar3;
    puVar5[2] = &
                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h3b457176c01c1195E_00248840
    ;
  }
  else {
    local_238 = local_108;
    uStack_230 = uStack_100;
    local_248 = local_118;
    uStack_240 = uStack_110;
    local_258 = local_128;
    uStack_250 = uStack_120;
    local_268 = local_138;
    uStack_264 = uStack_134;
    uStack_260 = uStack_130;
    uStack_25c = uStack_12c;
    do {
                    /* try { // try from 001cea10 to 001cea2c has its CatchHandler @ 001cec48 */
      lVar3 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h96be86b15d365bbeE
                        (&local_268);
      if (lVar3 == 0) goto LAB_001cea3f;
      auVar8 = _ZN6uu_env16parse_signal_opt17h51ec0e44148ee3e7E
                         (&local_1e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    } while (auVar8._0_8_ == 0);
    *(undefined (*) [16])(puVar5 + 1) = auVar8;
  }
LAB_001cebd8:
  *puVar5 = 0x8000000000000000;
  _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h82df1bb8fb18e06cE(&local_1e8);
  return puVar5;
}