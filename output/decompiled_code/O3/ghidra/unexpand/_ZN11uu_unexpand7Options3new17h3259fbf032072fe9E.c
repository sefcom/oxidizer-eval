undefined8 * __rustcall uu_unexpand::Options::new(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
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
  undefined4 uStack_70;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_198,param_2,&DAT_00114ba8,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_e8,&DAT_00114ba8,4,&local_198);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar6 = (undefined8 *)::alloc::alloc::Global::alloc_impl(8,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,8);
    }
    *puVar6 = 8;
    ::alloc::slice::hack::into_vec(&local_148,puVar6,1);
  }
  else {
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_88 = local_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1b8,&local_a8);
                    /* try { // try from 001b2992 to 001b29a8 has its CatchHandler @ 001b2ca3 */
    ::alloc::str::join_generic_copy(&local_198,CONCAT44(uStack_1ac,uStack_1b0),local_1a8,",",1);
    local_f8 = local_188;
    local_108 = (undefined4)local_198;
    uStack_104 = local_198._4_4_;
    uStack_100 = (undefined4)uStack_190;
    uStack_fc = uStack_190._4_4_;
                    /* try { // try from 001b29cb to 001b29d4 has its CatchHandler @ 001b2c91 */
    tabstops_parse(&local_198,uStack_190);
    local_128 = uStack_190;
    uVar1 = local_128;
    uStack_120 = local_188;
    uVar2 = uStack_120;
    local_118 = local_180;
    local_128._0_4_ = (undefined4)uStack_190;
    local_128._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
    uStack_120._0_4_ = (undefined4)local_188;
    uStack_120._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
    local_128 = uVar1;
    uStack_120 = uVar2;
    if (local_198 != 0) {
      param_1[3] = local_180;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 0xc) = local_128._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001b2a1c to 001b2a28 has its CatchHandler @ 001b2ca3 */
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_1b8);
      return param_1;
    }
    local_138 = local_180;
    local_148 = (undefined4)local_128;
    uStack_144 = local_128._4_4_;
    uStack_140 = (undefined4)uStack_120;
    uStack_13c = uStack_120._4_4_;
                    /* try { // try from 001b2a86 to 001b2a92 has its CatchHandler @ 001b2ca3 */
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_1b8);
  }
                    /* try { // try from 001b2a9b to 001b2b95 has its CatchHandler @ 001b2cb0 */
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"all",3);
  if ((cVar3 == '\0') &&
     (cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                        (param_2,&DAT_00114ba8,4), cVar3 == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"first-only",10);
    bVar4 = bVar4 ^ 1;
  }
  bVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"no-utf8",7);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_198,param_2,&DAT_00114c1c,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_e8,&DAT_00114c1c,4,&local_198);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar7 = (undefined4 *)::alloc::alloc::Global::alloc_impl(8,0x18);
    if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 001b2c74 to 001b2c83 has its CatchHandler @ 001b2cb0 */
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,0x18);
    }
                    /* try { // try from 001b2bb0 to 001b2bc8 has its CatchHandler @ 001b2c84 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_198,"-",1);
    local_1a8 = local_188;
    local_1b8 = (undefined4)local_198;
    uStack_1b4 = local_198._4_4_;
    uStack_1b0 = (undefined4)uStack_190;
    uStack_1ac = uStack_190._4_4_;
    *(undefined8 *)(puVar7 + 4) = local_188;
    *puVar7 = (undefined4)local_198;
    puVar7[1] = local_198._4_4_;
    puVar7[2] = (undefined4)uStack_190;
    puVar7[3] = uStack_190._4_4_;
                    /* try { // try from 001b2be4 to 001b2bf3 has its CatchHandler @ 001b2cb0 */
    ::alloc::slice::hack::into_vec(&local_1b8,puVar7,1);
  }
  else {
    local_38 = local_b8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    local_48 = local_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    local_58 = local_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    local_68 = local_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_1b8,&local_68);
  }
  *param_1 = CONCAT44(uStack_1b4,local_1b8);
  param_1[1] = CONCAT44(uStack_1ac,uStack_1b0);
  param_1[4] = CONCAT44(uStack_13c,uStack_140);
  param_1[5] = local_138;
  param_1[2] = local_1a8;
  param_1[3] = CONCAT44(uStack_144,local_148);
  *(byte *)(param_1 + 6) = bVar4;
  *(byte *)((long)param_1 + 0x31) = bVar5 ^ 1;
  return param_1;
}