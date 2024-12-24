void __rustcall uu_join::parse_print_settings(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar4;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  code *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  code *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined local_b0 [64];
  undefined local_70 [64];
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(local_b0,param_2,"v",1);
  clap_builder::parser::error::MatchesError::unwrap(&local_f0,"v",1,local_b0);
  if (CONCAT44(uStack_ec,local_f0) == 0) {
    local_1b8 = core::ops::function::FnOnce::call_once;
    uStack_1b0 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                 ::default::EMPTY;
    local_1a8 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                ::default::EMPTY;
    uStack_1a0 = 0;
    uStack_190 = 0;
    uStack_180 = 0;
  }
  else {
    local_188 = local_c0;
    uStack_180 = uStack_b8;
    local_198 = local_d0;
    uStack_190 = uStack_c8;
    local_1a8 = local_e0;
    uStack_1a0 = uStack_d8;
    local_1b8 = (code *)CONCAT44(uStack_ec,local_f0);
    uStack_1b0 = (code *)CONCAT44(uStack_e4,uStack_e8);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(local_b0,param_2,"a",1);
  clap_builder::parser::error::MatchesError::unwrap(&local_130,"a",1,local_b0);
  if (CONCAT44(uStack_12c,local_130) == 0) {
    local_178 = core::ops::function::FnOnce::call_once;
    uStack_170 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                 ::default::EMPTY;
    local_168 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::default::Default>
                ::default::EMPTY;
    uStack_160 = 0;
    uStack_150 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = local_100;
    uStack_140 = uStack_f8;
    local_158 = local_110;
    uStack_150 = uStack_108;
    local_168 = local_120;
    uStack_160 = uStack_118;
    local_178 = (code *)CONCAT44(uStack_12c,local_130);
    uStack_170 = (code *)CONCAT44(uStack_124,uStack_128);
  }
  core::iter::traits::iterator::Iterator::chain(local_b0,&local_1b8,&local_178);
  uVar1 = core::iter::adapters::chain::and_then_or_clear(local_b0);
  lVar2 = core::option::Option<T>::or_else(uVar1,local_70);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      parse_file_number(&local_130,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      if (CONCAT44(uStack_12c,local_130) != 0) {
        *param_1 = CONCAT44(uStack_12c,local_130);
        param_1[1] = CONCAT44(uStack_124,uStack_128);
        return;
      }
      if ((char)uStack_128 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar4 = 1;
      }
      uVar1 = core::iter::adapters::chain::and_then_or_clear(local_b0);
      lVar2 = core::option::Option<T>::or_else(uVar1,local_70);
    } while (lVar2 != 0);
  }
  *(bool *)(param_1 + 1) = CONCAT44(uStack_ec,local_f0) == 0;
  *(undefined *)((long)param_1 + 9) = uVar3;
  *(undefined *)((long)param_1 + 10) = uVar4;
  *param_1 = 0;
  return;
}