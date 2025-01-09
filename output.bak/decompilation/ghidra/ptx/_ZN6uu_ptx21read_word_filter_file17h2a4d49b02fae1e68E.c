void __rustcall
uu_ptx::read_word_filter_file
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_108);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap(param_3,param_4,&local_108);
  if (lVar1 == 0) {
    uVar2 = core::option::expect_failed
                      ("parsing options failed!",0x17,&PTR_s_src_uu_ptx_src_ptx_rs_003edb68);
                    /* catch() { ... } // from try @ 002b57e6 with catch @ 002b5926 */
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&local_78);
    _Unwind_Resume(uVar2);
    return;
  }
  _<alloc::string::String_as_core::clone::Clone>::clone(local_48,lVar1);
  std::fs::File::open(&local_108,local_48);
  if (local_108 == 0) {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_78,0x2000,uStack_104);
                    /* try { // try from 002b57e6 to 002b57ef has its CatchHandler @ 002b5926 */
    _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_108);
    local_d8 = CONCAT44(uStack_104,local_108);
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    local_b8 = local_e8;
    uStack_b0 = uStack_e0;
    local_c8 = local_f8;
    uStack_c0 = uStack_f0;
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    local_f8 = local_68;
    uStack_f0 = uStack_60;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
                    /* try { // try from 002b5860 to 002b58a9 has its CatchHandler @ 002b593e */
    while (_<std::io::Lines<B>as_core::iter::traits::iterator::Iterator>::next(&local_a8,&local_108)
          , local_a8 != -0x7fffffffffffffff) {
      if (local_a8 == -0x8000000000000000) {
        param_1[1] = local_a0;
        *param_1 = 0;
        core::ptr::
        drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>
                  (&local_108);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>
                  (&local_d8);
        return;
      }
      local_90 = local_a8;
      local_88 = local_a0;
      local_80 = local_98;
      hashbrown::map::HashMap<K,V,S,A>::insert(&local_d8,&local_90);
    }
    core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>
              (&local_108);
    param_1[4] = local_b8;
    param_1[5] = uStack_b0;
    param_1[2] = local_c8;
    param_1[3] = uStack_c0;
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
  }
  else {
    param_1[1] = CONCAT44(uStack_fc,uStack_100);
    *param_1 = 0;
  }
  return;
}