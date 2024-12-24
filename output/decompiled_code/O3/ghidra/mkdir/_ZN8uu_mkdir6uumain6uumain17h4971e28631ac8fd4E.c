undefined8 __rustcall uu_mkdir::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined *local_680;
  undefined8 local_678;
  long local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  undefined *local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined local_618 [16];
  undefined8 local_608;
  long local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined *local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 local_590;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  uucore::Args::collect_lossy(local_618,param_1,param_2);
                    /* try { // try from 0016a714 to 0016a74d has its CatchHandler @ 0016a9d6 */
  uVar1 = (*(code *)PTR_strip_minus_from_mode_00225710)(local_618);
  (*(code *)PTR_uu_app_00225718)(&local_5c8);
  clap_builder::builder::command::Command::after_help
            (&local_2f8,&local_5c8,
             "Each MODE is of the form \'[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+\'.",0x49);
  local_5b8 = (undefined *)local_608;
  clap_builder::builder::command::Command::try_get_matches_from(&local_600,&local_2f8,&local_5c8);
  if (local_600 == -0x8000000000000000) {
    uVar4 = (*(code *)PTR_from_00225720)();
  }
  else {
    local_640 = local_5d0;
    local_650 = local_5e0;
    uStack_64c = uStack_5dc;
    uStack_648 = uStack_5d8;
    uStack_644 = uStack_5d4;
    local_660 = local_5f0;
    uStack_65c = uStack_5ec;
    uStack_658 = uStack_5e8;
    uStack_654 = uStack_5e4;
    local_670 = local_600;
    local_668 = local_5f8;
                    /* try { // try from 0016a7e3 to 0016a8e0 has its CatchHandler @ 0016a9c7 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_5c8,&local_670,&DAT_00114530,4);
    clap_builder::parser::error::MatchesError::unwrap(&local_2f8,&DAT_00114530,4,&local_5c8);
    local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
    if (local_5c8 == (code *)0x0) {
      local_628 = 0;
      uStack_624 = 0;
      uStack_620 = 0;
      uStack_61c = 0;
      local_638 = PTR_EMPTY_00225728;
      uStack_630 = 0;
      local_680 = PTR_EMPTY_00225728;
      local_5c8 = core::ops::function::FnOnce::call_once;
      uVar4 = 0;
    }
    else {
      local_680 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
      local_638 = local_2e8;
      uStack_630 = uStack_2e0;
      local_628 = local_2d8;
      uStack_624 = uStack_2d4;
      uStack_620 = uStack_2d0;
      uStack_61c = uStack_2cc;
      local_678 = local_2c8;
      uVar4 = local_2c0;
    }
    uVar2 = (*(code *)PTR_get_flag_00225730)(&local_670,"verbose",7);
    uVar3 = (*(code *)PTR_get_flag_00225730)(&local_670,"parents",7);
    (*(code *)PTR_get_mode_00225738)(&local_2f8,&local_670,uVar1);
    if (CONCAT44(uStack_2f4,local_2f8) == -0x8000000000000000) {
      uStack_5c0 = local_680;
      local_5b8 = local_638;
      uStack_5b0 = uStack_630;
      local_5a8 = local_628;
      uStack_5a4 = uStack_624;
      uStack_5a0 = uStack_620;
      uStack_59c = uStack_61c;
      local_598 = local_678;
                    /* try { // try from 0016a936 to 0016a98b has its CatchHandler @ 0016a9b8 */
      local_590 = uVar4;
      uVar4 = (*(code *)PTR_exec_00225740)(&local_5c8,uVar3,uStack_2f0,uVar2);
    }
    else {
      local_5b8 = local_2e8;
      local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
      uStack_5c0 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
      uStack_5b0 = CONCAT44(uStack_5b0._4_4_,1);
      uVar4 = ::alloc::boxed::Box<T>::new(&local_5c8);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_670);
  }
  return uVar4;
}