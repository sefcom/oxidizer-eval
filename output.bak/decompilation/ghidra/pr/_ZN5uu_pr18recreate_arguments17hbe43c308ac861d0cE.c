undefined8 __rustcall uu_pr::recreate_arguments(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  undefined auVar3 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined local_150 [24];
  undefined *local_138;
  code *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [32];
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [32];
  undefined local_58 [32];
  undefined *local_38;
  
  regex::regex::string::Regex::new(&local_188,"^[-+]\\d+.*",10);
  core::result::Result<T,E>::unwrap(local_78,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091a0);
                    /* try { // try from 002c3ecf to 002c3ef6 has its CatchHandler @ 002c4153 */
  regex::regex::string::Regex::new(&local_188,"^[^-]\\d*$",9);
  core::result::Result<T,E>::unwrap(&local_f8,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091b8);
                    /* try { // try from 002c3ef7 to 002c3f22 has its CatchHandler @ 002c4141 */
  regex::regex::string::Regex::new(&local_188,"^-n\\s*$",7);
  core::result::Result<T,E>::unwrap(local_c0,&local_188,&PTR_s_src_uu_pr_src_pr_rs_004091d0);
                    /* try { // try from 002c3f23 to 002c3f32 has its CatchHandler @ 002c4120 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_150,param_2,param_3);
  uStack_180 = param_2 + param_3 * 0x18;
                    /* try { // try from 002c3f4b to 002c3fbe has its CatchHandler @ 002c4125 */
  local_188 = (undefined *)param_2;
  auVar3 = itertools::Itertools::find_position(&local_188,local_c0);
  if ((auVar3._8_8_ != 0) && (uVar1 = auVar3._0_8_ + 1, uVar1 < param_3)) {
    cVar2 = regex::regex::string::Regex::is_match_at
                      (local_f8,local_f0,*(undefined8 *)(param_2 + 8 + uVar1 * 0x18),
                       *(undefined8 *)(param_2 + 0x10 + uVar1 * 0x18));
    if (cVar2 == '\0') {
      ::alloc::vec::Vec<T,A>::remove(&local_128,local_150,uVar1,&PTR_s_src_uu_pr_src_pr_rs_004091e8)
      ;
                    /* try { // try from 002c3fbf to 002c3fcb has its CatchHandler @ 002c410f */
      _<uu_pr::NumberingMode_as_core::default::Default>::default(local_a0);
      local_138 = local_88;
      local_130 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
      local_188 = &DAT_00166c10;
      uStack_180 = 1;
      local_168 = 0;
      local_178 = &local_138;
      local_170 = 1;
                    /* try { // try from 002c4015 to 002c4021 has its CatchHandler @ 002c40fd */
      core::option::Option<T>::map_or_else(&local_110,&local_188);
                    /* try { // try from 002c4022 to 002c402e has its CatchHandler @ 002c40ee */
      core::ptr::drop_in_place<uu_pr::NumberingMode>(local_a0);
      local_d8 = local_110;
      uStack_d4 = uStack_10c;
      uStack_d0 = uStack_108;
      uStack_cc = uStack_104;
      local_c8 = local_100;
                    /* try { // try from 002c404c to 002c4060 has its CatchHandler @ 002c410f */
      ::alloc::vec::Vec<T,A>::insert(local_150,uVar1,&local_d8);
      local_178 = (undefined **)local_118;
      local_188 = (undefined *)CONCAT44(uStack_124,local_128);
      uStack_180 = CONCAT44(uStack_11c,uStack_120);
                    /* try { // try from 002c4078 to 002c4087 has its CatchHandler @ 002c40ec */
      ::alloc::vec::Vec<T,A>::insert(local_150,auVar3._0_8_ + 2,&local_188);
    }
  }
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_58,local_150)
  ;
  local_38 = local_78;
                    /* try { // try from 002c40a5 to 002c40af has its CatchHandler @ 002c411e */
  ::alloc::vec::in_place_collect::
  _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
            (param_1,local_58);
                    /* try { // try from 002c40b0 to 002c40bc has its CatchHandler @ 002c4141 */
  core::ptr::drop_in_place<regex::regex::string::Regex>(local_c0);
                    /* try { // try from 002c40bd to 002c40c9 has its CatchHandler @ 002c4153 */
  core::ptr::drop_in_place<regex::regex::string::Regex>(&local_f8);
  core::ptr::drop_in_place<regex::regex::string::Regex>(local_78);
  return param_1;
}