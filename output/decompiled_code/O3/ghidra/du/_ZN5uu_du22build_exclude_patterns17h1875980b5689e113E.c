undefined8 * __rustcall uu_du::build_exclude_patterns(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 **local_268;
  code *local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined4 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined **local_1f8;
  code *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *local_188;
  undefined **local_178;
  code *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_118;
  undefined local_f8 [136];
  undefined local_70 [64];
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_f8,param_2,&DAT_0011cd3b,0xc);
  puVar4 = &DAT_0011cd3b;
  clap_builder::parser::error::MatchesError::unwrap(&local_2e8,&DAT_0011cd3b,0xc,local_f8);
  if (local_2e8 == (undefined **)0x0) {
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = SUB84(PTR_EMPTY_0028a010,0);
    uStack_164 = (undefined4)((ulong)PTR_EMPTY_0028a010 >> 0x20);
    uStack_160 = 0;
    uStack_15c = 0;
    local_170 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                ::default::EMPTY;
    local_140 = 0;
    local_178 = (undefined **)core::ops::function::FnOnce::call_once;
  }
  else {
    local_178 = local_2e8;
    local_170 = uStack_2e0;
    local_140 = local_2b0;
    puVar4 = local_2b8;
    local_158 = (undefined4)local_2c8;
    uStack_154 = local_2c8._4_4_;
    uStack_150 = uStack_2c0;
    uStack_14c = uStack_2bc;
    local_168 = (undefined4)local_2d8;
    uStack_164 = local_2d8._4_4_;
    uStack_160 = (undefined4)uStack_2d0;
    uStack_15c = uStack_2d0._4_4_;
  }
  local_138 = 0;
  local_118 = 0;
                    /* try { // try from 001f29f0 to 001f2a27 has its CatchHandler @ 001f2d15 */
  local_148 = puVar4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_f8,param_2,&DAT_0011cd47,7);
  puVar4 = &DAT_0011cd47;
  clap_builder::parser::error::MatchesError::unwrap(&local_2e8,&DAT_0011cd47,7,local_f8);
  if (local_2e8 == (undefined **)0x0) {
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1e8 = SUB84(PTR_EMPTY_0028a010,0);
    uStack_1e4 = (undefined4)((ulong)PTR_EMPTY_0028a010 >> 0x20);
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1f0 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                ::default::EMPTY;
    local_2b0 = 0;
    local_1f8 = (undefined **)core::ops::function::FnOnce::call_once;
  }
  else {
    local_1f8 = local_2e8;
    local_1f0 = uStack_2e0;
    puVar4 = local_2b8;
    local_1d8 = (undefined4)local_2c8;
    uStack_1d4 = local_2c8._4_4_;
    uStack_1d0 = uStack_2c0;
    uStack_1cc = uStack_2bc;
    local_1e8 = (undefined4)local_2d8;
    uStack_1e4 = local_2d8._4_4_;
    uStack_1e0 = (undefined4)uStack_2d0;
    uStack_1dc = uStack_2d0._4_4_;
  }
  local_2a0 = 0;
  uStack_298 = 8;
  local_290 = 0;
  local_2a8 = param_1;
  local_1c8 = puVar4;
  local_1c0 = local_2b0;
  core::iter::traits::iterator::Iterator::chain(local_f8,&local_1f8,&local_178);
  while( true ) {
                    /* try { // try from 001f2b00 to 001f2b27 has its CatchHandler @ 001f2d27 */
    core::iter::adapters::chain::and_then_or_clear(&local_2e8,local_70);
    core::option::Option<T>::or_else(&local_230,&local_2e8,local_f8);
    if (CONCAT44(uStack_22c,local_230) == -0x8000000000000000) {
                    /* try { // try from 001f2c2f to 001f2c3b has its CatchHandler @ 001f2d10 */
      core::ptr::
      drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>
                (local_f8);
      local_2a8[2] = local_290;
      *local_2a8 = local_2a0;
      local_2a8[1] = uStack_298;
      return local_2a8;
    }
    local_278 = local_220;
    local_288 = local_230;
    uStack_284 = uStack_22c;
    uStack_280 = uStack_228;
    uStack_27c = uStack_224;
                    /* try { // try from 001f2b50 to 001f2c21 has its CatchHandler @ 001f2d2c */
    cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_0011cd4e,7);
    if (cVar2 != '\0') {
      local_268 = &local_248;
      local_260 = _<&T_as_core::fmt::Debug>::fmt;
      local_2e8 = &PTR_DAT_00283fa0;
      uStack_2e0 = (code *)0x2;
      local_2c8 = 0;
      local_2d8 = &local_268;
      uStack_2d0 = 1;
      local_248 = &local_288;
      std::io::stdio::_print(&local_2e8);
    }
    uucore::parser::parse_glob::from_str(&local_2e8,CONCAT44(uStack_27c,uStack_280),local_278);
    if (local_2e8 == (undefined **)0x8000000000000000) break;
    local_188 = local_2b8;
    local_198 = (undefined4)local_2c8;
    uStack_194 = local_2c8._4_4_;
    uStack_190 = uStack_2c0;
    uStack_18c = uStack_2bc;
    local_1a8 = (undefined4)local_2d8;
    uStack_1a4 = local_2d8._4_4_;
    uStack_1a0 = (undefined4)uStack_2d0;
    uStack_19c = uStack_2d0._4_4_;
    local_1b8 = (undefined4)local_2e8;
    uStack_1b4 = local_2e8._4_4_;
    uStack_1b0 = (undefined4)uStack_2e0;
    uStack_1ac = uStack_2e0._4_4_;
    ::alloc::vec::Vec<T,A>::push(&local_2a0,&local_1b8);
                    /* try { // try from 001f2c22 to 001f2c29 has its CatchHandler @ 001f2d27 */
    core::ptr::drop_in_place<alloc::string::String>(&local_288);
  }
  local_208 = uStack_2d0;
  local_218 = (undefined4)uStack_2e0;
  uStack_214 = uStack_2e0._4_4_;
  uStack_210 = (undefined4)local_2d8;
  uStack_20c = local_2d8._4_4_;
                    /* try { // try from 001f2c71 to 001f2cbe has its CatchHandler @ 001f2d0e */
  _<T_as_alloc::string::ToString>::to_string(&local_248,&local_218);
  local_250 = local_238;
  local_260 = (code *)local_248;
  uStack_258 = uStack_240;
  uStack_254 = uStack_23c;
  local_268 = (undefined4 **)0x4;
  uVar3 = ::alloc::boxed::Box<T>::new(&local_268);
  puVar1 = local_2a8;
  local_2a8[1] = uVar3;
  local_2a8[2] = &PTR_drop_in_place<uu_du_DuError>_00283ff8;
  *local_2a8 = 0x8000000000000000;
                    /* try { // try from 001f2cd6 to 001f2cdf has its CatchHandler @ 001f2d0c */
  core::ptr::drop_in_place<alloc::string::String>(&local_288);
                    /* try { // try from 001f2ce0 to 001f2cec has its CatchHandler @ 001f2d10 */
  core::ptr::
  drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>
            (local_f8);
  core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&local_2a0);
  return puVar1;
}