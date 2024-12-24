undefined8 * __rustcall uu_ptx::get_config(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 *unaff_R15;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined3 local_90;
  undefined uStack_8d;
  undefined3 uStack_8c;
  undefined uStack_89;
  char local_88;
  undefined local_87;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *pcStack_30;
  char *local_28;
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b;
  undefined2 local_1a;
  
  _<uu_ptx::Config_as_core::default::Default>::default(&local_78);
                    /* try { // try from 002b5cbc to 002b5d4b has its CatchHandler @ 002b61a0 */
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_10_llvm_26549548904132577,0xb);
  if (cVar1 == '\0') {
    uStack_b0 = "GNU extensions";
    local_a8 = 0xe;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uVar4 = ::alloc::boxed::Box<T>::new(&local_b8);
LAB_002b5d4c:
    param_1[1] = uVar4;
    param_1[2] = &DAT_003ee4d0;
    *param_1 = 0x8000000000000000;
    core::ptr::drop_in_place<uu_ptx::Config>(&local_78);
    return param_1;
  }
  local_20 = local_20 & 0xffffff00;
  local_1b = 1;
  ::alloc::str::_<impl_alloc::borrow::ToOwned_for_str>::clone_into(&local_48);
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_15_llvm_26549548904132577,0xf);
  if (cVar1 != '\0') {
    uStack_b0 = &DAT_0015ed68;
    local_a8 = 2;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uVar4 = ::alloc::boxed::Box<T>::new(&local_b8);
    goto LAB_002b5d4c;
  }
                    /* try { // try from 002b5d82 to 002b5e57 has its CatchHandler @ 002b61a0 */
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_9_llvm_26549548904132577,0xe);
  local_20._0_2_ = CONCAT11(uVar2,(undefined)local_20);
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_23_llvm_26549548904132577,10);
  local_20._0_3_ = CONCAT12(uVar2,(undefined2)local_20);
  bVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_14_llvm_26549548904132577,0xf);
  local_20 = CONCAT13(bVar3 & local_20._3_1_ != '\0',(undefined3)local_20);
  local_1c = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_19_llvm_26549548904132577,0xb)
  ;
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,10);
  if (cVar1 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_b8,param_2,anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,10)
    ;
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      (anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,10,&local_b8)
    ;
    if (lVar5 == 0) {
      puVar7 = &DAT_003ee540;
      goto LAB_002b6160;
    }
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_b8,lVar5);
                    /* try { // try from 002b5e58 to 002b5e61 has its CatchHandler @ 002b6188 */
    core::ptr::drop_in_place<alloc::string::String>(&local_78);
    local_68 = local_a8;
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
  }
                    /* try { // try from 002b5e75 to 002b5ecd has its CatchHandler @ 002b61a0 */
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,0xf);
  if (cVar1 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_b8,param_2,anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,0xf
              );
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      (anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,0xf,&local_b8
                      );
    if (lVar5 == 0) {
      puVar7 = &DAT_003ee558;
      goto LAB_002b6160;
    }
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_b8,lVar5);
    unaff_R15 = &uStack_60;
                    /* try { // try from 002b5ed3 to 002b5eda has its CatchHandler @ 002b6172 */
    core::ptr::drop_in_place<alloc::string::String>(unaff_R15);
    uStack_50 = local_a8;
    uStack_60 = local_b8;
    uStack_5c = uStack_b4;
    uStack_58 = (undefined4)uStack_b0;
    uStack_54 = uStack_b0._4_4_;
  }
                    /* try { // try from 002b5eec to 002b6171 has its CatchHandler @ 002b61a0 */
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,&anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,5);
  if (cVar1 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_b8,param_2,&anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,5)
    ;
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      (&anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,5,&local_b8)
    ;
    if (lVar5 == 0) {
      puVar7 = &DAT_003ee570;
      goto LAB_002b6160;
    }
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
              (&local_88,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    pcStack_30 = local_80;
    if (local_88 != '\0') {
      core::ops::function::FnOnce::call_once(&local_b8,local_87);
      local_90 = (undefined3)((uint)local_b8 >> 8);
      uStack_8d = (undefined)uStack_b4;
      uStack_8c = (undefined3)((uint)uStack_b4 >> 8);
      pcStack_30 = uStack_b0;
      if ((char)local_b8 != '\x03') {
        uVar4 = ::alloc::boxed::Box<T>::new(&local_b8);
        goto LAB_002b5d4c;
      }
    }
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,&anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,8);
  if (cVar1 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_b8,param_2,&anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,8)
    ;
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      (&anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,8,&local_b8)
    ;
    if (lVar5 == 0) {
      puVar7 = &DAT_003ee588;
LAB_002b6160:
      uVar4 = core::option::expect_failed("parsing options failed",0x16,puVar7);
                    /* catch() { ... } // from try @ 002b5ed3 with catch @ 002b6172 */
      *(undefined8 *)(unaff_R15 + 4) = local_a8;
      *unaff_R15 = local_b8;
      unaff_R15[1] = uStack_b4;
      unaff_R15[2] = (undefined4)uStack_b0;
      unaff_R15[3] = uStack_b0._4_4_;
                    /* try { // try from 002b61a3 to 002b61ac has its CatchHandler @ 002b61b5 */
      core::ptr::drop_in_place<uu_ptx::Config>(&local_78);
      puVar6 = (undefined8 *)_Unwind_Resume(uVar4);
      return puVar6;
    }
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
              (&local_88,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    local_28 = local_80;
    if (local_88 != '\0') {
      core::ops::function::FnOnce::call_once(&local_b8,local_87);
      local_90 = (undefined3)((uint)local_b8 >> 8);
      uStack_8d = (undefined)uStack_b4;
      uStack_8c = (undefined3)((uint)uStack_b4 >> 8);
      local_28 = uStack_b0;
      if ((char)local_b8 != '\x03') {
        uVar4 = ::alloc::boxed::Box<T>::new(&local_b8);
        goto LAB_002b5d4c;
      }
    }
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_13_llvm_26549548904132577,0xb);
  if (cVar1 != '\0') {
    local_1b = 1;
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_2a006399170f7188a90d81ab0d3d1c41_16_llvm_26549548904132577,10);
  if (cVar1 != '\0') {
    local_1b = 2;
  }
  param_1[10] = local_28;
  *(uint *)(param_1 + 0xb) = local_20;
  *(undefined *)((long)param_1 + 0x5c) = local_1c;
  *(undefined *)((long)param_1 + 0x5d) = local_1b;
  *(undefined2 *)((long)param_1 + 0x5e) = local_1a;
  param_1[8] = local_38;
  param_1[9] = pcStack_30;
  param_1[6] = local_48;
  param_1[7] = uStack_40;
  param_1[4] = CONCAT44(uStack_54,uStack_58);
  param_1[5] = uStack_50;
  param_1[2] = local_68;
  param_1[3] = CONCAT44(uStack_5c,uStack_60);
  *param_1 = CONCAT44(uStack_74,local_78);
  param_1[1] = CONCAT44(uStack_6c,uStack_70);
  return param_1;
}