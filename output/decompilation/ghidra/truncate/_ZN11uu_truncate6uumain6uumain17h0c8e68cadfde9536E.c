undefined  [16] __rustcall uu_truncate::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  long local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 local_62c;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  long local_610;
  undefined4 local_608;
  undefined8 local_5f4;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  long local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  long local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR_uu_app_00219c18)(&local_5c8);
  clap_builder::builder::command::Command::after_help(&local_2f8,&local_5c8,&DAT_00113c9f,0x27e);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_648,&local_2f8,param_1,param_2);
  if (local_648 == -0x8000000000000000) {
    uVar4 = uumain::___closure__(CONCAT44(uStack_63c,uStack_640));
    auVar8 = (*(code *)PTR_from_00219c20)(uVar4);
    return auVar8;
  }
  local_5f4 = local_62c;
  uStack_5e4 = uStack_61c;
  uStack_5e0 = uStack_618;
  uStack_5dc = uStack_614;
  local_610 = local_648;
  local_608 = uStack_640;
  uVar6 = *(undefined8 *)PTR_ARG_FILES_00219c28;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_00219c28 + 8);
                    /* try { // try from 001654f7 to 0016558a has its CatchHandler @ 001657d4 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_5c8,&local_610,uVar6,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_2f8,uVar6,uVar1,&local_5c8);
  if (local_2f8 == 0) {
    local_660 = 0;
    local_658 = 8;
    uStack_650 = 0;
  }
  else {
    local_598 = local_2c8;
    uStack_594 = uStack_2c4;
    uStack_590 = uStack_2c0;
    uStack_58c = uStack_2bc;
    local_5a8 = local_2d8;
    uStack_5a4 = uStack_2d4;
    uStack_5a0 = uStack_2d0;
    uStack_59c = uStack_2cc;
    local_5b8 = local_2e8;
    uStack_5b0 = uStack_2e0;
    uStack_5ac = uStack_2dc;
    local_5c8 = local_2f8;
    uStack_5c0 = (undefined4)uStack_2f0;
    uStack_5bc = uStack_2f0._4_4_;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_648,&local_5c8);
    local_658 = CONCAT44(uStack_63c,uStack_640);
    uStack_650 = CONCAT44(uStack_634,uStack_638);
    local_660 = local_648;
    if (uStack_650 != 0) {
                    /* try { // try from 001655b9 to 001656ae has its CatchHandler @ 001657c5 */
      uVar2 = (*(code *)PTR_get_flag_00219c38)
                        (&local_610,*(undefined8 *)PTR_IO_BLOCKS_00219c30,
                         *(undefined8 *)(PTR_IO_BLOCKS_00219c30 + 8));
      uVar3 = (*(code *)PTR_get_flag_00219c38)
                        (&local_610,*(undefined8 *)PTR_NO_CREATE_00219c40,
                         *(undefined8 *)(PTR_NO_CREATE_00219c40 + 8));
      uVar6 = *(undefined8 *)PTR_REFERENCE_00219c48;
      uVar1 = *(undefined8 *)(PTR_REFERENCE_00219c48 + 8);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_5c8,&local_610,uVar6,uVar1);
      lVar5 = clap_builder::parser::error::MatchesError::unwrap(uVar6,uVar1,&local_5c8);
      if (lVar5 == 0) {
        local_648 = -0x8000000000000000;
      }
      else {
        core::ops::function::FnOnce::call_once(&local_5c8,lVar5);
        uStack_638 = (undefined4)local_5b8;
        uStack_634 = (undefined4)((ulong)local_5b8 >> 0x20);
        local_648 = local_5c8;
        uStack_640 = uStack_5c0;
        uStack_63c = uStack_5bc;
      }
      uVar6 = *(undefined8 *)PTR_SIZE_00219c50;
      uVar1 = *(undefined8 *)(PTR_SIZE_00219c50 + 8);
                    /* try { // try from 001656d1 to 00165710 has its CatchHandler @ 001657b6 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_5c8,&local_610,uVar6,uVar1);
      lVar7 = clap_builder::parser::error::MatchesError::unwrap(uVar6,uVar1,&local_5c8);
      lVar5 = -0x8000000000000000;
      if (lVar7 != 0) {
        core::ops::function::FnOnce::call_once(&local_5c8,lVar7);
        local_5d8 = CONCAT44(uStack_5bc,uStack_5c0);
        uStack_5d0 = local_5b8;
        lVar5 = local_5c8;
      }
      local_2e8 = CONCAT44(uStack_634,uStack_638);
      uStack_2f0 = CONCAT44(uStack_63c,uStack_640);
      local_2f8 = local_648;
      uStack_5c0 = (undefined4)local_5d8;
      uStack_5bc = local_5d8._4_4_;
      local_5b8 = uStack_5d0;
                    /* try { // try from 00165765 to 00165781 has its CatchHandler @ 001657b4 */
      local_5c8 = lVar5;
      auVar8 = (*(code *)PTR_truncate_00219c58)
                         (uVar3,uVar2,&local_2f8,&local_5c8,local_658,uStack_650);
      goto LAB_00165788;
    }
  }
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2f8);
  local_5b8 = local_2e8;
  local_5c8 = local_2f8;
  uStack_5c0 = (undefined4)uStack_2f0;
  uStack_5bc = uStack_2f0._4_4_;
  uStack_5b0 = 1;
  uVar6 = ::alloc::boxed::Box<T>::new(&local_5c8);
  auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00213d00;
  auVar8._0_8_ = uVar6;
LAB_00165788:
                    /* try { // try from 00165788 to 00165791 has its CatchHandler @ 001657d4 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_660);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_610);
  return auVar8;
}