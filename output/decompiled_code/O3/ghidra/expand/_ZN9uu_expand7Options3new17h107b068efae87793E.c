undefined8 * __rustcall uu_expand::Options::new(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined uVar7;
  undefined auVar8 [16];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined3 uStack_198;
  undefined4 uStack_195;
  undefined local_191;
  undefined7 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined uStack_158;
  undefined7 uStack_157;
  undefined uStack_150;
  undefined7 uStack_14f;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
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
            (&local_168,param_2,&anon_8ef6a1ea3e01f53eba5d37c90f199d8a_7_llvm_14401858094204479963,4
            );
  clap_builder::parser::error::MatchesError::unwrap
            (&local_e8,&anon_8ef6a1ea3e01f53eba5d37c90f199d8a_7_llvm_14401858094204479963,4,
             &local_168);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar6 = (undefined8 *)::alloc::alloc::Global::alloc_impl(8,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,8);
    }
    *puVar6 = 8;
    ::alloc::slice::hack::into_vec(&local_188,puVar6,1);
    uVar7 = 0;
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
              (local_100,&local_a8);
                    /* try { // try from 001b28dd to 001b28f1 has its CatchHandler @ 001b2c5b */
    ::alloc::str::join_generic_copy(&local_1c8,local_f8,local_f0,&DAT_0011d329,1);
    local_108 = local_1b8;
    local_118 = local_1c8;
    uStack_114 = uStack_1c4;
    uStack_110 = uStack_1c0;
    uStack_10c = uStack_1bc;
                    /* try { // try from 001b2913 to 001b291c has its CatchHandler @ 001b2c49 */
    tabstops_parse(&local_168,CONCAT44(uStack_1bc,uStack_1c0));
    local_1a8 = (undefined4)CONCAT43(uStack_160._4_4_,uStack_160._1_3_);
    uStack_1a4 = (undefined4)
                 (CONCAT17(uStack_158,CONCAT43(uStack_160._4_4_,uStack_160._1_3_)) >> 0x20);
    uStack_1a0._0_4_ = (undefined4)uStack_157;
    uVar1 = (undefined4)uStack_1a0;
    uStack_1a0._4_4_ = CONCAT13(uStack_150,(int3)((uint7)uStack_157 >> 0x20));
    uStack_198 = (undefined3)uStack_14f;
    uStack_195 = (undefined4)((uint7)uStack_14f >> 0x18);
    local_191 = (undefined)lStack_148;
    uStack_190 = (undefined7)((ulong)lStack_148 >> 8);
    if (local_168 != 0) {
      param_1[5] = local_140;
      param_1[6] = uStack_138;
      param_1[3] = CONCAT44(uStack_195,CONCAT31(uStack_198,uStack_150));
      param_1[4] = lStack_148;
      *(undefined4 *)((long)param_1 + 9) = local_1a8;
      *(undefined4 *)((long)param_1 + 0xd) = uStack_1a4;
      *(undefined4 *)((long)param_1 + 0x11) = (undefined4)uStack_1a0;
      *(undefined4 *)((long)param_1 + 0x15) = uStack_1a0._4_4_;
      *(undefined *)(param_1 + 1) = (undefined)uStack_160;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001b2972 to 001b297e has its CatchHandler @ 001b2c5b */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_100);
      return param_1;
    }
    uStack_1a0._0_3_ = (undefined3)uStack_157;
    local_188 = CONCAT31((undefined3)uStack_1a0,uStack_158);
    uStack_184 = (undefined4)((uint7)uStack_157 >> 0x18);
    uStack_180 = CONCAT31(uStack_198,uStack_150);
    uStack_17c = uStack_195;
    local_178 = lStack_148;
                    /* try { // try from 001b29db to 001b29e7 has its CatchHandler @ 001b2c5b */
    uStack_1a0._0_4_ = uVar1;
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_100);
    uVar7 = (undefined)uStack_160;
  }
  local_1b8 = local_178;
  local_1c8 = local_188;
  uStack_1c4 = uStack_184;
  uStack_1c0 = uStack_180;
  uStack_1bc = uStack_17c;
                    /* try { // try from 001b2a08 to 001b2a84 has its CatchHandler @ 001b2c7c */
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"initial",7);
  bVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"no-utf8",7);
  local_168 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_160 = local_168 + local_1b8 * 8;
  uStack_158 = 0;
  uStack_157 = 0;
  auVar8 = core::iter::traits::iterator::Iterator::reduce(&local_168);
  if (auVar8._0_8_ != 0) {
    ::alloc::str::_<impl_str>::repeat(&local_188,&DAT_0011d32a,1,auVar8._8_8_);
                    /* try { // try from 001b2a85 to 001b2b18 has its CatchHandler @ 001b2c6d */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_168,param_2,"FILES",5);
    clap_builder::parser::error::MatchesError::unwrap(&local_e8,"FILES",5,&local_168);
    if (CONCAT44(uStack_e4,local_e8) == 0) {
      puVar4 = (undefined4 *)::alloc::alloc::Global::alloc_impl(8,0x18);
      if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 001b2c2c to 001b2c3b has its CatchHandler @ 001b2c6d */
                    /* WARNING: Subroutine does not return */
        ::alloc::alloc::handle_alloc_error(8,0x18);
      }
                    /* try { // try from 001b2b33 to 001b2b4b has its CatchHandler @ 001b2c3c */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_168,&DAT_0011d32b,1);
      uStack_198 = (undefined3)CONCAT71(uStack_157,uStack_158);
      uStack_195 = (undefined4)((uint7)uStack_157 >> 0x10);
      local_191 = (undefined)((uint7)uStack_157 >> 0x30);
      local_1a8 = (undefined4)local_168;
      uStack_1a4 = local_168._4_4_;
      *(ulong *)(puVar4 + 4) = CONCAT71(uStack_157,uStack_158);
      *puVar4 = (undefined4)local_168;
      puVar4[1] = local_168._4_4_;
      *(long *)(puVar4 + 2) = uStack_160;
                    /* try { // try from 001b2b68 to 001b2b79 has its CatchHandler @ 001b2c6d */
      uStack_1a0 = uStack_160;
      ::alloc::slice::hack::into_vec(&local_1a8,puVar4,1);
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
                (&local_1a8,&local_68);
    }
    uStack_158 = (undefined)uStack_198;
    uStack_157 = (undefined7)(CONCAT17(local_191,CONCAT43(uStack_195,uStack_198)) >> 8);
    uStack_150 = (undefined)local_1c8;
    uStack_14f = (undefined7)(CONCAT44(uStack_1c4,local_1c8) >> 8);
    param_1[8] = local_178;
    param_1[6] = CONCAT44(uStack_184,local_188);
    param_1[7] = CONCAT44(uStack_17c,uStack_180);
    *param_1 = CONCAT44(uStack_1a4,local_1a8);
    param_1[1] = uStack_1a0;
    param_1[4] = CONCAT44(uStack_1bc,uStack_1c0);
    param_1[5] = local_1b8;
    param_1[2] = CONCAT71(uStack_157,uStack_158);
    param_1[3] = CONCAT71(uStack_14f,uStack_150);
    *(undefined *)(param_1 + 9) = uVar2;
    *(byte *)((long)param_1 + 0x49) = bVar3 ^ 1;
    *(undefined *)((long)param_1 + 0x4a) = uVar7;
    return param_1;
  }
                    /* try { // try from 001b2c0d to 001b2c19 has its CatchHandler @ 001b2c7c */
  uVar5 = core::option::unwrap_failed(&PTR_DAT_0021ec60);
                    /* catch() { ... } // from try @ 001b2b33 with catch @ 001b2c3c */
  _<alloc::boxed::Box<T,A>as_core::ops::drop::Drop>::drop(param_2);
  core::ptr::drop_in_place<alloc::string::String>(&local_188);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&local_1c8);
  puVar6 = (undefined8 *)_Unwind_Resume(uVar5);
  return puVar6;
}