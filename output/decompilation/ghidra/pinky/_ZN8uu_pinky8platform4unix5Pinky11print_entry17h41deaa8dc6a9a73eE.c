undefined8
_ZN8uu_pinky8platform4unix5Pinky11print_entry17h41deaa8dc6a9a73eE(long param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 **local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 **local_1a8;
  code *pcStack_1a0;
  undefined ***local_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_f4;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf329c2e59eb871a4E
            (&local_60,&DAT_00118b9c,4);
                    /* try { // try from 00162e90 to 00162e9d has its CatchHandler @ 00163595 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_001ffee0)
            (&local_1a8,param_2);
                    /* try { // try from 00162ea8 to 00162eb4 has its CatchHandler @ 00163579 */
  _ZN3std4path7PathBuf4push17had6f445dae3e5da7E(&local_60,pcStack_1a0,local_198);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_1a8);
                    /* try { // try from 00162ecf to 00162f29 has its CatchHandler @ 00163595 */
  _ZN3std2fs8metadata17heb058fef4c2aae1aE(&local_1a8,local_58,local_50);
  if (local_1a8 == (undefined8 **)0x2) {
    local_f4 = 0x3f;
    lVar4 = 0;
  }
  else {
    local_f4 = 0x20;
    lVar4 = lStack_140;
    if ((uStack_170 & 0x10) == 0) {
      local_f4 = 0x2a;
    }
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h17b85d6b1e25795cE
            (local_1a8,pcStack_1a0);
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx4user17h7da4603721cbda8fE_001ffee8)
            (&local_1c0,param_2);
  uStack_e0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_d8 = (undefined ***)0x0;
  uStack_d0 = CONCAT62(uStack_d0._2_6_,0x20);
  local_1a8 = (undefined8 **)&DAT_00119240;
  pcStack_1a0 = (code *)0x1;
  puStack_188 = &DAT_0011a668;
  local_180 = 1;
  local_198 = (undefined ***)&local_e8;
  pcStack_190 = (code *)0x2;
                    /* try { // try from 00162f97 to 00162fa4 has its CatchHandler @ 0016356f */
  local_e8 = (undefined **)&local_1c0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_1c0);
  if (*(char *)(param_1 + 0x1a) != '\0') {
                    /* try { // try from 00162fba to 00162fc7 has its CatchHandler @ 00163595 */
    (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx4user17h7da4603721cbda8fE_001ffee8)
              (&local_1c0,param_2);
                    /* try { // try from 00162fd2 to 00163002 has its CatchHandler @ 00163559 */
    (*(code *)
      PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_001ffef8
    )(&local_e8,local_1b8,local_1b0);
    local_138 = local_78;
    uStack_130 = uStack_70;
    local_148 = local_88;
    lStack_140 = lStack_80;
    local_158 = local_98;
    uStack_150 = uStack_90;
    local_168 = local_a8;
    uStack_160 = uStack_a0;
    local_178 = local_b8;
    uStack_174 = uStack_b4;
    uStack_170 = uStack_b0;
    uStack_16c = uStack_ac;
    local_198 = local_d8;
    pcStack_190 = (code *)uStack_d0;
    local_1a8 = (undefined8 **)local_e8;
    pcStack_1a0 = uStack_e0;
                    /* try { // try from 001630e9 to 001630fa has its CatchHandler @ 00163541 */
    local_f0 = lVar4;
    _ZN8uu_pinky8platform4unix17gecos_to_fullname17hc5cc590c8c5acc48E(&local_48,&local_1a8);
    _ZN4core3ptr54drop_in_place_LT_uucore__features__entries__Passwd_GT_17h6a9a4c57811c6eebE
              (&local_1a8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_1c0);
    if (CONCAT44(uStack_44,local_48) == -0x8000000000000000) {
      local_e8 = &PTR_s_____001f8f80;
      uStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2da38598e58e6190E;
      local_1a8 = (undefined8 **)&PTR_s__001f8f60;
      pcStack_1a0 = (code *)0x1;
      puStack_188 = &DAT_0011a6a8;
      local_180 = 1;
      pcStack_190 = (code *)0x1;
                    /* try { // try from 0016317c to 00163186 has its CatchHandler @ 00163557 */
      local_198 = (undefined ***)&local_e8;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
      lVar4 = local_f0;
    }
    else {
      local_d8 = (undefined ***)local_38;
      local_e8 = (undefined **)CONCAT44(uStack_44,local_48);
      uStack_e0 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_1b8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1a8 = (undefined8 **)&PTR_s__001f8f60;
      pcStack_1a0 = (code *)0x1;
      puStack_188 = &DAT_0011a6d8;
      local_180 = 1;
      pcStack_190 = (code *)0x1;
                    /* try { // try from 00163204 to 0016320e has its CatchHandler @ 0016353f */
      local_1c0 = (undefined8 **)&local_e8;
      local_198 = (undefined ***)&local_1c0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
      lVar4 = local_f0;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_e8);
    }
  }
                    /* try { // try from 0016322b to 0016323b has its CatchHandler @ 00163595 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_001ffee0)
            (&local_1c0,param_2);
  local_1a8 = (undefined8 **)&local_f4;
  pcStack_1a0 = (code *)
                PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_001fff00
  ;
  pcStack_190 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  puStack_188 = (undefined *)0x0;
  local_180 = CONCAT62(local_180._2_6_,0x20);
  local_e8 = &PTR_s__001f8f90;
  uStack_e0 = (code *)0x2;
  local_c8 = &DAT_0011a708;
  uStack_c0 = 2;
  uStack_d0 = 3;
                    /* try { // try from 001632b9 to 001632c9 has its CatchHandler @ 00163565 */
  local_198 = (undefined ***)&local_1c0;
  local_d8 = (undefined ***)&local_1a8;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_e8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_1c0);
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (lVar4 == 0) {
      local_e8 = &PTR_s_______001f8fb0;
      uStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2da38598e58e6190E;
      local_1a8 = (undefined8 **)&PTR_s__001f8f60;
      pcStack_1a0 = (code *)&DAT_00000001;
      puStack_188 = &DAT_0011a770;
      local_180 = 1;
      pcStack_190 = (code *)0x1;
                    /* try { // try from 001633ac to 001633c9 has its CatchHandler @ 00163595 */
      local_198 = (undefined ***)&local_e8;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
    }
    else {
                    /* try { // try from 001632e7 to 001632f9 has its CatchHandler @ 00163595 */
      _ZN8uu_pinky8platform4unix11idle_string17h2a0abac9e7d11a58E(&local_e8,lVar4);
      local_1b8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1a8 = (undefined8 **)&PTR_s__001f8f60;
      pcStack_1a0 = (code *)&DAT_00000001;
      puStack_188 = &DAT_0011a770;
      local_180 = 1;
      pcStack_190 = (code *)0x1;
                    /* try { // try from 0016333c to 00163346 has its CatchHandler @ 00163555 */
      local_1c0 = (undefined8 **)&local_e8;
      local_198 = (undefined ***)&local_1c0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_e8);
    }
  }
  _ZN8uu_pinky8platform4unix11time_string17h69285d7cb2498297E(&local_e8,param_2);
  local_1b8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_1a8 = (undefined8 **)&PTR_s__001f8f60;
  pcStack_1a0 = (code *)0x1;
  puStack_188 = (undefined *)0x0;
  pcStack_190 = (code *)0x1;
                    /* try { // try from 00163400 to 0016340a has its CatchHandler @ 00163563 */
  local_1c0 = (undefined8 **)&local_e8;
  local_198 = (undefined ***)&local_1c0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_e8);
                    /* try { // try from 00163418 to 00163428 has its CatchHandler @ 00163595 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx4host17hfb1a95bf3e0888e1E_001fff08)
            (&local_e8,param_2);
  if ((*(char *)(param_1 + 0x1d) != '\0') && ((undefined8 ***)local_d8 != (undefined8 ***)0x0)) {
                    /* try { // try from 00163443 to 00163505 has its CatchHandler @ 00163583 */
    (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10canon_host17h6d7ae94323da986cE_001fff10)
              (&local_1a8,param_2);
    pppuVar3 = local_198;
    pcVar2 = pcStack_1a0;
    ppuVar1 = local_1a8;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_e8);
    local_e8 = (undefined **)ppuVar1;
    uStack_e0 = pcVar2;
    local_d8 = pppuVar3;
    local_1b8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_1a8 = (undefined8 **)&PTR_s__001f8f60;
    pcStack_1a0 = (code *)0x1;
    puStack_188 = (undefined *)0x0;
    pcStack_190 = (code *)0x1;
    local_1c0 = (undefined8 **)&local_e8;
    local_198 = (undefined ***)&local_1c0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
  }
  local_1a8 = (undefined8 **)&PTR_DAT_001f8f70;
  pcStack_1a0 = (code *)0x1;
  local_198 = (undefined ***)0x8;
  pcStack_190 = (code *)0x0;
  puStack_188 = (undefined *)0x0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_1a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_e8);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4cadf87e0dc5da61E(local_60,local_58);
  return 0;
}