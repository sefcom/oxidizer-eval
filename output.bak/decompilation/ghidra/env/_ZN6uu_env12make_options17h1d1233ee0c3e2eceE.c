undefined8 * __rustcall uu_env::make_options(undefined8 *param_1,undefined8 param_2)

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
  uVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,&DAT_00124583,0x12);
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"nullXCPU",4);
  uVar4 = 0;
  uVar6 = 10;
  if (cVar2 != '\0') {
    uVar6 = 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1e8,param_2,&DAT_001245b4,5);
  lVar3 = clap_builder::parser::error::MatchesError::unwrap(&DAT_001245b4,5,&local_1e8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 8);
    unaff_RBP = *(undefined8 *)(lVar3 + 0x10);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_1e8,param_2,&DAT_00117680,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_268,&DAT_00117680,4,&local_1e8);
  if (CONCAT44(uStack_264,local_268) == 0) {
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1e8,0,0);
    if (local_1e8 != 0) {
      ::alloc::raw_vec::handle_error(lStack_1e0,local_1d8);
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
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_218,&local_b8);
  }
                    /* try { // try from 001ce7a2 to 001ce83c has its CatchHandler @ 001cec33 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_1e8,param_2,&DAT_0012469b,5);
  clap_builder::parser::error::MatchesError::unwrap(&local_268,&DAT_0012469b,5,&local_1e8);
  if (CONCAT44(uStack_264,local_268) == 0) {
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1e8,0,0);
    if (local_1e8 != 0) {
LAB_001cec16:
                    /* try { // try from 001cec1e to 001cec23 has its CatchHandler @ 001cec33 */
      uVar4 = ::alloc::raw_vec::handle_error();
                    /* catch() { ... } // from try @ 001ce875 with catch @ 001cec24 */
                    /* try { // try from 001cec27 to 001cec57 has its CatchHandler @ 001cec60 */
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_200);
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_218);
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
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_200,&local_78);
  }
                    /* try { // try from 001ce875 to 001ce8a9 has its CatchHandler @ 001cec24 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1e8,param_2,&DAT_00124765);
  lVar3 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00124765,5,&local_1e8);
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
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_268,param_2,&DAT_001247e7,0xd);
  puVar5 = local_140;
  clap_builder::parser::error::MatchesError::unwrap(&local_138,&DAT_001247e7,0xd,&local_268);
  if (CONCAT44(uStack_134,local_138) == 0) {
LAB_001cea3f:
                    /* try { // try from 001cea3f to 001cea75 has its CatchHandler @ 001cec42 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_268,param_2,&DAT_00117600,4);
    clap_builder::parser::error::MatchesError::unwrap(&local_f8,&DAT_00117600,4,&local_268);
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
        lVar3 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                ::next(&local_138);
        if (lVar3 == 0) goto LAB_001ceb39;
        cVar2 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                          (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (cVar2 != '\0') break;
        parse_name_value_opt
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
      lVar3 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
              ::next(&local_268);
      if (lVar3 == 0) goto LAB_001cebb3;
      lVar3 = parse_program_opt(&local_1e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10))
      ;
    } while (lVar3 == 0);
    puVar5[1] = lVar3;
    puVar5[2] = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00248840;
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
      lVar3 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
              ::next(&local_268);
      if (lVar3 == 0) goto LAB_001cea3f;
      auVar8 = parse_signal_opt(&local_1e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10))
      ;
    } while (auVar8._0_8_ == 0);
    *(undefined (*) [16])(puVar5 + 1) = auVar8;
  }
LAB_001cebd8:
  *puVar5 = 0x8000000000000000;
  core::ptr::drop_in_place<uu_env::Options>(&local_1e8);
  return puVar5;
}